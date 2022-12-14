#include<stdio.h>

void enqueue();
int isempty();
int isfull();
void display();
void dequeue();

int rear=-1;
int front=-1;
int queue[100],n,ch,x;

int main()
{
 printf("Enter the size of the queue: \n");
 scanf("%d",&n);
 int y;
 do
 {
  printf("\n CIRCULAR QUEUE MENU ");
  printf("\n-------- ");
  printf("\n 1. Insert Element to Circular Queue");
  printf("\n 2. Delete Element From Circular Queue");
  printf("\n 3. Display Element");  
  printf("\n\n Enter Your Choice[1-3]: ");
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
  scanf("%d",&y); 
 }while(y==1);
return 0; 
}

int isempty()
 {
  if(front==-1)
    return 1;
  else
     return 0;
 }

int isfull()
 {
   if((front==0 && rear==n-1) || (front==rear+1))
     return 1;
   else
     return 0;
 }
void enqueue()
{
 if(isfull())
 {
  printf("Queue is full");
  return ;
 }
 else
 {
  if(front==-1)
   front=0;
  printf("\n Enter the element to be inserted: ");
  scanf("%d",&x);
  rear=(rear+1)%n;
  queue[rear]=x;
  printf("\n Element inserted successfully\n");
 }
}  

void dequeue()
{
 if(isempty())
 {
  printf("Queue is empty");
  return;
 }
 else
 {
  x=queue[front];
  if(front==rear)
  {
   front=-1;
   rear=-1;
  }
  else
  {
   front=(front+1)%n;
  }
  printf("\n Element deleted is %d",x);
 }
}  

void display()
{
 int i;
 if (isempty())
   printf(" \n Empty Queue\n");
 else 
 {
  printf("\n The queue is: \n ");
  for (i = front; i != rear; i = (i + 1) % n) 
  {
   printf("%d", queue[i]);
   printf("\n");
  }
  printf("%d ", queue[i]);
 }
}
