#include<stdio.h>
#include<stdlib.h>
int main(){
    //{0,-2,3,0,1,3,4,5}
    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int *arr = (int *)malloc(n*sizeof(int));

    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int b[10];
    for(int i=0;i<n;i++){
        if(arr[i]==0){ 
           b[i]=arr[i];
           
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){ 
           b[i]=arr[i];
          
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){ 
            b[i]=arr[i];
           
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}