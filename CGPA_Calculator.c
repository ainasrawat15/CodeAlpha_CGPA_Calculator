//CGPA CALCULATOR
/*Grade_Point=Credit_Hour*Grade
Cgpa=Sum_Of_Credit/Total_Credit*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int n;
cout<<"enter the no. of subjects:";
cin>>n;
string subject_name[n];
float grade[n],credit[n];
float total_grade_points=0.0;
float total_credits=0.0;
for(int i=0;i<n;i++){
cout<<"\n enter details of subject"<<i+1<<endl;
cout<<"subject name:";
cin>>subject_name[i];
cout<<"grade (out of 10):";
cin>>grade[i];
cout<<"credit hours:";
cin>>credit[i];
total_grade_points+=grade[i]*credit[i];
total_credits+=credit[i];
}
float gpa=total_grade_points/total_credits;
cout<<"\n ------grade report------"<<endl;
cout<<left<<setw(16)<<"subject"
<<setw(11)<<"grade"
<<setw(11)<<"credits"<<setw(16)<<"gradepoints"<<endl;
for(int i=0;i<n;i++){
cout<<left<<setw(16)<<subject_name[i]
<<setw(11)<<grade[i]
<<setw(11)<<credit[i]
<<setw(16)<<grade[i]*credit[i]<<endl;
}
cout<<"total credits:"<<total_credits<<endl;
cout<<"total grade points:"<<total_grade_points;
cout<<fixed<<setprecision(2);
cout<<"\n your Cgpa for this semester is:"<<Cgpa<<endl;
return 0;
}
