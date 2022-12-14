#include<stdio.h>
void push();
int isempty();
int isfull();
void display();
void pop();
int peak();
int stack[50],n,i,top=-1,ch,data;
int main()
{
 int x;
 printf("\n Enter size of stack : ");
 scanf("%d",&n); 
 do
 {
  printf("\n\n MENU ");
  printf("\n-------- ");
  printf("\n 1. PUSH Element to Stack");
  printf("\n 2. POP Element From Stack");
  printf("\n 3. Display Element");
  printf("\n 4. Peak Element");
  printf("\n Enter Your Choice[1-4]: ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:push();
          break;
   case 2:pop();
          break;
   case 3:display();
          break;  
   case 4:peak();
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
  if(top==-1)
    return 1;
  else
     return 0;
  }

int isfull()
  {
   if(top==n-1)
     return 1;
   else
      return 0;
  }

void push()
{
 if(!isfull())
   {
    printf("\n\n Enter element to push \n");
    scanf("%d",&data);
    top=top+1;
    stack[top]=data;
    }
 else
   {
     printf("\n \nStack overflow \n\n");
    }
}
 
void display()
{
  if(top>-1)
     {
     printf("\n \n Elements of stack are: \n");
     for(i=top;i>-1;i--)
       {
         printf("%d \n",stack[i]);
       }
     }
   else
      {
        printf("\n Stack underflow \n");
       }
}
 
void pop()
{
 if(!isempty())
    {
     data=stack[top];
     top=top-1;
     printf("\n Popped element is %d  \n",data);
    }
  else
    {
     printf("\n Stack underflow \n");
     }
}

int peak()
{
  data=stack[top];
  printf("\n\nTop of stack is %d \n\n",data);
 }
 
 
 

