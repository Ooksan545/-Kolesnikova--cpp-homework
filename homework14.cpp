#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<bool> formBooleanSequence(const vector<string>& input) {
    vector<bool> result;
    bool current = true; // начинаем с true

    for (const string& s : input) {
        result.push_back(current);
        if (s == "flick") {
            current = !current; 
        }
    }

    return result;
}

int main() {
    vector<string> input = {"codewars", "flick", "code", "wars"};

    vector<bool> output = formBooleanSequence(input);

    for (bool b : output) {
        cout << (b ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}
