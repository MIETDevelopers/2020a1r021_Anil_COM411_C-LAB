#include<iostream>
using namespace std;
class student{
    char name[20];
    int rno, sem;
    float percent;
    public: 
    student(){}

    void input(){
        cout<<"Roll no: ";
        cin>>rno;
        cout<<"Name: ";
        cin>>name;
        cout<<"Semester: ";
        cin>>sem;
        cout<<"Percentage: ";
        cin>>percent;
    }
    int returnroll(){
        return rno;
    }
    void output(){
      
        cout<<rno<<"\t\t"<<name<<"\t\t"<<sem<<"\t\t"<<percent<<endl;
    }
    ~student(){}
};
class course{
    int id;
    char cname[10];
    char cincharge[20];
    public: course(){}
    void courseinput(){
        cout<<"Course ID: ";
        cin>>id;
        cout<<"Course name: ";
        cin>>cname;
        cout<<"Course incharge: ";
        cin>>cincharge;
    }
    void courseoutput(){
        cout<<id<<"\t\t"<<cname<<"\t\t"<<cincharge<<endl; 
    }

    ~course(){}
};
int main(){
    student stud[2];
    course crs[3];
    cout<<"\t\t\t STUDENT MANAGEMENT SYSTEM \n";
    cout<<"Enter the records of the students...\n\n";
    int i;
    for(i=0; i<2; i++){
        stud[i].input();
    }
    cout<<"\nEnter the Course Records...\n\n";
    for(i = 0; i<3; i++){
        crs[i].courseinput();
    }
    cout<<"\nRecord of the students...\n\n";
    cout<<"Rollno. \t Name \t Semester\t Percentage \n";
    for(i=0; i<2; i++){
        stud[i].output();
    }
    cout<<"\nCourse Record...\n\n";
    cout<<"Course ID\t Course Name\t Course Incharge\n";
        for(i=0; i<3; i++){
            crs[i].courseoutput();
    }
    return 0;
}