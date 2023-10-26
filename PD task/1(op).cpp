#include <iostream>
using namespace std;
void printStars(int rowSize);
;
int main()
{
    int rowSize;
    cout << "Enter desired number of rows: ";
    cin >> rowSize;
    printStars(rowSize);
    return 0;
}
void printStars(int rowSize)
{
    int row, col;
    for (int row = 0; row <= rowSize; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}