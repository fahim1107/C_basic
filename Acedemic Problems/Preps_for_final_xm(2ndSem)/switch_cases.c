#include<stdio.h>
int main(){
    int x,y,r,choice;
    printf("1.Add\n2.Sub\n");
    
    
    printf("Enter two numbers: \n");
    scanf("%d%d",&x,&y);

    printf("Enter your choice: ");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        r=x+y;
        printf("The sum of %d and %d is: %d",x,y,r);
        break;
    
    case 2:
        r=x-y;
        printf("The sub of %d and %d is: %d",x,y,r);
        break;
    
    default :
    printf("Invalid Choice!");

}

    return 0;
}