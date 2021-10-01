#include <stdio.h>
#include <stdlib.h>

int *enqueue(int *, int*, int);
int *dequeue(int *, int*);
void display(int *, int);

int main(void)
{
    printf("\n---------- CIRCULAR QUEUE USING ARRAY ----------\n");
    printf("------------------------------------------------\n");

    printf(" Choose any of the following operations:\n");
    printf("  <1> To ENQUEUE element inside queue.\n");
    printf("  <2> To DEQUEUE element from the queue.\n");
    printf("  <3> To DISPLAY all the elements inside queue.\n");
    printf("  <0> To EXIT.\n\n");
    
    int *queue = NULL;
    int front = -1;

    int choice;
    printf(" Choice: ");
    while ( (scanf("%d", &choice)) && choice != 0 ) {
        switch (choice) {
            case 1:
            {
                int element;
                printf(" Enter the element to be queued: ");
                scanf("%d", &element);
                queue = enqueue(queue, &front, element);
                break;
            }

            case 2:
            {
                int popped;
                queue = dequeue(queue, &front);
                break;
            }

            case 3:
                display(queue, front);
                break;

            default:
                printf(" Invalid choice.\n");
                break;
        }
        printf("\n Choice: ");
    }
    
    free(queue);
    return 0;
}

int *enqueue(int *queue, int *front, int element)
{
    if ( queue == NULL ) *front = 0;

    int *my_queue = realloc(queue, (*front + 1) * sizeof(int));
    if (my_queue == NULL) {
        printf("\n !!! QUEUE OVERFLOW !!!\n");
        return queue;
    }

    for (int i = *front; i > 0; i--)
        my_queue[i] = my_queue[i - 1];

    (*front)++;
    my_queue[0] = element;
    return my_queue;
}

int *dequeue(int *queue, int *front)
{
    if ( queue == NULL ) {
        printf("\n !!! QUEUE UNDERFLOW !!!\n");
        return queue;
    }

    printf("\n Dequeued Element: %d\n", queue[--(*front)]);
    queue = realloc(queue, (*front) * sizeof(int));
    return queue;
}

void display(int *queue, int front)
{
    printf("\n Queue Content:");
    for ( int i = front - 1; i >= 0; i-- )
        printf(" %d,", queue[i]);
}
