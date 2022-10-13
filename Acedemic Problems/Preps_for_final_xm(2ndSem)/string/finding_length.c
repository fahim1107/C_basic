/*Take a string as input and find out its length*/

#include<stdio.h>
#include<string.h> /*string built in library function*/
int main(){
    char str[100];
    int len;
    printf("Enter a string: ");
    gets(str);

        len=strlen(str);
            
        printf("Length of %s is: %d",str,len);
    return 0;
}