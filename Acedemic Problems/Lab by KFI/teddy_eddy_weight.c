#include<stdio.h>
int main()
{

    int x,y,years=0;
    scanf("%d%d",&x,&y);
    while(x<=y){
        years++;
        x*=3;
        y*=2;
    }
    printf("%d",years);
    return 0;
}