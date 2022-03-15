#include <iostream>
#include "mat.hpp"
using namespace std;

int main() {
    int ROW, COL;
    char sym_1, sym_2;

    cout << "--------------------------------------------"
            "\n*** MAT GENERATOR **"
            "\n--------------------------------------------\n";

    cout << "Enter mat dimension (COL X ROW): ";
    cin >> COL >> ROW;
    cout << "Enter now first and second symbols: ";
    cin >> sym_1 >> sym_2;

    cout << "You have entered the next mat dimension: " << COL << " X " << ROW;
    cout << "\nYou have entered the next two symbols: " << sym_1 << " AND " << sym_2;
    cout << "\n--------------------------------------------\n";
    cout << "RESULT\n";
    cout << ariel::mat(COL, ROW, sym_1, sym_2);

    return 0;
}