#include <iostream>
#include <string>
using namespace std;

int main(){

    bool is;
    string s;
    getline(cin,s);

    if (s.find("True") != string::npos) {
        is = true;
    }
    else {
        is = false;
    }

    if ((s.length()-4)/4%2 == 0){
        if (is){
            cout << "True";
        }
        else{
            cout << "False";
        }
    }
    else{
        if (is){
            cout << "False";
        }
        else{
            cout << "True";
        }
    }

}
