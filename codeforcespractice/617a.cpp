#include<bits/stdc++.h>
using namespace std;
int main(){
int a,c=0;
cin>>a;
while(a>0){

    if(a>=5){

        a=a-5;


        c++;
         continue;
    }


    if(a>=4){

        a=a-4;

        c++;
         continue;
    }

    if(a>=3){

        a=a-3;

        c++;
         continue;
    }

    if(a>=2){

        a=a-2;

        c++;
         continue;
    }

    if(a>=1){

        a=a-1;

        c++;
         continue;
    }

}

cout<<c<<endl;




return 0;
}
