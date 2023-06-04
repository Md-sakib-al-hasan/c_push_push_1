#include<bits/stdc++.h>
using namespace std;
class Criceter{
    public:
    string name;
    int fmscro;
    int smscro;
    int third;
    Criceter(string name,int fmscro,int smscro,int thir){
              this->name=name;
              this->fmscro=fmscro;
              this->smscro=smscro;
              third=thir;
    }
    int sum(){
        return fmscro+smscro+third;
    }
};
int main()
{
     Criceter sakib("sakib al hasan",70,75,90);
     cout<<sakib.sum()<<" ";
     return 0;
}