#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a,c=0;
cin>>a;
while(a>0){

    if(((a%10)==4 )|| ((a%10)==7 )){

c++;
    }
    a=a/10;

}

if(c==4||c==7){

    cout<<"YES";

}
else{

    cout<<"NO";

}




return 0;
}
