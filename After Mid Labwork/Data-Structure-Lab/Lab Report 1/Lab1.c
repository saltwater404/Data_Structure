#include<stdio.h>
int main()
{
    int a[100]={1,2,3,4,5,6,7,8,9,10};
    int b[100];
    int i,x,y,z,mx,mn;
    int len=10, flag=0, index=-1;
    for(i=0;i<len;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    a[10]=100;
    len++;
    for(i=0;i<len;i++)
    {
        printf("%d",a[i]);
    }
    a[5]=50;
    for(i=0;i<len;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    scanf("%d",&x);
    for(i=0;i<len;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            index=i;
        }
    }
    if(flag==1)
    {
        printf("%d",index);
    }
    else
    {
        printf("Not Found");
    }
    printf("\n");
    scanf("%d",&y);
    for(i=len-1;i>=3;i--)
    {
        a[i+1]=a[i];
    }
    a[3]=y;
    len++;
    for(i=0;i<len;i++)
    {
        printf("%d",a[i]);
    }
        printf("\n");
    scanf("%d",&z);
    for(i=z;i<len;i++)
    {
        a[i]=a[i+1];
    }
    len--;
    for(i=0;i<len;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    for(i=0;i<len;i++)
    {
        b[i]=a[i];
    }
    mx=a[0];
    for(i=1;i<len;i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }
    }
    printf("%d \n",mx);
    mn=a[0];
    for(i=1;i<len;i++)
    {
        if(a[i]<mn)
        {
            mx=a[i];
        }
    }
    printf("%d \n",mn);
    return 0;
}
