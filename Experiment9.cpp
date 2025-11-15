#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class FileOperations {
public:
    // Create file
    void createFile(string filename) {
        ofstream fout(filename.c_str());
        if (!fout) {
            cout << "Error creating file!" << endl;
            return;
        }
        cout << "Enter text for " << filename << " (end with ~):" << endl;
        char ch;
        while (cin.get(ch) && ch != '~')
            fout.put(ch);
        fout.close();
        cout << filename << " creation successful!" << endl;
    }

    // Copy file
    void copyFile(string src, string dest) {
        ifstream fin(src.c_str());
        ofstream fout(dest.c_str());
        if (!fin || !fout) {
            cout << "Errors opening file(s)!" << endl;
            return;
        }
        char ch;
        while (fin.get(ch))
            fout.put(ch);
        cout << "Copying successful! " << src << " -> " << dest << endl;
        fin.close();
        fout.close();
    }

    // Count digits and spaces
    void countDigitsAndSpaces(string filename) {
        ifstream fin(filename.c_str());
        if (!fin) {
            cout << "File not found!" << endl;
            return;
        }
        char ch;
        int digits = 0, spaces = 0;
        while (fin.get(ch)) {
            if (ch >= '0' && ch <= '9') digits++;
            else if (ch == ' ' || ch == '\n' || ch == '\t') spaces++;
        }
        cout << "\nTotal Digits: " << digits;
        cout << "\nTotal Spaces: " << spaces << endl;
        fin.close();
    }

    // Count total words
    void countWords(string filename) {
        ifstream fin(filename.c_str());
        if (!fin) {
            cout << "File not found!" << endl;
            return;
        }
        string word;
        int count = 0;
        while (fin >> word) count++;
        cout << "Total words: " << count << endl;
        fin.close();
    }

    // Count specific word occurrence
    void countWordOccurrence(string filename) {
        ifstream fin(filename.c_str());
        if (!fin) {
            cout << "File not found!" << endl;
            return;
        }
        string word, search;
        int count = 0;
        cout << "Enter word to be searched: ";
        cin >> search;
        while (fin >> word) {
            if (word == search) count++;
        }
        cout << "The word '" << search << "' occurred " << count << " times" << endl;
        fin.close();
    }
};

int main() {
    FileOperations f;
    int choice;
    string file1, file2;
    do {
        cout << "\nFile Operations\n";
        cout << "1. Create File\n";
        cout << "2. Copy File\n";
        cout << "3. Count Digits and Spaces\n";
        cout << "4. Count Words\n";
        cout << "5. Count Word Occurrence\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1:
                cout << "Enter filename: ";
                getline(cin, file1);
                f.createFile(file1);
                break;
            case 2:
                cout << "Enter source filename: ";
                getline(cin, file1);
                cout << "Enter destination filename: ";
                getline(cin, file2);
                f.copyFile(file1, file2);
                break;
            case 3:
                cout << "Enter filename: ";
                getline(cin, file1);
                f.countDigitsAndSpaces(file1);
                break;
            case 4:
                cout << "Enter filename: ";
                getline(cin, file1);
                f.countWords(file1);
                break;
            case 5:
                cout << "Enter filename: ";
                getline(cin, file1);
                f.countWordOccurrence(file1);
                break;
            case 6:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);
    return 0;
}
