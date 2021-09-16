#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int num = 0;
    cout << "Please enter a number to check for odd/even\n";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The value " << num << " is a even number";
    }
    else
        cout << "The value " << num << " is odd";
}