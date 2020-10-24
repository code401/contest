#include<bits/stdc++.h>
using namespace std;
int main(){
int l,x,y,tl;
    vector<int> g1;


cin>>l;
cin>>x;
while(x>0){
        int inp;
cin>>inp;
        g1.push_back(inp);
x--;

}

cin>>y;
while(y>0){
        int inp;
cin>>inp;
        g1.push_back(inp);

y--;
}

for(int i=1;i<=l;i++){

    vector<int>::iterator it;
     it = find(g1.begin(), g1.end(), i);
    if (it != g1.end())
       {
           tl=1;
       }
    else
        {
            tl=0;

            i=l+1;
        }

}

if(tl==1){

cout<<"I become the guy."<<endl;

}
else{
cout<<"Oh, my keyboard!"<<endl;

}

return 0;
}





