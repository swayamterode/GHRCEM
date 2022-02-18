// C program to add two matrices

#include<stdio.h>
int main(){
int r, c, mat1[100][100], mat2[100][100], sum[100][100], i, j;
printf("\nEnter the number of rows and columns : ");
scanf("%d %d", &r, &c);
printf("\nInput Matrix 1 elements : ");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
scanf("%d",&mat1[i][j]);
}
printf("\nMatrix 1\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",mat1[i][j]);
}
printf("\n");
}

printf("\nInput Matrix 2 elements : ");
for(i=0; i<r; ++i)
for(j=0; j<c; ++j)
{
scanf("%d", &mat2[i][j]);
}
printf("\nMatrix 2\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d ",mat1[i][j]);
}
printf("\n");
}
// Adding Two matrices
printf("\nAdded Matrix\n");
for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
sum[i][j]=mat1[i][j]+mat2[i][j];
}

// print the result

for(i=0;i<r;++i)
for(j=0;j<c;++j)
{
printf("%d ",sum[i][j]);

if(j==c-1)
{
printf("\n");
}
}

return 0;
}