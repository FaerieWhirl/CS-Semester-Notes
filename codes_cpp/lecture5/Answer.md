# <p align=center>HW of Functions</p>

> 注释： 图片有水印是因为在掘金的编辑器上编辑

# Part 1
## 1. Exercise 1
### 1.1 (1)loop way and recursive
**loop**

![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/17fb66ac63b848a8b4141c8f92a5db19~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=546&h=339&s=29234&e=png&b=1e1e1e)

**recursive**


![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6f43f936a75f487ca998e65a36bbfea8~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=490&h=341&s=27874&e=png&b=1e1e1e)



### 1.2 indicate whether or not they were the same.

the out put is the same

## 2. Exercise 2
### 2.1 code
factorial.cpp
```cpp
//exercise 2
void compuFactorial(unsigned int n, unsigned int& result) {
    result = 1;
    for (unsigned int i = 1; i <= n; ++i) {
        result *= i;
    }
}
```

mian.cpp

```cpp
//exercise 2
int main(int argc, char const *argv[])
{
    unsigned int input[]={0,1,10,12,27};
    
    for (unsigned int value : input)
    {
        unsigned int result;
        compuFactorial(value,result);
        std::cout << value << "! = " << result << std::endl;
    }
    system("pause");
    return 0;
}
```
### 2.2 output

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/926e0e1edc094010b0ec83ae62a3703d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=495&h=238&s=23050&e=png&b=1e1e1e)

### 2.3 describe

1. How I motify

- The return type is changed to `void`, indicating that the function doesn't return a value.

- `result` is changed from a certain value to a changing value(a reference)

2. variables
- The function now takes two parameters: `unsigned int n` (the number for which factorial is computed) and `unsigned int& result` (a reference to store the result).

## 3. Exercise 3
### 3.1 What I had done
First, I changed the function declarition`unsigned int& result` to`unsigned int* result`
then change into`*result = 1`in the function part

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/9f3bc200b5094d709ff170c068b5a64d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=828&h=251&s=21593&e=png&b=1e1e1e)

then, I use address to call the function instead of pointer


```cpp
        unsigned int result; 
        compuFactorial(value,&result);//we should call the result by address
```

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/248915050dc9415c91945115e8a99f7d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=501&h=224&s=23503&e=png&b=1e1e1e)

### 3.2 Conclusion
> The function is called with the address (`&`) of the result variables, and the function calculates the factorial values directly at those memory locations.

>This modification allows the function to work correctly with a pointer to an unsigned integer by value as the second argument. The results will be consistent with the factorial calculations for the given inputs.

## 4. Exercise 4
### 4.1 (1) 

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/e4ffe0ef285a4c63b89a4d0994aa2512~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=799&h=219&s=20777&e=png&b=1e1e1e)


![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6c8e8e2b7d504327af4a0f4662d2231f~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=421&h=111&s=14814&e=png&b=1e1e1e)

> 运行成功

### 4.2 (2) 

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/b9a76ba6234e4878a35d65936c6f1a73~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=723&h=207&s=20437&e=png&b=1e1e1e)


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/31db6c109bda427ca529c549bef35c99~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=805&h=272&s=22763&e=png&b=1e1e1e)


![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/21e66f77e5e24209b01e48ff3bda94ba~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1138&h=224&s=23222&e=png&b=1e1e1e)

> 运行失败，给第一个值一个固定值，只传入一个值，无法把值传给第二个参数


### 4.2 (3)

![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/db045926f811477aa5a050027512b28d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=761&h=224&s=21019&e=png&b=1e1e1e)


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/9d8aa074a1454da38d202317ec40fdf0~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=790&h=281&s=22480&e=png&b=1e1e1e)


![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/f8b0092e81b0414db8654e77a8f7df1c~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=372&h=108&s=12826&e=png&b=1e1e1e)

> 可以运行成功


# Part 2
## 5. Exercise
### 5.1 **What happens if the function tries to modify the values stored in the array?**


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/d8d0774b51d949818a28726297f682e2~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=439&h=124&s=18201&e=png&b=1e1e1e)

> it modifies successfully

### 5.2 **What happens if you change the function declaration and definition to pass an array of const unsigned integers, and again have the function try to modify the values stored in the array?**


![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/ac3ea04039d64116af2843999824331c~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=740&h=198&s=22087&e=png&b=1e1e1e)

> Compilation Error: assignment of read-only location

## 6.Exercise 6
### (1) a pointer to an unsigned integer

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/13c676f5500449ad9853daa4681f42ad~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=668&h=203&s=23035&e=png&b=1e1e1e)

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/a33736dec1bd4abf85ae02b926338fd3~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=418&h=111&s=14875&e=png&b=1e1e1e)

> The function can successfully modify the values using pointer arithmetic. This is because the pointer to an unsigned integer allows modifications to the data it points to.

### (2) a pointer to a const unsigned integer

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/be33db3fb47147ec8829aa13a0ce9ce0~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=748&h=197&s=24181&e=png&b=1e1e1e)

> generate a compilation error when attempting to modify the values.

### (3) a const pointer to an unsigned integer


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/d3459672f795402cb971c1a7056cd10d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=739&h=191&s=23258&e=png&b=1e1e1e)

> Compilation Error: assignment of read-only location
> 
> The function will generate a compilation error when attempting to modify the values. This is because a const pointer to an unsigned integer indicates that the data is read-only, and any attempt to modify it will result in a compilation error.

### (4) a const pointer to a const unsigned integer


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/8ac81c7ef466478384bd286553ed5bf7~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=810&h=181&s=24152&e=png&b=1e1e1e)

> The function will also generate a compilation error when attempting to modify the values. In this case, both the pointer and the data it points to are const, making any modification attempts result in a compilation error.


  


