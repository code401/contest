#include<bits/stdc++.h>
using namespace std;
int main(){
int t,p[1000][1000],a=0,m=0;

cin>>t;

for(int i=0;i<t;i++)
{

    for(int j=0;j<2;j++){

        cin>>p[i][j];

    }
}
for(int i=0;i<t;i++)
{
    a= a + ( p[i][1] - p[i][0]);
if(a>=m){

m=a;
}


}

cout<<m<<endl;
return 0;
}
