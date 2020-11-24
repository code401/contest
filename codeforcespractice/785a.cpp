#include<iostream>
using namespace std;
int main(){
int t,tv=0;
string i,a[10];
cin>>t;
while(t>0){
    cin>>i;
    if(i=="Tetrahedron"){
    tv+=4;

    }
      if(i=="Cube"){
    tv+=6;

    }
      if(i=="Octahedron"){
        tv+=8;

    }
      if(i=="Dodecahedron"){
        tv+=12;

    }
      if(i=="Icosahedron"){
        tv+=20;

    }

    t--;

}


    cout<<tv;


return 0;
}
