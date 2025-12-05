#include <bits/stdc++.h>
using namespace std;int xstrlen(char*);
int main(){
    char name[10]="xyzabc";
    int x;
    x=xstrlen(name);
    cout<<"String length = "<<x;
}
int xstrlen(char*a)
{
    int c=0;
    while(*a!='\0')
    {
        c++;
        a++;
    }
    return c;
}