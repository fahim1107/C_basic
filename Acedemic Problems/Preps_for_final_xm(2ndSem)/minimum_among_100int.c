#include<stdio.h>
int main(){
    int arr[100];
    int min,i,n;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
        min=arr[0];
    } for(i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    } printf("%d",min);
    return 0;
}