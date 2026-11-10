
#include <stdio.h>
#include <stdlib.h>

// Structure for a node
struct Node
{
    int data;
    struct Node *next;
};

// Function to create linked list
struct Node* createList()
{
    struct Node *head, *second, *third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data
    head->data = 10;
    second->data = 20;
    third->data = 30;

    // Connect nodes
    head->next = second;
    second->next = third;
    third->next = NULL;

    return head;
}

// Function to insert at beginning
struct Node* insertbeg(struct Node *head, int value)
{
    struct Node *newnode;

    newnode = (struct Node*)malloc(sizeof(struct Node));

    if (newnode == NULL)
        return head;

    newnode->data = value;
    newnode->next = head;
    head = newnode;

    return head;
}

// Function to insert at a given index
struct Node* atindex(struct Node *head, int value, int index)
{
    struct Node *newnode, *temp;

    if (index < 0)
    {
        printf("Invalid index!");
        return head;
    }

    // If index is 0, insert at beginning
    if (index == 0)
    {
        return insertbeg(head, value);
    }

    temp = head;

    // Move to the previous node
    for (int i = 0; i < index - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid index!");
        return head;
    }

    newnode = (struct Node*)malloc(sizeof(struct Node));

    if (newnode == NULL)
        return head;

    newnode->data = value;

    // Connect new node
    newnode->next = temp->next;
    temp->next = newnode;

    return head;
}

// Function to insert at end
struct Node* insertend(struct Node *head, int value)
{
    struct Node *newnode, *temp;

    newnode = (struct Node*)malloc(sizeof(struct Node));

    if (newnode == NULL)
        return head;

    newnode->data = value;
    newnode->next = NULL;

    // If list is empty
    if (head == NULL)
    {
        return newnode;
    }

    temp = head;

    // Move to last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;

    return head;
}

// Function for traversal
void traverse(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }

    printf("NULL");
}

// Main function
int main()
{
    struct Node *head;
    int value, index;

    // Create linked list
    head = createList();

    printf("Original Linked List: ");
    traverse(head);

    // Insert at beginning
    head = insertbeg(head, 5);

    printf("\nAfter insert at beginning: ");
    traverse(head);

    // Insert at index
    printf("\n\nEnter value to insert: ");
    scanf("%d", &value);

    printf("Enter index: ");
    scanf("%d", &index);

    head = atindex(head, value, index);

    printf("After insert at index: ");
    traverse(head);

    // Insert at end
    printf("\n\nEnter value to insert at end: ");
    scanf("%d", &value);

    head = insertend(head, value);

    printf("After insert at end: ");
    traverse(head);

    // Free allocated memory
    while (head != NULL)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
