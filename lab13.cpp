#include <iostream>
using namespace std;
class A {
    protected:
    float length;
    public:
    void inputLength(){
        cout<<"enter the length of a rectangle"<<endl;
        cin>>length;
    }
};
class B:public A{
    protected:
    float breadth;
    public:
    void inputBreadth(){
        cout<<"enter the breadth of the rectangle"<<endl;
        cin>>breadth;
    }
};
class C: public B{
    public:
    void area(){
        cout<<"area of rectangle :"<<length*breadth<<endl;
    }
};
int main(){
    C obj;
    obj.inputLength();
    obj.inputBreadth();
    obj.area();
    return 0;
}