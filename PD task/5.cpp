#include <iostream>
using namespace std;
bool is_prime(int num);
int main()
{
    int num;
    cout << "Enter Number: ";
    cin >> num;
    cout << is_prime(num);
}
bool is_prime(int num)
{
    for (int i = 2; i < num || i > num; i++)
    {
        bool is_prime = true;
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    if (num == 0 || num == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
