#include<bits/stdc++.h>
using namespace std;
class Person {
  public:
  string name;
   int year;
   int id;
};
int main()
{
    Person ar[5];
    for(int i=0;i<5;i++){
        cin>>ar[i].name;
        cin>>ar[i].year;
        cin>>ar[i].id;
    }
   for(int i=0;i<4;i++){
      for(int j=i+1;j<5;j++){
            if(ar[i].id>ar[j].id){
                swap(ar[i],ar[j]);
            }

      }
   }
    for(int i=0;i<5;i++){
        cout<<ar[i].name<<" ";
        cout<<ar[i].year<<" ";
        cout<<ar[i].id<<endl;
    }
     return 0;
}