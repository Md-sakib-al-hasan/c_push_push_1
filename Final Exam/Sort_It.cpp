#include<bits/stdc++.h>
using namespace std;
class Students{
   public:
   string nm;
   int cls;
   char s;
   int id;
   int math_marks;
   int eng_marks;
};
bool cmp(Students a,Students b){
    int ma=a.eng_marks+ a.math_marks;
    int ma1=b.eng_marks + b.math_marks;
    if(ma>ma1)return true;
    else if (ma == ma1)
    {
        if(a.id < b.id) return true;
        else return false;
    }
    
    else return false;
}
int main()
{   int a;
    cin>>a;
    Students ar[a];
    for(int i=0;i<a;i++){
        cin>>ar[i].nm;
        cin>>ar[i].cls;
        cin>>ar[i].s;
        cin>>ar[i].id;
        cin>>ar[i].math_marks;
        cin>>ar[i].eng_marks;
    }
     sort(ar,ar+a,cmp);
     for(int i=0;i<a;i++){
        cout<<ar[i].nm<<" ";
        cout<<ar[i].cls<<" ";
        cout<<ar[i].s<<" ";
        cout<<ar[i].id<<" ";
        cout<<ar[i].math_marks<<" ";
        cout<<ar[i].eng_marks<<" ";
        cout<<endl;
    }
     
     return 0;
}