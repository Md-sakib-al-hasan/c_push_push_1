#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     int ar[a];
     for(int i=0;i<a;i++){
          cin>>ar[i];
     }
     int max1=INT_MIN;
     for(int i=0;i<a;i++){
          max1=max(max1,ar[i]);
     }
     cout<<max1;

     return 0;
}