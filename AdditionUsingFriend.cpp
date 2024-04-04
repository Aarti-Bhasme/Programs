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
    friend void length(Length &l);
};
void length(Length &l)
{
    l.length=l.length+10;
    cout<<l.length;
}
int main()
{
    Length l1;
    length(l1);
}
