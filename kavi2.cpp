#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    int d,r,h,k,x,y;
    cout<<"enter values "<<endl;
    cin>>r>>x>>y>>h>>k;
    d=sqrt((x-h)*(x-h)+(y-k)*(y-k));
    (d==r)?cout<<"The point is on the circle":((d>r)?cout<<"Point outside the circle":cout<<"point inside the circle");
    return 0;
}