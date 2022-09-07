#include<stdio.h>
int main(){
    int count,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(count=0;n!=0;count++)
    {
        n=n/10;
    }
    printf("The number of digits is %d",count);
    return 0;
}