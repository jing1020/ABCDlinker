#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <string.h>

using namespace std;

string cleanupStr(string text) {
    for(string::iterator it = text.begin(); it != text.end(); ++it) {
        if(*it == ',' || *it == '\n' ) {
            *it = '\t';
        }
    }
    return text;
}

string dedup(string text) {
    for(string::iterator it = text.begin(); it != text.end(); ++it) {
        if(*it == ',' || *it == '\n' ) {
            *it = '\t';
        }
    }
    return text;
}

int main() {
//    string inputName;
//    cin >> inputName;
    ifstream inputFile ("/Users/fengjiang/Documents/jingjing/ABCDlinker/input2.txt");



    string input;
    getline (inputFile, input, (char) inputFile.eof());

    input = cleanupStr(input);
    input = dedup(input);

    cout << input << endl;

}

