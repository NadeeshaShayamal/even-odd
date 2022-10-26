#include<stdio.h>
int main()
{
    int N;
    printf("\nEnter a number :");
    scanf("%d",&N);
    if (N%2==0)
    {
        printf("%d is Even",N);
    }
    else
    {
        printf("%d is Odd",N);
    }
    return 0;
}