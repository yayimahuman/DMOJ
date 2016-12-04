#include <iostream>
#include <string>
using namespace std;

string test(int x,string binary){
    while (x > 0){
        if (x % 2 == 1){
            binary = "1" + binary;
        }
        else{
            binary = "0" + binary;
        }
        x /= 2;
    }
    return binary;
}
string expand(string x){
    int len = x.length();
    if  (len % 4 != 0){
        for (int i = 0;i < 4 - len % 4; i++){
                x = "0"+x;
        }
    }
    len = x.length();

    for (int i = 1; i < len/4; i++){
        x.insert(i*4 + (i-1)," ");
    }

    return x;
}

int main(){

    int i;

    cin >> i;
    int a[i];

    for(int j = 0; j < i; j++){
        cin >> a[j];
    }

    for(int j = 0; j < i; j++){
        cout << expand(test(a[j],"")) <<endl;
    }

}
