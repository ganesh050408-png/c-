#include<iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    float m1, m2, m3;

public:

    void input()
    {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks of 3 Subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    float average()
    {
        return (m1 + m2 + m3) / 3;
    }

    void display()
    {
        cout << "\nRoll No: " << roll;
        cout << "\nName: " << name;
        cout << "\nMarks: " << m1 << ", " << m2 << ", " << m3;
        cout << "\nAverage: " << average();
        cout << "\n----------------------";
    }
};

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[100];   // array of students

    // 🔹 Input using for loop
    for(int i = 0; i < n; i++)
    {
        cout << "\nEnter details for Student " << i+1 << endl;
        s[i].input();
    }

    // 🔹 Display using for loop
    cout << "\n\nStudent Records:\n";

    for(int i = 0; i < n; i++)
    {
        s[i].display();
    }

    return 0;
}