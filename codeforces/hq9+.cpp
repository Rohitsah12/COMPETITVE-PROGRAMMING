#include <bits/stdc++.h>
using namespace std;

string will_produce_output(string program) {
    for (char ch : program) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    string program;
    cin >> program;

    string output = will_produce_output(program);
    cout << output << endl;

    return 0;
}
