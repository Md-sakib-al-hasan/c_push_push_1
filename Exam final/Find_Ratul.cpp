#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     getline(cin,s);
     int a=s.find("Ratul");
     if(0<=a){
        cout<<"YES";
     }else{
        cout<<"NO";
     }

     return 0;
}