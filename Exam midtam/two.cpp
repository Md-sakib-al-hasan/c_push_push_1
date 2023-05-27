#include<bits/stdc++.h>
using namespace std;
class Teacher {
     
     public:
          char name[100];
          int bach;
          int  par_moth_paymant;
          char section;
          Teacher(int r,int c,char s,char n[]){
                bach=r;
                par_moth_paymant=c;
                section=s;
                strcpy(name,n);

          }
};  
int main()
{
      Teacher sakib(10,70000,'A',"sakib");
      cout<<sakib.name<<endl;
      cout<<sakib.bach<<endl;
      cout<<sakib.par_moth_paymant<<endl;
      cout<<sakib.section;

     return 0;
}