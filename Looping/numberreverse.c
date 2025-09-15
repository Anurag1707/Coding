#include<stdio.h>
int main(){
    int res=0;
    int num=121;
    int original=num;
    
    while(num!=0)
    {
        int lastD=num%10;
        res= res*10 + lastD;
        num = num/10;
    }
    if(original==res)
    {
        printf("number is palindrome");
        printf("\n%d",res);

    }else{
        printf("The number is not palindrome");
    }
    
    
}