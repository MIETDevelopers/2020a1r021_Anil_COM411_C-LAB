#include<iostream>
#include<string.h>
#include<algorithm>
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
    student(){
       
    }
    void input(){
    cout<<"Roll no: ";
    cin>>rno;
    cout<<"Name: ";
    cin>>name;
    cout<<"Semester: ";
    cin>>sem;
    cout<<"Percentage:";
    cin>>percent;
}
int searchroll(){
    return rno;
}
void update(){
    cout<<"Roll no: ";
    cin>>rno;
    cout<<"Name: ";
    cin>>name;
    cout<<"Semester: ";
    cin>>sem;
    cout<<"Percentage:";
    cin>>percent;
}
void remove(){
    // deleting the details of the student by assigning them Zero or null values
    rno = 000;
    strcpy(name, "NULL");
    sem = 000;
    percent = 0.000;
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
int main(){
    student *stud= new student[3]; //  dynamic memory allocation
    cout<<"\t\t\t STUDENT RECORD \n";
    cout<<"Enter records...\n";
    for(int i=0; i<3; i++){
        stud[i].input();
    }
    char ch;
    do{
    cout<<"To update student record press 1.\n";
    cout<<"To delete student record press 2. \n";
    cout<<"To display all records press 3. \n";
    int choice,n, k=0;
    cin>>choice;
    if(choice == 1){
        cout<<"Enter the roll number of student you want to update: ";
        cin>>n;
        for(int i=0; i<3; i++){
        if(stud[i].searchroll() == n){
            cout<<"Record found!!\n";
            cout<<"Update details...\n";
            stud[i].update(); 
            k++;
            break;
        }
    }
    if(k ==0){
        cout<<"No record found!";
    }
    }
    k=0;
    if(choice == 2){
        cout<<"Enter the roll number of student you want to delete: ";
        cin>>n;
        for(int i=0; i<3; i++){
        if(stud[i].searchroll() == n){
            stud[i].remove();
            k++;
        }
    }if(k==0){
        cout<<"No record found!";
    }
    }
    if (choice==3){
    cout<<"\nRecord of the students...\n\n";
    cout<<"Rollno. \t Name \t Semester\t Percentage \n";
    // display student details
    for(int i = 0; i<3; i++){
    stud[i].output();
    }
    }
    cout<<"Do you want to continue? Y/N:  ";
    cin>>ch;
    } while(ch=='Y');
    return 0;
}