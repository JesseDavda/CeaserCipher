#include <iostream>
#include <string>
#include <fstream>

namespace ceaser {
    string decryptor(string word, int num) {
        string de_main = word;
        int de_main_num = num, wordLength = word.length();

        for(int i = 0; i <= wordLength; i++) {
            char letter = de_main[i];
            int unicodeLetter = letter;

            int decryptedUnicode = unicodeLetter - de_main_num;

            if(decryptedUnicode > 123) {    // if the encrypted value is out of the A-Z alphabet then bring it back
                decryptedUnicode -= 26;
            } else if(decryptedUnicode < 97) {
                decryptedUnicode += 26;
            }

            char decryptedLetter = decryptedUnicode;
            de_main[i] = decryptedLetter;
        }

        return de_main;
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
}
