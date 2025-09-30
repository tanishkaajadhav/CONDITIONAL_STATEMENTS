// Calculate-student's-grade
// 80-100  O (Outstanding) 
// 70-79  A+ 
// 60-69  A 
// 55-59  B+ 
// 50-54  B 
// 45-49  C 
// 40-44  P (Pass) 
// 0-39  F (Fail)

#include <iostream>
using namespace std;

class StudentGrade
{
private:
    int marks;

public:
    StudentGrade(int iMarks)
    {
        marks = iMarks;
    }

    string GetGrade()
    {
        if (marks >= 80 && marks <= 100)
        {
            return "O ";
        }
        else if (marks >= 70 && marks <= 79)
        {
            return "A+ ";
        }
        else if (marks >= 60 && marks <= 69)
        {
            return "A ";
        }
        else if (marks >= 55 && marks <= 59)
        {
            return "B+ ";
        }
        else if (marks >= 50 && marks <= 54)
        {
            return "B ";
        }
        else if (marks >= 45 && marks <= 49)
        {
            return "C ";
        }
        else if (marks >= 40 && marks <= 44)
        {
            return "P ";
        }
        else
        {
            return "F ";
        }
    }

    void DisplayGrade()
    {
        if (marks < 0 || marks > 100)
        {
            cout << "Invalid marks entered! \n";
        }
        else
        {
            cout << "Your grade is : " << GetGrade();
        }
    }
};

int main()
{
    int iMarks;
    cout << "Enter marks : ";
    cin >> iMarks;

    StudentGrade student(iMarks);
    student.DisplayGrade();

    return 0;
}

/*
OUTPUT
Testcase 1: 
Enter marks : 85
Your grade is : O

Testcase 2:
Enter marks : 43
Your grade is : P

Testcase 3:
Enter marks : 34
Your grade is : F

*/