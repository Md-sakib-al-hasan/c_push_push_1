#include<bits/stdc++.h>
using namespace std;
void sk(stringstream& ss){
      string world;
       if(ss>>world){
            
            sk(ss);
            cout<<world<<endl;
       }
}
int main()
{
     string s;
     getline(cin,s);
     stringstream ss(s);
     sk(ss);
     return 0;
}