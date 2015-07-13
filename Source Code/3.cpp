//Programmed by Daphne 2015.7.2
//E-mail: Daphne.Chang@foxmail.com
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int is_palindrome(const string palin)
{
    stack<char> s;
    for (int i = 0;i < palin.size();i++)
    {
        s.push(palin[i]);
    }
    int k = 0;
    while (s.size() > palin.size()/2)
    {
        char c = s.top();
        s.pop();
        if (c != palin[k++])
        {
            cout << "NO!" << endl;
            return -1;
        }
    }
    cout << "YES!" << endl;
    return 0;
}

int main()
{
    string str;
    int k,n;
    
    cin>>n;
    for(k=1;k<=n;k++)
    {
        cin >> str; 
        is_palindrome(str);
    }
    return 0;
}
