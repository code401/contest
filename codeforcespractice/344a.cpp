#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,b,c=1,d=2,n=0;
cin>>t;

while(t>0){
string s;
cin>>s;
a=int(s[0]);
b=int(s[1]);
if(c!=a && b!=d){

    n++;
}
c=a;
d=b;


    t--;
}


cout<<n<<endl;

return 0;
}
