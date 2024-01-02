#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    //错误情况
    if (argc != 3)
    {
        cerr << "Usage: " << argv[0] << " arg1 arg2" << endl;
        cerr << "Please run the program with two additional arguments." << endl;
        return 1; 
    }

    //文件名
    string inputFilename = argv[1];
    string outputFilename = argv[2];

    //打开输入文件流
    ifstream inputFile(inputFilename);
    if (! inputFile.is_open())
    {
        cerr << "Cannot open input file " << inputFilename << endl;
        return 2;
    }

    // 打开输出文件流
    ofstream outputFile(outputFilename);
    if (!outputFile.is_open()) {
        cerr << "Cannot open output file '" << outputFilename << endl;
        return 3; 
    }

    //输入读取，写入输出
    string line;
    while (getline(inputFile, line)){
        outputFile << line << endl;
    }

    // 关闭文件流
    inputFile.close();
    outputFile.close();

   
    return 0;
}
