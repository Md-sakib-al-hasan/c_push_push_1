#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
    string name;
    int age;
    int year;

};
int main()
{
    Person ar[2]= {{"sakib",20,24}};
//     for(int i=0;i<2;i++){
//         cin.ignore();
//          getline(cin,ar[i].name);
//          cin>>ar[i].age>>ar[i].year;
//     }
// for(int i=0;i<2;i++){
//     cout<<ar[i].name<<" "<<ar[i].age<<" "<<ar[i].year<<endl;
// }
  cout<<ar[0].age<<endl;
     return 0;
}