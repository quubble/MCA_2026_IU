#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;


void insert()
{
    int value, n, i;

    printf("How many elements do you want to insert? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        if (rear == SIZE - 1)
        {
            printf("Queue Overflow! Queue is full.\n");
            break;
        }

        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);

        if (front == -1 & rear ==-1)
        {
            front++;
            rear++;
            queue[rear] = value;
        }

        else{
            rear++;
            queue[rear] = value;
            }

        printf("%d inserted successfully.\n", value);
    }
}


void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow! Queue is empty.\n");
    }
    else
    {
        printf("%d deleted successfully.\n", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

int main(){
    insert();
    printf("\n");
    display();
    printf("\n");
    delete();
    printf("\n");
    display();
    return 0;
}