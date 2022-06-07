#include<iostream>
#include<string.h>
using namespace std;
class student{
    // keeping the data memembers for student detail in private
    private: char name[10];
    int rno, sem;
    float percent;
    public: 
    // parameterised constructor taking arguments to input the details of student
    // automatically invokes when the object for the class student is created
    // stores the details of the student
    student(int R, char Name[10],int semester, float per){
        rno = R;
        strcpy(name, Name);
        sem = semester;
        percent = per;
    }
    // member function output() has the public access specifier as it is used to access the data members 
    // these data memebers have the private access specifier by deafault
    void output(){
      
        cout<<rno<<"\t\t"<<name<<"\t\t"<<sem<<"\t\t"<<percent<<endl;
    }
    // destructor for the class student
    // automatically gets called at the end of execution
    ~student(){}
};
class course{
    // class course consists of data members having the private access specifier 
    private:
    int id;
    char cname[10];
    char cincharge[10];
    public: 
    // parameterised constructor is used to store the course details
    // automatically invokes once the object for the class course is created
    course(int ID, char Coursename[10], char inch[10]){
        id = ID;
        strcpy(cname, Coursename);
        strcpy(cincharge, inch);
    }
    // member function courseoutput() has the public access specifier 
    // it is used to access the private data memebers of the class 
    // for displaying the course detail
    void courseoutput(){
        cout<<id<<"\t\t"<<cname<<"\t\t"<<cincharge<<endl; 
    }
    // destructor for class course
    // automatically invokes at the end of execution
    ~course(){
    }
};
int main(){
    // objects stud and crs for classes student and course respectively
    // passing the details through the object to the constructor
    student stud(1, "Samragyi", 4, 85);
    course crs(222, "HTML", "Bhoomi");
    cout<<"\t\t\t STUDENT MANAGEMENT SYSTEM \n";
    cout<<"\nRecord of the student...\n\n";
    cout<<"Rollno. \t Name \t Semester\t Percentage \n";
    // display student details
    stud.output();
    cout<<"\nCourse Record...\n\n";
    cout<<"Course ID\t Course Name\t Course Incharge\n";
    // display course details
    crs.courseoutput();
    return 0;
}