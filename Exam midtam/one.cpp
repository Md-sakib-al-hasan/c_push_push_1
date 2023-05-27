#include<bits/stdc++.h>
using namespace std;
int main()
{
     char *a= new char;
     *a='s';
     cout<<*a<<endl;
     delete a;
     cout<<*a<<endl;
     *a='k';
     cout<<*a<<endl;
     return 0;
}