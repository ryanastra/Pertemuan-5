#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Silahkan masukan jumlah bintang pertama: ";
    cin >> n;

    int i = n;
    while (i > 0) {
        int j = 0;
        while (j < i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i--;

    }

    return 0;

}

