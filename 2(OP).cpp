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
    for (int row = 1; row <= rowSize; row++)
    {
        for (int j = rowSize - row; j > 0; j--)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int col = 1; col < rowSize; col++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << " ";
        }
        for (int row = rowSize -col; row >= 1; row--)
        {
            cout << "*";
        }
        cout << endl;
    }
}