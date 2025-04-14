/*
    File Name: line_numbers.cpp
    Description: This program reads a text file, and numbers each line,
                 then it writes the numbered text to a new output file.
    Author: Fatima Rizvi
    Date: Feb 6 2025
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
    string inputFileName, outputFileName;

    // Prompt user for the input file name:
    cout << "Enter the name of the input file: ";
    getline(cin, inputFileName);

    // Open input file:
    ifstream inputFile(inputFileName);

    // Check if the input file opened successfully:
    if (!inputFile) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }

    // Prompt user for the output file name:
    cout << "Enter the name of the output file: ";
    getline(cin, outputFileName);

    // Open output file:
    ofstream outputFile(outputFileName);

    // Check if output file opened successfully:
    if (!outputFile) {
        cerr << "Error: Unable to open output file." << endl;
        return 1;
    }

    string line;
    int lineNumber = 1;

    // Read each line from the input file and write to the output file 
    // with numbered lines:
    while (getline(inputFile, line)) {
        outputFile << setw(5) << lineNumber << ". " << line << endl;
        lineNumber++;
    }

    // Close files:
    inputFile.close();
    outputFile.close();

    cout << "Processing complete. Numbered text saved to " << outputFileName 
         << endl;

    return 0;
}