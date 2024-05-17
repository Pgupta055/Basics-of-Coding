#include<iostream>
using namespace std;
class abc
{
public:
    int a=44,i,c,res=0;
    void cal()
    {
        while(a>0)
        {
            c=a%10;
            a=a/10;
            res=res+c;
        }
        cout<<res;
    }
};
int main()
{
    abc o1;
    o1.cal();
}
