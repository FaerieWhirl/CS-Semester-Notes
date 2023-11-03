# 1.1 命题逻辑 (Propositional Logic)

1.1.12. 将命题转换为自然语言

1.1.14. 将自然语言转换为命题

1.1.37. 画真值表

1.1.43. 二进制计算OR和AND还有XOR

# 1.2 命题逻辑的应用 (Applications of Propositional Logic)

1.2.3. 用命题逻辑写出命题（自然语言翻译）

1.2.4. 用命题逻辑写出命题（自然语言翻译）

1.2.5. 一样的

1.2.7. 一样的

1.2.30. 证明tautology恒真式
不行就用真值表

# 1.4 谓词与量词 (Predicates and Quantifiers)

1.4.39. 将全称和存在的表达式转换为自然语言

1.4.50. 证明两个全称表达式不等价 $$\forall x P(x) ∧ \forall x Q(x) \not\equiv \forall x (P(x) ∧ Q(x))$$ 举反例

1.4.51. 证明两个存在表达式不等价 $$\exists x P(x) ∨ \exists x Q(x) \not\equiv \exists x (P(x) ∨ Q(x))$$ 举反例

1.4.60. 将自然语言转换为全称和存在的表达式

# 1.5 嵌套量词 (Nested Quantifiers)

1.5.15. 自然语言写双变量的全称和存在 $$\forall x \forall y P(x, y)$$ $$\exists x \exists y P(x, y)$$


1.5.23. 自然语言写双变量的全称和存在表达式 $$\forall x \forall y ((x < 0) ∧ (y < 0) → (xy > 0))$$

1.5.25. 将全称和存在的表达式转换为自然语言

1.5.33. 表达式的否定 $$\neg \forall x \exists y P(x, y) \equiv \exists x \forall y \neg P(x, y)$$

# 1.6 推理原则 (Rules of Inference)

1.6.9. 给一些命题，让你看看能推导出什么呢~

  (f) We label “x is a rodent” by $R(x)$, “x gnaw food” by $G(x)$, where $x$ is an animal. Then we are provided with $\forall x (R(x) \rightarrow G(x))$, $R(Mice)$, $\neg G(Rabbit)$ and $\neg R(Bat)$.

  | Step | Statement | Reason |
  | :---: | :---: | :---: |
  | 1 | $\forall x (R(x) \rightarrow G(x))$ | Premise |
  | 2 | $R(Mice)$ | Premise |
  | 3 | $R(Mice) \rightarrow G(Mice)$ | UI from (1) |
  | 4 | $G(Mice)$ | MP from (2) and (3) |
  | 5 | $\neg G(Rabbit)$ | Premise |
  | 6 | $R(Rabbit) \rightarrow G(Rabbit)$ | UI from (1) |
  | 7 | $\neg R(Rabbit)$ | MT from (4) and (5) |
  | 8 | $G(Mice) \wedge \neg R(Rabbit)$ | Conjunction from (3) and (6) |

1.6.34. 给条件，证明结论是valid还是invalid

1.6.35. 证明超人不存在

Addition. Fetch style.

# 1.7 证明的介绍 (Introduction to Proofs)

1.7.14. 证明 $x$ is rational and $x \ne 0$ , then $1/x$ is rational
证明方法： $x = p/q$，$1/x = q/p$

1.7.18. 证明 if $n$ is an integer and $3n + 2$ is even, then $n$ is even
(a) 用contraposition证明（反证法）
(b) 用contradiction证明（矛盾法）

1.7.19. 证明 $P (0)$, where $P (n)$ is the proposition “If $n$ is a positive integer greater than $1$, then $n^2 > n$.”
证明方法： Vacuous proof（空证明）
Vacuous proof的意思是，如果前提是假的，那么结论就是对的。因为前提是假的，所以结论不会被触发，所以结论是对的

1.7.20. 证明 $P (1)$, where $P (n)$ is the proposition “If $n$ is a positive integer greater than $1$, then $n^2 > n$.”
证明方法： Trivial proof（平凡证明）
直接证明

1.7.25. 证明方程 $r^3 + r + 1 = 0$ 没有有理数解
证明方法： 用反证法证明
Assume that $r = \frac{a}{b}$ is a root, where $a$ and $b$ are integers and $\frac{a}{b}$ is in lowest terms.
然后分奇偶讨论

1.7.28. 证明 $m^2 = n^= only if $m = n$ or $m = −n$

# 1.8 证明方法和策略 (Proof Methods and Strategy)

1.8.2. 证明1000内没有两个立方数的和是立方数
证明方法： 用exhaustive proof（穷举法）证明

1.8.7. 证明三角恒等式 $|a + b| ≤ |a| + |b|$
证明方法： 用case analysis（分情况讨论）证明
$a > 0, b > 0$

1.8.17. there is a unique integer c such that |a − c| = |b − c|
证明方法： 用case analysis（分情况讨论）证明

# 2.1 集合 (Sets)

2.1.10. 空集（empty set）的概念

2.1.20. 集合的基数

2.1.21. Power set (幂集) 的概念

2.1.25. 证明 $A ⊆ B$ 当且仅当 $P(A) ⊆ P(B)$
证明方法就是所有 $A$ 的子集 $C$ 都是 $B$ 的子集
反过来就是所有的 $A$ 的子集 $\lbrace a \rbrace$ 都是 $B$ 的子集

公式，集合，大括号：$A = \{1, 2, 3\}$
在GitHub上显示为：$A = \\{1, 2, 3\\}$
或者：$A = \lbrace 1, 2, 3 \rbrace$

2.1.33. 集合的叉乘

2.1.44. 找满足表达式的所有集合（truth set）

# 2.2 集合运算 (Set Operations)

2.2.14. 集合的运算，给什么1，2，3，4，等等，问你集合的运算结果

2.2.15. 证明de Morgan's law的集合版本
证明方法： $x \in A...$

2.2.23. 证明 $A ∪ (B ∩ C) = (A ∪ B) ∩ (A ∪ C)$
证明方法： $x \in A...$

2.2.24. 证明 $(A - B) - C = (A - C) - (B - C)$
证明方法： LHS, RHS

2.2.47. 算 $\bigcup_{i=1}^n A_i$ 和 $\bigcap_{i=1}^n A_i$

2.2.51. 算 $\bigcup_{i=1}^{\infty} A_i$ 和 $\bigcap_{i=1}^{\infty} A_i$

# 2.3 函数 (Functions)

2.3.7. 找到描述的domain和range
| 符号 | 集合 |
| :---: | :---: |
| $ℕ$ | 自然数 |
| $ℤ$ | 整数 |
| $ℚ$ | 有理数 |
| $ℝ$ | 实数 |
| $ℂ$ | 复数 |
| $ℕ^+$ | 正整数 |
| $ℕ^*$ | 非零自然数 |
| $ℕ \times ℕ$ | 自然数对 |
| $ℝ^+$ | 正实数 |
| $ℝ^-$ | 负实数 |
| $ℝ^*$ | 非零实数 |
| $ℂ^*$ | 非零复数 |
| $ℝ^2$ | 二维实数 |
| $ℝ^3$ | 三维实数 |
| $ℝ^n$ | n维实数 |

2.3.20. 理解 one-to-one (injective) (单射) 和 onto (surjective) (满射) 的概念

- one-to-one (injective) ： 对于每一个 $y$，都有唯一的 $x$ 与之对应
- onto (surjective) ： 

- 单射：每个元素都有唯一的对应元素
- 满射：每个元素都有对应元素
- 双射：每个元素都有唯一的对应元素，且每个元素都有对应元素

2.3.23. 判断函数是否双射(bijection)

2.2.30. 给定 $S$ 算 $f(S)$

2.2.51. 上取整和下取整

2.2.52. 证明 $⌈x⌉ = -⌊-x⌋$

2.2.72. 如果 $|A| = |B|$，证明 one-to-one (injective) 和 onto (surjective) 的概念等价