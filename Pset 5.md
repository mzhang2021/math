# Pset 5

## 4.(47-48).1

### a)

$$
\int_C \frac{e^{-z} dz}{z - \pi i/2} = 2\pi i \cdot e^{-\pi i/2} = 2\pi i \cdot -i = 2\pi
$$

### b)

$$
\int_C \frac{\cos z}{z(z^2 + 8)} dz = 2\pi i \cdot \frac{\cos 0}{0^2 + 8} = \frac{\pi i}{4}
$$

### c)

$$
\int_C \frac{z dz}{2z + 1} = 2\pi i \cdot \frac{z}{2} \Big|_{z=-1/2} = 2\pi i \cdot -\frac{1}{4} = -\frac{\pi i}{2}
$$

### d)

$$
\int_C \frac{\cosh z}{z^4} dz = \frac{2\pi i}{3!} f^{(3)}(0) = \frac{\pi i}{3} \cdot \sinh 0 = 0
$$

### e)

$$
\int_C \frac{\tan(z / 2)}{(z - x_0)^2} dz = 2 \pi i \cdot f'(x_0) = 2\pi i \cdot \frac{1}{2}\sec^2(x_0/2) = \pi i \sec^2(x_0 / 2)
$$

## 4.(47-48).5

Case 1: $z_0$ is inside $C$.
$$
\int_C \frac{f'(z) dz}{z - z_0} = 2\pi i \cdot f'(z_0) \\
\int_C \frac{f(z) dz}{(z - z_0)^2} = \frac{2\pi i}{1!} f'(z_0) = 2\pi i \cdot f'(z_0)
$$
Case 2: $z_0$ is outside $C$.

For all points on and inside the contour (which no longer includes $z_0$), $\frac{f'(z)}{z - z_0}$ and $\frac{f(z)}{(z - z_0)^2}$ are analytic, so by the Cauchy-Goursat theorem the integral of both functions evaluate to $0$.

## 4.(47-48).8

### a)

$$
P_n(z) = \frac{1}{n!2^n} \frac{d^n}{dz^n} (z^2 - 1)^n = \frac{1}{n!2^n} \frac{d^n}{dz^n} \left(\sum_{k=0}^n \binom{n}{k} z^{2k}(-1)^{n-k} \right)
$$

The highest exponent of $z$ inside the summation is $z^{2n}$ occurring when $k = n$, and after taking the $n$th derivative the term gets reduced to order $z^n$, confirming that the function is a polynomial of degree $n$.

### b)

$$
P_n(z) = \frac{1}{n!2^n} \frac{d^n}{dz^n} (z^2 - 1)^n = \frac{1}{n!2^n} \frac{n!}{2\pi i} \int_C \frac{(s^2 - 1)^n}{(s - z)^{n+1}} ds = \frac{1}{2^{n+1}\pi i} \int_C \frac{(s^2 - 1)^n}{(s - z)^{n+1}} ds
$$

### c)

When $z = 1$:
$$
\frac{(s^2 - 1)^n}{(s - 1)^{n+1}} = \frac{(s - 1)^n(s + 1)^n}{(s - 1)^{n+1}} = \frac{(s + 1)^n}{s - 1}
$$
Evaluating $P_n(z)$ at $1$ and $-1$:
$$
P_n(1) = \frac{1}{2^{n+1}\pi i} \int_C \frac{(s^2 - 1)^n}{(s - 1)^{n+1}} ds = \frac{1}{2^{n+1}\pi i} \int_C \frac{(s + 1)^n}{s - 1} ds = \frac{1}{2^{n+1}\pi i} \cdot 2\pi i (1 + 1)^n = \frac{2\pi i \cdot 2^n}{2^{n+1}\pi i} = 1 \\
\frac{(s^2 - 1)^n}{(s - (-1))^{n+1}} = \frac{(s - 1)^n(s + 1)^n}{(s + 1)^{n+1}} = \frac{(s - 1)^n}{s + 1} \\
P_n(-1) = \frac{1}{2^{n+1}\pi i} \int_C \frac{(s^2 - 1)^n}{(s - (-1))^{n+1}} ds = \frac{1}{2^{n+1}\pi i} \int_C \frac{(s - 1)^n}{s + 1} ds = \frac{1}{2^{n+1}\pi i} \cdot 2\pi i (-1 - 1)^n = \frac{2\pi i (-2)^n}{2^{n+1}\pi i} = (-1)^n
$$

## 5.(51-52).1

Way 1:
$$
z_n = -2 + i \frac{(-1)^n}{n^2} \\
x_n = -2 \\
y_n = \frac{(-1)^n}{n^2} \text{ which converges to 0} \\
\implies \lim_{n \to \infin} z_n = -2 + i \cdot 0 = -2
$$
Way 2:
$$
|z_n - (-2)| = \left|i \frac{(-1)^n}{n^2}\right| = \frac{1}{n^2}
$$
For any $\epsilon > 0$, there exists a positive integer $n_0$ (say $\frac{1}{\sqrt{\epsilon}}$) such that $\frac{1}{n^2} < \epsilon$ when $n > n_0$.

## 5.(51-52).6

$$
z_n = x_n + i y_n \\
\sum_{n=1}^\infin x_n = S_x \\
\sum_{n=1}^\infin y_n = S_y \\
\sum_{n=1}^\infin z_n = S = S_x + i S_y \\
\sum_{n=1}^\infin -y_n = -S_y \\
\sum_{n=1}^\infin \overline {z_n} = \sum_{n=1}^\infin x_n + i\sum_{n=1}^\infin -y_n = S_x - i S_y = \overline S
$$

## 5.(53-54).11

### a)

$$
\frac{e^z}{z^2} = \frac{1}{z^2} \left(\sum_{n=0}^\infin \frac{z^n}{n!} \right) = \frac{1}{z^2} \left( 1 + z + \frac{z^2}{2!} + \frac{z^3}{3!} + \frac{z^4}{4!} + \dots \right) = \frac{1}{z^2} + \frac{1}{z} + \frac{1}{2!} + \frac{z}{3!} + \frac{z^2}{4!} + \dots
$$

### b)

$$
\frac{\sin(z^2)}{z^4} = \frac{1}{z^4} \left(\sum_{n=0}^\infin (-1)^n \frac{(z^2)^{2n+1}}{(2n+1)!} \right) = \frac{1}{z^4} \left(z^2 - \frac{z^6}{3!} + \frac{z^{10}}{5!} - \frac{z^{14}}{7!}\right) = \frac{1}{z^2} - \frac{z^2}{3!} + \frac{z^6}{5!} - \frac{z^{10}}{7!} + \dots
$$

## 5.(53-54).1

$$
\cosh z = \sum_{n=0}^\infin \frac{z^{2n}}{(2n)!} \\
z \cosh(z^2) = z \sum_{n=0}^\infin \frac{(z^2)^{2n}}{(2n)!} = \sum_{n=0}^\infin \frac{z^{4n+1}}{(2n)!}
$$

## 5.(55-56).4

Case 1: $0 < |z| < 1$
$$
f(z) = \frac{1}{z^2}\frac{1}{1 - z} = \frac{1}{z^2} \sum_{n=0}^\infin z^n = \sum_{n=0}^\infin z^{n-2} = \frac{1}{z^2} + \frac{1}{z} + \sum_{n=0}^\infin z^n
$$
Case 2: $1 < |z| < \infin \implies 0 < |1/z| < 1$
$$
f(z) = \frac{1}{z^2} \frac{1/z}{1/z - 1} = -\frac{1}{z^3} \sum_{n=0}^\infin (1/z)^n = -\sum_{n=0}^\infin \frac{1}{z^{n+3}} = -\sum_{n=3}^\infin \frac{1}{z^n}
$$

## 5.(55-56).8

### a)

$$
\frac{a}{z - a} \cdot \frac{1/z}{1/z} = \frac{a}{z} \cdot \frac{1}{1 - a/z} = \frac{a}{z} \sum_{n=0}^\infin \left(\frac{a}{z}\right)^n = \sum_{n=0}^\infin \frac{a^{n+1}}{z^{n+1}} = \sum_{n=1}^\infin \frac{a^n}{z^n}
$$

The transformation to an infinite series is valid because $|a| < |z| \implies |a/z| < 1$.

### b)

Plug in $z = e^{i\theta}$:
$$
\frac{a}{e^{i\theta} - a} = \sum_{n=1}^\infin \frac{a^n}{(e^{i\theta})^n} \\
\frac{a}{e^{i\theta} - a} = \frac{a}{\cos \theta + i \sin \theta - a} \cdot \frac{\cos \theta - a - i \sin \theta}{\cos \theta - a - i \sin \theta} = \frac{a \cos\theta - a^2 - i a \sin\theta}{(\cos \theta - a)^2 + \sin^2 \theta} = \frac{a \cos\theta - a^2 - i a \sin\theta}{1-2a \cos \theta + a^2} \\
\sum_{n=1}^\infin \frac{a^n}{(e^{i\theta})^n} = \sum_{n=1}^\infin a^n(e^{-in\theta}) = \sum_{n=1}^\infin a^n(\cos (-n\theta) + i \sin (-n\theta)) = \sum_{n=1}^\infin a^n \cos n\theta - i \sum_{n=1}^\infin a^n \sin n\theta
$$
Equate real and imaginary parts:
$$
\sum_{n=1}^\infin a^n \cos n\theta = \frac{a \cos \theta - a^2}{1 - 2a \cos \theta + a^2} \\
\sum_{n=1}^\infin a^n \sin n\theta = \frac{a \sin \theta}{1 - 2a \cos \theta + a^2}
$$
