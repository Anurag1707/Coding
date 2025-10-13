#include <stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int *arr = (int *)calloc(n, sizeof(int));

    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("output :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
//Calloc- garbage value=0
//block dega or block ka size =4
//default = 0