#include <bits/stdc++.h>
using namespace std;
void tower(int n, char A, char B, char C)
{
    if(n==1) 
    {                  
        cout<<A<<"->"<<C<<" "<<endl;
    }
    else                 //Tower Of Hanoi
    {
        tower(n-1,A,C,B);
        tower(1,A,B,C);
        tower(n-1,B,A,C);
    }
        
}
int main()
{
    int m;
    cin>>m;
    tower(m,'A','B','C');
}
