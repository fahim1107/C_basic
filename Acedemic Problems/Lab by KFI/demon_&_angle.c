#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int demon=0,angle=0;
    for(int i=0; i<n; i++){
        if(arr[i]==-1){
            demon++;
        }else if(arr[i]>0){
            angle+=arr[i];
        }
    }
    printf("%d",demon-angle);
    return 0;
}