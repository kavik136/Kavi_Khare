#include <bits/stdc++.h>
using namespace std;
void tab(int x,int y)
{
    if(y>10)
    {
    }
    else
    {
        cout<<x*y<<endl;
        tab(x,y+1);
    }
    
}
int main()
{
    int x,y=1,t;
    cin>>x;;
    tab(x,y);
}
