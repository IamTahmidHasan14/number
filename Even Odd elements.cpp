#include <iostream>

int main()
{
    int Numbers[10]={23,78,56,45,89,12,56,75,26,53}, OddNumbers[10], EvenNumbers[10];
    int i, j=0, k=0;

    for(i=0; i<10; i++){
        if (Numbers[i]%2 == 0){
            EvenNumbers[j] = Numbers[i];
            j++;
        }
        else{
            OddNumbers[k] = Numbers[i];
            k++;
        }
    }
    printf("The Even elements are: \n");
    for(i=0; i<j; i++){
        printf("%d ", EvenNumbers[i]);
    }
    printf("\n\nThe Odd elements are: \n");
    for(i=0; i<k; i++){
        printf("%d ", OddNumbers[i]);
    }
    printf("\n");
}
