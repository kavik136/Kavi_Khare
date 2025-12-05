#include <bits/stdc++.h>
using namespace std;
int son(int n)
{
    if(n==0)
    {                   //Display the sum of n natural numbres 
        return(0);
    }
    else
    {
        return(n+son(n-1));
        
    }
    
}
int main()
{
    int n,sum;
    cin>>n;
    sum=son(n);
    cout<<sum;
}

