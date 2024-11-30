//Implement Circular Queue using Doubly LL
#include <stdio.h>
#include <stdlib.h>

// Define the node structure for doubly linked list
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Define the queue structure using doubly linked list
struct CircularQueue {
    struct Node* front;
    struct Node* rear;
};

// Function to initialize the queue
void initQueue(struct CircularQueue* queue) {
    queue->front = queue->rear = NULL;
}

// Function to check if the queue is empty
int isEmpty(struct CircularQueue* queue) {
    return (queue->front == NULL);
}

// Function to enqueue an element into the queue
void enqueue(struct CircularQueue* queue, int value) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    newNode->data = value;
    newNode->next = newNode->prev = NULL;

    // If the queue is empty, set both front and rear to the new node
    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
        newNode->next = newNode->prev = newNode;  // Point to itself to make it circular
    } else {
        // Insert at the rear of the queue
        newNode->prev = queue->rear;
        newNode->next = queue->front;
        queue->rear->next = newNode;
        queue->front->prev = newNode;
        queue->rear = newNode;  // Update the rear pointer
    }

    printf("Enqueued: %d\n", value);
}

// Function to dequeue an element from the queue
int dequeue(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow: The queue is empty.\n");
        return -1;  // Return an invalid value to indicate error
    }

    struct Node* temp = queue->front;
    int value = temp->data;

    // If there's only one element in the queue
    if (queue->front == queue->rear) {
        queue->front = queue->rear = NULL;
    } else {
        // Move front to the next node
        queue->front = queue->front->next;
        queue->rear->next = queue->front;
        queue->front->prev = queue->rear;
    }

    // Free the memory of the dequeued node
    free(temp);
    printf("Dequeued: %d\n", value);
    return value;
}

// Function to peek the front element of the queue
int front(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return -1;  // Return an invalid value to indicate error
    }
    return queue->front->data;
}

// Function to peek the rear element of the queue
int rear(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return -1;  // Return an invalid value to indicate error
    }
    return queue->rear->data;
}

// Function to display the elements of the queue
void display(struct CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = queue->front;
    printf("Queue elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != queue->front);  // Continue until we circle back to the front
    printf("\n");
}

int main() {
    struct CircularQueue queue;
    initQueue(&queue);

    int choice, value;

    while (1) {
        printf("\nCircular Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Front\n");
        printf("4. Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
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
          
