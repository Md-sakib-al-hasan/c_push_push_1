#include<bits/stdc++.h>
using namespace std;
class Students{
   public:
   string nm;
   int cls;
   char s;
   int id;
};
int main()
{   int a;
    cin>>a;
    Students ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i].nm;
        cin>>ar[i].cls;
        cin>>ar[i].s;
        cin>>ar[i].id;
    }
    int j=a-1;
    for(int i=0;i<a/2;i++){
       int tmp=ar[i].id;
       ar[i].id=ar[j].id;
       ar[j].id=tmp;
       j--;
    }
     for(int i=0;i<a;i++){
        cout<<ar[i].nm<<" ";
        cout<<ar[i].cls<<" ";
        cout<<ar[i].s<<" ";
        cout<<ar[i].id<<" ";
        cout<<endl;
    }
     
     return 0;
}