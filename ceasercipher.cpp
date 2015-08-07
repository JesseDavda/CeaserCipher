#include <iostream>
#include <string>

using namespace std;

string encryptor(string word, int num);

int main() {
    string main_string;
    int numOfSpaces;

    cout << "Please enter a word you want encrypted" << endl;
    cin >> main_string;
    cout << "please enter the amount of spaces you want word to be encrypted by" << endl;
    cin >> numOfSpaces;

    cout << encryptor(main_string, numOfSpaces);
    cout << " " << endl;
}

string encryptor(string word, int num) {
    string main = word;
    int main_num = num, wordLength = word.length();

    for(int i = 0; i <= wordLength; i++) {
        char letter = main[i];
        int unicodeLetter = letter;

        int encryptedUnicode = unicodeLetter + main_num;

        if(encryptedUnicode > 123) {    // if the encrypted value is out of the A-Z alphabet then bring it back
            encryptedUnicode -= 26;
        } else if(encryptedUnicode < 97) {
            encryptedUnicode += 26;
        }

        char encryptedLetter = encryptedUnicode;
        main[i] = encryptedLetter;
    }

    return main;
}
