#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter numbers"<<endl;
    cin>>a>>b>>c;

    if (a>b)
    {
        if (a>c)
        {
            cout<<"a is greatest"<<endl;
        }
        else
        cout<<"c is greatest"<<endl;
    }
    else if(b>a)
    {
        if (b>c)
        cout<<"b is greatest"<<endl;
        else
        {
            cout<<"c is the greatest"<<endl;
        }
    }
    return 0;
}