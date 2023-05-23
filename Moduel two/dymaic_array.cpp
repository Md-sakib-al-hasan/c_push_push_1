#include<bits/stdc++.h>
using namespace std;
int * i(){
    int *a= new int [5];
   for(int i=0;i<5;i++){
    cin>>a[i];
   }
    return a;
}
int main()
{
     int *p=i();
     for(int i=0;i<5;i++){
        cout<<p[i]<<" ";
     }
     return 0;
}