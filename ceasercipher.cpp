#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>

using namespace std;

string encryptor(string word, int num);
string decryptor(string word, int num);

int main() {
    string main_string, choice, choice_two;
    int numOfSpaces;
    bool isRunning = true;

    ofstream file;

    cout << "Encrypt: 1" << endl;
    cout << "Decrypt: 2" << endl;
    cin >> choice;

    if(choice == "1") {

        cout << "Please enter a word you want encrypted" << endl;
        cin >> main_string;
        cout << "please enter the amount of spaces you want word to be encrypted by" << endl;
        cin >> numOfSpaces;

        file.open("ceaser.txt");
        cout << ceaser::encryptor(main_string, numOfSpaces);
        if(file.is_open()) {
            file << encryptor(main_string, numOfSpaces);
            file.close();
        } else {
            cout << "Im sorry i cannont seem to open the file" << endl;
        }
        cout << " " << endl;
        file.close();

    } else if(choice == "2") {

        ifstream File_two;
        File_two.open("ceaser.txt");

        while(isRunning == true) {
            cout << "File: 1" << endl;
            cout << "input: 2" << endl;
            cin >> choice_two;


            if(choice_two == "1") {
                if(File_two.is_open()) {
                    string line;
                    getline(File_two,line);
                    main_string = line;
                } else {
                    cout << "The file cannot be opened you will have to enter the values manually" << endl;
                    choice = "2";
                }

                cout << "please enter the amount of spaces the word was encrypted by: ";
                cin >> numOfSpaces;

                cout << ceaser::decryptor(main_string, numOfSpaces) << endl;

            } else if(choice_two == "2") {
                cout << "Please enter a word you want decrypted" << endl;
                cin >> main_string;
                cout << "please enter the amount of spaces the word was ecrypted by" << endl;
                cin >> numOfSpaces;

                cout << decryptor(main_string, numOfSpaces);
                cout << " " << endl;
            }
        }
    }

}
