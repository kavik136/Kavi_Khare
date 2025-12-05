#include <bits/stdc++.h>
using namespace std;

float ABC(int x)
{
    float A,P;
    A=3.14*x*x;
    P=3.14*2*x;
    return(A);    //Area and perimeter without using pointer variables
    return(P);
}
main()
{
    float A,P;
    int r;
    cin>>r;
    A=ABC(r);
    P=ABC(r);
    cout<<A<<endl<<P;
}
