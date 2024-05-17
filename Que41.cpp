#include<iostream>
using namespace std;
class abc
{
public:
    int a=1,i=3,j=0;
    void cal()
    {
        while(i<=9)
        {
            j=0;
            while(j<1)
            {
                cout<<a<<",";
                a=a+i;
                j++;
            }
            i=i+2;
        }
    }
};
int main()
{
    abc o1;
    o1.cal();
}
