#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i=0,l,l1;
char s[200];
cin>>t;

while(t>0){
cin>>s;
l=strlen(s);
l1=l;
l=l-2;
char f=s[0];
char lc=s[l1-1];
if(l1<11){

    cout<<s<<endl;
}
else{
cout<<f<<l<<lc<<endl;
}
i++;
t--;
}








return 0;
}
