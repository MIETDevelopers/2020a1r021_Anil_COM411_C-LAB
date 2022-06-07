#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int roll_no;
    float mmarks, smarks, emarks;

public:
    student()
    {
        name = "";
        roll_no = mmarks = smarks = emarks = 0;
    }
    void input()
    {

        cin >> name >> roll_no >> mmarks >> smarks >> emarks;
    }
    void print()
    {
        cout << "Name :" << name << endl
             << "Roll no: " << roll_no << endl
             << "Marks in Maths: " << mmarks << endl
             << "Marks in Science: " << smarks << endl
             << "Marks in English: " << emarks << endl;
    }
    float avg()
    {
        cout << "Average marks of student: ";
        float mark = (mmarks + smarks + emarks) / 3;
        cout << mark << endl;
        return mark;
    }
    ~student()
    {
    }
};
class course
{
private:
    string cname;
    string code;
    string in_charge;

public:
    course()
    {
        cname = code = in_charge = "";
    }
    void input()
    {

        cin >> cname >> code >> in_charge;
    }
    void display()
    {
        cout << "Course name: " << cname << endl
             << "course code: " << code << endl
             << "Course in-charge: " << in_charge << endl;
    }
    ~course()
    {
    }
};

int main()
{

    cout << "For student class......." << endl;
    int i, n;

    cout << "enter the number of students: " << endl;
    cin >> n;
    student s[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter name, roll no , marks in maths, science and english of student " << i + 1 << endl;
        s[i].input();
        cout << "Details of student" << i + 1 << endl;
        s[i].print();
        s[i].avg();
    }

    cout << "For course class......." << endl;
    cout << "enter the number of courses: " << endl;
    cin >> n;
    course c[n];
    for (i = 0; i < n; i++)
    {
        cout << "enter name, code , in-charge of course " << i + 1 << endl;
        c[i].input();
        cout << "Details of course" << i + 1 << endl;
        c[i].display();
    }
    return 0;
}