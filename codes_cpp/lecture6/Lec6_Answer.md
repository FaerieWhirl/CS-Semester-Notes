# Part 1
## 1. Exercise 1
### 1.1 Before adding a constructor
#### 1.1.1 code

```cpp
//first header file
#pragma once

struct MyStruct {
    int member1;
    int member2;
};

```
#### 1.1.2 output

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/9c504a7e0e8f4a8da3799e85c839eab3~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=581&h=174&s=22031&e=png&b=1e1e1e)

### 1.2 After adding a constructor
#### 1.2.1 code

```cpp
#pragma once

struct MyStruct {
    int member1;
    int member2;
    //add default constructor with member initialization list
    MyStruct() : member1(0), member2(0) {}

};
```

#### 1.2.2 output

![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/d418750942324d3b92bbb235fb9bcf95~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=540&h=106&s=17803&e=png&b=1e1e1e)

### 1.3 Description
1.  **Before Adding Constructor:**

    -   The program declares an object of the `MyStruct` type but does not initialize its member variables. Accessing these uninitialized variables will result in unpredictable values.

2.  **After Adding Constructor:**

    -   A default constructor is added to `MyStruct` that initializes both member variables to 0 using the member initialization list. Now, when an object of `MyStruct` is created, its member variables are initialized to 0.

## 2. Exercise 2
### 2.1 struct

```cpp
struct MyStruct {
    int member1;
    int member2;
};
```

> In a `struct`, members are public by default
> 
> In this case, the member variables can be accessed

### 2.2 Class
- **private**

```cpp
// my_class.h
#pragma once

class MyClass {

    int member1;
    int member2;
};

```

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/0a662880faa44ff1a077fc03c57c2635~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1434&h=383&s=55759&e=png&b=1f1f1f)

> in a `class`, members are private by default

- **public**

```cpp
// my_class.h
#pragma once

class MyClass {
public:
    int member1;
    int member2;
};
```


![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/f75e0e2e05d4488192c05504c2306d8a~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=529&h=113&s=13662&e=png&b=1e1e1e)

> In this case, the member variables can be accessed

## 3. Exercise 3
**code**

**header file**

```cpp
class MyClass {
private:
    int member1=0;
    int member2=0;

public:
    // Accessor methods
    int getMember1() const;
    int getMember2() const;

    // Mutator methods
    MyClass& setMember1(int value);
    MyClass& setMember2(int value);


};
```

**source file**

```cpp
#include <iostream>
#include "ex_class.h"

int MyClass::getMember1() const {
    return member1;
}

int MyClass::getMember2() const {
    return member2;
}

MyClass& MyClass::setMember1(int value) {
    member1 = value;
    return *this;
}

MyClass& MyClass::setMember2(int value) {
    member2 = value;
    return *this;
}


```



**output**

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c23cf53dddf44f90a2e44ebe5871586f~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=476&h=206&s=23793&e=png&b=1e1e1e)


## 4. Exercise 4
### 4.1
![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/559ae3b7d5a44748b4267581bfcb307a~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1452&h=402&s=131460&e=png&b=fffefe)

**my version**

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6083fe16cd834aeabb3e6dc01f6aa2b5~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1150&h=629&s=80465&e=png&b=1e1e1e)

**output**

![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/93f66b45cc844be888702ed5998eca2d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=563&h=230&s=29018&e=png&b=1e1e1e)

**depend on the compiler version**

![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/e2ef01f2964d4937b62687c6b2d9d3d4~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1160&h=569&s=86407&e=png&b=1e1e1e)


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/f4bd8f97391f48fb9fdcbb65f2e1a2f9~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=492&h=224&s=27416&e=png&b=1e1e1e)

> get the correct outpput

### 4.2 Explain
**Compiler-Supplied Default Constructor:**

-   The compiler provides a default constructor when one is not explicitly defined.
-   In the absence of a user-defined default constructor, the compiler initializes each member variable using its default constructor.

**Compiler-Supplied Copy Constructor:**

-   When a copy constructor is not defined by the user, the compiler generates a default copy constructor.
-   The default copy constructor performs a member-wise copy of each member variable from the source object (`m` in this case) to the destination object (`n`).

In summary, the default constructor initializes `m` with default values, the chained mutator functions modify `m`'s values, and the copy constructor creates `n` as a copy of `m`. The output statements print the values of `member1` and `member2` at different stages.



## 5. Exercise 5
### 5.1
**header file**

<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6113038462c4455793bc6f2a72d1fc36~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=629&h=873&s=69150&e=png&b=1e1e1e" alt="image.png" width="70%" />

**source file**

<img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/ea43e4ccb90d4426b947ab875732e2c3~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1069&h=784&s=76061&e=png&b=1e1e1e" alt="image.png" width="70%" />

### 5.2
**Comparison with Compiler-Supplied Copy Constructor:**

-   If I hadn't provided the user-defined copy constructor, the compiler would have generated one for you. However, in this case, the default behavior of the compiler-supplied copy constructor would be a member-wise copy, similar to what you've implemented in your user-defined copy constructor.
-   In both cases (user-defined and compiler-supplied), the result is the same: `n` is a copy of `m` with the same values for `member1` and `member2`.

The primary difference is that, by providing your own copy constructor, you have explicit control over how the copying process is done, allowing you to customize it based on your class's requirements.

# Part2
## 6. Exercise 6
### 6.1 output

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/30242347603848ddaa7e807d0d98272c~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=678&h=364&s=63219&e=png&b=1e1e1e)

## 7. Exercise 7
If I declare my default constructor as private but do not define it, I will encounter a compilation error if I attempt to create variables of that type outside the class. The reason is that a private default constructor prevents the creation of objects of that class from outside the class itself.

