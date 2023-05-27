#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;
    Student(char n[],int r,char s,int m,int c){
           strcpy(name,n);
           roll=r;
           section=s;
           math_marks=m;
           cls=c;
    }
};
Student rohim(){
    char name[100]="rohim";
    Student rohi(name,29,'A',50,10);
    return rohi;
}
Student korim(){
    char name[100]="korim";
    Student rohi(name,20,'A',5,10);
    return rohi;
}
Student rothon(){
    char name[100]="rothon";
    Student rohi(name,29,'A',30,10);
    return rohi;
}
int main()
{
     Student rohim1=rohim();
     Student korim1=korim();
     Student rothon1=rothon();
     if(rohim1.math_marks>korim1.math_marks && rohim1.math_marks>rothon1.math_marks){
        cout<<rohim1.name<<endl;
        cout<<rohim1.math_marks;
     }else if (korim1.math_marks>rohim1.math_marks && korim1.math_marks>rothon1.math_marks)
     {
        cout<<korim1.name<<endl;
        cout<<korim1.math_marks;
     }else{
        cout<<rothon1.name<<endl;
        cout<<rothon1.math_marks;
     }
     

     return 0;
}