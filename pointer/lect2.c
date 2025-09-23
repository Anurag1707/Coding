 #include<stdio.h>
// int swap(int *x,int *y){
//     int temp=*x;
//     *x=*y;
//     *y=temp;
//     printf("%d\t%d",*x,*y);
// }
// int main(){
//     int x=10;
//     int y=20;
//     swap(&x,&y);
    
    
// }
int main(){
    // int arr[4]={1,2,3,4};
    // int *p=arr;
    // for(int i=0;i<4;i++){
    //     printf("%d",*(p+i));
    // }

    // int arr[4]={1,2,3,4};
    // int *p=arr;
    // for(int i=3;i>=0;i--){
    //     printf("%d",*(p+i));
    // }



    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}