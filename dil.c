#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next, *pre;
} Node;

// Append at end
Node *append(Node **r, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = newNode->pre = NULL;

    if (*r == NULL) {
        *r = newNode;
    } else {
        Node *temp = *r;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->pre = temp;
    }
    return newNode;
}

// Display the list
void display(Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Insert at beginning
void insertFirst(Node **head, int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->pre = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->pre = newNode;

    *head = newNode;
}

// Delete first node
void deleteFirst(Node **head) {
    if (*head == NULL) return;
    Node *temp = *head;
    *head = (*head)->next;
    if (*head != NULL)
        (*head)->pre = NULL;
    free(temp);
}

// Delete last node
void deleteLast(Node **head) {
    if (*head == NULL) return;
    Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    if (temp->pre != NULL)
        temp->pre->next = NULL;
    else
        *head = NULL;
    free(temp);
}

// Search for a value
void search(Node *head, int key) {
    int pos = 1;
    while (head != NULL) {
        if (head->data == key) {
            printf("Found at position: %d\n", pos);
            return;
        }
        head = head->next;
        pos++;
    }
    printf("Not found\n");
}

// Delete by value
void deleteByValue(Node **head, int value) {
    Node *temp = *head;
    while (temp != NULL && temp->data != value)
        temp = temp->next;

    if (temp == NULL) {
        printf("Value not found\n");
        return;
    }

    if (temp->pre != NULL)
        temp->pre->next = temp->next;
    else
        *head = temp->next;

    if (temp->next != NULL)
        temp->next->pre = temp->pre;

    free(temp);
}

// Insert at position (1-based index)
void insertAtPos(Node **head, int pos, int data) {
    if (pos <= 1) {
        insertFirst(head, data);
        return;
    }

    Node *temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        append(head, data);
        return;
    }

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = temp->next;
    newNode->pre = temp;

    if (temp->next != NULL)
        temp->next->pre = newNode;

    temp->next = newNode;
}

// Delete at position
void deleteAtPos(Node **head, int pos) {
    if (*head == NULL) return;
    Node *temp = *head;

    for (int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    if (temp->pre != NULL)
        temp->pre->next = temp->next;
    else
        *head = temp->next;

    if (temp->next != NULL)
        temp->next->pre = temp->pre;

    free(temp);
}

// Main function
int main() {
    Node *head = NULL;
    int data, pos, ch, value;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Append\n2. Display\n3. Insert First\n4. Delete Last\n5. Delete First\n6. Search\n");
        printf("7. Delete at Position\n8. Insert at Position\n9. Delete by Value\n10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Enter data to append: ");
            scanf("%d", &data);
            append(&head, data);
            break;
        case 2:
            printf("List: ");
            display(head);
            break;
        case 3:
            printf("Enter data to insert at first: ");
            scanf("%d", &data);
            insertFirst(&head, data);
            break;
        case 4:
            deleteLast(&head);
            printf("Deleted last node.\n");
            break;
        case 5:
            deleteFirst(&head);
            printf("Deleted first node.\n");
            break;
        case 6:
            printf("Enter value to search: ");
            scanf("%d", &data);
            search(head, data);
            break;
        case 7:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            deleteAtPos(&head, pos);
            break;
        case 8:
            printf("Enter position and data: ");
            scanf("%d %d", &pos, &data);
            insertAtPos(&head, pos, data);
            break;
        case 9:
            printf("Enter value to delete: ");
            scanf("%d", &value);
            deleteByValue(&head, value);
            break;
        case 10:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
