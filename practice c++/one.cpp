#include<bits/stdc++.h>
using namespace std;
int main()
 {  //string s="sakib al hasan";
//     stringstream ss(s);
//     string world;
//     while (ss>>world)
//     {
//         cout<<world<<endl;
//     }
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