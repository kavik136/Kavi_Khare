#include <bits/stdc++.h>
using namespace std;

void swap(int*x,int*y)       //FUNCTION CALLLING BY ADDRESS
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
    cout<<"a="<<*x<<" b="<<*y<<endl;
}
main()
{
    int a,b;
    a=10;
    b=20;
    cout<<"a="<<a<<" b="<<b<<endl;
    swap(&a,&b);
    cout<<"a="<<a<<" b="<<b<<endl;
}
