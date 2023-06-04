#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     getline(cin,s);
     getline(cin,s);
     stringstream ss(s);
     string world;
     int count=0;
     while (ss>>world)
     {
        if('a'<=world[0]&& 'z'>=world[0] || 'A'<=world[0]&& 'Z'>=world[0]){
            
            if('a'<=world[0]&& 'z'>=world[0] || 'A'<=world[0]&& 'Z'>=world[0]){
          count++;
            }
        }
     }
      cout<<count<<endl;
     return 0;
}
