#include<bits/stdc++.h>
using namespace std;
class Students {
    public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
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
        cin>>ar[i].math_marks;
        cin>>ar[i].eng_marks;
     }
     for(int i=a-1;0<=i;i-- ){
        cout<<ar[i].nm<<" ";
        cout<<ar[i].cls<<" ";
        cout<<ar[i].s<<" ";
        cout<<ar[i].math_marks<<" ";
        cout<<ar[i].eng_marks<<" ";
        cout<<endl;
     }
     
     return 0;
}