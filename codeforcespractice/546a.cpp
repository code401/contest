#include<bits/stdc++.h>
using namespace std;
int main(){
int k,n,w,t=0,b=0;
cin>>k>>n>>w;

for(int i=1;i<=w;i++){

    t=t+(i*k);


}

b=t-n;
if(b>0){

    cout<<b<<endl;
}
else{

    cout<<0<<endl;
}


return 0;
}
