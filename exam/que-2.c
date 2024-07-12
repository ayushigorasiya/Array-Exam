#include <stdio.h>

main(){

    int size;

    printf("Enter the value of size :-");
    scanf("%d", &size);

    int A[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter A[%d] :-", i);
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (A[i]+ A[j] == 5)
            {
                printf("%d %d", A[i], A[j]);
            }

        }
        printf("\n");
    }
}