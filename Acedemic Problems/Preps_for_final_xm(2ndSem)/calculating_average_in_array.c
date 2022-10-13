#include<stdio.h>
int main(){
    int var[100],n;
    float avg=0;
    printf("Number of inputs: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&var[i]);
    }
    for(int i=0; i<n; i++){
        avg=avg+var[i];
    }
    avg=avg/n;
    printf("%.2f",avg);

    return 0;
}