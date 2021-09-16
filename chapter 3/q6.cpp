#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
/*Write a program that prompts the user to enter three integer values, and
then outputs the values in numerical sequence separated by commas. So,
if the user enters the values 10 4 6, the output should be 4, 6, 10. If two
values are the same, they should just be ordered together. So, the input
4 5 4 should give 4, 4, 5.*/
int main()
{
    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    cout << "Please Enter the three digits separated by space: \n";
    cin >> val1 >> val2 >> val3;

    int smallest = 0;
    int middle = 0;
    int largest = 0;

    if (val1 <= val2 && val1 <= val3)
    {
        smallest = val1;
        if (val2 <= val3)
        {
            middle = val2;
            largest = val3;
        }
        else{
            middle = val3;
            largest = val2;

        }
    }

    else if (val2 <= val1 && val2 <= val3){

        smallest = val2;
    if (val1 <= val3)
    {
        middle = val1;
        largest = val3;
    }else{
        middle = val3;
        largest = val1;
        
    }


    }
    else
    {
        smallest = val3;
        if (val1 <= val2)
        {
            middle = val1;
            largest = val2;
        }
        else{
            middle = val2;
            largest = val1;
        }
    }
    cout << "value sorted :" << smallest << middle << largest ;
    return 0;
}