#include <stdio.h>
#include <stdlib.h>

/*
    Structure of a node in a doubly circular linked list.

    Each node contains 3 parts:

    1. prev -> stores the address of the previous node
    2. data -> stores the value
    3. next -> stores the address of the next node
*/
struct Node
{
    struct Node *prev;     // Pointer to the previous node
    int data;              // Stores the data/value
    struct Node *next;     // Pointer to the next node
};


/*
    Function to display the list in the
    forward direction.
*/
void forwardTraversal(struct Node *head)
{
    // Create a pointer and make it point to the first node
    struct Node *ptr = head;

    // Check if the list is empty
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("\nForward Traversal:\n");

    /*
        In a circular linked list, we cannot use:

            while (ptr != NULL)

        because there is no NULL at the end.

        Instead, we stop when ptr comes back
        to the first node (head).
    */
    do
    {
        // Print the data of the current node
        printf("%d ", ptr->data);

        // Move to the next node
        ptr = ptr->next;

    } while (ptr != head);

    printf("\n");
}


/*
    Function to display the list in the
    backward direction.
*/
void backwardTraversal(struct Node *head)
{
    struct Node *ptr = head;

    // Check if the list is empty
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    /*
        In a doubly circular linked list:

        head->prev points to the LAST node.

        Therefore, we can directly go to
        the last node using head->prev.
    */
    ptr = head->prev;

    printf("\nBackward Traversal:\n");

    /*
        Start from the last node and move
        backwards using the prev pointer.

        Stop when we reach the node before
        the last traversal's starting point,
        which is head->prev.
    */
    struct Node *last = ptr;

    do
    {
        // Print the data of the current node
        printf("%d ", ptr->data);

        // Move to the previous node
        ptr = ptr->prev;

    } while (ptr != last);

    printf("\n");
}


int main()
{
    /*
        Three pointer variables:

        head    -> points to the first node
        temp    -> points to the last/current node
        newNode -> points to the newly created node
    */
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    int n, i;


    /*
        Ask the user for the number of elements.
    */
    printf("Enter number of elements: ");
    scanf("%d", &n);


    /*
        Loop runs 'n' times.

        If n = 4, four nodes will be created.
    */
    for (i = 0; i < n; i++)
    {
        /*
            Allocate memory for a new node.

            malloc() dynamically allocates memory
            from the heap.
        */
        newNode = (struct Node *)malloc(sizeof(struct Node));


        /*
            Check whether memory allocation was successful.
        */
        if (newNode == NULL)
        {
            printf("Memory allocation failed.\n");
            return 1;
        }


        /*
            Ask the user to enter the data
            for the new node.
        */
        printf("Enter element %d: ", i + 1);
        scanf("%d", &newNode->data);


        /*
            If this is the FIRST node:

            The node points to itself in both directions.

                newNode->next = newNode
                newNode->prev = newNode

            This makes a single-node circular list.
        */
        if (head == NULL)
        {
            head = newNode;

            newNode->next = newNode;
            newNode->prev = newNode;

            temp = newNode;
        }
        else
        {
            /*
                We already have nodes.

                temp is pointing to the last node.

                Connect the new node after temp.
            */

            // New node's previous node is temp
            newNode->prev = temp;

            /*
                New node's next should point to head
                because this is a circular list.
            */
            newNode->next = head;

            /*
                The old last node should point
                forward to the new node.
            */
            temp->next = newNode;

            /*
                The first node should point backward
                to the new last node.
            */
            head->prev = newNode;

            /*
                Move temp to the newly created node.

                Now temp is the last node.
            */
            temp = newNode;
        }
    }


    /*
        Display the list from first node
        to last node.
    */
    forwardTraversal(head);


    /*
        Display the list from last node
        to first node.
    */
    backwardTraversal(head);


    /*
        End the program successfully.
    */
    return 0;
}
