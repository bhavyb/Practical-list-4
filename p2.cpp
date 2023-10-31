/* Write a C++ program to demonstrate use of Static Member Function. */
//220130318038
//Bhavy Bhuva
#include<iostream>
using namespace std;
class count
{
    int num;
    static int cou;
    public:
        void get(int a)
        {
            num=a;
            cou++;
        }
        static void getcou()
        {
            cout<<"value of count :: "<<cou<<endl;
        }
};
int count::cou;
int main()
{
    count c,a,b;
    a.get(100);
    b.get(200);
    c.get(300);
    a.getcou();
    b.getcou();
    c.getcou();
    return 0;
}