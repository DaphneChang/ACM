//Programmed by Daphne 2015.7.7
//E-mail: Daphne.Chang@foxmail.com
#include <stdio.h>
#include <list>
#include <iostream>
#include <strstream>
using namespace std;

int main()
{
    int k,count=1,x;
    scanf("%d",&k);
    char str[10000];
    cin.getline(str,10000);
    while(k--)
    {
        list<int>l;
        l.clear();
        cin.getline(str,10000);
        istrstream iss(str,10000);
        while(iss>>x)
        {
            l.push_front(x);
        }
        printf("Case %d:\n",count++);
        printf("Before sorting:\n");
        list<int>::iterator it=l.begin();
        printf("%d",*it);
        it++;
        int i;
        for(i=1;it!=l.end();it++,i++)
        {
            //printf(" %d",*it);
            if(i%10==0)
            {
                printf("\n%d",*it);
            } 
            else printf(" %d",*it);
        }
        printf("\nAfter sorting:\n");
        l.sort(greater<int>());
        it=l.begin();
        printf("%d",*it);
        it++;
        for(i=1;it!=l.end();it++,i++)
        {
            //printf(" %d",*it);
            if(i%10==0)
            {
                printf("\n%d",*it);
            } 
            else printf(" %d",*it);
        }
        printf("\n");
    }
    return 0;
}