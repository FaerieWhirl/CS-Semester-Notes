#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    //ex1
    cout << "Exercise 1: "<< endl << "argv[0]: " << argv[0] << endl;
    cout << "argc: "<< argc << endl;
    



    //ex2
    cout << "Exercise 2:"<< endl;
    const char *ptr = argv[0];
    for (int i = 0; i < argc,*ptr != '\0'; i++) 
    {
         cout << *ptr;
         ptr++;
    }
    
    cout<<endl;
    cout<<endl;

    //ex3
    //const char& refPtr = ptr;
    //while (*refPtr != '\0') {
    //    if (*refPtr != '\0') {
    //        cout << *refPtr << endl;
    //    }
    //    refPtr++; 
    //}

    //代码见上方
    //problem:
    //Please give three 
    //ways in which references differ from pointers in C++ and say which one of those three explains what    
    //happens when you try to use a reference that way in C++, as the answer to this exercise. 
    //1. 初始化和重新赋值：引用必须在声明时进行初始化，一旦初始化，就不能重新赋值以引用不同的变量。指针可以在声明时不进行初始化，或在其生命周期内重新分配以引用不同的变量。
    //2.可空性：引用不能为null或未初始化。它们必须始终引用有效的对象。指针可以被赋予null值（在C++11及以后的版本中是nullptr），表示它们不指向任何有效的对象。
    //3. 指针算术：引用不支持指针算术。指针支持指针算术，允许通过添加或减去指针的值来在内存中移动。
    //此题指针的引用不能改变内存地址，所以此处会报错。

    //ex4
    cout << "Exercise 4: " << endl;
    auto ptrAuto = argv[0];
    for (int i = 0; i < argc,*ptrAuto != '\0'; i++) 
    {
        cout << *ptrAuto;
        ptrAuto++;
    }
    cout<<endl;
    cout<<endl;

    // ex5
    //cout << "Exercise 5:" << endl;
    //for (int i = 0; i < argc; i++) {
    //    cout << argv[i]<<endl;
    //}
    //cout<<endl;
    //cout<<endl;

    cout << "Exercise 5:" << endl;
    for (int i = 0; i < argc; i++) {
        const char *cur = argv[i];
        cout << cur << endl;
        cur++;
    }
    cout<<endl;
    cout<<endl;


    // ex6
    cout << "Exercise 6: " << endl;
    decltype(ptrAuto) ptrDecltype = argv[0];
    for (int i = 0; i < argc, *ptrDecltype != '\0'; i++) 
    {
        cout << *ptrDecltype;
        ptrDecltype++;
    }
    cout<<endl;
    cout<<endl;

    system("pause");
    return 0;
}
