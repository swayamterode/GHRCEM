// Write a program to swap two arrays using pointers.

    #include <stdio.h>
    void swap34(float *ptr1, float *ptr2);
    void main()
    {
 
        float x[10];
        int i, n;
 
        printf("How many Elements...\n");
        scanf("%d", &n);
 
        printf("Enter Elements one by one\n");
        for (i = 0; i < n; i++) 
        {
            scanf("%f", x + i);
        }
 
        /*  Function call:Interchanging 3rd element by 4th */
 
        swap34(x + 2, x + 3);
        printf("\nResultant Array...\n");
 
        for (i = 0; i < n; i++) 
        {
            printf("X[%d] = %f\n", i, x[i]);
        }
 
    }
 
    /*  Function to swap the 3rd element with the 4th element in the array */
 
    void swap34(float *ptr1, float *ptr2 ) 
    {
 
        float temp;
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
 
    }