#include<stdio.h>
int main(){
    int n;
    printf("Enter a number to check: ");
    scanf("%d",&n);
    switch (n%2) /*keypoint to remember*/
    {
    case 0:
        printf("Even!");
        break;
    
    case 1:
        printf("Odd!");
        break;
    
    }

    return 0;
}