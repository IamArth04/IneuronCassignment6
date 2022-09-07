#include<stdio.h>
int main(){
    int i=1,n,s=0;
    printf("Enter Numbers: ");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        printf("%d",i);
        printf("\n");
        i++;
    }
    printf("Sum of N even natural numbers are %d",s);
    return 0;
}