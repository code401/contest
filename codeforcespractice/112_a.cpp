#include<bits/stdc++.h>
using namespace std;
int main(){
string s,s1;
int op;
cin>>s;
cin>>s1;

 transform(s.begin(), s.end(), s.begin(), ::tolower);
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  int k=s.size();

for(int i=0;i<k;i++){
 int v=int(s[i]);
 int v1=int(s1[i]);
   if(v==v1&&i==k-1){

     op=0;

   }
   if(v>v1){
     op=1;

i=k;
   }

   if(v<v1){


     op=-1;
   i=k;
   }

}
//

 cout<<op<<endl;

return 0;
}
