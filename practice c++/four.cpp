#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     getline(cin,s);
    //  s.erase(20,4);
    // s.replace(14,11,"said sakib");
    // s.insert(14,".");
    //   s=s+s;
      s.append(s);
      s.push_back('s');
    cout<<s<<endl;  
     return 0;
}