#include<bits/stdc++.h>
using namespace std;
int main()
{  int a;
    cin>>a;
    while (a--)
    {
        string s;
        string x;
        cin>>s;
        cin>>x;
        int b= x.size();
        while (s.find(x) != -1)
        {
             s.replace(s.find(x),b,"$");
        }
        cout<<s<<endl;
        
    }
    
     
     return 0;
}