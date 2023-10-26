#include <iostream>
using namespace std;
void Amplification(int num);
int main()
{
    int num;
    cout << "Enter the number to Amplify: ";
    cin >> num;
    Amplification( num);
    return 0;
}
void Amplification(int num)
{
    int n=1;
    for ( int i = 1; i<=num; i++)
    {
        n=i;
       if(i%4==0)
       {
        n=i*10;
       }
       cout<<n;
       if(i<num)
       {
        cout<<", ";
       }
    }
    
}