#include<bits/stdc++.h>
using namespace std;
int main()
{
     
     int ar[3];
     for(int i=0;i<3;i++){
          cin>>ar[i];
     }
     int max1=INT_MIN;
     int min1=INT_MAX;
     for(int i=0;i<3;i++){
          max1=max(max1,ar[i]);
          min1=min(min1,ar[i]);
     }
     cout<<min1<<" "<<max1;

     return 0;
}