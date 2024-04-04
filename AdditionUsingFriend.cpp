#include<iostream>
using namespace std;

class Length
{
    int length;
    public:
    Length()
    {
        length=0;
    }
    friend void printLength(Length &l);
};
void printLength(Length &l)
{
    l.length=l.length+10;
    cout<<l.length;
}
int main()
{
    Length l1;
    printLength(l1);
}
