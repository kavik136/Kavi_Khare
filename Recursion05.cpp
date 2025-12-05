#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    if(n==1)
    {                  //Recursion to display n terms of Fibonacci Series 
        return(0);
    }
    else if(n==2)
    {
        return(1);
    }
    else
    {
        return(fib(n-1)+fib(n-2));
    }
}
int main()
{
    int n,f,z;
    cin>>n;
    for(z=1;z<=n;z++)
    {
        f=fib(z);
        cout<<f<<" ";
    }
}