#include<stdio.h>
int main(){
    int num,i;
    int prime=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==0 || num==1){
        prime=0;
        }else if(num==2){
            prime=1;
        }else {
        for(int i=2 ; i<num/2 ; i++){
            if(num%i==0){
                prime = 0;
                break;
            }

        }
    }
     if(prime==1){
        printf("-%d- is a prime number!\n ",num);
    } else{
        printf("-%d- is not a prime number!\n",num);
    }
    return 0;

}