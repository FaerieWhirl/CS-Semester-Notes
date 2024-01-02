#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<string> commondLine;

    for (int i = 0; i < argc; i++)
    {
        commondLine.push_back(argv[i]);
    }

    for (int j=0; j<commondLine.size(); j++)
    {
        cout << commondLine[j] << endl;
    }
    
    system("pause");
    return 0;
}
