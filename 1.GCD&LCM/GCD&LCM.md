#1.最大公约数和最小公倍数

##题目描述
从输入文件中读入两个整数a，b，求最大公约数GCD(a,b)和最小公倍数和LCM(a,b)。

##输入
输入有若干行，每行有两个整数a和b，(|a|,|b|<65536)。
输入直到文件输入结束。

##输出
对每一行测试数据，在一行上先输出“Case #:”，其中“#”是测试数据的行编号（从1开始），接着在下面的两行上分别输出这两个整数的最大公约数和最小公倍数。如无最大公因数，则输出“no GCD”；如无最小公倍数，则输出“no LCM”；两组输出数据之间空一行。

##样例输入

```
6 11
0 0
6 9
```

##样例输出

```
Case 1:
GCD(6,11) = 1
LCM(6,11) = 66

Case 2:
no GCD
no LCM

Case 3:
GCD(6,9) = 3
LCM(6,9) = 18
```

##源代码（C++）

```
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
```

