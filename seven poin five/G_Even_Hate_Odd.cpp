#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tes;
     cin>>tes;
     while (tes--)
     {
        int a;
        cin>>a;
        int ar[a];
        for(int i=0;i<a;i++){
            cin>>ar[i];
        }
        int evsum=0;
        if(a%2==1){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<a;i++){
                if(ar[i]%2==0){
                    evsum++;
                }
            }
            int val= (a/2)-evsum;
            cout<<abs(val)<<endl;
        }
     }
     
     return 0;
}