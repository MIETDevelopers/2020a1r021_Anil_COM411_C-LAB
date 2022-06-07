#include<iostream>
using namespace std;
class student{
    int rno;
    char name[10];
    float percent;
    int sem;
    char branch[10];
public: void input(){
    cout<<"Roll no: ";
    cin>>rno;
    cout<<"Name: ";
    cin>>name;
    cout<<"Branch: ";
    cin>>branch;
    cout<<"Semester: ";
    cin>>sem;
    cout<<"Percentage:";
    cin>>percent;
}
int searchroll(){
    return rno;
}
float returnpercent(){
    return percent;
}
void output(){
    cout<<"Roll no \t Name\t Branch\t Semester \t Percentage\n";
    cout<<rno<<"\t\t"<<name<<"\t\t"<<branch<<"\t\t"<<sem<<"\t\t"<<percent<<endl;
}
};


int main()
{
     student s[3];
    int i,n;
    cout<<"\t\t\t STUDENT RECORD \n";
    cout<<"Enter the records of students...\n\n";
    for(i=0; i<3; i++){
        s[i].input();
    }
    cout<<"\nSearch details...\n\n";
    cout<<"Enter the roll number of the student you want the details of: ";
    cin>>n;
    int k=0, j=0;
    for(i=0; i<3; i++){
        if(s[i].searchroll() == n){
            cout<<"Record found!!\n";
            cout<<"Student details are...\n";
            s[i].output(); 
            k++;
            break;
        }
    }
    if(k ==0){
        cout<<"No record found!";
    }
        cout<<"Enter the roll number of student you want to display the result of: ";
        cin>>n;
        for(i=0; i<3; i++){
            if(s[i].searchroll()==n){
                cout<<"The result percentage of Roll no "<<n<<" is: "<<s[i].returnpercent()<<"% \n";
                j++;
            }
        }
        if( j ==0){
                cout<<"No result found!\n";
            }
}