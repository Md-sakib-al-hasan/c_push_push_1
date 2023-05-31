#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int mark ;
    int bach;


};
bool cmp(Student a, Student b){
    if(a.mark < b.mark)  return true;
    else return false;
}
int main()
{
  int n=4;
  Student ar[n];
  for(int i=0;i<n;i++){
    getline(cin,ar[i].name);
    cin>>ar[i].mark>>ar[i].bach;
    cin.ignore();
  }
  sort(ar,ar+n,cmp);

    for(int i=0;i<n;i++){
    cout<<ar[i].name<<" "<<ar[i].mark<<" "<<ar[i].bach<<endl;
  }
     return 0;
}