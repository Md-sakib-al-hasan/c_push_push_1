#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int *b= new int[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    int d;
    cin>>d;
    int *c= new int[d];
     for(int i=a;i<d;i++){
        cin>>c[i];
    }
      for(int i=0;i<a;i++){
        c[i]=b[i];
    }
    for(int i=0;i<d;i++){
        cout<<c[i];
    }
    delete[] b;
     return 0;
}