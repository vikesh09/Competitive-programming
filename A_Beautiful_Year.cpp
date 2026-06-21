#include <iostream>
using namespace std;

bool hasDistinctDigits(int y) {
    bool seen[10] = {false};

    while (y > 0) {
        int d = y % 10;   
        if (seen[d]) return false; 
        seen[d] = true;
        y /= 10;   
    }
    return true;
}

int main() {
    int y;
    cin >> y;

    y++;  

    while (true) {
        if (hasDistinctDigits(y)) {
            cout << y << endl;
            break;
        }
        y++;
    }
    return 0;
}
