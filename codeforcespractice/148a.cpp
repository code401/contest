#include<bits/stdc++.h>
using namespace std;

int main(){
long long int a,b,c,d,t,nf=0;

cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>t;

for(int i=1;i<=t;i++){

    if((i%a)==0 ||( i%b)==0 || (i%c)==0 || (i%d)==0 ){

    nf++;
    }

}

cout<<nf<<endl;
return 0;
}
