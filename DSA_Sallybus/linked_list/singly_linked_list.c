//accept the number of elements and each element from the user

#include <stdio.h>
#include <stdlib.h>

//structure defined
struct Node
{
    int data;
    struct Node *next;
};

//function to print linked list elements
void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//Main function
int main()
{
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;
    int n, i;

  //accepting number of elements from user
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        //dynamic memory allocation in the heap
        newNode = (struct Node *)malloc(sizeof(struct Node));

        //Entering each element of the linked list
        printf("Enter element %d: ", i + 1);
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    //displaying the list
    printf("\nLinked List:\n");
    linkedListTraversal(head);

    return 0;
}
