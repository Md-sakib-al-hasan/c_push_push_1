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
Student sakib(){
    char name[100]="sakib";
    Student sakib1(29,10,'A',name);
    return sakib1;

}
int main()
{
     Student sakib2=sakib();
     cout<<sakib2.roll;     
     return 0;
}