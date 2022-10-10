#include<stdio.h>
void sum(int a,in5t b){
    printf("%d + %d = %d\n",a,b,(a+b));
}
int main(){ 
    int a,b;
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}