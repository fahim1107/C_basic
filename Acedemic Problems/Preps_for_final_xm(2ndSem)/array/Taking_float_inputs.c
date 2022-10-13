#include<stdio.h>
int main(){
    float array[100];
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%f",&array[i]);
    }
    for(i=0;i<n;i++){
        printf("%.2f ",array[i]);
    }
    return 0;
}