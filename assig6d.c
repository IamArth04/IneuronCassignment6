#include<stdio.h>
int main(){
    int i;
    int n;
    int s=0;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*i;    
    }
    printf("\nThe sum of square of first N natural number is %d",s);
    return 0;
}