#include<bits/stdc++.h>
using namespace std;
int main(){
int s=0,i=0,t,fh,ph[1111];
cin>>t>>fh;


while(t>0){

cin>>ph[i];
i++;
t--;
}

for(int j=0;j<i;j++){

if(ph[j]>fh){

    s=s+2;
}
else{

    s++;
}

}

cout<<s<<endl;

return 0;
}
