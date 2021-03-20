#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
        if((n*(n+1)/2)%2==1){
            cout<<"NO"<<endl;
        }
        else{ cout<<"YES"<<endl;
             if(n%2==0){
                  cout<<n/2<<endl;
                 for(int i=0;i<=n/4;i+=2){
                     cout<<i+1<<" "<<n-i;//1,n ,3,n-2 ,5,n-4
                 }
                 cout<<endl<<n/2<<endl;
                 for(int i=1;i<=n/4;i+=2){
                     cout<<i+1<<" "<<n-i;//2,n-1,4,n-3,6,n-5
                 }
             }

             else{
                 cout<<n/2+1<<endl;
                 for(int i=0;i<=n/4;i+=2){
                     cout<<i+1<<" "<<n-1;//1,n,3,n-2,5,n-4
                 }
                 cout<<endl<<(n/2)<<endl;
                  for(int i=1;i<=n/4;i+=2){
                     cout<<i+1<<" "<<n-i;//2,n-1,4,n-3,6,n-5
                 }
             }
        }
    
    return 0;
}