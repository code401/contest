#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int c=0;
cin>>s;
int sz=s.size();

for(int i=0;i<(sz-1);i++){
for(int j=i+1;j<sz;j++){


if(s[i]==s[j]&&s[i]!='#'){

    c++;

    s[j]='#';

}

}



}

if(((sz-c)%2)==0){
    cout<<"CHAT WITH HER!"<<endl;

}
if(((sz-c)%2)!=0){
    cout<<"IGNORE HIM!"<<endl;

}


return 0;
}


