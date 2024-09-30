#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append(Node** head_ref, int new_data) {
            Node* newNode = createNode(new_data);
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }
    Node* last = *head_ref;
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;
    return;
}

void printList(Node* node) {
    while (node != NULL) {
        printf(" %d ", node->data);
        node = node->next;
    }
}

int main() {
    Node* head = NULL;
    append(&head, 7);
    append(&head, 1);
    append(&head, 3);
    append(&head, 9);
    append(&head, 5);
    printList(head);
    return 0;
}   