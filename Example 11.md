# Example 11

From https://www.stat.cmu.edu/~genovese/class/iprob-S06/notes/generating-functions.pdf

**Goal:** Compute $\sum_{k=1}^n k^2$

## Definitions/Notation:

Let $G(z) = g_0 + g_1 z + g_2 z^2 + g_3z^3 \dots = \sum_{n \geq 0} g_n z^n$

The coefficient of the $n$th term is denoted as $g_n = [z^n] G(z)$

**Right-shifting:** $S^k G(z) = z^k G(z) = \sum_{n \geq 0} g_n z^{n+k}$

**Differentiating:** $D^k G(z) = G^{(k)}(z) = \sum_{n \geq 0} n^{\underline k} g_n z^n$

where $n^\underline k$ is the falling factorial, $n^\underline k = n \cdot (n - 1)^\underline {(k - 1)}, n^\underline 0 = 1$

**Partial Summation:**
$$
\begin{align}
\frac{G(z)}{1 - z} &= \frac{\sum_{n \geq 0} g_n z^n}{\sum_{n \geq 0} z^n} \\
&= (g_0 + g_1 z + g_2 z^2 + g_3 z^3 + \dots) (1 + z + z^2 + z^3 + \dots) \\
&= (g_0) + (g_1 z + g_0 z) + (g_2 z^2 + g_1 z^2 + g_0 z^2) + \dots \\
&= \sum_{n \geq 0} \left(\sum_{k \leq n} g_k\right) z^n
\end{align}
$$

## Computing the Goal:

Consider $(SD)^2 \frac{1}{1 - z}$:
$$
(SD) G(z) = S(D G(z)) = S \left( \sum_{n \geq 1} n g_n z^{n - 1} \right) = \sum_{n \geq 1} n g_n z^n \\
(SD)^2 G(z) = SD ((SD) G(z)) = SD \left(\sum_{n \geq 1} n g_n z^n \right) = S \left(\sum_{n \geq 1} n^2g_n z^{n-1}\right) = \sum_{n \geq 1} n^2 g_n z^n \\
(SD)^2 \frac{1}{1 - z} = \sum_{n \geq 1} n^2 z^n
$$
If we divide that result by $1 - z$, then by partial summation we get:
$$
\frac{1}{1 - z} \cdot \left( (SD)^2 \frac{1}{1 - z} \right) = \sum_{n \geq 1} \left(\sum_{k \leq n} k^2 \right) z^n
$$
(I write $n \geq 1$ instead of $n \geq 0$ since $g_0$ is $0$ anyways.)

So our answer is:
$$
\sum_{k=1}^n k^2 = [z^n] \left(\frac{1}{1 - z} \cdot \left( (SD)^2 \frac{1}{1 - z} \right)\right)
$$
To simplify that inner expression, we keep them in fractional form instead of writing them out as series.
$$
D \left(\frac{1}{1 - z}\right) = \frac{1}{(1 - z)^2} \\
SD \left(\frac{1}{1 - z}\right) = \frac{z}{(1 - z)^2} \\
DSD \left(\frac{1}{1 - z}\right) = \frac{1 + z}{(1 - z)^3} \\
(SD)^2 \left(\frac{1}{1 - z}\right) = SDSD \left(\frac{1}{1 - z}\right) = \frac{z^2 + z}{(1 - z)^3} \\
\frac{1}{1 - z} \cdot \left( (SD)^2 \frac{1}{1 - z} \right) = \frac{z^2 + z}{(1 - z)^4} = \frac{z^2}{(1 - z)^4} + \frac{z}{(1 - z)^4}
$$
Evaluate $1/(1 - z)^4 = (1 - z)^{-4}$ with binomial theorem (the negative variant):
$$
(1 + z)^{-n} = \sum_{k \geq 0} \binom{n + k - 1}{k} (-1)^k z^k \\
(1 - z)^{-4} = \sum_{n \geq 0} \binom{4 + n - 1}{n} (-1)^n (-z)^n = \sum_{n \geq 0} \binom{n + 3}{n} (-1)^n (-1)^n z^n = \sum_{n \geq 0} \binom{n + 3}{3} z^n
$$
So the RHS of our original equation becomes:
$$
\frac{z^2}{(1 - z)^4} + \frac{z}{(1 - z)^4} = \sum_{n \geq 0} \binom{n + 3}{3} z^{n + 2} + \sum_{n \geq 0} \binom{n + 3}{3} z^{n + 1} = \sum_{n \geq 2} \binom{n + 1}{3}z^n + \sum_{n \geq 1} \binom{n + 2}{3}z^n
$$
and $[z^n]$ of the RHS is
$$
\binom{n + 1}{3} + \binom{n + 2}{3} = \frac{(n + 1)n(n - 1)}{3 \cdot 2 \cdot 1} + \frac{(n + 2)(n + 1)n}{3 \cdot 2 \cdot 1} = \frac{n(n + 1)(n - 1 + n + 2)}{6} = \frac{n(n + 1)(2n + 1)}{6}
$$
Note for $n = 1$, we get just the coefficient of the second sum on the RHS, or $\binom{1 + 2}{3} = \binom{3}{3} = 1 = \sum_{k=1}^n k^2$, and $\frac{1(1 + 1)(2 \cdot 1 + 1)}{6} = 1$, so the formula checks out.