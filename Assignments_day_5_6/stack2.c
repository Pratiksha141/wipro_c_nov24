//Implement Queue using Singly LL
#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    int data;
    struct Node* next;
};

// Define the queue structure
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Function to initialize the queue
void initQueue(struct Queue* queue) {
    queue->front = queue->rear = NULL;
}

// Function to check if the queue is empty
int isEmpty(struct Queue* queue) {
    return (queue->front == NULL);
}

// Function to enqueue an element into the queue
void enqueue(struct Queue* queue, int value) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    // If the queue is empty, both front and rear are the new node
    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        // Otherwise, add the new node to the end of the queue and update the rear pointer
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    printf("Enqueued: %d\n", value);
}

// Function to dequeue an element from the queue
int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow: The queue is empty.\n");
        return -1;  // Return an invalid value to indicate error
    }

    // Get the front node
    struct Node* temp = queue->front;
    int value = temp->data;

    // Move the front pointer to the next node
    queue->front = queue->front->next;

    // If the front becomes NULL, update the rear to NULL as well
    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    // Free the memory of the dequeued node
    free(temp);

    printf("Dequeued: %d\n", value);
    return value;
}

// Function to peek the front element of the queue
int front(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return -1; // Return an invalid value to indicate error
    }
    return queue->front->data;
}

// Function to display the elements of the queue
void display(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = queue->front;
    printf("Queue elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Queue queue;
    initQueue(&queue);

    int choice, value;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Front\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(&queue, value);
                break;
            case 2:
                value = dequeue(&queue);
                if (value != -1) {
                    printf("Dequeued value: %d\n", value);
                }
                break;
            case 3:
                value = front(&queue);
                if (value != -1) {
                    printf("Front value: %d\n", value);
                }
                break;
            case 4:
                display(&queue);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
