# **1. 基础：逻辑与证明**

---

## **1.1 Propositional Logic (命题逻辑)**
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

    - **Express the implication in natural language (蕴含的自然语言表示形式)**
        - “if p, then q”
        - “p implies q”
        - “if p, q”
        - “p only if q”
        - “p is sufficient for q”
        - “q unless ¬p”
        - “a sufficient condition for q is p”
        - “q whenever p”
        - “q when p”
        - “q is necessary for p”
        - “q if p”
        - “q follows from p”
        - “a necessary condition for p is q”

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

## **1.6 Rules of Inference (推理规则)**

- **Inferece (推理)**
    - **Definition (定义)**
        - **Inference**: 推论是推理的步骤，从前提到逻辑结果。 Inferences are steps in reasoning, moving from premises to logical consequences.
        - **argument**: 论证是一系列以结论结尾的陈述。 An argument is a sequence of statements that end with a conclusion

            | $p → q$ <br/> $p$ |
            | ------------- |
            | $∴q$ |
        - 当且仅当根据前提的真值得出正确的结论时，论证才有效，即不可能从真实的前提得出错误的结论。 An argument is valid if and only if the conclusion is true following from the truth value of the premises, namely, it is impossible to derive a false conclusion from true premises

- **Rules of inference (推理规则)**