#include <stdio.h>
#include <stdlib.h>

/*
    Structure of a node

    Each node contains two parts:
    1. data -> stores the value
    2. next -> stores the address of the next node
*/
struct Node
{
    int data;              // Stores the data/value
    struct Node *next;     // Pointer to the next node
};


/*
    Function to display/traverse the circular linked list

    'head' contains the address of the first node.
*/
void circularLinkedListTraversal(struct Node *head)
{
    // Create a pointer 'ptr' and make it point to the first node
    struct Node *ptr = head;

    // Check whether the linked list is empty
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;             // Exit the function
    }

    /*
        Use a do-while loop because we want to visit
        the first node at least once.

        In a circular linked list, the last node points
        back to the first node (head).
    */
    do
    {
        // Print the data stored in the current node
        printf("Element: %d\n", ptr->data);

        // Move ptr to the next node
        ptr = ptr->next;

    /*
        Continue until ptr reaches the first node again.

        This condition is important because there is
        no NULL at the end of a circular linked list.
    */
    } while (ptr != head);
}


int main()
{
    /*
        Three pointer variables are declared:

        head    -> points to the first node
        temp    -> points to the last/current node
        newNode -> points to the newly created node
    */

    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    // 'n' stores the number of elements
    // 'i' is used as a loop counter
    int n, i;


    // Ask the user for the number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);


    /*
        Loop runs 'n' times.

        For example, if n = 4,
        the loop will create 4 nodes.
    */
    for (i = 0; i < n; i++)
    {
        /*
            Allocate memory for one new node.

            malloc() dynamically allocates memory
            from the heap.

            sizeof(struct Node) gives the amount
            of memory required for one node.
        */
        newNode = (struct Node *)malloc(sizeof(struct Node));


        /*
            Ask the user to enter the value
            for the current node.
        */
        printf("Enter element %d: ", i + 1);
        scanf("%d", &newNode->data);


        /*
            Initially, make the new node point to NULL.

            We will change this pointer later when
            connecting the nodes.
        */
        newNode->next = NULL;


        /*
            Check whether this is the first node.

            If head == NULL, it means the list is
            currently empty.
        */
        if (head == NULL)
        {
            /*
                Since this is the first node:

                head points to the new node.
                temp also points to the new node.
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
            */
            temp->next = newNode;

            /*
                Move temp to the newly created node.

                Now temp points to the new last node.
            */
            temp = newNode;
        }
    }


    /*
        Make the linked list CIRCULAR.

        'temp' is pointing to the last node.

        We make the last node point back to
        the first node (head).
    */
    if (temp != NULL)
    {
        temp->next = head;
    }


    // Display a heading before printing the list
    printf("\nCircular Linked List:\n");


    /*
        Call the traversal function.

        'head' is passed so that the function
        knows where the list starts.
    */
    circularLinkedListTraversal(head);


    // End the program successfully
    return 0;
}
