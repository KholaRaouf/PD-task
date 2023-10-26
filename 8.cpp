#include <iostream>
#include<iomanip>
using namespace std;

void cargo(int num);

int main()
{
    int num;
    cout << "Enter the count of cargo for transportation: ";
    cin >> num;
    cargo(num);
    return 0;
}

void cargo(int num)
{
    float No_miniBus = 0;
    float No_truck = 0;
    float No_train = 0;
    float tons = 0;
    float totalTons = 0;
    for (int i = 1; i <= num; i++)
    {
        cout << "Enter the tonnage of cargo " << i << ": ";
        cin >> tons;
        totalTons += tons;
        if (tons <= 3)
        {
            No_miniBus = No_miniBus + tons;
        }
        else if (tons <= 11)
        {
            No_truck = No_truck + tons;
        }
        else
        {
            No_train = No_train + tons;
        }
    }
     cout << fixed;
     cout << setprecision(2);
    cout<<((No_miniBus * 200) + (No_train * 120) + (No_truck * 175)) / totalTons <<endl;
    cout<< (No_miniBus / totalTons) * 100 <<"%" << endl;
    cout<< (No_truck / totalTons) * 100 <<"%" << endl;
    cout<< (No_train / totalTons) * 100 <<"%" << endl;
}