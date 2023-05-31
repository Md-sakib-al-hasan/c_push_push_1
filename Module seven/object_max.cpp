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
     Student ar[2];
     for(int i=0;i<2;i++){
        getline(cin,ar[i].name);
        cin>>ar[i].mark>>ar[i].bach;
        cin.ignore();
     }
     int max_mak=INT_MIN;
     for(int i=0;i<2;i++){
        max_mak=max(max_mak,ar[i].mark);
     }
     for(int i=0;i<2;i++){
        if(max_mak==ar[i].mark){
            cout<<ar[i].name<<" "<<ar[i].mark<<" "<<ar[i].bach<<endl;
        }
     }
 Student min;
 min.mark=INT_MAX;
 for(int i=0;i<2;i++){
    if(ar[i].mark<min.mark){
        min=ar[i];
    }
 }
 cout<<min.name<<endl;
     return 0;
}