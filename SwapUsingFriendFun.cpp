#include <iostream>
using namespace std;

class Swap
{
    int a,b,temp;
    
    public:
    Swap(int a,int b)
    {
        (*this).a=a;
        (*this).b=b;
    }
    friend void Swap1(Swap &s);
};
  void  Swap1 (Swap &s)
    {
        s.temp=s.a;
        s.a=s.b;
        s.b=s.temp;
        cout<<s.a<<" "<<s.b;
    }
int main()
{
    Swap o1(10,20);
    Swap1(o1);
}

