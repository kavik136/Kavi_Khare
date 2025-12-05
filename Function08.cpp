#include <bits/stdc++.h>
using namespace std;

void ABC(int x,float*y,float *z)
{
    *y=3.14*x*x;
    *z=3.14*2*x;      //Area and perimeter using pointer variables
}
main()
{
    float A,P;
    int r;
    cin>>r;
    ABC(r,&A,&P);
    cout<<A<<endl<<P;
}
