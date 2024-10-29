// Created by Hadi Raza.
// Oct 29 2024
// Simple program to tell your grades and percentage.
#include <iostream>
using namespace std;

int main() {
    int total_marks, obt_marks;
    float percentage; // Changed to float for accurate calculation
    
    cout << "\nEnter Total Marks: ";
    cin >> total_marks;
    cout << "\nEnter Obtained Marks: ";
    cin >> obt_marks;
    
    // Ensure division results in a float value for accurate percentage calculation
    percentage = (static_cast<float>(obt_marks) / total_marks) * 100;
    
    // Determine grade based on percentage
    if (percentage >= 80) {
        cout << "\nYour grade is A1/A+";
    } else if (percentage >= 70) {
        cout << "\nYour grade is A";
    } else if (percentage >= 60) {
        cout << "\nYour grade is B";
    } else if (percentage >= 50) {
        cout << "\nYour grade is C";
    } else if (percentage >= 40) {
        cout << "\nYour grade is D";
    } else if (percentage >= 33) {
        cout << "\nYour grade is E";
    } else {
        cout << "\nYour grade is F";
    }
    
    // Display percentage
    cout << "\nYour Percentage is " << percentage << "%";
    return 0;
}
