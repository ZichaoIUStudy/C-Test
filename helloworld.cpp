#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> message {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : message)
    {
        cout << word << " ";
    }
    cout << endl;
}
