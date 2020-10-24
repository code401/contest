#include<iostream>
using namespace std;
int main(){
int c[4],cn=0,b=-1;
cin>>c[0]>>c[1]>>c[2]>>c[3];

for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
    if(c[i]==c[j]){
c[j]=b;
b--;


        cn++;
    }
    }
}



cout<<cn<<endl;




return 0;
}
