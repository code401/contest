#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t;

cin>>n>>t;
while(t>0){
if((n%10)==0){

    n=n/10;


}
else{

    n=n-1;

}
t--;
}

cout<<n<<endl;



return 0;
}


