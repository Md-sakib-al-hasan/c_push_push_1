#include<bits/stdc++.h>
using namespace std;
int main()
{
     char x;
     cin>>x;
    if('A'<= x && x<='z' ){
        cout<<"ALPHA"<<endl;
        ('A'<= x && x<='Z')? cout<<"IS CAPITAL":cout<<"IS SMALL";
    }else{
        cout<<"IS DIGIT";
    }
     return 0;
}