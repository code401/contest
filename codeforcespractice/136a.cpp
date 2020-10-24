#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i,k=0,n[100];
cin>>t;
while(t>0){
cin>>i;
n[i-1]=k;

    t--;
    k++;
}

for(int j=0;j<k;j++){

    cout<<n[j]+1<<" ";
}
cout<<endl;

return 0;
}
