#include <bits/stdc++.h>
using namespace std;
void xstrcat(char*,char*);
int main(){
    char p[10]="xyzabc";
    char q[10]="defg";
    xstrcat(p,q);
    cout<<p;
}
void xstrcat(char*a, char*b)
{
    while(*a!='\0')
    {
        a++;
    }
    while(*b!='\0'){
        *a=*b;
        a++;
        b++;
    }
    *a='\0';
}