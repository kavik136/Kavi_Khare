#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    int a,b,c;
    cout<<"enter values "<<endl;
    cin>>a>>b>>c;
    (c=sqrt((a*a)+(b*b)))?cout<<"Right Angled Traingle":(a>c b>c)?cout<<"Isosceles Triangle":(a==b)?cout<<"point inside the circle");
    return 0;
}