#include <iostream>
using namespace std;

class Overload
{
    int a,b,temp;
    
    public:
    Overload(int a,int b)
    {
        (*this).a=a;
        (*this).b=b;
    }
    friend void Length(Overload &s);
};
  void  Length (Overload &s)
    {
        s.temp=s.a;
        s.a=s.b;
        s.b=s.temp;
        cout<<s.a<<" "<<s.b;
    }
int main()
{
    Overload o1(10,20);
    Length(o1);
}
