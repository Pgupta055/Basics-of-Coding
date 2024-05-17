#include<iostream>
using namespace std;
class abc
{
public:
    int a,res,c,old;
    void input()
    {
        cout<<"enter any no:";
        cin>>a;
        old=a;
    }
    void cal()
    {
        while(a>0)
        {
            c=a%10;
            a=a/10;
            res=res+(c*c*c);
        }
        if(res==old)
        {
            cout<<"no is armstrong";
        }
        else
        {
            cout<<"no is not armstrong";
        }
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}
