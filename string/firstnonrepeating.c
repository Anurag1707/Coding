#include<stdio.h>
#include<string.h>
int main(){
    char str[]="ababde";
    int freq[256]={0};
    int ln =strlen(str);
   
    for(int j=0;j<ln;j++){
        freq[str[j]]++;
    }

    for(int i=0;i<ln;i++){
        if(freq[str[i]]==1){

           printf("%c",str[i]);
           break;
        }
    
    } 
}