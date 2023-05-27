#include<bits/stdc++.h>
using namespace std;
class Person {
    public:
    char name[1000];
    float height;
    int age;
    Person(char n[],float h, int a){
        strcpy(name,n);
        height=h;
        age=a;
    }

};
int main()
{    char name[1000]="sakib al hasan";
     Person * sakib= new Person(name,5.6,22);
      cout<<"name  = "<<sakib->name<<endl;
      cout<<"Age  = "<<sakib->age<<endl;
      cout<<"Height  = "<<sakib->height<<endl;
     return 0;
}