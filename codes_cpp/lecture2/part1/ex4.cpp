#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //错误情况
    if (argc != 3)
    {
        cerr << "Usage: " << argv[0] << " arg1 arg2" << endl;
        cerr << "Please run the program with two additional arguments." << endl;
        return 1; // 返回非零表示失败
    }

    //正确情况
    cout << "command line arguments are: " << endl;
    cout <<"Argument1: " << argv[1] << endl;
    cout <<"Argument2: "<< argv[2] << endl; 
    return 0;
}
