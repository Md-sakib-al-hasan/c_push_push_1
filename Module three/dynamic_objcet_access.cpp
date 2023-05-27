#include<bits/stdc++.h>
using namespace std;
class Student {
    public:
        char name[100];
        int roll;
        int csl;
        char selection;
        Student(int r,int c,char s,char n[]){
          int  roll=r;
           int  cls=c;
          char  selection=s;
            strcpy(name,n);
        }
};
Student sk(){
    char name[1000]="sk";
    Student s3(29,1,'k',name);
    return s3;
}
int main()
{    char name[1000]="sk";
     Student* sakib=new Student(29,2,'s',name);
     cout<<(*sakib).name<<endl;



     Student s2=sk();
     cout<<s2.name;
     return 0;
}