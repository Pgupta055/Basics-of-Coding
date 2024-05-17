#include<iostream>
using namespace std;
class abc
{
public:
    int a=1,b,res;
    void cal()
    {
        while(a<=25)
        {
            res=res+(1/a);
            a=a+3;
        }
        cout<<res;
    }
};
int main()
{
    abc o1;
    o1.cal();
}
