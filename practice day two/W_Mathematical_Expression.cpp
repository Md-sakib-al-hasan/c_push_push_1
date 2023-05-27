#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c;
     char p,s;
     cin>>a;
     cin>>p;
     cin>>b;
     cin>>s;
     cin>>c;
     if(p=='+'){
        int c1= a+b;
        if(c1==c){
            cout<<"Yes";
        }else{
            cout<<c1;
        }
     }else if (p=='-')
     {
        int c1= a-b;
        if(c1==c){
            cout<<"Yes";
        }else{
            cout<<c1;
        }
     }else if (p=='*')
     {
        int c1= a*b;
        if(c1==c){
            cout<<"Yes";
        }else{
            cout<<c1;
        }
     }
     
     
     return 0;
}