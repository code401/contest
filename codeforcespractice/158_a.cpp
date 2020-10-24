#include<bits/stdc++.h>
using namespace std;
int main(){
int t,k,m[100],c=0,n;
cin>>n>>k;
for(int i=0;i<n;i++){

    cin>>m[i];

}
for(int j=0;j<n;j++){

    if(m[j]>=m[k-1] && m[j]>0){

        c++;
//

    }




}


cout<<c<<endl;



















return 0;
}
