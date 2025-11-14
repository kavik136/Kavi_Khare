#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    int a,b,c,d;
    cout<<"enter values "<<endl;
    cin>>a>>b>>c;
    d=((b*b)-(4*a*c));
    (d==0)?cout<<"real and equal":((d>0)?cout<<"Real and distinct":cout<<"imaginary roots");
    return 0;
}