#include<iostream>
#include<string.h>
using namespace std;
class course{
    // class course consists of data members having the private access specifier 
    private:
    int id;
    char cname[10];
    char cincharge[10];
    int credit;
    public: 
    // parameterised constructor is used to store the course details
    // automatically invokes once the object for the class course is created
    course(int ID, char Coursename[10], char inch[10], int cre){
        id = ID;
        strcpy(cname, Coursename);
        strcpy(cincharge, inch);
        credit = cre;
    }
    void update(){
        cout<<"Enter the details...\n";
        cout<<"Course Name: ";
        cin>>cname;
        cout<<"Course Incharge: ";
        cin>>cincharge;
        cout<<"Course Credits: ";
        cin>>credit;
    }
    // member function courseoutput() has the public access specifier 
    // it is used to access the private data memebers of the class 
    // for displaying the course detail
    void courseoutput(){
        cout<<id<<"\t\t"<<cname<<"\t\t"<<cincharge<<"\t\t\t"<<credit<<endl; 
    }
    // destructor for class course
    // automatically invokes at the end of execution
    ~course(){
    }
};
int main(){
    // objects crs1, crs2, crs3 for class course 
    // passing the details through the object to the constructor
    course crs1(222, "HTML", "Bhoomi", 5);
    course crs2(223, "JS", "Nikita", 5);
    course crs3(224, "Python", "Diya", 5);
    cout<<"\t\t\t COURSE RECORDS \n";
    cout<<"Course ID\t Course Name\t Course Incharge\t Course Credits\n";
    // display course details
    crs1.courseoutput();
    crs2.courseoutput();
    crs3.courseoutput();
    cout<<"Do you want to update any course record? Y/N: ";
    char ch;
    cin>>ch;
    if(ch=='Y'){
        cout<<"Enter the Course ID for the course you want to update: ";
        int n;
        cin>>n;
        if(n==222){
            crs1.update();
            cout<<"Successfully updated! \n";
        }else if(n==223){
            crs2.update();
            cout<<"Successfully updated! \n";
        }else if(n==224){
            crs3.update();
            cout<<"Successfully updated! \n";
        }else{
            cout<<"NO Course found!\n";
        }
        cout<<"Displaying all records...\n\n";
        cout<<"Course ID\t Course Name\t Course Incharge\t Course Credits\n";
        crs1.courseoutput();
        crs2.courseoutput();
        crs3.courseoutput();
    }else{
        cout<<"Terminating program!!!";
    }
    return 0;
}