#include<stdio.h>
int main(){
    int var[100],n,min;
    printf("Number of inputs: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&var[i]);
    }
    min=var[0];
    for(int i=0; i<n; i++){
        if(var[i]<min){
            min=var[i];
        }
    }
    printf("Minimum is: %d",min);

    return 0;
}