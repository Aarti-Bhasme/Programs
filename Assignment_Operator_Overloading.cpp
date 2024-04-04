// Online C++ compiler to run C++ program online
#include <iostream>
#include<string.h>
using namespace std;

class String
{
    string name;
    public:
    String(string name)
    {
        this->name=name;
    }
    String operator==(String & n)
    {
        if(name==n.name)
            cout<<"Both strings are same"<<endl;
        else
            cout<<"Strings are not same"<<endl;
    }
};
int main()
{
    String s1("Vivek");
    String s2("Vivek");
    
    s1==s2; //s1.operator==(s2)
}
