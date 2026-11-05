#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // İÊÍ ãáİ students.txt İí æÖÚ ÇáÅÖÇİÉ (append) áßí áÇ íÊã ãÓÍ ÇáÈíÇäÇÊ ÇáŞÏíãÉ ÚäÏ ÅÏÎÇá ØáÇÈ ÌõÏÏ
    ofstream outFile("students.txt", ios::app);

    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    char choice;
    char name[20];
    int id;
    float grade;

    do {
        // ÅÏÎÇá ÈíÇäÇÊ ÇáØÇáÈ
        cout << "Enter student name: ";
        cin >> ws; // áÊİÑíÛ ÇáÜ buffer ŞÈá ÇÓÊŞÈÇá ÇáÜ string
        cin.getline(name, 20);

        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter student grade: ";
        cin >> grade;

        // ßÊÇÈÉ ÇáÈíÇäÇÊ İí Çáãáİ ãÚ İÇÕá '$' ßãÇ ãØáæÈ İí ÇáÊÇÓß
        outFile << name << ", " << id << ", " << grade << " $" << endl;

        // ÇáÓÄÇá ÚãÇ ÅĞÇ ßÇä ÇáãÓÊÎÏã íÑíÏ ÅÖÇİÉ ØÇáÈ ÂÎÑ
        cout << "Do you want to add more records? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // ÅÛáÇŞ Çáãáİ ÈÚÏ ÇáÇäÊåÇÁ
    outFile.close();
    cout << "Records saved successfully to students.txt" << endl;

    return 0;
}
