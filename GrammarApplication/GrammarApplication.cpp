// Final Project for Comprehensive Programming Course :: Grammar Application
// ---------------------------------------------
// Project: Grammar Application
// Student : Maximus Olivares
// Date : July 29, 2025
// Description : This program helps tutor users on grammar.
// ---------------------------------------------


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char runAgain; // Holds user's choice to run program again
    struct testA {
        string aQuestion; // Holds question
        string aAnswer; // Holds answer
    };

    struct testB {
        string bQuestion; // Holds question
        string bAnswer; // Holds answer
    };

    struct testC {
        string cQuestion; // Holds question
        string cAnswer; // Holds answer
    };

    vector<testA> testsA = { // Vector to hold test questions and answers
        {"The game was intense, we cheered until our voices cracked.", "The game was intense; we cheered until our voices cracked."},
        {"He studied Latin every night, his vocabulary grew rapidly.", "He studied Latin every night, and his vocabulary grew rapidly." },
        {"I created a new mythic word, it sounded like ancient thunder.", "I created a new mythic word. It sounded like ancient thunder."},
        {"U.S. history fascinates me, Reconstruction was the most surprising part.", "U.S. history fascinates me, especially Reconstruction which was the most surprising part."},
        {"She likes designing apps, he prefers statistical modeling.", "She likes designing apps. He prefers statistical modeling."}
    };

    vector<testB> testsB = { // Vector to hold test questions and answers for run-on sentences
        {"The sun set over the horizon it painted the sky in hues of orange and pink.", "The sun set over the horizon, painting the sky in hues of orange and pink."},
        {"She loves to read she spends hours in the library.", "She loves to read; she spends hours in the library."},
        {"He runs every morning he believes it keeps him healthy.", "He runs every morning because he believes it keeps him healthy."},
        {"The concert was amazing everyone enjoyed the performance.", "The concert was amazing, and everyone enjoyed the performance."},
        {"I enjoy hiking it helps me clear my mind.", "I enjoy hiking because it helps me clear my mind."}
    };

    vector<testC> testsC = { // Vector to hold test questions and answers for sentence fragments
        {"Although the rain was heavy.", "Although the rain was heavy, we decided to go for a walk."},
        {"Running through the park.", "Running through the park, I saw many people enjoying the weather."},
        {"Because she loves music.", "Because she loves music, she plays the guitar every evening."},
        {"After the meeting ended.", "After the meeting ended, we all went out for dinner."},
        {"While waiting for the bus.", "While waiting for the bus, I read a book."}
    };

    do {

		char choice = 0; // Holds user's choice of grammar topic

		cout << "Welcome to Grammar Practice!" << endl; // Welcome message
		cout << "Press '1' to start" << endl; // Prompt user to start the program
		if (cin.get() == '1') { // Check if user input is '1'

			cout << "\nA. Comma Splice" << endl; // Display options for grammar topics
            cout << "B. Run-on Sentence" << endl;
            cout << "C. Sentence Fragment\n" << endl;


			cin >> choice; // Get user's choice of grammar topic
            cin.ignore(); // Clear the newline character from the input buffer
        }
        else {
            cout << "\nBye Bye!" << endl;
            return 1; // Exit if input is not '1'
		}

		switch (choice) { // Switch case to handle user's choice of grammar topic
         
		    case 'A': 
		    case 'a': { // Case for Comma Splice
                cout << "\nYou chose Comma Splice." << endl;
                cout << "Please correct the following sentences:\n" << endl;
				for (const auto& test : testsA) { // Loop through each test in testsA vector
                    cout << "\nQuestion: " << test.aQuestion << endl;
                    cout << "Your Answer: ";
                    string userAnswer;
                    getline(cin, userAnswer);
					if (userAnswer == test.aAnswer) { // Check if user's answer matches the correct answer
                        cout << "\nCorrect!" << endl;
                    } else {
                        cout << "\nIncorrect The correct answer is: " << test.aAnswer << endl;
                    }
                }
                break;
			 }

                case 'B': 
		        case 'b': { // Case for Run-on Sentence
                cout << "\nYou chose Run-on Sentence." << endl;
                cout << "Please correct the following sentences:\n" << endl;
				for (const auto& test : testsB) { // Loop through each test in testsB vector
                    cout << "\nQuestion: " << test.bQuestion << endl;
                    cout << "Your Answer: ";
                    string userAnswer;
                    getline(cin, userAnswer);
					if (userAnswer == test.bAnswer) { // Check if user's answer matches the correct answer
                        cout << "\nCorrect!" << endl;
                    } else {
                        cout << "\nIncorrect. The correct answer is: " << test.bAnswer << endl;
                    }
                }
				break;
                }
                    case 'C': 
		            case 'c': { // Case for Sentence Fragment
                         cout << "\nYou chose Sentence Fragment." << endl;
                         cout << "Please correct the following sentences:\n" << endl;
						 for (const auto& test : testsC) { // Loop through each test in testsC vector
                             cout << "\nQuestion: " << test.cQuestion << endl;
                             cout << "Your Answer: ";
                             string userAnswer;
                             getline(cin, userAnswer);
							 if (userAnswer == test.cAnswer) { // Check if user's answer matches the correct answer
                                 cout << "\nCorrect!" << endl;
                             }
                             else {
                                 cout << "\nIncorrect. The correct answer is: " << test.cAnswer << endl;
                             }
                         }

                     }
                
         
         }


		cout << "\n\nThank you for participating in the Grammar Practice!" << endl; // Thank user for participation

        // Ask user if run again
        cout << "\nDo you want to run the program again?" << endl;
        cout << "Enter Y for YES or any other key for NO: ";
        cin >> runAgain;
        cin.ignore();

        system("cls");
        cout << endl;
    } while (toupper(runAgain) == 'Y');

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging men