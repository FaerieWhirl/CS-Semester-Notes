# Answers
## 1. ex1
运行结果
![exercise1.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/345a21d91d6c4956971c567302812a8c~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1992&h=240&s=22829&e=png&b=1e1e1e)
## 2. ex2
> 描述程序的调用堆栈如何增长和收缩，以及最重要的变量的值在程序运行时如何变化。

配置launch.json 输入参数 + 8 + 9 10 ，按要求进行断点调试


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/fe2eaffc461f4305914b0c9dea5d761f~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=774&h=113&s=20276&e=png&b=1e1e1e)


- 对于调用栈堆
- 首先在 `main` 函数中，命令行参数足够，进入`parse_and_compute`函数，栈堆增长
- 在`parse_and_compute`函数中，函数会递归调用自身两次，处理8 9 10，因为进入了新的函数调用层级，调用栈堆增长
- 在此过程中，返回值并回到上一层级，调用栈堆收缩
- 总之栈堆随函数层级变化而变化

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/913f5858988e4c54a4a11c4b3af9580d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=806&h=202&s=38473&e=png&b=29292b)

- 对于重要变量值
- 对于"8"，`parse_and_compute`函数会将其解释为整数8，返回8的值。`parse_and_compute`函数会递归调用自身两次，分别处理"9"和"10"。每次处理整数后，将其返回。在最底层的递归调用中，`parse_and_compute`函数将解析整数"9"并返回其值9，然后解析整数"10"并返回其值10。回到上一层递归调用，此时`first_operand`被设置为9，`second_operand`被设置为10。`parse_and_compute`函数将计算"first_operand + second_operand"，即"9 + 10"，并返回结果19。回到更高一层递归调用，此时`first_operand`被设置为8，`second_operand`被设置为19。继续计算"first_operand + second_operand"，即"8 + 19"，并返回结果27。

## 3. ex3
> `+ 9 10`


![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c17e8520ab73462da8d908dc73ab7efb~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=731&h=53&s=9127&e=png&b=1e1e1e)

>`+ 8 + 9`


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/24e3c80b8d8a417099d57376c4e5e412~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=748&h=53&s=9591&e=png&b=1e1e1e)

## 4. ex4
> 对于`+ 8 + 9`

缺少了加法运算符后的两个操作数

- 在`parse_and_compute`函数中
- `+ `后只有 9. `parse_and_compute` 函数检查 `argv[current_index]` 处的符号，这是 `"+"`。它期望接下来的两个操作数。
- 由于没有额外的参数（`current_index` 已经到达末尾），它抛出异常，异常代码为 `unexpected_end_of_expression`。
- 异常被抛出并传递给 `main` 函数，到 `main` 函数的`catch`
- 打印了一个错误消息，指示捕获到一个带有整数代码 `unexpected_end_of_expression` 的异常。
- 程序以非零错误代码 `unexpected_end_of_expression` 退出。

## 5. ex5
> introduce different kinds of programming errors into the source file

> 1.changing the starting index given at the top of the main function

- 把`starting_index`的值从1改为2

![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/1a3741c50e464bcbb84726c97a4aef36~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=786&h=52&s=9451&e=png&b=1e1e1e)

- 程序没有读到操作符`+`
- 直接返回result为8

> 2.passing the current index by value rather than by reference.

将

![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/1755a723044c4657ba11b0735ddc4425~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=902&h=49&s=9804&e=png&b=1e1e1e)

改为


![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/0403aba7bf384f2bb226e2dd4c162ad9~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=893&h=70&s=9215&e=png&b=1f1f1f)

运行

![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c3b0faff41a2423583a554dd8d5520ae~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1181&h=533&s=173536&e=png&b=1f1f1f)


![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/836659c674564fb481174d10036ea605~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=521&h=128&s=17452&e=png&b=1e1e1e)

- 按值传递，函数不再能够修改调用它的上下文中的索引值，无法正确地更新索引
- 按断点调试结果，函数没有进行递归调用，只运行了一次  `parse_and_compute`





