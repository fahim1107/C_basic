#include<stdio.h>
int main(){
    int a,b,min,gcd;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    min=(a<b)?a:b;
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }   
    } printf("GCD of %d and %d is: %d",a,b,gcd);
    return 0;
}