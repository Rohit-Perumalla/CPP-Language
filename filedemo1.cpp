#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string filename = "rohit.txt";
    string data;
    ofstream outFile(filename);
    if (outFile.is_open())
    {
        outFile << "this is en17 batch B." << endl;
        outFile << "NAME: p.rohit" << endl;
        outFile << "ROLL NO :92460118694." << endl;
        outFile.close();
        cout << "data written to succesfully." << endl;
    }
    else
    {
        cout << "unable to open file for writting." << endl;

        return 1;
    }
    ifstream inFile(filename);
    if (inFile.is_open())
    {
        cout << "reading from file:" << filename << endl;
        while (getline(inFile, data))
        {
            cout << data << endl;
        }
        inFile.close();
    }
    else
    {
        cout << "unable to open file for reading ." << endl;
        return 1;
    }
    return 0;
}