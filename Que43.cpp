#include<iostream>
using namespace std;
class abc
{
public:
    int a=0,i=1,j=0,z;
    void cal()
    {
        cout<<a<<",";
        cout<<i<<",";
        while(j<6)
        {
            z=i;
            i=i+a;
            a=z;
            cout<<i<<",";
            j++;
        }
    }
};
int main()
{
    abc o1;
    o1.cal();
}
