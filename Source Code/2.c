//Programmed by Daphne 2015.7.2
//E-mail: Daphne.Chang@foxmail.com
#include <stdio.h>

int main()
{
    int a[1005],k,count=1;
    scanf("%d",&k);
    int max,min,maxIndex,minIndex;
    while(k--)
    {
        int n=0;
        while(1)
        {
            scanf("%d",&a[n]);
            n++;
            if(getchar()=='\n') break;
        }

        printf("Case %d:\n",count++);
        if(n<3)
        {
            printf("No maximal and minimal!\n");
        }
        else
        {
            max=a[0]+a[1]+a[2];
            min=a[0]+a[1]+a[2];
            maxIndex=0;
            minIndex=0;
            for(int i=1;i<n-2;i++)
            {
                if((a[i]+a[i+1]+a[i+2])>max)
                {
                    max=a[i]+a[i+1]+a[i+2];
                    maxIndex=i;
                }
                if((a[i]+a[i+1]+a[i+2])<min)
                {
                    min=a[i]+a[i+1]+a[i+2];
                    minIndex=i;
                }
                
            }
            if(a[n-2]+a[n-1]+a[0]>max)
            {
                max=a[n-2]+a[n-1]+a[0];
                maxIndex=n-2;
            }
            if(a[n-2]+a[n-1]+a[0]<min)
            {
                min=a[n-2]+a[n-1]+a[0];
                minIndex=n-2;
            }
            if(a[n-1]+a[0]+a[1]>max)
            {
                max=a[n-1]+a[0]+a[1];
                maxIndex=n-1;
            }
            if(a[n-1]+a[0]+a[1]<min)
            {
                min=a[n-1]+a[0]+a[1];
                minIndex=n-1;
            }
            printf("maximum = %d, minimum = %d, MaxIndex = %d, MinIndex = %d\n",max,min,maxIndex+1,minIndex+1);
        }
    }
    return 0;
}