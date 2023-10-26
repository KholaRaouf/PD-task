#include<iostream>
using namespace std;
int TriangularNumber(int num);
main()
{
     int num, result;
     cout<<"Enter number of Triange: ";
     cin>>num;
    result= TriangularNumber(num);
 cout<<"Dots in the Triangle: "<<result;
}
int TriangularNumber(int num)
{
    int n1=0, n2=1, next;
    for (int i = 1; i<=num; i++)
    {
        next=n1+n2;
        n1=next;
        n2=n2+1;
    }
    return next;
}