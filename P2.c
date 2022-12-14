#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[5],b[5],c[10],i,na,nb,nc,j,k,temp=0;
   printf("\n Enter the limit of first array\n");
   scanf("%d",&na);
   printf("\n Enter the Elements\n");
   for(i=0;i<na;i++)
     {  
     scanf("%d",&a[i]);
     }
   for (int x = 0; x < na; ++x) 
   {
    for (int y = x + 1; y < na; ++y)
    {
      if (a[x] > a[y]) 
        {
           temp =  a[x];
           a[x] = a[y];
           a[y] = temp;
        }
    }
   } 
   printf("\n The Sorted  First Array is \n");
   for (i = 0; i < na; ++i)
    {
     printf("%d\n", a[i]);
    } 
      
   printf("\n Enter the limit of second array\n");
   scanf("%d",&nb);
   printf("\n Enter the elemnts\n");
   for(i=0;i<nb;i++)
      {  
       scanf("%d",&b[i]);
      }
   for (int x = 0; x < nb; ++x) 
   {
    for (int y = x + 1; y < nb; ++y)
    {
      if (b[x] > b[y]) 
        {
           temp =  b[x];
           b[x] = b[y];
           b[y] = temp;
        }
    }
   }       
   printf("\n The Sorted  Second Array is \n");
   for (i = 0; i < nb; ++i)
    {
     printf("%d\n", b[i]);
    } 
         
   i=0;
   j=0;
   while(i<na&&j<nb)
    {
      if(a[i]<b[j])
         {
          c[k]=a[i];
          i++;
         }
         else
            {
             c[k]=b[j];
             j++;
             }
          k++;
    }  
      if(i>=na)
      {
       while(j<nb)
       {
         c[k]=b[j];
          j++;
          k++;
        }
      }
     if(j>=nb)
       {
         while(i<na)
          {
           c[k]=a[i];
           i++;
           k++;
          }
      }
 printf("\n The Merged Array is : \n ");
    for(k=0;k<(na+nb);k++)
     {
     printf("%d \n",c[k]);
     }
 }            
