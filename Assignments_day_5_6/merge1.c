//Merge 2 Sorted Singly LL (Merged List must also be sorted)
#include <stdio.h>
#include <stdlib.h>

// Define the node structure for singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to reverse the linked list using a loop
struct Node* reverseList(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;      // Save next node
        current->next = prev;      // Reverse current node's pointer
        prev = current;            // Move prev and current one step forward
        current = next;
    }

    return prev;  // New head of the reversed list
}

int main() {
    // Create a sample linked list: 1 -> 2 -> 3 -> 4 -> NULL
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);

    printf("Original Linked List:\n");
    printList(head);

    // Reverse the linked list using a loop
    head = reverseList(head);

    printf("Reversed Linked List:\n");
    printList(head);

    return 0;
}
