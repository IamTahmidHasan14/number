#include <stdio.h>

int main()
{
    int tahmid[20], n, c, x=0;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);

    for (c=0; c<n; c++)
        scanf("%d", &tahmid[c]);

    for (c=1; c<n; c++)
        if (tahmid[c] > tahmid[x])
            x=c;

    printf("\nHighest number in array: %d \n", tahmid[x]);
    printf("Position of the highest number: %d \n", x+1);
    return 0;
}
