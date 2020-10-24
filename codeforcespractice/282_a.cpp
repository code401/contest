#include<bits/stdc++.h>
using namespace std;
int main(){
int t,op=0;
cin>>t;
while(t>0){

string inp;

cin>>inp;

for(int i=0;i<2;i++){
    if(inp[i]=='+'){

        ++op;
        i=3;

    }
 if(inp[i]=='-'){

        --op;
        i=3;

    }

}





    t--;

}

cout<<op<<endl;




return 0;
}
