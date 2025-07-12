#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;
Node *append(Node **r, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if ((*r) == NULL)
        (*r) = newNode;

    else
    {
        Node *temp = (*r);
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}
void display(Node *r)
{
    Node *temp = r;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void display_reverse(Node *r)
{
    while (r != NULL)
    {
        printf("%d ", r->data);
        r = r->next;
    }
}

void insertFirst(Node **r, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    if ((*r) == NULL)

        newNode->next = NULL;
    else
        newNode->next = (*r);
    (*r) = newNode;
}
void deletelast(Node **r)
{
    if ((*r)->next == NULL)
        (*r) = NULL;
    else
    {
        Node *temp = (*r);
        while (temp->next->next != NULL)
            temp = temp->next;
        temp->next = NULL;
    }
}
void deletefirst(Node **r)
{
    Node *del = (*r);
    (*r) = (*r)->next;
    del->next = NULL;
    free(del);
}
int search(Node *head, int key)
{
    while (head != NULL)
    {
        if (head->data == key)
            return 1;
        head = head->next;
    }
    return 0;
}
int count(Node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void insertAtPosition(Node *head, int Pos, int data)
{
    Node *NewNode = (Node *)malloc(sizeof(Node));
    Node *temp = head;
    NewNode->data = data;
    for (int i = 2; i < Pos; i++, temp = temp->next)
        NewNode->next = temp->next;
    temp->next = NewNode;
}

int main()
{
    int ch, data, Pos;
    Node *head = NULL;
    while (1)
    {
        printf("\n1 Append\n2 display\n3 insert first\n4 delete last\n5 delete first\n6 search\n7 delete \n8 insert at position\n9 delete by value\n10 exit\n enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter a data: ");
            scanf("%d", &data);
            append(&head, data);
            break;
        case 2:
            display(head);
            break;
        case 3:
            printf("Enter a data: ");
            scanf("%d", &data);
            insertFirst(&head, data);
            break;
        case 4:
            deletelast(&head);
            break;
        case 5:
            deletefirst(&head);
            break;
        case 6:
            printf("Enter a data to Search: ");
            scanf("%d", &data);
            if (search(head, data))
                printf(" found !!");
            else
                printf(" not found !!");
            break;
        case 7:
            printf("Count : %d", count(head));
            break;
        case 8:

            printf("enter a position :");
            scanf("%d", &Pos);
            printf("enter a data :");
            scanf("%d", &data);
            if (Pos == 1)
                insertFirst(&head, data);
            else if (Pos == count(head) + 1)
                append(&head, data);
            else if (Pos > 1 && Pos <= count(head))
                insertAtPosition(head, Pos, data);
            break;
            printf("invalid position");
        case 9:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
}
