#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a; cin>>a;
     int frq[26]={0};
     while (a--)
     {
        char b;
        cin>>b;
        frq[b-'a']++;

     }
     for(char i='a' ;i<='z';i++){
        if(frq[i-'a']>0){
            for(int j=0;j<frq[i-'a'];j++){
                cout<<i;
            }
        }
     }
     return 0;
}