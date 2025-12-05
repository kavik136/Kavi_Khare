#include <bits/stdc++.h>

using namespace std;
bool isprime(int n)
{
   if(n<=1) return false;
   if(n == 2) return true;
   if(n % 2 == 0) return false;
   for(int i=3;i<n;i++){
       if(n%i==0){
           return false;
       }
    
   }
   return true;
   
}
int main()
{
    int n;
    cin >> n;
   cout << "Checking prime or not "<< isprime(n) << endl;
   isprime(n)==1 ? cout << "Prime" : cout << "Not Prime";
    //  cout<<x;
}