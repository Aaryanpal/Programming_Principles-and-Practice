#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string s1, s2, s3;

    cout << "Please enter three strings separated by spaces\n";
    cin >> s1 >> s2 >> s3;

    string firstp;
    string secondp;
    string thirdp;
    if (s1 <= s2 && s1 <= s3)
    {
        firstp = s1;
        if (s2 <= s3)
        {
            secondp = s2;
            thirdp = s3;
        }
        else
        {
            secondp = s3;
            thirdp = s2;
        }
    }
    else if (s2 <= s1 && s2 <= s3)
    {
        firstp = s2;
        if (s1 <= s3)
        {
            secondp = s2;
            thirdp = s3;
        }
        else
        {
            secondp = s3;
            thirdp = s2;
        }
    }
    else
    {
        thirdp = s3;
        if (s2 <= s1)
        {
            secondp = s2;
            thirdp = s3;
        }
        else
        {
            secondp = s3;
            thirdp = s2;
        }
    }
    cout << "Sorted order is as follows" << firstp << " " << secondp << " " << thirdp;
}