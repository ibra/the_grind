#include <iostream>
#include "vector"

using namespace std;

int main()
{
    int n;
    cin >> n;

    string input;
    vector<string> words;

    while(std::getline(cin, input))
    {
       words.push_back(input);
       if(words.size() > n)
           break;
    }

    for (int i = 0; i < words.size(); ++i) {

        if(words[i].size() > 10)
            words[i] = words[i][0] + to_string(words[i].length()-2)  + words[i][words[i].length()-1];

        cout << words[i] << endl;
    }
    return 0;
}