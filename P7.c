#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

struct node
{
 int info;
 struct node *next;
};
struct node *start=NULL;

void create();
void insert_beg();
void insert_end();
void insert_btw();
void display();
void delete_beg();
void delete_end();
void delete_btw();

typedef struct node node1;

node1 *head_node, *first_node, *temp_node = 0, *prev_node, next_node;
int data;

int main() 
{
  int ch;
  printf("\n SINGLY LINKED LIST \n");
  printf("\n Menu \n ");
  printf("------\n");
  printf("1 : Create Linked List\n");
  printf("2 : Display Linked List\n");
  printf("3 : Insert into Begining of Linked List \n");
  printf("4 : Insert into End of Linked List \n");
  printf("5 : Insert in Between of Linked List \n");
  printf("6 : Delete from Begining of Linked List \n");
  printf("7 : Delete from End of Linked List \n");
  printf("8 : Delete in Between of Linked List \n");
  printf("9 : Exit \n");
  while(1)
  {  
   printf("\nEnter your Choice [1-9]:");
   scanf("%d", &ch);
   switch(ch) 
    {
      case 1:
             create();
             break;    
      case 2:
             display();
             break;      
      case 3:
             insert_beg();
             break;
      case 4:
             insert_end();
             break;
      case 5:
             insert_btw();
             break;                          
      case 6:
             delete_beg();
             break;
      case 7:
             delete_end();
             break;
      case 8:
             delete_btw();
             break;
      case 9:
             exit(0);       
      default:printf("Wrong Choice!!!");
    }
  }
  return 0;
}

void create()
{
 struct node *temp,*ptr;
 temp=(struct node *)malloc(sizeof(struct node));
 if(temp==NULL)
 {
  printf("\nOut of Memory Space!! ");
  exit(0);
 }
 printf("\nEnter Element: ");
 scanf("%d",&temp->info);
 temp->next=NULL;
 if(start==NULL)
 {
  start=temp;
 }
 else
 {
  ptr=start;
  while(ptr->next!=NULL)
  {
   ptr=ptr->next;
  }
  ptr->next=temp;
 }
}

void display()
{
 struct node *ptr;
 if(start==NULL)
 {
  printf("\nList is empty!! ");
  return;
 }
 else
 {
  ptr=start;
  printf("\nElements are:\n");
  while(ptr!=NULL)
  {
   printf(" %d\t",ptr->info );
   ptr=ptr->next ;
  }
 }
}

void insert_beg()
{
 struct node *temp;
 temp=(struct node *)malloc(sizeof(struct node));
 if(temp==NULL)
 {
  printf("\nOut of Memory Space!! ");
  return;
 }
 printf("\nEnter Element: ");
 scanf("%d",&temp->info);
 temp->next =NULL;
 if(start==NULL)
 {
  start=temp;
 }
 else
 {
  temp->next=start;
  start=temp;
 }
}

void insert_end()
{
 struct node *temp,*ptr;
 temp=(struct node *)malloc(sizeof(struct node));
 if(temp==NULL)
 {
  printf("\nOut of Memory Space!! ");
  return;
 }
 printf("\nEnter Element: ");
 scanf("%d",&temp->info );
 temp->next =NULL;
 if(start==NULL)
 {
  start=temp;
 }
 else
 {
  ptr=start;
  while(ptr->next !=NULL)
  {
   ptr=ptr->next ;
  }
  ptr->next =temp;
 }
}
 
void insert_btw()
{
 struct node *ptr,*temp;
 int i,pos;
 temp=(struct node *)malloc(sizeof(struct node));
 if(temp==NULL)
 {
  printf("\n Out of Memory Space!!");
  return;
 }
 printf("\nEnter the position for the new node to be inserted:");
 scanf("%d",&pos);
 printf("\nEnter Element: ");
 scanf("%d",&temp->info) ;
 temp->next=NULL;
 if(pos==0)
 {
  temp->next=start;
  start=temp;
 }
 else
 {
  for(i=0,ptr=start;i<pos-1;i++) 
  { 
   ptr=ptr->next;
   if(ptr==NULL)
   {
    printf("\nPosition not found!! ");
    return;
   }
  }
  temp->next =ptr->next ;
  ptr->next=temp;
 }
}

void delete_beg()
{
 struct node *ptr;
 if(ptr==NULL)
 {
  printf("\nList is Empty!! ");
  return;
 }
 else
 {
  ptr=start;
  start=start->next ;
  printf("\nThe deleted element is :%d \n",ptr->info);
  free(ptr);
 }
}

void delete_end()
{
 struct node *temp,*ptr;
 if(start==NULL)
 {
  printf("\nList is Empty!");
  exit(0);
 }
 else if(start->next ==NULL)
 {
  ptr=start;
  start=NULL;
  printf("\nThe deleted element is:%d \n",ptr->info);
  free(ptr);
 }
 else
 {
  ptr=start;
  while(ptr->next!=NULL)
  {
   temp=ptr;
   ptr=ptr->next;
  }
  temp->next=NULL;
  printf("\nThe deleted element is:%d \n",ptr->info);
  free(ptr);
 }
}

void delete_btw()
{
 int i,pos;
 struct node *temp,*ptr;
 if(start==NULL)
 {
  printf("\nThe List is Empty!!");
  exit(0);
 }
 else
 {
  printf("\nEnter the position of the node to be deleted:");
  scanf("%d",&pos);
  if(pos==0)
  {
   ptr=start;
   start=start->next ;
   printf("\nThe deleted element is:%d \n",ptr->info  );
   free(ptr);
  }
  else
  {
   ptr=start;
   for(i=0;i<pos;i++) 
   { 
    temp=ptr; ptr=ptr->next ;
    if(ptr==NULL)
    {
     printf("\nPosition not Found!!");
     return;
    }
   }
   temp->next =ptr->next ;
   printf("\nThe deleted element is:%d \n",ptr->info );
   free(ptr); 
  }
 }
}
