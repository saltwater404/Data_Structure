#include <stdio.h>

int main()
{
    int len = 10;
    int a[10] = {5,4,3,1,8,9,10,2,6,7};
    int i,j,min,max, tem,pos=-1,flag=0;
    for(i=0;i<len; i++)
    {
        min = a[i];
        flag=0;
        for(j=i+1; j<len;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                pos = j;
                flag=1;
            }
        }
        if(flag==0) {
            min = a[i];
            pos = i;
        }

        tem = a[i];
        a[i]=min;
        a[pos]=tem;
    }

    for(i=len-1;i>0; i--)
    {
        min = a[i];
        flag=0;
        for(j=0; j<i-1;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                pos = j;
                flag=1;
            }
        }
        if(flag==0) {
            min = a[i];
            pos = i;
        }

        tem = a[i];
        a[i]=min;
        a[pos]=tem;
    }
    for(i=len-1;i>0; i--)
    {
        max = a[i];
        flag=0;
        for(j=0; j<i-1;j++)
        {
            if(a[j]>max)
            {
                max = a[j];
                pos = j;
                flag=1;
            }
        }
        if(flag==0) {
            max = a[i];
            pos = i;
        }

        tem = a[i];
        a[i]=max;
        a[pos]=tem;
    }

    for(i=0;i<len; i++)
    {
        max = a[i];
        flag=0;
        for(j=i+1; j<len;j++)
        {
            if(a[j]>max)
            {
                max = a[j];
                pos = j;
                flag=1;
            }
        }
        if(flag==0) {
            max = a[i];
            pos = i;
        }

        tem = a[i];
        a[i]=max;
        a[pos]=tem;
    }

    return 0;
}
