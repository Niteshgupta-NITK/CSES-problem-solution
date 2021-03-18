#include<bits/stdc++.h>
using namespace std;
int main(){
 int n ,sum,x;
 cin>>n;
 sum=n;
 for(int i=1;i<n;i++){ cin>>x;
    sum=sum^x^i;
 }
cout<<sum<<endl;
    return 0;
}