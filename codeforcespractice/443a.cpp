#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int cv[1000],j=0;
getline(cin, s);
for(int i=1;i<s.length();i=i+3){

cv[j]=s[i];

j++;
}

//{a, b, c}

int d=j;
if(s.length()==2){
    d=0;

}
for(int k=0;k<j-1;k++){
for(int l=k+1;l<j;l++){
    if(cv[k]==cv[l]){
d--;
//cout<<cv[k];
cv[k]=42;


    }

}
}

cout<<d;

return 0;
}





