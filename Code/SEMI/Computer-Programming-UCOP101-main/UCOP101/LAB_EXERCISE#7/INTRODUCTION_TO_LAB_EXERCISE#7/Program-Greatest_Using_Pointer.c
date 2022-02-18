//Write a program to find biggest among three numbers using pointer.
#include<stdio.h> 
int main()
{
int a,b,c; 

int*ptra=&a,*ptrb=&b,*ptrc=&c; 
printf("enter three values:\t"); 

scanf("%d%d%d",ptra,ptrb,ptrc);
printf("a=%d\nb=%d\nc=%d\n",*ptra,*ptrb,*ptrc); 

if((*ptra>*ptrb && *ptra>*ptrc))
{
    printf("biggest number=%d\n",*ptra); 
}
else if((*ptrb>*ptra && *ptrb>*ptrc))
{
    printf("biggest number =%d\n",*ptrb);
}
else
{
    printf("biggest number=%d\n",*ptrc);
}
return 0;
}
