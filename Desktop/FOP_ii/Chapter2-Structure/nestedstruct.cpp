#include <iostream>
#include <string>

using namespace std;

// First struct to store individual question data
struct Question {
    string questionText;
    string options[3];
    int correctAnswer;
};

// Second struct that contains an array of the first struct
struct Quiz {
    Question questions[5]; // Array of Question structs
};

int main() {
    // Create a Quiz struct and initialize questions
    Quiz quiz = {
        {
            {"What is the smallest country?", {"USA", "India", "Vatican City"}, 3},
            {"What's the biggest animal in the world?", {"Elephant", "Blue whale", "Great white shark"}, 2},
            {"How many elements are there in the periodic table?", {"118 elements", "119 elements", "120 elements"}, 1},
            {"Which planet is known as the Red Planet?", {"Earth", "Mars", "Jupiter"}, 2},
            {"Who developed the theory of relativity?", {"Isaac Newton", "Albert Einstein", "Nikola Tesla"}, 2}
        }
    };

    int score = 0;

    // Loop through questions (outer loop)
    for (int i = 0; i < 5; i++) {
        cout << quiz.questions[i].questionText << endl;

        // Loop through options (inner loop)
        for (int j = 0; j < 3; j++) {
            cout << j + 1 << ". " << quiz.questions[i].options[j] << endl;
        }

        cout << "Choose 1-3: ";
        int answer;
        cin >> answer;

        if (answer == quiz.questions[i].correctAnswer) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Incorrect!" << endl;
        }
        cout << endl;
    }

    // Display final score
    cout << "Your final score: " << score << " out of 5" << endl;

    return 0;
}
