#include<bits/stdc++.h>
using namespace std;
class CustomeSort{
    public:
    char c;
    int  cnt;

};
bool cmp( CustomeSort a, CustomeSort b){
    if(a.cnt>b.cnt) return true;
    else  return false;
}
int main()
{
     int a;
     cin>>a;
     CustomeSort ar[26];
     for(int i=0;i<26;i++){
        ar[i].c=(i + 'a');
        ar[i].cnt=0;
     }
     for(int i=0;i<a;i++){
        char d;
        cin>>d;
        ar[d-'a'].cnt++;
     }
     cout<<"sk"<<endl;
     sort(ar,ar+26,cmp);
     for(int i=0;i<26;i++){
        if(ar[i].cnt >0){
                for(int j=0;j<ar[i].cnt;j++){
                    cout<<ar[i].c;
                }
        }
     }
     return 0;
}