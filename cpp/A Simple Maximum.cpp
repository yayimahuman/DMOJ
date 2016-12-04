#include <iostream>
#include <string>
using namespace std;


int main() {

    int x;
    cin >> x;
    int a[x];
    int min = 255;
    int max = 0;

    for (int i = 0; i < x; i++){
        cin >> a[i];
        if (a[i] > max){
            max = a[i];
        }
        else if (a[i] < min){
            min = a[i];
        }
    }
    cout << min << " " << max;

}
