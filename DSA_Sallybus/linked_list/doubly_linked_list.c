#include <stdio.h>
#include <stdlib.h>

/*
    creates the list, and displays it in both forward and backward directions.
    
    Structure of a node in a doubly linked list.

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
    Function to display the linked list
    from first node to last node.
*/
void forwardTraversal(struct Node *head)
{
    struct Node *ptr = head;

    // Check if the list is empty
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    printf("\nForward Traversal:\n");

    /*
        Continue until ptr becomes NULL.

        In a doubly linked list, the last node's
        next pointer contains NULL.
    */
    while (ptr != NULL)
    {
        // Display the data of the current node
        printf("%d ", ptr->data);

        // Move to the next node
        ptr = ptr->next;
    }

    printf("\n");
}


/*
    Function to display the linked list
    from last node to first node.

    'head' is used to find the last node first.
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
        First move ptr to the last node.

        The last node has:
        next = NULL
    */
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    printf("\nBackward Traversal:\n");

    /*
        Now move backwards using the prev pointer.
    */
    while (ptr != NULL)
    {
        // Display the data of the current node
        printf("%d ", ptr->data);

        // Move to the previous node
        ptr = ptr->prev;
    }

    printf("\n");
}


int main()
{
    /*
        Three pointer variables are used:

        head    -> points to the first node
        temp    -> points to the current/last node
        newNode -> points to the newly created node
    */
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    int n, i;


    /*
        Ask the user for the number of nodes.
    */
    printf("Enter number of elements: ");
    scanf("%d", &n);


    /*
        Loop runs 'n' times.

        For example:
        If n = 4, four nodes will be created.
    */
    for (i = 0; i < n; i++)
    {
        /*
            Dynamically allocate memory for a new node.

            malloc() allocates memory from the heap.
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
            Initially set the new node's pointers to NULL.

            We will change these pointers when
            connecting the node to the list.
        */
        newNode->prev = NULL;
        newNode->next = NULL;


        /*
            Check whether this is the FIRST node.

            If head == NULL, the list is currently empty.
        */
        if (head == NULL)
        {
            /*
                Since this is the first node:

                head points to the new node.
                temp also points to the new node.

                The first node's prev remains NULL.
            */
            head = newNode;
            temp = newNode;
        }
        else
        {
            /*
                The list already contains nodes.

                Connect the current last node
                to the new node.

                temp -> newNode
            */
            temp->next = newNode;


            /*
                Connect the new node back to
                the previous node.

                newNode -> temp
            */
            newNode->prev = temp;


            /*
                Move temp to the newly created node.

                Now temp points to the last node.
            */
            temp = newNode;
        }
    }


    /*
        Display the list from first to last.
    */
    forwardTraversal(head);


    /*
        Display the list from last to first.
    */
    backwardTraversal(head);


    /*
        End the program successfully.
    */
    return 0;
}
