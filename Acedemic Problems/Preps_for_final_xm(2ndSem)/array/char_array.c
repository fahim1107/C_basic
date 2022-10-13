#include<stdio.h>
int main (){
    char str[7];
    char i;
        for(i=0 ; i<5 ; i++){
            scanf("%c",&str[i]);
        }for(i=0 ; i<5 ; i++){
            printf("%c\n",str[i]);
        }
    return 0;
}