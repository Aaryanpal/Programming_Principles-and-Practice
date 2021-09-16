#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    cout<<"Enter the number of miles\n";
    double miles;
    cin>>miles;
    cout<<miles<<" miles : "<< 1.609 * miles<<"km";  
    return 0;

}