#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t,sum;
cin>>t;
if((t%2)==0){

    t=t/2;
    sum=t*t;

}
else{
t=(t/2)+1;
sum=t*t;
t=t-1;

}



sum=(t*(t+1))- sum;

cout<<sum<<endl;

return 0;
}
