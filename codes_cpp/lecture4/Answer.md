# **Part1 REQUIRED EXERCISES**
### 1 Exercise 1
#### 1.1 output

<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/e0f090d57dde447faa3bc57bada49ca7~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1731&h=149&s=33232&e=png&b=1e1e1e" alt="image.png" width="100%" />

#### 1.2 My Describe

> Due to the `throw` statement in the `myFunction` function, an exception is thrown. However, there is no appropriate exception handling mechanism in the `main` function, which prevents the exception from being caught and handled.
> 
> As the exception goes uncaught, it continues to propagate to the operating system level of the calling program.
> 
> The operating system detects the unhandled exception and typically displays an error message, indicating that the program has crashed or terminated.

### 2 Exercise 2
#### 2.1 output

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/a53949e8680946d1a5ad1de3b19dee6c~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=605&h=140&s=21285&e=png&b=1e1e1e)

### 3 Exercise 3
#### 3.1 Char
##### output

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/2dca575258c144a9a64675bfd4dfca0d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=649&h=116&s=21183&e=png&b=1e1e1e)

#### 3.2 long
##### output

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/b753d5ef06da4141a64d4ee15e1df90b~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=617&h=122&s=21989&e=png&b=1e1e1e)

#### 3.3 string
##### 3.3.1 output

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/2855c89a754d4e2ea910fa42b0090382~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1457&h=118&s=32324&e=png&b=1e1e1e)

> I thought the output may be `terminate called after throwing an instance of 'string'`.
> However, it's different from the previous one

##### 3.3.2 explain

> **异常的报错消息取决于异常类型和异常对象。**

> 1.  对于`std::string`的情况：`std::string`是C++标准库提供的类，它包含了异常处理信息，包括错误消息。当你抛出`std::string`时，实际上抛出了一个对象，这个对象包含了异常的类型信息和错误消息。当没有正确的`catch`子句来捕获这种异常时，系统会显示`"terminate called after throwing an instance of 'std::__c xx11:: basic_string<char, std::char_traits<char>, std::allocator<char> >' "`错误。这是C++标准库用于提供有关异常类型和错误信息的信息。通常，你应该捕获`std::string`异常并处理其中的错误信息。
    
>  1.  对于`char`的情况：`char`是一种基本数据类型，不是一个对象。当你抛出`char`时，你实际上只是抛出了字符本身，而没有与之相关的异常类型信息。因此，当没有适当的`catch`子句来捕获这种异常时，系统会显示"terminate called after throwing an instance of 'char'"错误。这种情况下，你仅抛出字符本身，而没有附加的异常信息。
    
    

### 4 Exercise 4
#### 4.1 char

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/dfc003eb9ec24ef79677689ea5bcbf3c~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=524&h=148&s=18846&e=png&b=1e1e1e)

#### 4.2 int

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c3683f08b9a44873a587624e3fe1faaa~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=487&h=114&s=16617&e=png&b=1e1e1e)

#### 4.3 long

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/dea58e2a8ccb41a0b66ac86b3949c651~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=382&h=104&s=14036&e=png&b=1e1e1e)

#### 4.4 string

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/40543dcd1c754440acde82a9d51e78cc~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=362&h=105&s=12758&e=png&b=1e1e1e)

#### 4.5 `char *`

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/82ac7cd7d2d24ce680ad17a0ae51fbca~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=615&h=109&s=18895&e=png&b=1e1e1e)

#### 4.6 `int *`


![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6caceba0676a4c259d299632c2881e30~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=325&h=111&s=11368&e=png&b=1e1e1e)

# **Part 2 ENRICHMENT EXERCISES**
### 5 Exercise 5

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/d61e498235e24bfba55150765a12fce1~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=406&h=162&s=17274&e=png&b=1e1e1e)

> In this version, I added the capability to throw a long pointer, which is not listed among the specific catch blocks. When the program catches this exception type, it falls into the default catch block (catch-all), which prints an "unrecognized type" message and returns an appropriate non-zero integer value (7 in this case). This demonstrates how a default catch block can handle unrecognized types.

### 6 Exercise 6
#### 6.1 Test
##### 6.1.1
###### In this order, which string is above char, and then exchange

```cpp
try {
        // Uncomment and run each one of these functions to test different exception types
        throwChar();
        // throwString();
    }
    catch (const std::string& s) {
        std::cerr << "Caught string: " << s << std::endl;
        return 1;
    }
    catch (char c) {
        std::cerr << "Caught char: " << c << std::endl;
        return 2;
    }
    catch (...) {
        std::cerr << "Caught an unrecognized type" << std::endl;
        return 3;
    }

```


```cpp
 try {
        // Uncomment and run each one of these functions to test different exception types
        // throwChar();
        throwString();
    }
    catch (char c) {
        std::cerr << "Caught char: " << c << std::endl;
        return 1;
    }
    catch (const std::string& s) {
        std::cerr << "Caught string: " << s << std::endl;
        return 2;
    }
    catch (...) {
        std::cerr << "Caught an unrecognized type" << std::endl;
        return 3;
    }

```


###### 6.1.2 output

###### *first test*

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/403c5d2dd05d4a9fab2ad844ea34fca6~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=440&h=206&s=28481&e=png&b=1e1e1e)

###### *second test*

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/e1ffb102b1d547aab32e12e15ceb0eeb~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=493&h=203&s=31761&e=png&b=1e1e1e)

###### 6.2 Analysis
> 我以为输出结果会有变化，因为改变顺序后 char 比 string 更general
> 
> 但是实际上没有
> 
> 原因分析
> 
> catch 中处理逻辑相同


### 7 Exercise 7
1.  默认的`catch`块中使用`throw;`，会重新抛出当前的异常。

2.  函数原本抛出异常的地方使用`throw;`，也会重新抛出当前的异常。如果在这两种情况下没有匹配的`catch`块来捕获这个异常，它将导致程序终止并打印一条异常未被捕获的消息。这样的做法通常被用于在某些特定情况下重新抛出异常，以便让更高级别的异常处理机制处理它，或者在`catch`块内部做一些额外的处理后重新抛出相同的异常。但如果没有其他`catch`块来捕获它，程序将终止。










