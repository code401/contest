#include<bits/stdc++.h>
using namespace std;
int main(){
int t,i=0;
cin>>t;

/*I hate it
I hate that I love it
I hate that I love that I hate it
I hate that I love that I hate that i love it
*/
string s="I hate ",s1="that I love ",s2="that I hate ",s3=" it";

while(t>1){

if((i%2)==0){

    s=s+s1;

}
else{


    s=s+s2;
}
t--;
i++;
}

cout<<s+s3<<endl;
return 0;
}
