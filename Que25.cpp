#include<iostream>
using namespace std;
class abc
{
public:
    int a,b,i=1,c;
    void input()
    {
       printf("enter base:");
       cin>>a;
       printf("enter power:");
       cin>>b;
       c=a;
    }
    void cal()
    {
        while(i<b)
        {
            a=a*c;
            i++;
        }
        printf("result:%d",a);
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}

