#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int max, min;
    if (a>b && a>c && a>d){
        max=a;
        if(b<c && b<d){
            min=b;
        } else if(c<b && c<d){
            min=c;
        } else {
            min=d;
        }
    } 
    if (b>a && b>c && b>d){
        max=b;
        if(a<d && c>a){
            min=a;
        } else if(c<b && c<d){
            min=c;
        } else {
            min=d;
        }
    }
    if (c>a && c>b && c>d){
        max=c;
        if(a<d && c>a){
            min=a;
        } else if(c<b && c<d){
            min=c;
        } else {
            min=d;
        }
    }


    return 0;
}
    