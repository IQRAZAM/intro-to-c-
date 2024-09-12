/*#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>

// Function to display riddles
void displayRiddle(std::vector<std::string>& riddles, std::vector<std::string>& correctAnswers) {
    if(riddles.empty()) {
        return;
    }

    int riddleIndex = rand() % riddles.size();
    std::cout << "Riddle:\n" << riddles[riddleIndex] << "\n";
    std::string answer;
    std::getline(std::cin, answer);

    if(answer == correctAnswers[riddleIndex]) {
        std::cout << "Correct! You are amazing.\n";
    } else {
        std::cout << "Sorry, that's not correct. Try again.\n";
    }

    riddles.erase(riddles.begin() + riddleIndex);
    correctAnswers.erase(correctAnswers.begin() + riddleIndex);
}

// Function to display ASCII art of a mystery box
void displayMysteryBox(std::string link) {
    std::cout << "\n________\n";
    std::cout << "|       |\n";
    std::cout << "|   ?   |\n";
    std::cout << "|       |\n";
    std::cout << "|_______|\n";
    std::cout << "Click here to open the mystery box: " << link << "\n";
}

int main() {
    srand(time(0));

    std::vector<std::string> riddles = {
        "I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?",
        "I have keys but no locks. I have space but no room. You can enter, but can't go outside. What am I?",
        "What has to be broken before you can use it?",
        "What has many keys, but can't open a single lock?",
        "What has a heart that doesn't beat?",
        "What has a neck but no head?"
    };

    std::vector<std::string> correctAnswers = {"An Echo", "A Keyboard", "An Egg", "A Piano", "An Artichoke", "A Bottle"};

    while(!riddles.empty()) {
        displayRiddle(riddles, correctAnswers);
    }

    std::string link = "https://www.google.com/search?q=";
    for(int i = 0; i < 5; i++) {
        link += (char)('a' + rand() % 26);
    }

    displayMysteryBox(link);

    system(("start " + link).c_str());

    return 0;
}*/


//**************practice 2 ************
/*#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>

// Function to display riddles
void displayRiddle(std::vector<std::string>& riddles, std::vector<std::string>& correctAnswers) {
    if(riddles.empty()) {
        return;
    }

    int riddleIndex = rand() % riddles.size();
    std::cout << "Riddle:\n" << riddles[riddleIndex] << "\n";
    std::string answer;
    std::getline(std::cin, answer);

    if(answer == correctAnswers[riddleIndex]) {
        std::cout << "Correct! You are amazing.\n";
    } else {
        std::cout << "Sorry, that's not correct. Try again.\n";
    }

    riddles.erase(riddles.begin() + riddleIndex);
    correctAnswers.erase(correctAnswers.begin() + riddleIndex);
}

// Function to display word guessing game
void displayWordGuessingGame(std::vector<std::string>& words) {
    if(words.empty()) {
        return;
    }

    std::string word = words[rand() % words.size()];
    std::string guessedWord(word.length(), '_');
    std::string guess;

    while(true) {
        std::cout << "Guess a letter: ";
        std::cin >> guess;

        if(guess.length() > 1) {
            std::cout << "Please guess only one letter at a time.\n";
            continue;
        }

        bool correctGuess = false;

        for(size_t i = 0; i < word.length(); i++) {
            if(word[i] == guess[0]) {
                guessedWord[i] = guess[0];
                correctGuess = true;
            }
        }

        if(correctGuess) {
            std::cout << "Correct! The word is: " << guessedWord << "\n";
        } else {
            std::cout << "Incorrect. The word is: " << guessedWord << "\n";
        }

        if(guessedWord == word) {
            std::cout << "Congratulations! You guessed the word: " << word << "\n";
            break;
        }

        words.erase(words.begin() + rand() % words.size());
    }
}

// Function to display logical question
void displayLogicalQuestion() {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int answer;

    std::cout << "Question: What is " << num1 << " + " << num2 << "?\n";
    std::cin >> answer;

    if(answer == num1 + num2) {
        std::cout << "Correct! You are amazing.\n";
    } else {
        std::cout << "Sorry, that's not correct. Try again.\n";
    }
}

int main() {
    srand(time(0));

    std::vector<std::string> riddles = {
        "I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?",
        "I have keys but no locks. I have space but no room. You can enter, but can't go outside. What am I?",
        "What has to be broken before you can use it?",
        "What has many keys, but can't open a single lock?",
        "What has a heart that doesn't beat?",
        "What has a neck but no head?"
    };

    std::vector<std::string> correctAnswers = {"An Echo", "A Keyboard", "An Egg", "A Piano", "An Artichoke", "A Bottle"};

    std::vector<std::string> words = {
        "Apple",
        "Banana",
        "Cherry",
        "Date",
        "Fig",
        "Grape",
        "Lemon",
        "Lime",
        "Mango",
        "Orange",
        "Peach",
        "Pineapple",
        "Plum",
        "Pomegranate",
        "Raspberry",
        "Strawberry",
        "Watermelon"
    };

    int gameSelection;

    do {
        std::cout << "Choose a game:\n";
        std::cout << "1. Riddle\n";
        std::cout << "2. Word Guessing Game\n";
        std::cout << "3. Logical Question\n";
        std::cout << "0. Exit\n";
        std::cin >> gameSelection;

        switch(gameSelection) {
            case 1:
                displayRiddle(riddles, correctAnswers);
                break;
            case 2:
                displayWordGuessingGame(words);
                break;
            case 3:
                displayLogicalQuestion();
                break;
            case 0:
                std::cout << "Thanks for playing!\n";
                break;
            default:
                std::cout << "Invalid selection. Please try again.\n";
                break;
        }
    } while(gameSelection != 0);

    return 0;
}     */



//^******************practice 3********
/*#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>

// Function to display riddles
void displayRiddle(std::vector<std::string>& riddles, std::vector<std::string>& correctAnswers) {
    if(riddles.empty()) {
        return;
    }

    int riddleIndex = rand() % riddles.size();
    std::cout << "Riddle:\n" << riddles[riddleIndex] << "\n";
    std::string answer;
    std::getline(std::cin, answer);

    if(answer == correctAnswers[riddleIndex]) {
        std::cout << "Correct! You are amazing.\n";
    } else {
        std::cout << "Sorry, that's not correct. Try again.\n";
    }

    riddles.erase(riddles.begin() + riddleIndex);
    correctAnswers.erase(correctAnswers.begin() + riddleIndex);
}

// Function to display word guessing game
void displayWordGuessingGame(std::vector<std::string>& words) {
    if(words.empty()) {
        return;
    }

    std::string word = words[rand() % words.size()];
    std::string guessedWord(word.length(), '_');
    std::string guess;

    while(true) {
        std::cout << "Guess a letter: ";
        std::cin >> guess;

        if(guess.length() > 1) {
            std::cout << "Please guess only one letter at a time.\n";
            continue;
        }

        bool correctGuess = false;

        for(size_t i = 0; i < word.length(); i++) {
            if(word[i] == guess[0]) {
                guessedWord[i] = guess[0];
                correctGuess = true;
            }
        }

        if(correctGuess) {
            std::cout << "Correct! The word is: " << guessedWord << "\n";
        } else {
            std::cout << "Incorrect. The word is: " << guessedWord << "\n";
        }

        if(guessedWord == word) {
            std::cout << "Congratulations! You guessed the word: " << word << "\n";
            break;
        }

        words.erase(words.begin() + rand() % words.size());
    }
}

// Function to display logical question
void displayLogicalQuestion() {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int answer;

    std::cout << "Question: What is " << num1 << " + " << num2 << "?\n";
    std::cin >> answer;

    if(answer == num1 + num2) {
        std::cout << "Correct! You are amazing.\n";
    } else {
        std::cout << "Sorry, that's not correct. Try again.\n";
    }
}

int main() {
    srand(time(0));

    std::vector<std::string> riddles = {
        "I speak without a mouth and hear without ears. I have no body, but I come alive with the wind. What am I?",
        "I have keys but no locks. I have space but no room. You can enter, but can't go outside. What am I?",
        "What has to be broken before you can use it?",
        "What has many keys, but can't open a single lock?",
        "What has a heart that doesn't beat?",
        "What has a neck but no head?"
    };

    std::vector<std::string> correctAnswers = {"An Echo", "A Keyboard", "An Egg", "A Piano", "An Artichoke", "A Bottle"};

    std::vector<std::string> words = {
        "Apple",
        "Banana",
        "Cherry",
        "Date",
        "Fig",
        "Grape",
        "Kiwi",
        "Lemon",
        "Mango",
        "Orange",
        "Peach",
        "Plum",
        "Raspberry",
        "Strawberry",
        "Watermelon"
    };

    int game;

    while(true) {
        std::cout << "Welcome to the Game of Riddles! What game would you like to play?\n";
        std::cout << "1. Riddle\n";
        std::cout << "2. Word Guessing Game\n";
        std::cout << "3. Logical Question\n";
        std::cout << "4. Exit\n";
        std::cin >> game;

        switch(game) {
            case 1:
                displayRiddle(riddles, correctAnswers);
                break;
            case 2:
                displayWordGuessingGame(words);
                break;
            case 3:
                displayLogicalQuestion();
                break;
            case 4:
                std::cout << "Thank you for playing! Have a great day!";
                return 0;
            default:
                std::cout << "Invalid input. Please try again.\n";
                break;
        }
    }

    return 0;
}*/


//*****************practice 4 ******
//having three level details 
/*#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>

// Function to display riddles
void displayRiddle(std::vector<std::string>& riddles, std::vector<std::string>& correctAnswers) {
    if(riddles.empty()) {
        return;
    }

    int riddleIndex = rand() % riddles.size();
    std::cout << "Riddle:\n" << riddles[riddleIndex] << "\n";
    std::string answer;
    std::getline(std::cin, answer);

    if(answer == correctAnswers[riddleIndex]) {
        std::cout << "Correct! You are amazing.\n";
        removeHurdle();
    } else {
        std::cout << "Sorry, that's not correct. Try again.\n";
    }

    riddles.erase(riddles.begin() + riddleIndex);
    correctAnswers.erase(correctAnswers.begin() + riddleIndex);
}

// Function to display word guessing game
void displayWordGuessingGame(std::vector<std::string>& words) {
    if(words.empty()) {
        return;
    }

    std::string word = words[rand() % words.size()];
    std::string guessedWord(word.length(), '_');
    std::string guess;

    while(true) {
        std::cout << "Guess a letter: ";
        std::cin >> guess;

        if(guess.length() > 1) {
            std::cout << "Please guess only one letter at a time.\n";
            continue;
        }

        bool correctGuess = false;

        for(size_t i = 0; i < word.length(); i++) {
            if(word[i] == guess[0]) {
                guessedWord[i] = guess[0];
                correctGuess = true;
            }
        }

        if(correctGuess) {
            std::cout << "Correct! The word is: " << guessedWord << "\n";
            removeHurdle();
        } else {
            std::cout << "Incorrect. The word is: " << guessedWord << "\n";
        }

        if(guessedWord == word) {
            std::cout << "Congratulations! You guessed the word: " << word << "\n";
            break;
        }

        words.erase(words.begin() + rand() % words.size());
    }
}

// Function to display logical question
void displayLogicalQuestion() {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int answer;

    std::cout << "Question: What is " << num1 << " + " << num2 << "?\n";
    std::cin >> answer;

    if(answer == num1 + num2) {
        std::cout << "Correct! You are amazing.\n";
        removeHurdle();
    } else {
        std::cout << "Sorry, that's not correct. Try again.\n";
    }
}

// Function to remove a hurdle
void removeHurdle() {
    static int hurdles = 5;
    if(hurdles > 0) {
        std::cout << "Hurdle removed! " << hurdles << " hurdles remaining.\n";
        hurdles--;
    }
}

// Function to display the box and path
void displayBox() {
    std::cout << "------------------------------------\n";
    std::cout << "|                                  |\n";
    std::cout << "|                                  |\n";
    std::cout << "|                                  |\n";
    std::cout << "|                                  |\n";
    std::cout << "|                                  |\n";
    std::cout << "------------------------------------\n";
 return 0;
}*/



//*************practice 5 *********
/*#include <iostream>
#include <string>
#include <vector>
#include <ctime>

// Function to generate a random number between min and max (inclusive)
int get_random(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Create a vector of hurdles
    std::vector<std::string> hurdles(5);
    for (int i = 0; i < 5; i++) {
        hurdles[i] = "HURDLE " + std::to_string(i + 1);
    }

    // Display the initial game state
    std::cout << "Welcome to the game!\n";
    std::cout << "There is a box in front of you with a path leading to it.\n";
    std::cout << "However, there are some hurdles in the way.\n";
    std::cout << "Answer the following logical questions correctly to remove the hurdles one by one.\n";
    std::cout << "Hurdles remaining: ";
    for (const auto& hurdle : hurdles) {
        std::cout << hurdle << " ";
    }
    std::cout << "\n";

    // Loop through the hurdles and ask questions until they are all removed
    int num_hurdles = 5;
    while (num_hurdles > 0) {
        // Generate a random number between 1 and 10
        int num = get_random(1, 10);

        // Ask the user to guess if the number is odd or even
        std::cout << "Is the number " << num << " odd? (y/n) ";
        char answer;
        std::cin >> answer;

        // Check if the answer is correct
        if ((num % 2 == 0 && answer == 'n') || (num % 2 != 0 && answer == 'y')) {
            // Remove the first hurdle
            std::cout << "Correct! The first hurdle has been removed.\n";
            hurdles.erase(hurdles.begin());
            num_hurdles--;
        } else {
            std::cout << "Sorry, that's incorrect. Try again.\n";
        }

        // Display the updated game state
        std::cout << "Hurdles remaining: ";
        for (const auto& hurdle : hurdles) {
            std::cout << hurdle << " ";
        }
        std::cout << "\n";
    }

    // Display the final game state
    std::cout << "Congratulations! You have removed all the hurdles and reached the box.\n";

    return 0;
}*/


//************practice  6 *******
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

// Function to generate a random number between min and max (inclusive)
int get_random(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Function to display the current game state
void display_game_state(int line_to_remove, int num_lines) {
    for (int i = 1; i <= num_lines; i++) {
        if (i == line_to_remove) {
            continue;
        }
        std::cout << "|          |\n";
    }
}

int main() {
    // Set the seed for the random number generator
    srand(time(NULL));

    // Set the number of lines in the box
    const int num_lines = 12;

    // Set the initial line to remove
    int line_to_remove = 1;

    // Set the number of correct answers
    int num_correct = 0;

    // Set the maximum number of questions
    const int max_questions = 10;

    // Loop until the maximum number of questions has been reached
    for (int i = 0; i < max_questions; i++) {
        // Generate a random number between 1 and 10
        int num = get_random(1, 10);

        // Ask the user to guess the number
        std::cout << "Guess a number between 1 and 10: ";
        int guess;
        std::cin >> guess;

        // Check if the guess is correct
        if (guess == num) {
            // Increment the number of correct answers
            num_correct++;

            // Update the line to remove
            line_to_remove = (num_correct - 1) % num_lines + 1;

            // Display the current game state
            display_game_state(line_to_remove, num_lines);

            // Inform the user that the guess is correct
            std::cout << "Correct!\n";
        } else {
            // Inform the user that the guess is incorrect
            std::cout << "Incorrect. The correct answer is " << num << ".\n";
        }
    }

    return 0;
}
