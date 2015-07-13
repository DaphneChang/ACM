//Programmed by Daphne 2015.7.2
//E-mail: Daphne.Chang@foxmail.com
#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a,int b)
{
    if(a%b==0)
        return b;
    else
        return gcd(b,a%b);
    
}

int main()
{
    int n=1,a,b,c,d;
    while(cin>>c>>d)
    {
        a=abs(c);
        b=abs(d);
        cout<<"Case "<<n<<":"<<endl;

        if(a==0&&b==0)
            cout<<"no GCD"<<endl;
        else if(a==0)
            cout<<"GCD("<<c<<","<<d<<") = "<<b<<endl;
        else if(b==0)
            cout<<"GCD("<<c<<","<<d<<") = "<<a<<endl;
        else if(a<b)
            cout<<"GCD("<<c<<","<<d<<") = "<<gcd(b,a)<<endl;
        else
            cout<<"GCD("<<c<<","<<d<<") = "<<gcd(a,b)<<endl;

        if(a==0||b==0)
            cout<<"no LCM"<<endl<<endl;
        else
            cout<<"LCM("<<c<<","<<d<<") = "<<a*b/gcd(a,b)<<endl<<endl; 
        n++;
    }

    return 0;
}