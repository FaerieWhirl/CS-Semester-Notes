# **1. 基础：逻辑与证明**

---

## **1.1 Propositional Logic (命题逻辑)**
- **Mathematical Logic (数学逻辑)**
- **Propositional Logic (命题逻辑)**
    - **Definition (定义)**
        - 命题是一种陈述句，要么为真($\color{Green}{T}$)，要么为假($\color{Red}{F}$)，但不可能同时为真和为假。

    - **Logic Operators (逻辑运算符)**
        | Symbol | Name | Meaning | Read as | Precedence |
        | :---: | :---: | :---: | :---: | :---: |
        | $¬$ | Negation | 非 | not | 1 |
        | $∧$ | Conjunction | 与 | and | 2 |
        | $∨$ | Disjunction | 或 | or | 3 |
        | $⊕$ | Exclusive or | 异或 | xor | 4 |
        | $→$ | Implication | 蕴含 | if, then | 5 |
        | $↔$ | Biconditional | 双条件 | if and only if | 6 |
        | $⊻$ | Sheffer stroke | 与非 | nand | 7 |
        | $⊼$ | Peirce arrow | 或非 | nor | 8 |

    - **Truth Table (真值表)**
        - Negation (非)
            | $p$ | $¬p$ |
            | :---: | :---: |
            | $\color{Green}{T}$ | $\color{Red}{F}$ |
            | $\color{Red}{F}$ | $\color{Green}{T}$ |
        
        - Conjunction (与)
            | $p$ | $q$ | $p∧q$ |
            | :---: | :---: | :---: |
            | $\color{Green}{T}$ | $\color{Green}{T}$ | $\color{Green}{T}$ |
            | $\color{Green}{T}$ | $\color{Red}{F}$ | $\color{Red}{F}$ |
            | $\color{Red}{F}$ | $\color{Green}{T}$ | $\color{Red}{F}$ |
            | $\color{Red}{F}$ | $\color{Red}{F}$ | $\color{Red}{F}$ |
        
        - Disjunction (或)
            | $p$ | $q$ | $p∨q$ |
            | :---: | :---: | :---: |
            | $\color{Green}{T}$ | $\color{Green}{T}$ | $\color{Green}{T}$ |
            | $\color{Green}{T}$ | $\color{Red}{F}$ | $\color{Green}{T}$ |
            | $\color{Red}{F}$ | $\color{Green}{T}$ | $\color{Green}{T}$ |
            | $\color{Red}{F}$ | $\color{Red}{F}$ | $\color{Red}{F}$ |

        - Exclusive or (异或)
            | $p$ | $q$ | $p⊕q$ |
            | :---: | :---: | :---: |
            | $\color{Green}{T}$ | $\color{Green}{T}$ | $\color{Red}{F}$ |
            | $\color{Green}{T}$ | $\color{Red}{F}$ | $\color{Green}{T}$ |
            | $\color{Red}{F}$ | $\color{Green}{T}$ | $\color{Green}{T}$ |
            | $\color{Red}{F}$ | $\color{Red}{F}$ | $\color{Red}{F}$ |

        - Implication (蕴含)
            | $p$ | $q$ | $p→q$ |
            | :---: | :---: | :---: |
            | $\color{Green}{T}$ | $\color{Green}{T}$ | $\color{Green}{T}$ |
            | $\color{Green}{T}$ | $\color{Red}{F}$ | $\color{Red}{F}$ |
            | $\color{Red}{F}$ | $\color{Green}{T}$ | $\color{Green}{T}$ |
            | $\color{Red}{F}$ | $\color{Red}{F}$ | $\color{Green}{T}$ |
        
        - Biconditional (双条件)
            | $p$ | $q$ | $p↔q$ |
            | :---: | :---: | :---: |
            | $\color{Green}{T}$ | $\color{Green}{T}$ | $\color{Green}{T}$ |
            | $\color{Green}{T}$ | $\color{Red}{F}$ | $\color{Red}{F}$ |
            | $\color{Red}{F}$ | $\color{Green}{T}$ | $\color{Red}{F}$ |
            | $\color{Red}{F}$ | $\color{Red}{F}$ | $\color{Green}{T}$ |

        - Sheffer stroke (与非)
            | $p$ | $q$ | $p⊻q$ |
            | :---: | :---: | :---: |
            | $\color{Green}{T}$ | $\color{Green}{T}$ | $\color{Red}{F}$ |
            | $\color{Green}{T}$ | $\color{Red}{F}$ | $\color{Green}{T}$ |
            | $\color{Red}{F}$ | $\color{Green}{T}$ | $\color{Green}{T}$ |
            | $\color{Red}{F}$ | $\color{Red}{F}$ | $\color{Green}{T}$ |

        - Peirce arrow (或非)
            | $p$ | $q$ | $p⊼q$ |
            | :---: | :---: | :---: |
            | $\color{Green}{T}$ | $\color{Green}{T}$ | $\color{Red}{F}$ |
            | $\color{Green}{T}$ | $\color{Red}{F}$ | $\color{Red}{F}$ |
            | $\color{Red}{F}$ | $\color{Green}{T}$ | $\color{Red}{F}$ |
            | $\color{Red}{F}$ | $\color{Red}{F}$ | $\color{Green}{T}$ |

    - **Precedence of Logical Operators (逻辑运算符的优先级)**

        | Operator | Precedence |
        | :---: | :---: |
        | $¬$ | 1 |
        | $∧$<br/>$∨$ | 2<br/>3 |
        | $→$<br/>$↔$ | 4<br/>5 |

        - **Example (例)**
            - $¬p∧q→r$ 与 $¬(p∧q)→r$ 是不同的。
        
        - **Remark (备注)**
            - 请注意，此约定并不通用：许多数学家给予 AND 和 OR 相同的优先级，因此，如果没有括号， $p∧q∨r$ 的含义是不明确的。
            - 对于异或的优先级似乎没有标准约定，因为逻辑学家不经常使用它，仅使用括号可能是最安全的。
            - 蕴涵不是结合性的，惯例是向右绑定， $a→b→c$ 被读作 $a→(b→c)$ ，因此通常将其放在括号中是最安全的。

    - **Propositional Functions (命题函数)**

        - **Definition (定义)**
            - 命题函数是一个函数，其定义域是一组命题，值域是命题。


---

## **1.2 Applications of Propositional Logic (命题逻辑的应用)**
- **Converse, Inverse and Contrapositive (逆命题、否命题与逆否命题)**
    - **Converse (逆命题)**
        - **Definition (定义)**
            - 命题 $p→q$ 的逆命题是命题 $q→p$。
    - **Inverse (否命题)**
        - **Definition (定义)**
            - 命题 $p→q$ 的否命题是命题 $¬p→¬q$。
    - **Contrapositive (逆否命题)**
        - **Definition (定义)**
            - 命题 $p→q$ 的逆否命题是命题 $¬q→¬p$。

---

## **1.3 Propositional Equivalences (命题等价)**

- **Classifications of Compound Propositions**: 复合命题的分类
    - **Tautology**: 恒真式
        - **Definition (定义)**
            - 恒真式是一个总是为真的复合命题。
    - **Contradiction**: 矛盾式
        - **Definition (定义)**
            - 矛盾式是一个总是为假的复合命题。
    - **Contingency**: 可能式
        - **Definition (定义)**
            - 可能式是一个既不是恒真式也不是矛盾式的复合命题。

- **The Logical Equivalence**: 逻辑等价
    - $≡$ 表示逻辑等价，与 $↔$ 相同。

- **The De Morgan’s Laws**: 德摩根定律
    - **Theorem (定理)**
        - $¬(p∧q)≡¬p∨¬q$
        - $¬(p∨q)≡¬p∧¬q$

- **Conjunctive Normal Form (CNF)**: 合取范式
    - **Definition (定义)**
        - 合取范式是一个由一系列合取项组成的析取式，其中每个合取项是由一系列命题变量或其否定组成的合取式。
    - **Example (例)**
        - $(p∨q∨¬r)∧(¬p∨q∨r)∧(¬p∨¬q∨r)$
    - **Remark (备注)**
        - 合取范式是一个恒为真的复合命题，当且仅当至少有一个合取项是恒为真的。
        - 合取范式是一个矛盾式，当且仅当每个合取项都是矛盾式的。
        - 合取范式是一个可能式，当且仅当至少有一个合取项是可能式的。
- **Logical Equivalence Identities**: 逻辑等价式
    | Name | Equivalence |
    | :---: | :---: |
    | Identity Laws | $p∧T≡p$<br/>$p∨F≡p$<br/>$p⊕T≡¬p$<br/>$p⊕F≡p$ |
    | Domination Laws | $p∨T≡T$<br/>$p∧F≡F$ |
    | Idempotent Laws | $p∧p≡p$<br/>$p∨p≡p$ |
    | Double Negation Law | $¬(¬p)≡p$ |
    | Commutative Laws | $p∧q≡q∧p$<br/>$p∨q≡q∨p$ |
    | Associative Laws | $(p∧q)∧r≡p∧(q∧r)$<br/>$(p∨q)∨r≡p∨(q∨r)$ |
    | Distributive Laws | $p∧(q∨r)≡(p∧q)∨(p∧r)$<br/>$p∨(q∧r)≡(p∨q)∧(p∨r)$ |
    | De Morgan's Laws | $¬(p∧q)≡¬p∨¬q$<br/>$¬(p∨q)≡¬p∧¬q$ |
    | Absorption Laws | $p∨(p∧q)≡p$<br/>$p∧(p∨q)≡p$ |
    | Conditional Laws | $p→q≡¬p∨q$<br/>$¬p→¬q≡q→p$ |
    | Contrapositive Laws | $p→q≡¬q→¬p$<br/>$¬q→¬p≡p→q$ |
    | Biconditional Laws | $p↔q≡(p→q)∧(q→p)$<br/>$q↔p≡(q→p)∧(p→q)$ |
    | Exclusive Or Laws | $p⊕q≡(p∨q)∧¬(p∧q)$<br/>$¬p⊕q≡(p∧q)∨¬(p∨q)$ |
    | Negation Laws | $p∨¬p≡T$<br/>$p∧¬p≡F$ |
- **The Extended De Morgan’s Laws**: 扩展的德摩根定律
    - **Theorem (定理)**
        - $¬(p_1∧p_2∧⋯∧p_n)≡¬p_1∨¬p_2∨⋯∨¬p_n$
        - $¬(p_1∨p_2∨⋯∨p_n)≡¬p_1∧¬p_2∧⋯∧¬p_n$

- **Satisfiability**: 可满足性
    - **Contents (内容)**
        - 如果一个复合命题的真值表中至少有一个真值为真，那么这个复合命题是可满足（satisfiable）的。
        - 如果一个复合命题的真值表中所有的真值都为假，那么这个复合命题是不可满足（unsatisfiable）的。

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

