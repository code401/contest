#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i=0,c=0,t1;
cin>>t;
t1=t;
char s[50];
while(t>0){
    cin>>s[i];

    i++;
    t--;
}
i=0;
while(t1>i){
    if(s[i]==s[i+1]){

        c++;
    }


    i++;
}

cout<<c<<endl;
return 0;
}
