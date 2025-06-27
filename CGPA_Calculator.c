// CGPA CALCULATOR
/* Grade_Point = Credit_Hour * Grade
   Cgpa = Sum_Of_Grade_Points / Total_Credit */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of subjects: ";
    cin >> n;

    string subject_name[n];
    float grade[n], credit[n];
    float total_grade_points = 0.0;
    float total_credits = 0.0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of subject " << i + 1 << endl;
        cout << "Subject name: ";
        cin >> subject_name[i];
        cout << "Grade (out of 10): ";
        cin >> grade[i];
        cout << "Credit hours: ";
        cin >> credit[i];

        total_grade_points += grade[i] * credit[i];
        total_credits += credit[i];
    }

    float gpa = total_grade_points / total_credits;

    cout << "\n------ Grade Report ------" << endl;
    cout << left << setw(16) << "Subject"
         << setw(11) << "Grade"
         << setw(11) << "Credits"
         << setw(16) << "Grade Points" << endl;

    for (int i = 0; i < n; i++) {
        cout << left << setw(16) << subject_name[i]
             << setw(11) << grade[i]
             << setw(11) << credit[i]
             << setw(16) << grade[i] * credit[i] << endl;
    }

    cout << "Total credits: " << total_credits << endl;
    cout << "Total grade points: " << total_grade_points << endl;

    cout << fixed << setprecision(2);
    cout << "Your CGPA for this semester is: " << gpa << endl;

    return 0;
}
