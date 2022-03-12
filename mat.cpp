#include <iostream>
#include "mat.hpp"

using namespace std;

string ariel::mat(int COL, int ROW, char symbol_1, char symbol_2) {
    const int start = 33; const int end = 126;
    if (COL % 2 == 0 || ROW % 2 == 0) {throw invalid_argument("Mat size is always odd");}
    if (COL < 0 || ROW < 0) {throw invalid_argument("Mat size is always positive");}
    if (!(symbol_1 <= end && symbol_1 >= start && symbol_2 <= end && symbol_2 >= start)) {throw invalid_argument("Bad inputted chars");}
    string ans;
    for (int x = 0; x < ROW; x++, ans += '\n') {
        for (int y = 0; y < COL; y++) {
            if ((min(min(x, y), min(ROW - 1 - x, COL - 1 - y)) % 2) == 0) {ans += symbol_1;}
            else {ans += symbol_2;}
        }
    }
    return ans;
}
