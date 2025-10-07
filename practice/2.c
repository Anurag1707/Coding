#include<stdio.h>
#include<string.h>
int main(){
    char name[]=" I love programming code";
    char data[20];
    int ln=strlen(name);
    int i,j;
    for( i=0;name[i]!='\0';i++){
        for( j=0;j<i;j++){
            if(name[i]>name[j]){
               data[i]=name[i];
            }
        }
    }
    for(int k=0;name[i]!='\0';k++){
        printf("%c",data[k]);
    }
}