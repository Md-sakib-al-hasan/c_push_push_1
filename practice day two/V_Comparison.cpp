#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b;
     cin>>a;
     char c;
     cin>>c;
     cin>>b;
     if(a>b && c=='>' || a==b && c=='=' || a<b && c=='<'){
        cout<<"Right";
     }else{
        cout<<"Wrong";
     }
     return 0;
}