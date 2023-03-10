#include<iostream>
using namespace std;
int main()
{
    int div, dis, q, r;
    cout<<"Enter dividend & divisor= ";
    cin>>div>>dis;
    q= div/dis;
    r= div%dis;

    cout<<"Quotient= "<<q<<endl;
    cout<<"Remainder= "<<r<<endl;
    return 0;

}
