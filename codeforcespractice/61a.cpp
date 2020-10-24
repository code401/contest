#include<bits/stdc++.h>
using namespace std;
int main(){

string s,s1;
int r[111];
cin>>s;
cin>>s1;

for(int i=0;i<s.size();i++){

  r[i]=int( s[i])^int(s1[i]);





}

for(int i=0;i<s.size();i++){

  cout<<r[i];





}

cout<<endl;


return 0;
}
