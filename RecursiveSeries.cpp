#include <bits/stdc++.h>
using namespace std;

int fact(int a)
{                 //Sum of the series 2^3/3!+4^4/4!+6^5/5!......n terms
    if (a==0)
    {
        return 1;
    }
    else
    {
        return(a*fact(a-1));
    }
}
int power(int x, int y)
{
    if(y==0)
    {
        return 1;
    }
    else
    {
        return (x*power(x, y-1));
    }
}
int main()
{
    int i,n,f=2,x,y,c=0;
    cin>>n;
    for(i=3 ;i<n+3; i++)
    {
        c=c+(power(f,i)/fact(i));
        f=f+2;
    }
    cout<<"Sum of the series = "<<c;
}
