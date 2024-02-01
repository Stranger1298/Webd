#include <stdio.h>
#define MAX 5

int enqueue(int queue[], int *front, int *rear);
int dequeue(int queue[], int *front, int *rear);
int display(int queue[], int front, int rear);
int peek(int queue[], int front, int rear);

int enqueue(int queue[], int *front, int *rear)
{
    int data = 0;
    if (*rear == -1 && *front == -1)
    {
        printf("Underflow\n");
    }
    else if (*rear == MAX - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        (*rear)++;
        queue[*rear] = data;
    }
    return 0;
}

int dequeue(int queue[], int *front, int *rear)
{
    if (*rear == -1 && *front == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("%d\n", queue[*front]);
        (*front)++;
    }
    return 0;
}

int display(int queue[], int front, int rear)
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else if (rear == MAX - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
    return 0;
}

int peek(int queue[], int front, int rear)
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow\n");
    }
    else if (rear == MAX - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("%d\n", queue[front]);
    }
    return 0;
}

int main()
{
    int queue[MAX];
    int rear = -1, front = -1, choice = 0, data = 0;

    printf("1.Enqueue\n");
    printf("2.Dequeue\n");
    printf("3.Display\n");
    printf("4.Peek\n");
    printf("Enter the choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        enqueue(queue, &front, &rear);
        break;
    case 2:
        dequeue(queue, &front, &rear);
        break;
    case 3:
        display(queue, front, rear);
        break;
    case 4:
        peek(queue, front, rear);
        break;
    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}
