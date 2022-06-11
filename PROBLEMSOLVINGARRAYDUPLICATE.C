#include<stdio.h>
int main()
{
      int a[]={8,8,7,6,7};
      a[0]=8;
      a[1]=8;
      a[2]=7;
      a[3]=6;
      a[4]=7;
    for (int i=0;i<=4;i++)
    {
        for (int j=i+1;j<=4;j++)
        {
            if(a[i]==a[j])
            {
                printf("duplicate=%d\n",a[j]);
            }
        }
    }

    return 0;

}
