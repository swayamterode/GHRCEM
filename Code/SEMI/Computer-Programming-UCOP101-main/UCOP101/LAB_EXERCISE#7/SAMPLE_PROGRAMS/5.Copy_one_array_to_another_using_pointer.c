//Write a program to copy one array to another using pointer.
#include<stdio.h>

int main()
{
 int i, Size, a[20], b[20];
  
 printf("\n Please Enter the Array Size \n");
 scanf("%d", &Size);
 
 printf("\n Please Enter the Array Elements \n");
 for(i = 0; i < Size; i++)
  {
     scanf("%d", &a[i]);
   
  }
 
 /* copying one array to another */  
 for(i = 0; i < Size; i++)
  {
    b[i] = a[i];
   
  }

 printf("\n Elements of Second Array are: \n");
 for(i = 0; i < Size; i++)
  {
    printf("\n Value Inside Array b[%d] = %d", i, b[i]);
  }
 
return 0;
}