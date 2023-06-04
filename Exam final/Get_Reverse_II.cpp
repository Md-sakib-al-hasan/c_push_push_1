#include<bits/stdc++.h>
using namespace std;
class Students {
    public:
    string nm;
    int cls;
    char s;
    int id;
};
int main()
{
     int a;
     cin>>a;
     Students ar[a];
     for(int i=0;i<a;i++ ){
        cin>>ar[i].nm;
        cin>>ar[i].cls;
        cin>>ar[i].s;
        cin>>ar[i].id;
     }
     for(int i=0;0<a;i++ ){
        cout<<ar[i].nm<<" ";
        cout<<ar[i].cls<<" ";
        cout<<ar[i].s<<" ";
        cout<<ar[i].id<<" ";
        cout<<endl;
     }
     
     return 0;
}