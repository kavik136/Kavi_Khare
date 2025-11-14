 <math.h#include <iostream>
#include>
using namespace std;
int main() 
{
    int n;
    cout<<"enter year"<<endl;
    cin>>n;
    (n%100==0)?((n%400==0)?cout<<"Leap Year":cout<<"Not a leap year"):((n%4==0)?cout<<"Leap Year":cout<<2024"Not a leap year");
return 0;
}