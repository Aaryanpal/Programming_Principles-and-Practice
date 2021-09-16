#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector<string> words;
    for (string insert; cin >> insert;)
        words.push_back(insert);
    cout << "Number of Words: " << words.size() << " \n";

    std::sort(words);

    for (int i = 0; i < words.size(); i++)
        if (i == 0 || words[i - 1] != words[i])
            cout << words[i] << "\n";
}