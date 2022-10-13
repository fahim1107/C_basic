#include<stdio.h>
int main(){
    char str[20],i;
    gets(str);
   for(i=0; str[i]!='\0';i++){
    printf("%c",str[i]);
   }
    return 0;
}