#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("1st");
    printf("2nd");
    printf("3rd");
    printf("4th");

    goto step2;

    step3:
    printf("5th");
    printf("6th");
    printf("7th");
    printf("8th");

    goto step1;

    step2:
    printf("9");
    printf("10");
    printf("11");
    printf("12");

    goto END;

    step1:
    printf("13");
    printf("14");
    printf("15");
    printf("16");

    END:
    printf("The End");

    return 0;
}