#include<bits/stdc++.h>
using namespace std;
class Engineer{
     public:
     char type[100];
     int year;
     int age;
     Engineer(char n[],int y,int a){
            year=y;
            age=a;
            strcpy(type,n);
     }
};
Engineer sakib(){
    char type[100]="computer";
    Engineer s(type,2023,25);
    return s;
}
int main()
{    
    Engineer  sakib1=sakib();
      cout<<sakib1.type<<endl;
      cout<<sakib1.age<<endl;
      cout<<sakib1.year<<endl;

     
     return 0;
}