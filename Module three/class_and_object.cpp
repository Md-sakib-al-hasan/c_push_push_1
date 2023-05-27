#include<bits/stdc++.h>
using namespace std;
class Student {
     
     public:
          char name[100];
          int roll;
          int cls;
          char section;
};
int main()
{
      Student rohim;
      rohim.roll=9;
      rohim.cls=10;
      rohim.section= 'a';
      char name1[100]="sakib loger";
      strcpy(rohim.name,name1);
      cout<<rohim.roll;

     return 0;
}