// Write programs to display each of the following patterns.(ii) 
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include <stdio.h>
int main() 
{
   int i, j, rows;
   printf("Enter the number of rows: "); //input rows as:5
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) 
   {
      for (j = 1; j <= i; ++j) 
      {
         printf("%d ",i);
      }
        printf("\n");
   }
   return 0;
}