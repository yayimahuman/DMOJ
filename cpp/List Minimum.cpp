#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{

    int i;

    cin >> i;
    int a[i];

    for(int j = 0; j < i; j++){
        cin >> a[j];
    }

    sort(a,a+i);

    for(int j = 0; j < i; j++){

        cout << a[j] << endl;

    }


}
