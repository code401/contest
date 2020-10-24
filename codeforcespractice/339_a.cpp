#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
int sa[110],p=0;
cin>>s;

int ss=s.size();


for(int i=0;i<ss;i=i+2){

    int k=int(s[i]);
    k=k-48;
  sa[p]=k;
  p++;

}
sort(sa, sa+p);

for(int j=0;j<p;j++){
    if(j==(p-1)){

        cout<<sa[j];
    }
    else{
    cout<<sa[j]<<"+";
    }
}
cout<<endl;
return 0;
}
