#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string main;
    ofstream file;

    cout << "Please enter a word you would like to be saved to a file: ";
    cin >> main;

    file.open("ceaser.txt" || ios::binary);
    if(file.is_open()) {
        file >> main;
        file.close();
    } else {
        cout << "im sorry the file could not be opened" << endl;
    }

    cout << main << endl;

    ifstream file_read;

    string line;

    while(getline(file_read, line)){
        cin >> line;
    }

    cout << line << endl;
}
