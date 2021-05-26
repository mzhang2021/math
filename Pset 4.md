# Pset 4

## 4.41.3

$$
|e^z - \bar z| \leq |e^z| + |\bar z| \\
x \leq 0 \ \forall \ z \text{ on the contour} \implies |e^z| = e^x \leq 1 \\
\text{Furthest point on contour is } z = -4 + 0i \implies |\bar z| = |z| \leq 4 \\
M = 1 + 4 = 5\\
L = 3 + 4 + 5 = 12 \\
\left|\int_C (e^z - \bar z) dz\right| \leq ML = 5 \cdot 12 = 60
$$

## 4.41.6

Because $f(z)$ is analytic in the disk $|z| \leq 1$, it is also continuous and thus bounded by some $M$ in that same disk.
$$
z^{-1/2} = \exp \left(-\frac{1}{2} \log z \right) = \exp \left(-\frac{1}{2} (\ln r + i \theta) \right) = r^{-1/2} \exp \left(-\frac{i \theta}{2} \right) \\
|z^{-1/2} f(z)| \leq |z^{-1/2}| |f(z)| \leq \rho^{-1/2} \cdot M \\
L = 2 \pi \rho \\
\left| \int_{C_p} z^{-1/2} f(z) dz \right| \leq \rho^{-1/2} \cdot M \cdot 2 \pi \rho = 2\pi M \sqrt{\rho}
$$

## 4.(42-43).3

For any $f(z) = (z - z_0)^{n-1}, n \leq 0$, there exists an antiderivative $F(z) = \frac{(z - z_0)^n}{n}$. Thus, statement 1 of the theorem from Sec. 42 is satisfied, also implying that statement 3 is true, so the integral of the function around any closed contour $C_0$ is $0$.

## 4.(42-43).5

Consider the branch $-\frac{\pi}{2} < \arg z < \frac{3\pi}{2}$. The antiderivative using this branch evaluated at the endpoints is
$$
\begin{align}
\frac{z^{i+1}}{i+1}\Big|_{-1}^1 &= \frac{1}{i + 1} (1^{i + 1} - (-1)^{i + 1}) \\
&= \frac{1}{i + 1}(\exp((i + 1) \log 1) - \exp((i + 1) \log(-1))) \\
&= \frac{1}{i + 1} (\exp((i + 1)(\ln 1 + i \cdot 0)) - \exp((i + 1)(\ln 1 + i \cdot \pi))) \\
&= \frac{1}{i + 1} (1 - e^{-\pi} e^{i \pi}) \\
&= \frac{1 + e^{-\pi}}{i + 1} \\
&= \frac{1 + e^{-\pi}}{1 + i} \cdot \frac{1 - i}{1 - i} = \frac{1 + e^{-\pi}}{2}(1 - i)
\end{align}
$$

## 4.(44-46).2

### a)

$f(z) = \frac{1}{3z^2 + 1}$ is analytic everywhere except at $z = \pm \frac{i}{\sqrt 3}$, which is inside the region enclosed by $C_2$, so Corollary 2 of Sec. 46 is satisfied.

### b)

$f(z) = \frac{z + 2}{sin(z / 2)}$ is analytic everywhere except at $z = 2n \pi$. For $n = 0$, $z = 0$ lies inside the region enclosed by $C_2$, and for all other values of $n$, $z = 2n \pi$ lies outside the region enclosed by $C_1$, so Corollary 2 of Sec. 46 is satisfied.

### c)

$f(z) = \frac{z}{1 - e^z}$ is analytic everywhere except at $z = 2n\pi i$. For $n = 0$, $z = 0$ lies inside the region enclosed by $C_2$, and for all other values of $n$, $z = 2n \pi i$ lies outside the region enclosed by $C_1$, so Corollary 2 of Sec. 46 is satisfied.

## 4.(44-46).5

Since $f(z)$ is entire, by Cauchy-Goursat we know
$$
\int_{C_3 - C_1} f(z) dz = 0
$$
since $C_3 - C_1$ is closed and not self-intersecting.
$$
\int_{C_3 - C_1} f(z) dz = \int_{C_3} f(z) dz - \int_{C_1} f(z) dz = 0 \implies \int_{C_1} f(z) dz = \int_{C_3} f(z) dz
$$
Also consider $C_2 + C_3$ which is a simple closed contour, thus also satisfying Cauchy-Goursat.
$$
\int_{C_2 + C_3} f(z) dz = \int_{C_2} f(z) dz + \int_{C_3} f(z) dz = 0 \implies \int_{C_2} f(z) dz = -\int_{C_3} f(z) dz
$$
Now we consider the closed contour $C = C_1 + C_2 = C_1 - C_3 + C_2 + C_3$:
$$
\int_C f(z) dz = \int_{C_1 - C_3} f(z) dz + \int_{C_2 + C_3} f(z) dz = 0 + 0 = 0
$$
since $C_1 - C_3$ is the same contour as $C_3 - C_1$, just of opposite orientation.