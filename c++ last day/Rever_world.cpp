#include<bits/stdc++.h>
using namespace std;
void fun(stringstream & s){
    string wrold;
    if(s>>wrold){
        fun(s);
        cout<<wrold<<" ";
    }
}
int main()
{
     string s;
     getline(cin,s);
     stringstream ss(s);
     fun(ss);

     return 0;
}