#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int scores[SIZE];

    cout << "Teacher Score Analyzer\n";
    cout << "Enter the scores (0-99 for " << SIZE << " students:\n";

    // Input scores
    for (int i = 0; i < SiZE; ++i) {
        cout << "Student " << i + 1 << " score: ";
        cin >> scores[i];
        while (scores[i] < 0 || scores[i] > 99) {
            cout << "Invalid. Enter a value between 0 and 99: ";
            cin >> scores[i];
        }
    }

    int sum = 0;
    int passCount = 0;
    int lowest = score[0];
    int highest = score[0];

    // Process scores
    for (int i = 0; i < SIZE; ++i) {
        int s = scores[i];
        sum += s;

        // Count passing students (70 or better)
        if (s >= 70) {
            passCount++;
        }

        // Find lowest and highest without sorting
        if (s < lowest) {
            lowest = s;
        }
        if (s > highest) {
            highest = s;
        }
    }

    double average = static_cast<double>(sum) / SIZE;

    // Output results
    cout << "\n=== Results ===\n";
    cout << "sum of scores: " << sum << endl;
    cout << "average score: " << average << endl;
    cout << "Number of students passing (70 and above): " << passCount << endl;
    cout << "lowest score: " << lowest << endl;
    cout << "Highest score: " << highest << endl;

    return 0;
}
