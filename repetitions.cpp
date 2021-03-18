#include<bits/stdc++.h>
using namespace std;
int main(){ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     string s;
    cin>>s;
     signed int i=0,counter=1,max=0;
while(i<s.size()-1){ 
    if(max<counter)
    {max=counter;}
  if(s[i+1]==s[i]){
    counter++;
  }
  else{
   counter=1;
  }
  i++;
} if(max<counter){ max=counter;}
cout<<max<<endl;
    return 0;
}