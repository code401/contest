#include<bits/stdc++.h>
using namespace std;
int main(){
int t,a,i=0;
cin>>t;

while(t>0){

cin>>a;

if(a==1){

    i++;
}

t--;
}

if(i==0){


    cout<<"EASY"<<endl;
}
else{

    cout<<"HARD"<<endl;

}


return 0;
}
