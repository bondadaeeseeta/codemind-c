#include<stdio.h>
int main()
{
    int n,i,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(i%2==0)
            {
                t++;
            }
            else
            {
                printf("False");
                t=0;
                break;
            }
        }
    }
    if(t>0)
    {
        printf("True");
    }
}