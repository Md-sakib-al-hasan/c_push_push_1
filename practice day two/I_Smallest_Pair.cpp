#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     while (a--)
     {
        int b;
        cin>>b;
        long long int ar[b];
        for(int i=0;i<b;i++){
            cin>>ar[i];
        }
         long long int min1=INT_MAX;
         for(int i=0;i<b;i++){
            for(int j=i+1;j<b;j++){
                long long int d= ar[i]+ar[j]+j-i;
                min1=min(min1,d);
            }
        }
        cout<<min1<<endl;
     }
     
       
     return 0;
}