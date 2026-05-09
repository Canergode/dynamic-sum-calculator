#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *memory;
    int N,i,total=0;

    printf("Enter the number of elements:\n");
    scanf("%d",&N);

    // Allocate memory for N integers using calloc
    memory=(int *)calloc(N,sizeof(int));

    // Get numbers and calculate sum
    for(i=0;i<N;i++)
    {
        printf("%d.number:",i+1);
        scanf("%d",memory+i);
        total+=*(memory+i);
    }

    printf("Total:%d",total);

    free(memory);

    return 0;
}

