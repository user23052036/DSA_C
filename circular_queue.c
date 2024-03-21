#include<stdio.h>
#define MAXSIZE 30
int c_queue[MAXSIZE],front=0,rear=-1;


void display();
void insert();
void delete1();
void main()
{
    int choice;
    do
    {
        printf("\n\n\n--------CIRCULAR QUEUE----------\n");
        printf("1.INSERT\n");
        printf("2.DELETE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n\n");

        printf("choose option:--->");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete1();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("enter a valid choice:--->");
        }
    }while(choice != 4);
}

void insert()
{
    if((rear+1)%MAXSIZE == front && rear != -1)
        printf("circular queue overflown\n");
    else
    {
        printf("Enter your number:--->");
        rear = (rear+1)%MAXSIZE;
        scanf("%d",&c_queue[rear]);
    }
}

void delete1()
{
    if(rear = -1)
        printf("circular queue empty\n");
    else
    {
        printf("%d is removed\n",c_queue[front]);

        if(front==rear)                            // as the delete function is completely empty 
        {                            // we bring back front and rear to the initial condition
            front=0;
            rear=-1;
        }
        else
            front = (front+1)%MAXSIZE;
    }
}

void display()
{
    if(rear = -1)
        printf("circular queue empty");
    else
    {
        printf("Following are the elements in circular queue:---> ");
        for(int i=front; i!=rear; i=(i+1)%MAXSIZE)
        {
            printf("%d ",c_queue[front]);
        }
        printf("%d ",c_queue[front]);
    }
    printf("\n");
}