#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    Complex(int real,int img)
    {
        (*this).real=real;
        this->img=img;
    }
    Complex operator-(Complex &c)
    {
        real=real-c.real;
        img=img-c.img;
    }
    
    Complex operator-(int num)
    {
        real=real-num;
        img=img;
    }
    
    friend Complex operator-(int num , Complex &c);
    
    void Display()
    {
        if(img>0)
            cout<<"Complex number is: "<<real<<"-"<<img<<"i"<<endl;
        else
            cout<<"Complex number is: "<<real<<img<<"i"<<endl;
    }
};
Complex operator-(int num , Complex &c)
{
    c.real=c.real-num;
    c.img=c.img;
}
int main()
{
    Complex c1(3,4);
    Complex c2(5,6);
    
    c1-c2;  //c1.operator+(c2)
    c1.Display();
    
    Complex c3(2,3);
    c3-5; //c1.oprator(5)
    c3.Display();
    
    Complex c4(4,5);
    5-c4; //5.operator+(c1)  //operator+(5,c1)
    c4.Display();
}
