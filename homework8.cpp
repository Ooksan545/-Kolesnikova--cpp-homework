#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word;
    cout << "Введите строку: ";
    cin >> word;


    for (int i = 0; i < word.length(); i++) {
        for (int j = i + 1; j < word.length(); j++) {
            if (word[i] == word[j]) { 
                cout << "false";
                return 0;
            }
        }
    }

    cout << "true";
    return 0;
}
