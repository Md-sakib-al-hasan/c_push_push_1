#include<bits/stdc++.h>
using namespace std;
namespace Sk {
      int x=0;
}
class Computer{
    public:
    string nam;
    int price;
    Computer(string a,int p){
        nam=a;
        price=p;

    }
};
int main()
{     Computer *Windos= new Computer("sakib",5000);
     Computer *window= new Computer("Rahad",70);
       window = Windos;
       
       cout<<window->nam<<" ";
        cout<<sk:: x<<endl;

     
     return 0;
}