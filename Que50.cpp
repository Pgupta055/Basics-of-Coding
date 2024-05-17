#include<iostream>
using namespace std;
class abc
{
public:
    int a=1,b=1,i=4;
    void cal()
    {
        while(i>0)
        {
            a=1;
            while(a<=i)
            {
                cout<<"*";
                a++;
            }
            b=1;
            while(b<=1)
            {
                cout<<"\n";
                b++;
            }
            i--;
        }
    }
};
int main()
{
    abc o1;
    o1.cal();
}
