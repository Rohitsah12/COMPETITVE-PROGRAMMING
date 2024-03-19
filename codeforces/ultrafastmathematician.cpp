#include <iostream>
#include <string>

using namespace std;

int main() {
    // Read the input numbers
    string num1, num2;
    cin >> num1 >> num2;

    // Initialize an empty string to store the answer
    string result = "";

    // Iterate through the digits of the numbers and compare them
    for (int i = 0; i < num1.length(); ++i) {
        // If the digits are different, append '1' to the result
        if (num1[i] != num2[i]) {
            result += '1';
        }
        else {
            result += '0';
        }
    }
    cout << result << endl;

    return 0;
}
