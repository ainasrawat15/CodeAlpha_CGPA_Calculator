🎓 CGPA Calculator
A simple C++ program to calculate the CGPA (Cumulative Grade Point Average) of a student based on input grades and credit hours for each subject.

📌 Overview
This project allows students to input their subject names, grades (out of 10), and credit hours to compute their total grade points, total credits, and finally, the CGPA for the semester.

🧠 Key Concepts Used
Arrays

Loops

User input/output

GPA formula:
Grade Point = Grade × Credit Hours
CGPA = Sum of Grade Points / Total Credit Hours

Formatted table display using iomanip

💻 How to Run
Clone or Download the project folder.

Compile the C++ code using any C++ compiler:

bash

g++ cgpa_calculator.cpp -o cgpa
Run the executable:

bash

./cgpa
Input the number of subjects and their respective:

Subject name

Grade (out of 10)

Credit hours

View the formatted Grade Report and CGPA output.

🖥️ Sample Output
pgsql

enter the no. of subjects: 3

 enter details of subject1
subject name: Math
grade (out of 10): 9
credit hours: 4

 enter details of subject2
subject name: Physics
grade (out of 10): 8
credit hours: 3

 enter details of subject3
subject name: English
grade (out of 10): 7
credit hours: 2

 ------grade report------
subject         grade      credits    gradepoints     
Math            9          4          36              
Physics         8          3          24              
English         7          2          14              
total credits:9
total grade points:74
your Cgpa for this semester is:8.22
📝 Author
Sania Rawat
Email: [You can insert your email or GitHub here]

✅ Note: Ensure to fix the small typo in the code — replace Cgpa with gpa in the final CGPA print statement.

cpp

cout<<"\n your Cgpa for this semester is:"<<gpa<<endl;
