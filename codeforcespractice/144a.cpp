#include<bits/stdc++.h>
using namespace std;
int main(){
int t,l[100],i=0,mi,mx,t1,ml=0,mxl=0,s=0;
cin>>t;
t1=t;
while(t>0){

    cin>>l[i];

    t--;
    i++;
}


mi=l[0];
mx=l[0];
for(int j=0;j<t1;j++){
    if(l[j]<=mi){
        mi=l[j];
        ml=j;

    }
}


while(ml<(t1-1)){
int tm;
tm=l[ml+1];
l[ml+1]=l[ml];
l[ml]=tm;
ml++;
s++;
/*
for(int j=0;j<t1;j++){
    cout<<l[j]<<" ";
}
*/
//cout<<"\n";
}





for(int j=0;j<t1;j++){
    if(l[j]>mx){
        mx=l[j];
    mxl=j;

    }
}


while(mxl>0){
int tm;
tm=l[mxl-1];
l[mxl-1]=l[mxl];
l[mxl]=tm;
mxl--;
s++;
/*
for(int j=0;j<t1;j++){
    cout<<l[j]<<" ";
}

*/
//cout<<"\n";
}

cout<<s;
return 0;
}





