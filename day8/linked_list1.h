typedef struct Node
{
    char data[32];
    struct Node *link;
} Node;

Node *addAtFront(Node *);
Node *addAtRear(Node *);
Node *deleteFromFront(Node *);
Node *deleteFromRear(Node *);
Node *addAtPosition(Node *, int);
Node *deleteFromPosition(Node *, int);
void displayList(const Node *);
void searchNode(const Node *, char str[]);
Node *createNode();
void deleteAllNodes(Node *);