#include <stdio.h>

int trap(int* arr, int n){
    int rmax[n];
    int lmax[n];
    int max=0;
    
    // first loop (your logic)
    for(int i=0;i<n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        rmax[i]=arr[i]>max?arr[i]:max;
    }
    
    max=0;
    for(int i=n-1;i>=0;i--){
        if(max<arr[i]){
            max=arr[i];
        }
        lmax[i]=arr[i]>max?arr[i]:max;
    }
    
    int trapWater=0;
    for(int i=0;i<n;i++){
        int min = lmax[i]>rmax[i]?rmax[i]:lmax[i];
        trapWater = trapWater + min - arr[i];
    }
    return trapWater;
}

int main() {
    int arr1[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    printf("Output 1: %d\n", trap(arr1, n1));  // Expected: 6

    int arr2[] = {0};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    printf("Output 2: %d\n", trap(arr2, n2));  // Expected: 9

    return 0;
}
