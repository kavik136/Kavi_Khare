#include <bits/stdc++.h>
using namespace std;
void display(char*);
int main(){
    char name[5]="xyza";
    display(name);
}
void display(char*p)
{
    while(*p!='\0')
    {
        cout<<*p;
        p++;
    }
}