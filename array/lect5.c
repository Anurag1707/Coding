#include <stdio.h>
int main(){
    int a[2][2]={{1,2},{3,4}};
    // int n=sizeof(a)/4;
     int  b[4];
     int k=0;
    for(int i=0;i<2;i++){
        for (int j=0;j<2;j++)
        {
            b[k]=a[i][j];
            k++;
        } 
    }
    for(int p=0;p<4;p++){
        printf("%d ",b[p]);
    }
}