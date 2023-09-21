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
