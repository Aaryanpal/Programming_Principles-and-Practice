#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
//compute the mean median of the temperature
int main()
{
    vector<double> temp;
    for (double i; cin >> i;)
        temp.push_back(i);
    //compute the mean
    double sum = 0;
    for (int x : temp)
        sum += x;
    cout << "Average temperature: " << sum / temp.size() << '\n';
    // compute the median of the temperature
    
    std::sort(temp,temp.size());
    cout<<"Median temperature: "<<temp[temp.size()/2]<<"\n";
    return 0;
}