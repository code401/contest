#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b;

for(int i=1,c=1;i<2;c++){

    a=a*(i+2);
    b=b*(i+1);
    //cout<<a<<b<<endl;
    if(a>b){

        cout<<c<<endl;
        i=1111;
    }

}




return 0;
}
