/*
Number of Input= T (1<=T=100)
Range of integer number n (0<= n <=2147483647)

Input:
3
100
0
1111
Output:
even
even
odd

*/
#include<stdio.h>
int main ()
{
    int T,n,i;
    scanf("%d",&T);
    for(i=0;i<=T;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("even\n");

        }

        else {
                printf("odd\n");

              };
    }
}
