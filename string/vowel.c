#include<stdio.h>
#include<string.h>
int main(){
    char str[]="aiouabvs";
    
    int ln = strlen(str);
    for(int i=0;i<ln;i++){
        int count=0;
        if(str[i]=='a' ||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count++;
        }
        if(count==1){
            printf("%c",str[i]);
        }
    }
}