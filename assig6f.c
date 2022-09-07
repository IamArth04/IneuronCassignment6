#include<stdio.h>
int main(){
    int i,n;
    int fact=1;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("\nThe calculation of an factorial number is %d",fact);
    return 0;
}