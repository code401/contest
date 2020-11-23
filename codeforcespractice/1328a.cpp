#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t,a,b;
cin>>t;
while(t>0){
cin>>a>>b;
if(b>a){
   cout<<b-a;

}
else if((a%b)==0){
    cout<<0;
}
else{


cout<<(b*((a/b)+1))-a;

}


 t--;




cout<<endl;
}

return 0;
}
