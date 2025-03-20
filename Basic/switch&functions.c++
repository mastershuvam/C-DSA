/*
q: total rs 1330
how many need 100 notes
how many need 50 notes
how many need 20 notes
how many need 10 notes
how many need 5 coin
how many need 1 coin

using switch case

*/


#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter Total rs: ";
    cin >> n;

    int remainingNote = n; 

    cout << "Minimum notes required:\n";

    switch (remainingNote >= 100) {
        case 1:
            cout << "100 Rs notes: " << remainingNote / 100 << endl;
            remainingNote %= 100;
    }
    switch (remainingNote >= 50) {
        case 1:
            cout << "50 Rs notes: " << remainingNote / 50 << endl;
            remainingNote %= 50;
    }
    switch (remainingNote >= 20) {
        case 1:
            cout << "20 Rs notes: " << remainingNote / 20 << endl;
            remainingNote %= 20;
    }
    switch (remainingNote >= 10) {
        case 1:
            cout << "10 Rs notes: " << remainingNote / 10 << endl;
            remainingNote %= 10;
    }
    switch (remainingNote >= 5) {
        case 1:
            cout << "5 Rs coin: " << remainingNote / 5 << endl;
            remainingNote %= 5;
    }
    switch (remainingNote >= 1) {
        case 1:
            cout << "1 Rs coin: " << remainingNote / 1 << endl;
            remainingNote %= 1;
    }

    return 0;
}
