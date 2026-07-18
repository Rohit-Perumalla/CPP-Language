#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void addData(const string &filename)
{
    ofstream file(filename);
    if (file.is_open())
    {
        string data;
        cout << "Enter data to add (will overwrite existing content):\n";
        cin.ignore();
        getline(cin, data);
        file << data << endl;
        file.close();
        cout << "Data added successfully!\n\n";
    }
    else
    {
        cout << "Error opening file.\n";
    }
}

void appendData(const string &filename)
{
    ofstream file(filename, ios::app);
    if (file.is_open())
    {
        string data;
        cout << "Enter data to append:\n";
        cin.ignore();
        getline(cin, data);
        file << data << endl;
        file.close();
        cout << "Data appended successfully!\n\n";
    }
    else
    {
        cout << "Error opening file.\n";
    }
}

void displayData(const string &filename)
{
    ifstream file(filename);
    if (file.is_open())
    {
        string line;
        cout << "File content:\n";
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
        cout << endl;
    }
    else
    {
        cout << "File not found.\n";
    }
}

void modifyData(const string &filename)
{
    ifstream file(filename);
    if (!file.is_open())
    {
        cout << "File not found.\n";
        return;
    }

    string content = "", line;
    while (getline(file, line))
    {
        content += line + "\n";
    }
    file.close();

    cout << "Current content:\n"
         << content << endl;

    string oldText, newText;
    cout << "Enter the text to replace: ";
    cin.ignore();
    getline(cin, oldText);
    cout << "Enter the replacement text: ";
    getline(cin, newText);

    size_t pos = content.find(oldText);
    if (pos != string::npos)
    {
        content.replace(pos, oldText.length(), newText);
        ofstream outFile(filename);
        outFile << content;
        outFile.close();
        cout << "Data modified successfully!\n\n";
    }
    else
    {
        cout << "Text not found in file.\n";
    }
}

int main()
{
    string filename = "data.txt";
    int choice;

    do
    {
        cout << "====== MENU ======\n";
        cout << "1. Add Data\n";
        cout << "2. Append Data\n";
        cout << "3. Modify Data\n";
        cout << "4. Display Data\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addData(filename);
            break;
        case 2:
            appendData(filename);
            break;
        case 3:
            modifyData(filename);
            break;
        case 4:
            displayData(filename);
            break;
        case 5:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
