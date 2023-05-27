#include<bits/stdc++.h>
using namespace std;
class Student {
     
     public:
          char name[100];
          int roll;
          int cls;
          char section;
          Student(int r,int c,char s,char n[]){
                roll=r;
                cls=c;
                section=s;
                strcpy(name,n);

          }
};  
int main()
{
      Student rohim(29,7,'A',"Rahim ullah");
      cout<<rohim.name<<endl;
      Student sakib(10,7,'A',"sakib");
      cout<<sakib.roll;

     return 0;
}