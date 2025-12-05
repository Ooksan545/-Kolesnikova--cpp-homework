#include <iostream>
#include <string>
using namespace std;

int value(char r) {
    switch(r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToDecimal(string s) {
    int total = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int curr = value(s[i]);
        int next = (i + 1 < n) ? value(s[i + 1]) : 0;

        if (curr < next) {
            total += (next - curr);
            i++; 
        } else {
            total += curr;
        }
    }

    return total;
}

int main() {
    string s;
    cout << "Введите римское число: ";
    cin >> s;

    int result = romanToDecimal(s);
    cout << "Десятичное число: " << result;

    return 0;
}
