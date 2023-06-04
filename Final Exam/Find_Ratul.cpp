#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     getline(cin,s);
     stringstream ss(s);
     string world;
     int flag=0;
     while (ss>>world)
     {
        if(world == "Ratul"){
            flag=1;
            break;
        }
     }
     if(flag == 1){
        cout<<"YES";
     }else{
        cout<<"NO";
     }
     
     return 0;
}