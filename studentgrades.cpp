#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int studentID;
    float grades[5];
    string subjects[5]; 
    float sum, average;

    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter student ID: ";
    cin >> studentID;

    cout << "Enter name of subject 1: ";
    cin >> subjects[0];
    cout << "Enter grade for " << subjects[0] << ": ";
    cin >> grades[0];
    
    cout << "Enter name of subject 2: ";
    cin >> subjects[1];
    cout << "Enter grade for " << subjects[1] << ": ";
    cin >> grades[1];
    
    cout << "Enter name of subject 3: ";
    cin >> subjects[2];
    cout << "Enter grade for " << subjects[2] << ": ";
    cin >> grades[2];
    
    cout << "Enter name of subject 4: ";
    cin >> subjects[3];
    cout << "Enter grade for " << subjects[3] << ": ";
    cin >> grades[3];
    
    cout << "Enter name of subject 5: ";
    cin >> subjects[4];
    cout << "Enter grade for " << subjects[4] << ": ";
    cin >> grades[4];

    sum = grades[0] + grades[1] + grades[2] + grades[3] + grades[4];
    average = sum / 5;

    cout << "\n--- Student Information ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "\n--- Grades ---" << endl;
    cout << subjects[0] << ": " << grades[0] << endl;
    cout << subjects[1] << ": " << grades[1] << endl;
    cout << subjects[2] << ": " << grades[2] << endl;
    cout << subjects[3] << ": " << grades[3] << endl;
    cout << subjects[4] << ": " << grades[4] << endl;
    cout << "\nTotal Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}