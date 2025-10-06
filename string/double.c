#include<stdio.h>
#include<string.h>
int main(){
    char name[]="madam";
    char data[10];
    int ln= strlen(name);
    int isTure=1;
    int a[10];
    for(int i=0;i<ln;i++){
        for (int j=0;j<ln;j++){
            if(name[j]=name[j+1]){
               isTure=0;
            } 
             
        }     
    }
    if(isTure==0){
        printf("duplicate");
    }else{printf("nott");
    }
}