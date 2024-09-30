#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayResults(int score) {
    if (score <= 5) {
        cout << "You are an Introvert! You enjoy spending time alone or with a few close friends." << endl;
    } else if (score <= 10) {
        cout << "You are an Ambivert! You have a balance of introverted and extroverted traits." << endl;
    } else {
        cout << "You are an Extrovert! You love being around people and enjoy social interactions. Me too! Please if you see this hire me.." << endl;
    }
}

int main() {
    int score = 0;
    char answer;

    cout << "Welcome to the Personality Quiz!" << endl;
    cout << "Please answer the following questions by typing the corresponding letter:" << endl;

    // Questions and options
    vector<pair<string, vector<char>>> questions = {
        {"1. Do you prefer to work alone or in a team?\n  a) Alone\n  b) In a team\n", {'a', 'b'}},
        {"2. How do you feel about social gatherings?\n  a) Excited\n  b) Anxious\n", {'a', 'b'}},
        {"3. Do you enjoy deep conversations?\n  a) Yes\n  b) No\n", {'a', 'b'}},
        {"4. Would you rather read a book than go out?\n  a) Yes\n  b) No\n", {'a', 'b'}},
        {"5. Do you find it easy to meet new people?\n  a) Yes\n  b) No\n", {'a', 'b'}}
    };

    // Loop through each question
    for (const auto& question : questions) {
        cout << question.first;  // Display the question
        cin >> answer;           // Get user input

        // Increase score based on the answer
        if (answer == 'a') {
            score += 1; // Introverted tendencies
        } else if (answer == 'b') {
            score += 2; // Extroverted tendencies
        } else {
            cout << "Invalid input! Please answer with 'a' or 'b'." << endl;
        }
    }

    // Display the results
    cout << "\nYour total score is: " << score << endl;
    displayResults(score);

    return 0;
}
