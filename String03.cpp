#include <bits/stdc++.h>
using namespace std;
void xstrcpy(char*,char*);
int main(){
    char p[10]="xyzabc";
    char q[10];
    xstrcpy(q,p);
    cout<<q;
}
void xstrcpy(char*a, char*b)
{
    while(*b!='\0')
    {
        *a=*b;
        a++;
        b++;
    }
    *a='\0';
}