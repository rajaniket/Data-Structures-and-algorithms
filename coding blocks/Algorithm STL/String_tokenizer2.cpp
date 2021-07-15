// tokenize a string and store it in a vector

#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    string str("Hello from JournalDev");
    regex temp("\\s+");
    sregex_token_iterator iter(str.begin(), str.end(), temp, -1);
    sregex_token_iterator end;
    vector<string> vec(iter, end);

    for (auto a : vec)
    {
        cout << a << endl;
    }
}
