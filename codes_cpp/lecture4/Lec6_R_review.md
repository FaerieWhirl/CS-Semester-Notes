# R Review
## **Lecture 1: Computation in Information** 
## **Lecture 2: R programming**
## **Lecture 3: Representing information and Coding**
## **Lecture 4: Coding and Boolean logic**
## **Lecture 5: Set theory and counting**
## **Lecture 6: Probability theory**
### 1 Probability theory
#### **1.1 basis of probability**
> three-tuple (S, E, P)

#### **1.2 event**
> An event is a collection of one or more outcomes from a sample space, e.g., finding 2 or fewer errors in the sample of 10 codewords.

#### **1.3 Calculating** **probabilities**
- > ▶ Rule 1: The probability of any event is the sum of the probabilities of the outcomes that compose that event.
- > ▶ Rule 2: The probability of the complement of any event A is P ( A¯ ) = 1 − P(A).
- > ▶ Rule 3: If events A and B are mutually exclusive, then P(A ∪ B) = P(A) + P(B).
- > ▶ Rule 4: If two events A and B are not mutually exclusive, then P(A ∪ B) = P(A) + P(B) − P(A ∩ B).

#### **1.4 Conditional probability**

#### **1.5 Bayes’ theorem**

#### **1.6 Countable set**
> **Def**:  A set that is either **finite** or has the **same cardinality as the set of positive integers** is called countable. That is, if we can identify a bijective function from the set of positive integers to the given set.

> An infinite set is countable if and only if it is possible to list the elements of the set in a **sequence** (indexed by the positive integers).
> 
> For example, N and **Q** are countable sets while R is an uncountable set.
> 
*why Q?*

### **2 Random variables**
#### 2.1 Random variable
> **def**:  A random variable, X, is a numerical description of the outcome of an experiment. Formally, a random variable is a function that assigns a **numerical value** to every **possible outcome** in a sample space.


#### 2.2 probability distribution function (PDF)
> **def**: A probability distribution function (PDF), f (x), is a characterization of the possible values that a random variable may assume along with the probability of assuming these values.

#### 2.3 The cumulative distribution function (CDF)
> **def**: The cumulative distribution function (CDF), F(x), specifies the probability that the random variable X will assume a value less than or equal to a specified value, x, denoted as **P(X ⩽ x)**.

#### 2.4 different types of random variables
▶ The sample space S is essentially a set satisfying certain properties. Based on the property of S, we can introduce different types of random variables. 

▶ A random variable X is a variable whose value depends on the outcome of a random experiment (S, E, P) defined over the sample space S. 

▶ If S is **finite or countable**, then X is a **discrete random variable**. For example, let X be the number of the outcomes of three coin tosses. 

▶ If S is **continuous**, then X is a **continuous random variable**. For instance, let X be the time between queries to a database server.

> ▶ For discrete random variables, a PDF is also called a probability mass function (PMF) satisfying f (xi) ⩾ 0, f (xi) = P(X = xi) and $\sum_{x_i}^{}$ $x_if(x_i)=1$. 

> The CDF F(x) has the following properties
> 

<img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/3d21d0c2edf645e6b51103a8bd74a272~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=903&h=249&s=28970&e=png&b=ffffff" alt="image.png" width="30%" />

#### 2.5 Moments

![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/7fdf255c47fb42c0a7f4d858ba1162b3~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1299&h=986&s=170447&e=png&b=ffffff)



![image.png](https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c20f68fa0bfe425382ddc7e3a9e8f16d~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1210&h=219&s=44237&e=png&b=ffffff)

### **3 Discrete probability distributions**
#### 3.1 Bernoulli distribution
> **def**
> 
> Bernoulli distribution is the discrete probability distribution of a random variable which takes the value 1 with probability p and the value 0 with probability q = 1 − p.

**Gragh**

<img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/4827019eac3447e4b9d38b7c29585f49~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=967&h=745&s=41653&e=png&b=ffffff" alt="image.png" width="70%" />

**Caculate**

<img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/d02cf351f7704282a8a8010137f1cf0f~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1265&h=356&s=91093&e=png&b=ffffff" alt="image.png" width="70%" />


#### 3.2 Geometric distribution>
> **def**
> 
> The geometric distribution is a probability distribution that models the number of trials required to **achieve the first success** in a sequence of independent Bernoulli trials, where each trial has a constant probability of success.


<img src="https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/23f285596b8b46029ac7ddc779634e79~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=766&h=600&s=57358&e=png&b=fefefe" alt="image.png" width="70%" />


<img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/2cb1589dee4f47b08c7bdf2f88738fbd~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1293&h=732&s=137902&e=png&b=ffffff" alt="image.png" width="70%" />

#### 3.3 Binomial distribution
> **def**
> The binomial distribution describes the probability of obtaining exactly x “successes” in a sequence of n identical Bernoulli trials of successful rate p.


<img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c3a5fe20b01d46d7bf8e9c9905909db5~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=729&h=648&s=43612&e=png&b=fdfdfd" alt="image.png" width="70%" />


<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/88b5f427e0ee469982d300334281b5ed~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1242&h=676&s=112384&e=png&b=ffffff" alt="image.png" width="70%" />

#### 3.4 Discrete uniform distribution
> **def**
> 
> The discrete uniform distribution is one that has a **finite** (or countably finite) number of random variables that have an **equally likely chance** of occurring.


<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/e58cf1e08dc8438b97a95242e711aa66~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1218&h=669&s=56094&e=png&b=ffffff" alt="image.png" width="70%" />



<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c2e93ff82b174badb273f0529a65c2e4~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1271&h=384&s=54932&e=png&b=ffffff" alt="image.png" width="70%" />

#### 3.5 Poisson distribution
> **def**
> 
> The Poisson distribution is a discrete probability distribution that expresses the probability of a given number of events **occurring in a fixed interval of time or space** if these events occur with a ***known*** constant mean rate and **independently** of the time since the last event.


<img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/ea87f13c6fef4f82b4a74960135e1646~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1059&h=581&s=48527&e=png&b=fefefe" alt="image.png" width="70%" />


![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/6958364019204d62901ed80633a06fe4~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1215&h=424&s=70734&e=png&b=ffffff)

### 4 Continuous random variable
#### 4.1 Mode and quantile
> **def**
> 
> Mode: the value of x where the pdf f (x) is maximum - may not be defined or unique.
> 
> Quantile or Percentile: α quantile of X is denoted xα and is the point where cdf F (xα) = α, that is, P {X ⩽ xα} = α.

#### 4.2 Continuous random variables in R


![image.png](https://p3-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/84f981ca1f7c403b9b5b09d16022bfe5~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=902&h=577&s=77921&e=png&b=ffffff)

#### 4.3 Uniform distribution
> **def**
> 
> The uniform distribution is a distribution that is equally likely to take any value in a range of values (a, b), with a < b. We can denote X ∼ U(a, b).


<img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/3729af379b30465ab34fd24466fb6d78~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=778&h=531&s=17231&e=png&b=ffffff" alt="image.png" width="70%" />


<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/cb674c6f97e84560b2e0091061ebbee0~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1342&h=1061&s=146206&e=png&b=ffffff" alt="image.png" width="70%" />

#### 4.4 Exponential distribution
> **def**
> 
> The exponential distribution models the time between randomly occurring events, such as the time to or between failures of mechanical or electrical components.


<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/8eba9137e53f42c7ada8374a32bb7a19~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=868&h=685&s=83115&e=png&b=ffffff" alt="image.png" width="70%" />


<img src="https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/cffc3ec490f84e22b85416f47be1b30f~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1003&h=731&s=65198&e=png&b=ffffff" alt="image.png" width="70%" />

#### 4.5 Normal distribution
> **def**
> 
> The normal or Gaussian distribution models a large number of naturally occurring random phenomenon. Let X be a normal random variable.


<img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/2c83d3a260994e8d97f9c9a4950bd59a~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=672&h=618&s=87585&e=png&b=ffffff" alt="image.png" width="70%" />


![image.png](https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/5b44fff0842e474c8b99c6a8bdee5c24~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1280&h=560&s=89897&e=png&b=ffffff)

- **学习Z-Table 的读值**
- $Z=\frac{x-\mu }{\sigma }$
- 学会找**probability & percentile**


#### 4.6 Pareto distribution
> **def**
> 
> The Pareto principle is originally applied to describing the distribution of wealth in a society, fitting the trend that a large portion of wealth is held by a small fraction of the population. The corresponding Pareto distribution can be used to model lengths of data burst, size of files, etc.


<img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/b6fade5a241349b489ea1e0571b7a4a7~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=847&h=791&s=98371&e=png&b=ffffff" alt="image.png" width="70%" />


<img src="https://p1-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/c20b52212a174ca6a23959cfe5d07241~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1283&h=613&s=106615&e=png&b=ffffff" alt="image.png" width="70%" />


![image.png](https://p6-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/3d2d7f64f5dd475d96494186a734a8f7~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1276&h=875&s=119373&e=png&b=ffffff)

#### 4.7 Memoryless
> A random variable X with distribution FX (t) = P(X ≤ t) is said to be memoryless if P(X > s + t | X > t) = P(X > s)


<img src="https://p9-juejin.byteimg.com/tos-cn-i-k3u1fbpfcp/db6bf227988243cfbce8ac2b13c0309e~tplv-k3u1fbpfcp-jj-mark:0:0:0:0:q75.image#?w=1237&h=242&s=51583&e=png&b=fffefe" alt="image.png" width="70%" />













