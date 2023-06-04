#include<bits/stdc++.h>
using namespace std;
class Person {
  public:
  string name;
   int year;
   int id;
};
bool cmp(Person a,Person b){
    if(a.id<b.id)return true;
    else return false;
}
int main()
{
    Person ar[5];
    for(int i=0;i<5;i++){
        cin>>ar[i].name;
        cin>>ar[i].year;
        cin>>ar[i].id;
    }
    sort(ar,ar+5,cmp);
    for(int i=0;i<5;i++){
        cout<<ar[i].name<<" ";
        cout<<ar[i].year<<" ";
        cout<<ar[i].id<<endl;
    }
     return 0;
}