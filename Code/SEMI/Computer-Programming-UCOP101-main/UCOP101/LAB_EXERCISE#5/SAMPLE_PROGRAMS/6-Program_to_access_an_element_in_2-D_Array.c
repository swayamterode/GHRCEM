//Write a Program to access an element in 2-D Array.
#include<stdio.h>
 
int main() {
   int i, j, a[3][3];
 
   // i : For Counting Rows
   // j : For Counting Columns
 
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf("\nEnter the a[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
   }
 
   //Print array elements
   for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
         printf("%d\t", a[i][j]);
      }
      printf("\n");
   }
 
   return (0);
}