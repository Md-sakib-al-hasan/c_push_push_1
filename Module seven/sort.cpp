#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int mark ;
    int bach;


};
int main()
{
  int n=4;
  Student ar[n];
  for(int i=0;i<n;i++){
    getline(cin,ar[i].name);
    cin>>ar[i].mark>>ar[i].bach;
    cin.ignore();
  }

  for(int i=0;i<n;i++){
    cout<<ar[i].name<<" "<<ar[i].mark<<" "<<ar[i].bach<<endl;
  }
  cout<<"below  are sort array"<<endl;
  for(int i=0;i<n;i++){
    for(int j=i+1;i<n;j++){
        if(ar[i].mark<ar[j].mark){
            swap(ar[i],ar[j]);
        }
    }
  }


    for(int i=0;i<n;i++){
    cout<<ar[i].name<<" "<<ar[i].mark<<" "<<ar[i].bach<<endl;
  }
     return 0;
}