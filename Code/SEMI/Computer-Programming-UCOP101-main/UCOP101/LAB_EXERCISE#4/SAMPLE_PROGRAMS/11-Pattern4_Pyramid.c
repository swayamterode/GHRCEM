// If you input the rows as 5 you would get -
// 5
// 5 5
// 5 5 5
// 5 5 5 5
// 5 5 5 5 5
#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: "); // Enter the rows as 5
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%d ", rows);
      }
      printf("\n");
   }
   return 0;
}