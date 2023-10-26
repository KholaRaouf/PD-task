#include <iostream>
using namespace std;
bool is_prime(int num);
int primeMultiply(int totalPrimeNum);

int main()
{
   int totalPrimeNum;
   cout<<"Enter Number: ";
   cin>>totalPrimeNum;
   cout << primeMultiply(totalPrimeNum);
   return 0;
}
int primeMultiply(int totalPrimeNum){
    int count = 0;
    int total = 1;
    int num = 2;


    while(count<totalPrimeNum){
        if(is_prime(num) == 1){
            total*=num;
            count++;
            // cout<<num<<" is prime\n";
        }
        num = num + 1;
    }

    return total;
}

bool is_prime(int num)
{
    // lets say num is prime
    bool is_prime = true;

    if(num==0 || num==1)
    {
        return false;
    }    
    
    // loop to check if num is prime
    for (int i = 2; i <= num/2; ++i) {
        if (num % i == 0) {
        is_prime = false;
        break;
        }
    }

    return is_prime;   
}