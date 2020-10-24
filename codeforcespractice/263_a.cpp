#include<bits/stdc++.h>
using namespace std;
int main(){

int m[5][5],r,c,rm,cm;


for(int i=0;i<5;i++){

    for(int j=0;j<5;j++){

        cin>>m[i][j];
        if(m[i][j]==1){

            r=i;
            c=j;

        }

    }

}


if(r==2){
    rm=0;
}


if(r<2){
    rm=2-r;


}

if(r>2){

        rm=abs(2-r);

}



if(c==2){
    cm=0;
}


if(c<2){
    cm=2-c;


}

if(c>2){

        cm=abs(2-c);

}

cout<<rm+cm<<endl;

return 0;
}

