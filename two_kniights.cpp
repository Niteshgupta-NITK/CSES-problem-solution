#include<bits/stdc++.h>
using namespace std;
long long int knight(long long int x){
    long long int d= x*x*(x*x-1)/2 -4*(x-1)*(x-2);
    return d;
}
int main(){
   long long  int n;cin>>n;
    for(long long int i=1;i<=n;i++){
        cout<<knight(i)<<endl;
    }


    return 0;
}