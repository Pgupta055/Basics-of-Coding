#include<iostream>
using namespace std;
class abc
{
public:
    int a=1,i=1,res=1;
    void cal()
    {
        while(i<=7)
        {
            a=i;
            res=1;
            while(a>0)
            {
                res=res*a;
                a=a-1;
            }
            cout<<res;
            i++;
            cout<<"\n";
        }
    }
};
int main()
{
    abc o1;
    o1.cal();
}

