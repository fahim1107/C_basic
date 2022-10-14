#include<stdio.h>
#include<string.h>
int main(){
    char name[30];
    scanf("%s",name);
    int n= strlen(name)-1;
    for(int i=0; i<n; i++,n--){
        char t=name[i];
        name[i]=name[n];
        name[n]=t;
    }
    printf("%s",name);
    return 0;
}