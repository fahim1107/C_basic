#include<stdio.h>
int main(){
    int var[10],i;
    for(int i=0; i<5;i++){
        scanf("%d",&var[i]);
    } 
    for(int i=0; i<5; i++){
        printf("%d",var[i]);
    }
    return 0;
}