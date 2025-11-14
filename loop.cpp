#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    int x,n,f=1;
    cin>>n;
    for(x=1; x<=n; ++x)
    {
        f=f*x;
    }
    cout<<f;

}