#include <iostream>
#include <string>
using namespace std;


int main(){

    int i;

    cin >> i;
    long a[i];
    long b[i];
    long product[i];

    for(int j = 0; j < i; j++){
        cin >> a[j];
        cin >> b[j];
        cin >> product[j];

    }
    for(int j = 0; j < i; j++){
        if (a[j] * b[j] == product[j]){
            cout << "POSSIBLE DOUBLE SIGMA" << endl;
        }
        else {
            cout << "16 BIT S/W ONLY" << endl;
        }
    }


}
