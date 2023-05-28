// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//       string s;
//       getline(cin,s);
//       stringstream sk(s);
//       string world;
//       while (sk>>world)
//       {
//         cout<<world<<endl;
//       }
      
//      return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s;
     getline(cin,s);
     stringstream ss;
     ss<<s;
     string sk;
     while (ss>>sk)
     {
        cout<<sk<<endl;
     }
     
     return 0;
}