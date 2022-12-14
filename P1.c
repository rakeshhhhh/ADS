#include<stdio.h>
void insert(int[],int);
void search(int[],int);
void delete(int[],int);
void display(int[],int);
int main()
{
 int a[20],n,i,ch,x;
 printf("\n Create an Array Of limit  : \n");
 scanf("%d",&n);
 printf("\n Enter Elements of an Array : \n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]); 
 }
 printf("\n Elements of an Array Are : \n");
 for(i=0;i<n;i++)
 {
  printf("%d \n",a[i]); 
 }
 do
 {
  printf("\n MENU ");
  printf("\n-------- ");
  printf("\n 1. Insert Element");
  printf("\n 2. Search Element");
  printf("\n 3. Delete Element");
  printf("\n 4. Display Element");
  printf("\n Enter Your Choice[1-4]: ");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:insert(a,n);
          break;
   case 2:search(a,n);
          break;
   case 3:delete(a,n);
          break;        
   case 4:display(a,n);
          break;
   default:printf("\n WRONG CHOICE !!! \n");
  }
  printf("\n Do you Want to Continue ?: ");
  scanf("%d",&x); 
 }while(x==1);
return 0; 
}

void insert(int ar[], int l)
{int e,pos,i;
 printf("\n Enter Element To be Inserted  : \n");
 scanf("%d",&e);
 printf("\n Enter the Position: \n");
 scanf("%d",&pos);
 if(pos==ar[l]-1)
 printf("Can't Insert !! Overflow");
 else
 for(i=l-1;i>=pos;i--)
 {
  ar[i+1]=ar[i];
 }
 ar[pos]=e;
 l=l+1;
 printf("\n Array After Insertion Are : \n");
 for(i=0;i<l;i++)
 {
  printf("%d \n",ar[i]); 
 }
}

void search(int ar[], int l)
{
 int e,i,flag=0;
 printf("\n Enter the element to searched : ");
 printf("\n");
 scanf("%d",&e);
 for(i=0;i<l;i++)
 {
  if(ar[i]==e)
  {
   printf("\n");
   printf("Element %d found at %dth position",e,i+1);
   flag=1;
   break;
  }
 }
 if(flag==0)
 {
 printf("Element  Missing ");
 }
}

void delete(int ar[],int l)
{
  int i,pos; 
  printf("\n Enter the location where you wish to delete element: ");
  printf("\n");
  scanf("%d",&pos);
  if (pos>=l+1)    
    printf("\n Deletion not possible.\n");
  else
   {    
    for(i=pos-1;i<l-1;i++ ) 
      ar[i]=ar[i+1];        
        
    printf("Resultant array is\n");
    for( i=0;i<l-1;i++ )        
      printf("%d \n",ar[i]);       
    }    
}

void display(int ar[],int l)
{ 
 int i;
 printf("\n Elements of an Array Are : \n");
 for(i=0;i<l-1;i++)
 {
  printf("%d \n",ar[i]);
 }
} 
 
