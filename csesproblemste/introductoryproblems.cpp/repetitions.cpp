#include <iostream>
#include <string>

using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    int maxRepetition = 1;
    int currentRepetition = 1;

    // Iterate through the sequence starting from the second character
    for (int i = 1; i < sequence.length(); i++) {
        // If the current character is equal to the previous character,
        // increment the current repetition length
        if (sequence[i] == sequence[i - 1]) {
            currentRepetition++;
        } else {
            // Update the maximum repetition length if needed
            maxRepetition = max(maxRepetition, currentRepetition);
            // Reset the current repetition length
            currentRepetition = 1;
        }
    }

    // Update the maximum repetition length if needed (for the last repetition)
    maxRepetition = max(maxRepetition, currentRepetition);

    cout << maxRepetition << endl;

    return 0;
}
