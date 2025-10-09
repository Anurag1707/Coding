#include<stdio.h>
#include<string.h>
int main(){
    char str[]="hello";
    char nstr[]="hii";
    int ln= strlen(str);

    for(int i=0;i<ln;i++){
        if(str[i]==nstr[i]){
            printf("%c",str[i]);
            break;
        }
    }
}    