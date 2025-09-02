#include<stdio.h>
int main(){
    // int tab;
    // int x=5;

    // for(int i=1;i<=10;i++)
    // {
    //     tab=x*i;
    //     // sum+=i;
    //      printf("%d\n",tab);
    // }    

    int sum=0;
    int num=123;
    while(num>0)
    {
        int l=num%10;
        sum=sum+l;
        num=num/10;
    }
     printf("%d",sum);
    
        
    }
