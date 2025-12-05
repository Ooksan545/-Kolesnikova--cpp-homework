#include <iostream>

using namespace std;

int main ()
{
    int x;
    cout << "Введите число: ";
    cin >> x;

    int original = x;   
    int reversed = 0;   

    while (x > 0) {
        int digit = x % 10;        
        reversed = reversed * 10 + digit;  
        x /= 10;                   
    }

    if (original == reversed)
        cout << "true";
    else
        cout << "false";

    return 0;
}
