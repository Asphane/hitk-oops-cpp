#include<iostream>
using namespace std;

class B;
class A{
    int data1=0;

public:
    A() : data1(0) {}
    A(int data1){
        this->data1 = data1;
    }

    friend int add(A aObj, B bObj);
};

class B{
    int data2=0;

public:
    B() : data2(0) {}
    B(int data2){
        this->data2 = data2;
    }

    friend int add(A aObj, B bObj);
};

int add(A obja, B objb){
    return (obja.data1+objb.data2);
}

int main(){
    int data1;
    cout<<"Enter 1st data: ";
    cin>>data1;
    A objA(data1);
    int data2;
    cout<<"Enter 2nd data: ";
    cin>>data2;
    B objB(data2);

    cout<<"The sum is: "<<add(objA, objB)<<endl;
    return 0;
}


