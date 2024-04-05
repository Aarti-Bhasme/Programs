#include <iostream>
using namespace std;

class Complex
{
    int real,img;
    public:
    Complex()
    {
        
    }
    friend void operator>>(istream &in, Complex &c);
    friend void operator<<(ostream &out,Complex &b);
};
void operator>>(istream &in, Complex &c)
{
    cout<<"Enter the real and imaginary part: "<<endl;
    in>>c.real>>c.img;
}
void operator<<(ostream &out, Complex &b)
{
    out<<b.real<<"+"<<b.img<<"i";
}
int main()
{
    Complex c1;
    cin>>c1;
    cout<<c1;
}
