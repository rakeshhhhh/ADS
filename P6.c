#include <stdio.h>

void input();
void output();
void unionn();
void intersection();
void difference();

int u[]={1,2,3,4,5,6,7,8,9};
int a[]={0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0} ;

int main()
{
 int ch,y;
 do
 {
  printf("\n M E N U ");
  printf("\n--------- ");
  printf("\n 1.Input\n 2.Union\n 3.Intersection\n 4.Difference\n");
  printf("Enter Your  Choice[1-4]\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:input();
          break;
   case 2:unionn();
          break;
   case 3:intersection();
          break;
   case 4:difference();
          break;
   default:printf("Wrong input");
  } 
  printf("\nDo you Want to Continue ?: ");
  scanf("%d",&y); 
 }while(y==1);
 return 0;
} 
  

void input()
{ int n,x,i;
  printf("\n Universal Set is:\n");
  for(i=0;i<9;i++)
   { 
    printf("%d ",u[i]);
   }
  printf("\n Enter size of the 1st set:\n");
  scanf("%d",&n);
   printf("\n Enter elements:\n");
  for(i=0;i<n;i++)
  { scanf("%d",&x);
      a[x-1]=1;
  }
  printf("\n Enter size of the 2nd set:\n");
  scanf("%d",&n);
  printf("\n Enter Elements:\n");
  for(i=0;i<n;i++)
  { scanf("%d",&x);
      b[x-1]=1;
  }
  printf("\n 1st set:\n");
  for(i=0;i<9;i++)
   { printf("%d ",a[i]);
   }
  printf("\n 2nd set:\n");
  for(i=0;i<9;i++)
   { printf("%d ",b[i]);
   }
}

void output(int c[])
{ 
  int i;
  printf("\n Set is:");
  for(i=0;i<9;i++)
  {
   if (c[i]!=0)
   printf(" %d ",i+1);
  }
}

void unionn()
{ int i,c[10];
    for(i=0;i<9;i++)
    { if (a[i]!=b[i])
         c[i]=1;
      else c[i]=a[i];
    }
    for(i=0;i<9;i++)
   { printf("%d ",c[i]);
   }
   output(c);
}

void intersection()
{
  int i,c[10];
    for(i=0;i<9;i++)
    { if (a[i]==b[i])
         c[i]=a[i];
      else c[i]=0;
    }
    for(i=0;i<9;i++)
   { printf("%d ",c[i]);
   }   
  output(c);
}

void difference()
{
 int i,c[10];
 for(i=0;i<9;i++)
 { 
  if (a[i]==1 && b[i]==0)
  c[i]=1;
  else c[i]=0;
 }
 for(i=0;i<9;i++)
 {
  printf("%d",c[i]);
 }
 output(c);
}





