# Lecture 1 The kinetic theory of gases 气体动理论

- **公式总结**:
   1. $$n = \frac{N}{N_A}$$
   2. $$PV = nRT$$
   3. $$v_{rms} = \sqrt{\frac{3kT}{m}}$$
      $$v_{rms} = \sqrt{\frac{3RT}{M}}$$
   4. $$\bar{KE} = \frac{3}{2} kT$$
   5. $$ R = k N_A $$
   6. $$ λ = \frac{v}{f} $$
      $$ λ = \frac{1}{\sqrt{2} n \pi d^2 N/V} $$
      $$ λ = \frac{kT}{\sqrt{2} n \pi d^2 p} $$
   7. $$ v_{rms} = \sqrt{\frac{v_1^2 + v_2^2 + ... + v_n^2}{n}} $$
      $$ v_{avg} = \frac{v_1 + v_2 + ... + v_n}{n} $$

# Lecture 2 Entrophy 熵

- **公式总结**

    1. $$ S = k \ln W $$
    2. $$ \Delta S = \frac{W}{T} $$
    3. $$ \Delta S = nR \ln \frac{V_f}{V_i} $$
    4. $$ w = -nRT \ln \frac{V_f}{V_i} $$

- **公式推导**

[Proof](https://chinchongcha.wordpress.com/2010/10/10/where-is-wnrt-ln-v2v1/)

Where is  $w=-nRTln\frac{V2}{V1}$ come from?

- $W=Fs$
- $P=F/A$
- So $F=PA$
- So $W=PAs$
- Because $s=$ `Distance` and $A=$ `Area` so $As= V$ and because Pressure from surrounding is constant so
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

# Chapter 15 Oscillations 简谐运动

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

# Lecture 4 电磁学

## 公式总结

1. **库仑定律**:

   $$ \vec{F} = k \frac{Q_1 Q_2}{r^2} \hat{r} $$

   $$ k = \frac{1}{4 \pi \epsilon_0} $$
   $$ \vec{F} = \frac{1}{4 \pi \epsilon_0} \frac{Q_1 Q_2}{r^2} \hat{r} $$

   $$ k = 8.99 \times 10^9 N m^2 \cdot C^{-2} $$

   $$ \epsilon_0 = 8.85 \times 10^{-12} C^2 \cdot N^{-1} m^{-2} $$


2. **电场**:

   - 电场强度定义

      $$ \vec{E} = \frac{\vec{F}}{q} $$

      单位: $ N \cdot C^{-1} $ or $ V \cdot m^{-1} $

      $$ \vec{E} = \frac{1}{4 \pi \epsilon_0} \frac{Q}{r^2} \hat{r} $$

3. **电场叠加原理**:

   $$ \vec{E} = \vec{E_1} + \vec{E_2} + \vec{E_3} + ... $$

4. **电偶极子**:

   $$ \vec{p} = q \vec{d} $$

- 延长线上：
   
   $$ \vec{E} = \frac{1}{4 \pi \epsilon_0} \frac{2 \vec{p}}{r^3} $$

- 中垂线上：
   
   $$ \vec{E} = - \frac{1}{4 \pi \epsilon_0} \frac{\vec{p}}{r^3} $$

5. **电通量**:
   
      $$ \Phi_E = \int \vec{E} \cdot d\vec{A} $$
   
      $$ \Phi_E = \int \vec{E} \cdot \hat{n} dA $$
   
      $$ \Phi_E = EA \cos \theta $$
   
      $$ \Phi_E = \frac{Q}{\epsilon_0} $$

6. **电势**


