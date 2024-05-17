#include<iostream>
using namespace std;
class abc
{
public:
    int a,b,i=1,count=0;
    void input()
    {
        printf("enter number:");
        cin>>a;
    }
    void cal()
    {
        while(i<=a)
        {
            if(a%i==0)
            {
                printf("%d\n",i);
                i++;
                count++;
            }
            else
            {
                i++;
            }
        }
        printf("no of factors:%d",count);
    }
};
int main()
{
    abc o1;
    o1.input();
    o1.cal();
}
