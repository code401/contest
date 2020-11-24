#include<iostream>
using namespace std;
int main(){
int t,a[100],i=1,c=0;
cin>>t;
while(t>0){

cin>>a[i]>>a[i+1];



i=i+2;
    t--;
}


for(int j=1;j<=i-1;j=j+2){

        for(int k=2;k<=i-1;k=k+2)
    if(a[j]==a[k]){

       c++;


       }




}

cout<<c;






return 0;
}
