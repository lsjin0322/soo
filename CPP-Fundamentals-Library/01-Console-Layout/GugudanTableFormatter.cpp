#include <iostream>
#include <iomanip> 

using namespace std;

void printGugudan() {

    for (int i = 2; i <= 9; i++) {
        cout << i << "단" << "\t"; 
    }
    cout << endl;

    for (int i = 2; i <= 9; i++) {
        cout << "====" << "\t";
    }
    cout << endl;


    for (int j = 1; j <= 9; j++) {
        for (int i = 2; i <= 9; i++) {

            cout << i << "x" << j << "=" << right << setw(2) << i * j << "\t";
        }
        cout << endl;
    }
}

int main() {
    printGugudan();
    return 0;
}
