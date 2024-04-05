#include <iostream>
using namespace std;

class Swap
{
    int num;
    public:
    Swap(int num)
    {
        (*this).num=num;
    }
    friend void Swap1(Swap &, Swap &);
};
void Swap1(Swap &s1, Swap &s2)
{
    int temp;
    temp=s1.num;
    s1.num=s2.num;
    s2.num=temp;
    cout<<s1.num<<" "<<s2.num;
}
int main() {
    Swap s1(30);
    Swap s2(50);
    Swap1(s1,s2);
}