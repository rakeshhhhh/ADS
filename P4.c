#include<stdio.h>
#define MAX 50

void enqueue();
int isempty();
int isfull();
void display();
void dequeue();

int q[MAX],e,front=-1,rear=-1,ch;

int main()
{
 int x;
 do
 {
  printf("\n\n LINEAR QUEUE MENU ");
  printf("\n-------- ");
  printf("\n 1. Insert Element to Queue");
  printf("\n 2. Delete Element From Queue");
  printf("\n 3. Display Element");  
  printf("\n Enter Your Choice[1-3]: ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:enqueue();
          break;
   case 2:dequeue();
          break;
   case 3:display();
          break;            
   default:printf("\n WRONG CHOICE !!! \n");
  }
  printf("\n Do you Want to Continue ?: ");
  scanf("%d",&x); 
 }while(x==1);
return 0; 
}

int isempty()
 {
  if((front==-1)||(front>rear))
    return 1;
  else
     return 0;
  }

int isfull()
  {
   if((rear==MAX-1))
     return 1;
   else
      return 0;
  }
void enqueue()
{
 if(isfull())
  printf("\n Queue is full ");
 else
  {
   if(front==-1)
   front=0;
   printf("Inset the element in queue : ");
   scanf("%d", &e);
   rear=rear+1;
   q[rear]=e;
  } 
}  

void dequeue()
{
 if(isempty())
  printf("\n Queue is Empty "); 
 else
  { 
   printf("Element deleted from queue is : %d \n", q[front]);
   front = front + 1;
  }
}  

void display()
{
 int i;
 if(isempty())
 printf("Queue is empty \n");
 else
 {
  printf("Queue is : \n");
  for (i=front;i<=rear;i++)
  printf("%d \n",q[i]);
 }
}
