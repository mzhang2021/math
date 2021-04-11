# Chapter 1

## 1.2.10

$$
(x, y)(x, y) + (x, y) + (1, 0) = (0, 0) \\
(x^2 - y^2, 2xy) + (x, y) + (1, 0) = (0, 0) \\
\text{Imaginary Part: } 2xy + y = 0 \\
(2x + 1) y = 0 \\
x = -\frac{1}{2} \text{ or } y = 0 \\
\text{Real Part: } x^2 - y^2 + x + 1 = 0 \\
y = 0 \implies x^2 + x + 1 = 0 \\
\text{No real solutions for $x$} \implies y \neq 0 \\
x = -\frac{1}{2} \implies -y^2 + \frac{3}{4} = 0 \\
y^2 = \frac{3}{4} \\
y = \pm \frac{\sqrt{3}}{2} \\
z = \left(-\frac{1}{2}, \frac{\sqrt{3}}{2}\right)
$$

## 1.3.7

$$
\begin{align}
\frac{z_1z}{z_2z} &= \left(\frac{z_1}{z_2}\right)\left(\frac{z}{z}\right) \text{by identity 8} \\
&= \frac{z_1}{z_2}
\end{align}
$$

## 1.4.5

### a)

$-4i$ and $4i$ are complex numbers at coordinates $(0, -4)$ and $(0, 4)$ on the complex plane, and we want the set of all points $z$ such that $|z - 4i| + |z + 4i|$, or the sum of their distance to $(0, -4)$ and $(0, 4)$ on the complex plane, is $10$. That is the definition of an ellipse: the set of all points such that the sum of their distances to the two foci is constant.

### b)

$-1$ and $i$ correspond to coordinates $(-1, 0)$ and $(0, 1)$. If we consider the set of all points equidistant to both, we get the line $y = -x$, which goes through the origin and has slope $-1$. $|z - 1| = |z + i|$ refers to points equidistant to the two aforementioned points, hence giving us what we want.

## 1.5.5

$$
z_1 = x_1 + y_1 i, z_2 = x_2 + y_2 i \\
\begin{align}
\left|\frac{z_1}{z_2}\right| &= \left|\frac{x_1x_2 + y_1y_2}{x_2^2 + y_2^2} + i \frac{y_1x_2 - x_1y_2}{x_2^2 + y_2^2}\right| \\
&= \sqrt{\left(\frac{x_1x_2 + y_1y_2}{x_2^2 + y_2^2}\right)^2 + \left(\frac{y_1x_2 - x_1y_2}{x_2^2 + y_2^2}\right)^2} \\
&= \sqrt{\frac{(x_1x_2 + y_1y_2)^2 + (y_1x_2 - x_1y_2)^2}{(x_2^2 + y_2^2)^2}} \\
&= \sqrt{\frac{x_1^2x_2^2 + x_1^2y_2^2 + y_1^2x_2^2 + y_1^2y_2^2}{(x_2^2 + y_2^2)^2}} \\
&= \sqrt{\frac{x_1^2(x_2^2 + y_2^2) + y_1^2(x_2^2 + y_2^2)}{(x_2^2 + y_2^2)^2}} \\
&= \sqrt{\frac{x_1^2 + y_1^2}{x_2^2 + y_2^2}} \\
&= \frac{\sqrt{x_1^2 + y_1^2}}{\sqrt{x_2^2 + y_2^2}} \\
&= \frac{|z_1|}{|z_2|} \\
\end{align}
$$

## 1.5.11

### a)

$$
\text{Definition of Real: } y = 0 \\
z = x + yi = x \\
\bar{z} = x - yi = x
$$

### b)

$$
\text{Real: } y = 0 \implies z = \bar z  \text{ per part a} \implies z^2 = \bar z^2 \\
\text{Pure Imaginary: } x = 0 \\
z = x + yi = yi \\
z^2 = -y^2 \\
\bar z = x - yi \\
\bar z^2 = (-yi)^2 = -y^2 \\
$$

## 1.7.9

$$
c_1 = r_1 e^{i \theta_1}, c_2 = r_2 e^{i \theta_2}, \bar c_2 = r_2e^{-i \theta_2} \\
z_1 = c_1c_2 = r_1r_2e^{i(\theta_1 + \theta_2)} \\
z_2 = r_1r_2e^{i(\theta_1 - \theta_2)}
$$

Both have moduli $r_1r_2$.

## 1.9.6

$$
z^4 + 4 = 0 \\
z^4 = -4 \\
z = \sqrt{2} e^{i\frac{2k\pi + \pi}{4}}, k = 0, 1, 2, 3 \\
z = 1 + i, 1 - i, -1 - i, -1 + i \\
(z - (1 + i))(z - (1 - i))(z - (-1 - i))(z - (-1 + i)) = (z^2 - 2z + 2)(z^2 + 2z + 2)
$$

## 1.9.7

$$
c^n = 1, c \neq 1 \\
1 + c + c^2 + \dots + c^{n-1} = \frac{1 - c^n}{1 - c} = 0 \text{ when } c \neq 1
$$

Geometric intuition: space the roots of unity around a circle, think of them as vectors, their vector sum is the zero vector by symmetry.

## 1.10.2

a is closed

b is open

c is open

d is closed

e is neither: $z = 0$ and $z = 1 + i$ are both boundary points, the former is not contained while the latter is.

f is closed