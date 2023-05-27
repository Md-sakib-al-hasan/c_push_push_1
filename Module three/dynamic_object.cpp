#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
        Student(int r,int c,char s,char n[]){
                roll=r;
                cls=c;
                s=section;
                strcpy(name,n);
        }
};
int main()
{           char name[100]="sakib";
     Student* sakib=new Student(29,10,'A',name);
     cout<<sakib->cls;
     delete sakib;
     cout<<sakib->name;
     return 0;
}