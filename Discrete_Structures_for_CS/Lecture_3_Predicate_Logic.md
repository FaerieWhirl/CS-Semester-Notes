# **Lecture 3: Predicate Logic**

## 1. 概述

## 2. Predicate Logic (谓词逻辑)

- ### 定义
- ### 基本元素
- ### 使用场景

    | Predicate   | Definition                    |
    |-------------|-------------------------------|
    |$ P(x) $     | x is a hummingbird.           |
    |$ Q(x) $     | x is large.                   |
    |$ R(x) $     | x lives on honey.             |
    |$ S(x) $     | x is richly colored.          |

    | Statement                                    | Formal Logical Expression     |
    |----------------------------------------------|-------------------------------|
    | "All hummingbirds are richly colored."       | $ ∀x (P(x) → S(x)) $          |
    | "No large birds live on honey."              | $ ¬∃x (Q(x) ∧ R(x)) $         |
    | "Birds that do not live on honey are dull."  | $ ∀x (¬R(x) → ¬S(x)) $        |
    | "Hummingbirds are small."                    | $ ∀x (P(x) → ¬Q(x)) $         |

## 3. Quantifiers (量词)
- ### Universal Quantification (全称量词)
    + 定义
    + 例子
- ### Existential Quantification (存在量词)
    + 定义
    + 例子
- ### Other Quantifiers (其他量词)
    + 列举与定义
    + 使用场景

## 4. Quantifiers with Restricted Domains (具有受限域的量词)

- ### 定义与重要性
- ### 如何设置受限域
- ### 实际应用

## 5. Precedence of Quantifiers (量词的优先级)
- 基本规则
- 例子

## 6. Logical Equivalences Involving Quantifiers (涉及量词的逻辑等价)
- 主要概念
- 等价转换的规则
- 例子

## 7. Negation and Quantifiers (否定和量词)
- ### 量词等价性：

    - $ ¬∀xP(x) $ ⇔ $ ∃x ¬P(x) $.
    
    - $ ¬∃xP(x) $ ⇔ $ ∀x ¬P(x) $.

- ### 例子
    1. Negation of "There is an honest politician" is "All politicians are not honest".
    <br/> $ ∃xH(x) \rightarrow ¬∃xH(x) ⇔ ∀x¬H(x)$
    <br/> "有一个诚实的政客"的否定是"所有政客都不是诚实的"。

    2. Negation of "All Americans eat cheeseburgers" is "Some Americans do not eat cheeseburgers".
    <br/> $ ∀xA(x) \rightarrow ¬∀xA(x) ⇔ ∃x¬A(x)$
    <br/> "所有美国人都吃芝士汉堡"的否定是"有些美国人不吃芝士汉堡"。

## 8. Nested Quantifiers (嵌套量词)
- 定义与用法
- 嵌套的层次和意义
- 例子

## 9. Negating Nested Quantifiers (否定嵌套量词)
- 基本概念与技巧
- 注意事项
- 例子





---

- **The Principle of Duality**: 对偶原理
    - **Dual (对偶)**
        - 命题 $p$ 的对偶命题是命题 $¬p$。
    - **Definition (定义)**
        - 对偶原理是指，如果一个命题是一个恒真式，那么它的对偶命题也是一个恒真式；如果一个命题是一个矛盾式，那么它的对偶命题也是一个矛盾式；如果一个命题是一个可能式，那么它的对偶命题也是一个可能式。
    - **Remark (备注)**
        - 对偶原理是一个非常有用的工具，因为它允许我们从一个命题的真值表中推导出另一个命题的真值表。
- **Logical Equivalence of Quantified Statements**: 量化语句的逻辑等价
    - **Theorem (定理)**
        - $¬∀xP(x)≡∃x¬P(x)$
        - $¬∃xP(x)≡∀x¬P(x)$
- **Universal and Existential Quantifiers**: 全称量词与存在量词
    - **Definition (定义)**
        - 全称量词 $\forall$ 读作 “for all” 或 “for every”。
        - 存在量词 $\exists$ 读作 “there exists” 或 “there is”。
    - **Remark (备注)**
        - 量化语句是一个命题，其主要操作是一个量词。
- **Negation of Quantified Statements**: 量化语句的否定
    - **Theorem (定理)**
        - $¬∀xP(x)≡∃x¬P(x)$
        - $¬∃xP(x)≡∀x¬P(x)$
- **Quantifiers and Domains**: 量词与域
    - **Definition (定义)**
        - 域是一个非空集合，其中的元素称为域中的对象。
    - **Remark (备注)**
        - 量化语句的域是指量化语句中的变量的可能取值。
- **Nested Quantifiers**: 嵌套量词
    - **Definition (定义)**
        - 嵌套量词是指一个量化语句中的变量的域是另一个量化语句中的变量的可能取值。
    - **Remark (备注)**
        - 嵌套量词的顺序很重要。
- **The Order of Quantifiers**: 量词的顺序
    - **Theorem (定理)**
        - $\forall x∀yP(x,y)≡∀y∀xP(x,y)$
        - $\exists x∃yP(x,y)≡∃y∃xP(x,y)$
        - $\forall x∃yP(x,y)≡∃y∀xP(x,y)$
        - $\exists x∀yP(x,y)≡∀y∃xP(x,y)$
- **Uniqueness Quantifiers**: 唯一量词
    - **Definition (定义)**
        - 唯一量词 $\exists!$ 读作 “there exists a unique”。
    - **Remark (备注)**
        - 唯一量词的含义是存在且唯一。
- **The Principle of Mathematical Induction**: 数学归纳法
    - **Theorem (定理)**
        - 设 $P(n)$ 是一个关于整数 $n$ 的命题。如果
            - $P(0)$ 为真，且
            - 对于所有的 $k≥0$，如果 $P(k)$ 为真，则 $P(k+1)$ 也为真，
        那么 $P(n)$ 对于所有的 $n≥0$ 都为真。
    - **Remark (备注)**
        - 数学归纳法是一种证明方法，用于证明一系列命题，每个命题都依赖于前一个命题。
- **The Well-Ordering Principle**: 良序原理
    - **Theorem (定理)**
        - 每个非空的正整数集合都有一个最小元素。
    - **Remark (备注)**
        - 良序原理是数学归纳法的一个等价形式。
- **Recursive Definitions**: 递归定义
    - **Definition (定义)**
        - 递归定义是指一个对象的定义依赖于其他对象的定义。
    - **Remark (备注)**
        - 递归定义是数学归纳法的一个等价形式。
- **Structural Induction**: 结构归纳法
    - **Theorem (定理)**
        - 设 $P(x)$ 是一个关于对象 $x$ 的命题。如果
            - $P(c)$ 为真，且
            - 对于所有的 $y$，如果 $y$ 是 $x$ 的一个组成部分且 $P(y)$ 为真，则 $P(x)$ 也为真，
        那么 $P(x)$ 对于所有的对象 $x$ 都为真。
    - **Remark (备注)**
        - 结构归纳法是一种证明方法，用于证明一系列命题，每个命题都依赖于前一个命题。
- **Recursive Algorithms**: 递归算法
    - **Definition (定义)**
        - 递归算法是指一个算法的定义依赖于其他算法的定义。
    - **Remark (备注)**
        - 递归算法是结构归纳法的一个等价形式。

