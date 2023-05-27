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
     
     int flag=0;
     int j=a-1;
     for(int i=0;i<a;i++){
        if(ar[i]==ar[j]){
            j--;
            continue;
        }else{
            flag=1;
            break;
        }
     };
     if(flag==0){
        cout<<"YES";
     }else
     {
        cout<<"NO";
     }
     return 0;
}