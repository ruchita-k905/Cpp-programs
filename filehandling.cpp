#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Declare an output file stream
    fstream outFile;
    outFile.open("sample.txt",ios::out);

    // Check if the file opened successfully
    if (!outFile) {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    // Write information to the file
    cout << "Writing information to the file..." << endl;
    outFile<<"hello i am Ruchita "<<endl;
    outFile << "This is a sample text file." << endl;
    outFile << "It contains two lines of text." << endl;

    // Close the file
    outFile.close();
    cout << "File closed after writing." << endl;

    // Declare an input file stream
    outFile.open("sample.txt",ios::in);

    // Check if the file opened successfully
    if (!outFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }

    // Read information from the file
    cout << "\nReading information from the file:" << endl;
    string line;
    while (getline(outFile, line)) {
        cout << line << endl;
    }

    // Close the file
    outFile.close();
    cout << "File closed after reading." << endl;

    return 0;
}
