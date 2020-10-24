#include<bits/stdc++.h>
using namespace std;
int c(int p){
++p;
for(int l=p;l<10000;l++){
int i=0,n[50],t=1;
int kk=l;
while(kk>0){

n[i]=kk%10;
    kk=kk/10;
i++;
}

for(int j=0;j<i-1;j++){
for(int k=j+1;k<i;k++){

if(n[j] ==n[k]  ){

   t=2;

}


}
}
if(t==1){

return l;
}
}




}

int main(){
int y;
cin>>y;

cout<<c(y)<<endl;


return 0;
}
