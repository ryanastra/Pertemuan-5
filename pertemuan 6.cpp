#include <iostream>

using namespace std;

int main() {
    int n;

    // Ask the user for the number of asterisks
    cout<< "Enter the number of asterisks to print: ";
    cin>>n;

    for (int i = 0; i < n; ++i) {
        if ((i + 1) % 2 == 0) {
            cout << "*";
        }
        else {
            cout << i+1;
        }
    }

    cout<<endl;

    return 0;

}
