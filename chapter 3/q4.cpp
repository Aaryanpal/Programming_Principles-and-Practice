#include<iostream>
using namespace std;
int main()
{
    double var1=0;
    double var2=0;

    cout << "Please enter the two nummberes separated by space: ";
    cin >> var1 >> var2;
    cout<<" Values : " << var1 << " " << var2 << "\n";

    if(var1<var2) cout << var1 << " is smallest\n";
    if(var1>var2) cout << var2 << " is smallest\n";
    if(var1==var2) cout << var1 << "and" << var2 << " are equal\n";

    cout << "sum: " << var1+var2 << "\n";
    cout << "product: " << var1 * var2 <<"\n";
    if(var2==0)
        cout << "good try! but i don't divide by zero\n";
    else
        cout << "ratio (var1/var2): "<<var1/var2<<"\n";
    
    cout << "square(var1) : " << var1*var1 <<"\n";

    return 0;
}