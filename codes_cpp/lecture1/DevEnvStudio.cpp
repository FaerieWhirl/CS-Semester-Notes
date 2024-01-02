#include <iostream>
using namespace std;
#include <string>


int main()
{

    //print "hello world"
    cout << "Hello, world!" << endl;

    //define my string
    string famlyName;
    famlyName += "Le Bai  ";
    famlyName += "Sanja  ";
    famlyName += "Jack  ";


    cout << famlyName << endl;

    size_t myLength = famlyName.length();

    cout << "Length of famlyName: " << myLength << endl;

    return 0;
}
