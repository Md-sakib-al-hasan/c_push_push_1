// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//      int a;
//      cin>>a;
//      char ar[a];
//      for(int i=0;i<a;i++){
//         cin>>ar[i];
//      }
//      sort(ar,ar+a);
//        for(int i=0;i<a;i++){
//         cout<<ar[i];
//      }
     
//      return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a;
     cin>>a;
     int ar[26]={0};
     for(int i=0;i<a;i++){
        char k;
        cin>>k;
        int val=k-'a';
        ar[val]++;
     }
     for(int i=0;i<26;i++){
        if(ar[i]>0){
          for(int j=0;j<ar[i];j++){
              char k=i+'a';
                cout<<k;
          }
        }
     }
     return 0;
}
