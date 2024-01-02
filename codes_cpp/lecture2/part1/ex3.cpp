#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char const *argv[])
{
    //存储连接的命令行参数
    string commondline;

    for (int i = 0; i < argc; i++)
    {
        commondline += argv[i];
        //添加空格
        if (i < argc - 1)
        {
            commondline += " ";
        } 
    }

    // 使用输入字符串流处理连接后的字符串
    istringstream iss(commondline);

    //提取操作符
    while (iss >> commondline)
    {
        cout << commondline << endl;
    }
    
    system("pause");
    return 0;
}
