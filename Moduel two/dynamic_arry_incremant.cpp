#include<bits/stdc++.h>
using namespace std;
int main()
{    int n;
     cin>>n;
     int *a= new int[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int *b= new int [n+2];
      for(int i=0;i<n;i++){
        b[i]=a[i];
     }
     b[5]=10;
     b[6]=20;
     delete[] a;
     for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
     }

     return 0;
}