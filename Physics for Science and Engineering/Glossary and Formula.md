# Chapter 15 Oscillations

## Formula

1. **简谐运动的基本公式**:
   
   - 位置: $ x(t) = A \cos(ωt + φ) $
   
   - 速度: $ v(t) = -Aω \sin(ωt + φ) $

   - 加速度: $ a(t) = -Aω^2 \cos(ωt + φ) $
   
   其中:
   $ A $ 是振幅
   $ ω $ 是角频率
   $ φ $ 是初始相位角

2. **周期与频率**:

   - $ T = \frac{1}{f} $
   
   - $ f = \frac{1}{T} $
   
   对于简单的弹簧-块系统：\[ ω = \sqrt{\frac{k}{m}} \]

   对于简单的摆：\[ ω = \sqrt{\frac{g}{L}} \]

3. **能量的计算**:

   - 动能: $ KE = \frac{1}{2} m v^2 $

   - 弹簧的势能: $ PE = \frac{1}{2} k x^2 $

   - 机械能: $ E = KE + PE $

4. **阻尼简谐运动**:
   
   - $ A(t) = A_0 e^{-\frac{b}{2m}t} $

5. **弹簧常数与力的关系**:

   - $ F = kx $

## Glossary

| Term | Definition |
| :--: | :--------: |
| simple harmonic motion | 简谐运动 |
| period | 周期 |
| frequency | 频率 |
| amplitude | 振幅 |
| oscillator | 振子 |
| spring constant | 弹簧常数 |
| angular frequency | 角频率 |
| displacement | 位移 |
| velocity | 速度 |
| acceleration | 加速度 |
| damping | 阻尼 |
| kinetic energy | 动能 |
| potential energy | 势能 |
| mechanical energy | 机械能 |
| pendulum | 摆 |

# Chapter 20 Entrophy

## Formula

[Proof](https://chinchongcha.wordpress.com/2010/10/10/where-is-wnrt-ln-v2v1/)

Where is  $w=-nRTln\frac{V2}{V1}$ come from?

- $W=Fs$
- $P=F/A$
- So $F=PA$
- So $W=PAs$
- Because $s=$ `Distance` and $A=$ `Area` so $As= V$ and
because Pressure from surrounding is constant so
- $dW= -P dV$ (In physics maybe $dW = P dV$ ; up to consider from surrounding or system.)           next step –>

- $P = \frac{n R T}{V} \rightarrow W = – ∫ (\frac{n R T}{V}) dV = – n R T ln (\frac{Vf}{Vi})$.
- integral of $\frac{1}{v} dv = ln V$
- $\frac{d}{dx}ln(x) = \frac{1}{x}$

- Since T is constant, $P_i V_i = P_f V_f$
- $\frac{Vf}{Vi} =\frac{P_i}{P_f}$.

$$W = n R T ln \frac{V_f}{V_i} = n R T ln \frac{P_i}{P_f}$$

Credit:
http://en.wikiversity.org/wiki/Thermodynamics/The_First_Law_Of_Thermodynamics
http://hubpages.com/hub/MECHANICAL-ENGINEERING-Thermodynamics—PV-Work-compression-expansion-work
http://www.physicsforums.com/showthread.php?t=424175

---

## Glossary

| Term | Definition |
| :--: | :--------: |
| entrophy | 熵 |
| undergos | 经历 |
| reversible | 可逆 |
| adiabatic | 绝热 |
| isothermal | 等温 |
| expansion | 膨胀 |