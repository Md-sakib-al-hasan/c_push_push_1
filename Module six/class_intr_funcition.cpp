#include<bits/stdc++.h>
using namespace std;
class Person {
        public:
        string name;
        int age;
        int markes;
        int markers2;
        Person(string nm,int a, int m1, int m2){
           name=nm;
           age=a;
           markes=m1;
           markers2=m2;
        };
        public:
        string type;
        Person(string type){
            this->type=type;
        };
};
int main()
{
       Person sakib("sakib al hasan");
       cout<<sakib.type<<endl;
     return 0;
}