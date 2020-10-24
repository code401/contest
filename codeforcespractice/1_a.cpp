#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include<cstdlib>

using namespace std;

vector<string> explode(const string& str, const char& ch) {
    string next;
    vector<string> result;

    // For each character in the string
    for (string::const_iterator it = str.begin(); it != str.end(); it++) {
        // If we've hit the terminal character
        if (*it == ch) {
            // If we have some characters accumulated
            if (!next.empty()) {
                // Add them to the result vector
                result.push_back(next);
                next.clear();
            }
        } else {
            // Accumulate the next character into the sequence
            next += *it;
        }
    }
    if (!next.empty())
         result.push_back(next);
    return result;
}
int main(){

int m1;
string n;
   getline(cin,n);
      std::vector<std::string> sep = explode(n, ' ');
    // Fill DataNumbers

    // Fill DataNumbers
    std::vector<int> n11;
        std::vector<int> n12;

    for (int i=0; i<= 2; i++)
    {
     int num = atoi(sep.at(i).c_str());
     n11.push_back(num);
    }

    if(n11[0]>n11[1]){

    n12[0]=n11[0];

}
else{
    n12[0]=n11[1];

}

for(int i=1;;i++){

    m1=n11[2]*i;
    if(m1>=n12[0])
    {
        m1=i;
        break;
    }
    }

cout<<m1;




return 0;

}
