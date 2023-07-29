#include <stdio.h>

int main()
{
    int tahmid[20]={1,1,2,2,3,3,4,4,4,5,5,6,7,7,8,8,8,9,9,10};
    int n=20, i, j, k;

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(tahmid[i] == tahmid[j]){
                for(k=j; k<n; k++){
                    tahmid[k] = tahmid[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("After delete duplicate elements: ");
    for(i=0; i<n; i++){
        printf("%d  ", tahmid[i]);
    }
    printf("\n");
    return 0;
}
