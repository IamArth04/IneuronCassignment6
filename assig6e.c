#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i*i;
    }
    printf("\nThe sum of cube of first N natural number is %d",s);
    return 0;
}