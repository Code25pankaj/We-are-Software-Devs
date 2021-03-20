#include <stdio.h>

int main()
{
    int i=1, n;
    printf("Enter Number\n>>");
    scanf("%d",&n);
    for(i;i<=10;i++){
        printf("%d x %d = %d\n", n,i,n*i);
    }
    return 0;
}