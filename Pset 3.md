# Pset 3

## 3.(29-30).4

### a)

$$
\log (i^2) = \log(-1) = \ln 1 + i \cdot \pi = i \cdot \pi = 2(\ln 1 + i \cdot \pi / 2) = 2 \log i
$$

### b)

$$
\log (i^2) = \log(-1) = \ln 1 + i \cdot \pi = i \cdot \pi = 2(\ln 1 + i \cdot \pi / 2) \neq 2(\ln 1 + i \cdot 5 \pi / 2) = 2 \log i
$$

In part b, our branch is different.

## 3.(29-30).10

Method 1: check if the function satisfies Laplace's equation:
$$
H(x, y) = \ln (x^2 + y^2) \\
H_x = \frac{2x}{x^2 + y^2} \\
H_{xx} = -\frac{2(x^2 - y^2)}{(x^2 + y^2)^2} \\
H_y = \frac{2y}{x^2 + y^2} \\
H_{yy} = \frac{2(x^2 - y^2)}{(x^2 + y^2)^2} \\
H_{xx} + H_{yy} = 0
$$
Method 2: we know the component functions $u(x, y), v(x, y)$ of a function $f(z) = u + iv$ are harmonic in $D$ if $f$ is analytic in $D$. Since $\ln(x^2 + y^2)$ is the real component of any branch cut of $2 \log z$, and $\log z$ and consequently $2 \log z$ are analytic in the domain $r > 0$, aka not the origin, $\ln (x^2 + y^2)$ is holomorphc in the same domain.

## 3.(29-30).11

$$
\begin{align}
\Re (\log (z - 1)) &= \Re(\ln |z - 1| + i \arg(z - 1)) \\
&= \ln |z - 1| \\
&= \ln |(x - 1) + iy| \\
&= \ln (((x - 1)^2 + y^2)^{1/2}) \\
&= \frac{1}{2} \ln ((x - 1)^2 + y^2)
\end{align}
$$

$\log z$ is analytic everywhere where its input is non-zero, so $\log (z - 1)$ is analytic on the domain $z \neq 1$, and since the components of an analytic function are harmonic, $\Re(\log (z - 1))$ is harmonic and thus satisfies Laplace's equation by definition.

## 3.31.1

With the imposed restrictions $\Re(z_1), \Re(z_2) > 0$, the domain of the angle remains correct.
$$
-\frac{\pi}{2} < \Theta_1, \Theta_2 < \frac{\pi}{2} \\
-\pi < \Theta_1 + \Theta_2 < \pi \\
\begin{align}
\text{Log } z_1 + \text{Log } z_2 &= \ln r_1 + i \Theta_1 + \ln r_2 + i \Theta_2 \\
&= (\ln r_1 + \ln r_2) + (i \Theta_1 + i \Theta_2)\\
&= \ln (r_1 r_2) + i(\Theta_1 + \Theta_2) \\
&= \text{Log } (z_1 z_2)
\end{align}
$$

## 3.31.4

$$
z_1 = i, z_2 = -i \\
\text{Log} \left(\frac{z_1}{z_2}\right) = \text{Log} (-1) \\
\text{Log} (i) - \text{Log} (-i) = \frac{i\pi}{2} - \frac{-i\pi}{2} = i \pi
$$

The LHS is not defined because for an input of $-1$, $\Theta = \pi$ which is not in the domain of the principal branch.

## 3.31.6

$$
\begin{align}
\log (z^{1/n}) &= \log \left(\exp\left(\frac{1}{n} \log z\right)\right) \\
&= \log \left(r^{1/n}\exp\left[i\left(\frac{\Theta}{n} + \frac{2k\pi}{n}\right)\right]\right), k = 0, 1, 2, \dots, n - 1 \\
&= \ln (r^{1/n}) + i\left(\frac{\Theta}{n} + \frac{2k\pi}{n}\right) + i 2\pi p, p = 0, \pm 1, \pm 2, \dots \\
&= \frac{1}{n} \ln r + i\left(\frac{\Theta + 2k\pi + 2\pi pn}{n}\right) \\
&= \frac{1}{n} \ln r + i\left(\frac{\Theta + 2(pn + k)\pi}{n}\right)
\end{align}
$$

We also have that
$$
\frac{1}{n} \log z = \frac{1}{n} \ln r + i \frac{\Theta + 2q \pi}{n}, q = 0, \pm 1, \pm 2, \dots
$$
The set of values covered are equal. Consider $q = pn + k$, where $p$ is the uniquely defined quotient after dividing by $n$ and $k$ is the uniquely defined remainder. The possible values of $k$ span the set of numbers $0, 1, \dots, n - 1$, and $p$ can be any integer, which matches exactly with the set of possible values of $p$ and $k$ defined in the first expression. Thus:
$$
\log (z^{1/n}) = \frac{1}{n} \log z
$$

## 3.32.1

### b)

$$
(-1)^{1/\pi} = \exp(1/\pi \cdot \log(-1)) = \exp(1/\pi \cdot (\ln 1 + i (\pi + 2n \pi))) = \exp(i(1 + 2n)) = e^{(2n + 1)i}
$$

## 3.32.2

### b)

$$
\begin{align}
\text{P.V.} \left[\frac{e}{2} (-1 - \sqrt 3 i)\right]^{3\pi i} &= \exp\left(3\pi i \cdot \text{Log}\left(\frac{e}{2} (-1 - \sqrt 3 i)\right) \right)\\
&= \exp\left(3\pi i \cdot (1 - \frac{2\pi i}{3}) \right) \\
&= \exp (2 \pi^2 + i \cdot 3\pi) \\
&= \exp (2\pi^2) \exp(i \cdot 3 \pi) \\
&= -\exp(2 \pi^2)
\end{align}
$$

## 3.32.3

$$
\begin{align}
(-1 + \sqrt 3 i)^{3/2} &= \exp\left(\frac{3}{2} \log (-1 + \sqrt 3 i)\right) \\
&= \exp \left(\frac{3}{2} \cdot \log(2e^{i2\pi/3}) \right) \\
&= \exp \left(\frac{3}{2} (\ln 2 + i (\frac{2\pi}{3} + 2n\pi)) \right) \\
&= \exp \left((\ln (2^{3/2}) + i (\pi + 3n\pi)) \right) \\
&= 2^{3/2} \cdot \exp(i\pi(3n + 1)) \\
&= 2\sqrt 2 \cdot \exp(i\pi(3n + 1))
\end{align}
$$

Note that as we cycle through the values $n = 0, 1, 2, \dots$, the angles take on values equivalent to $\pi, 0, \pi, 0, \pi, \dots$, so we only get two unique values, namely $\pm 2 \sqrt 2$.

## 3.32.5

From Sec. 8:
$$
\text{P.V. } z_0^{1/n} = \sqrt[n] {r_0} \exp(i \Theta_0), -\pi < \Theta_0 \leq \pi
$$
From Sec. 32:
$$
\text{P.V. } z_0^{1/n} = \exp\left(\frac{1}{n} \text{Log } z_0\right) = \exp\left(\frac{1}{n} \ln r_0\right) \cdot \exp (i \Theta_0) = \sqrt[n] {r_0} \exp(i \Theta_0)
$$
which is equivalent.

## 3.32.6

$$
z^a = \exp(a \log z) \\
|z^a| = |\exp(a \log z)| = |\exp (a \ln |z|) \cdot \exp(a i \theta)| = |\exp(a \ln |z|)| \cdot |\exp(a i \theta)| = \exp (a \ln |z|) = |z|^a
$$

## 3.33.5

### a)

$$
\cos 0 = 1 \\
\cos (z - z) = \cos z \cos (-z) - \sin z \sin (-z) = \cos z \cos z + \sin z \sin z = \sin^2 z + \cos^2 z = 1
$$

### b)

$\sin z$ and $\cos z$ are entire functions, so $\sin^2 z$, $\cos^2 z$, and $f(z) = \sin^2 z + \cos^2 z - 1$ are entire, upholding part 1 of the lemma from Sec. 26. Consider the x-axis as our line segment of choice. Then $f(z) = f(x + 0i) = \sin^2 x + \cos^2 x - 1 = 0$ for all $x$, upholding part 2 of the lemma from Sec. 26. Since both parts of the lemma hold true, we can conclude that $f(z) \equiv 0$ in $D$, so $\sin^2 z + \cos^2z = 1$.

## 3.33.11

### a)

$$
|\sin z|^2 = \sin^2 x + \sinh^2 y \\
|\sin z|^2 \geq \sinh^2 y \\
|\sin z| \geq |\sinh y| \\
|\sin z|^2 \leq 1 + \sinh^2 y = \cosh^2 y \\
|\sin z| \leq |\cosh y| = \cosh y \\
\implies |\sinh y| \leq |\sin z| \leq \cosh y
$$

### b)

$$
|\cos z|^2 = \cos^2 x + \sinh^2 y \\
|\cos z|^2 \geq \sinh^2 y \\
|\cos z| \geq |\sinh y| \\
|\cos z|^2 \leq 1 + \sinh^2 y = \cosh^2 y \\
|\cos z| \leq \cosh y \\
\implies |\sinh y| \leq |\cos z| \leq \cosh y
$$

## 3.33.13

$$
\sin \bar z = \sin (x - iy) = \sin x \cosh (-y) + i \cos x \sinh (-y) = \sin x \cosh y - i \cos x \sinh y = u + iv \\
u_x = \cos x \cosh y, v_y = -\cos x \cosh y \\
u_x = v_y \implies \cos x \cosh y = 0 \implies \cos x = 0 \implies x = \frac{\pi}{2} + n \pi \\
u_y = v_x = \sin x \sinh y \\
u_y = -v_x \implies \sin x \sinh y = 0 \implies \sin x = 0 \or \sinh y = 0 \\
\text{For } x = \frac{\pi}{2} + n \pi, \sin x \neq 0 \implies \sinh y = 0 \implies y = 0
$$

Cauchy-Riemann only holds for $z = \frac{\pi}{2} + n \pi$, which are points spaced in discrete intervals, so there is no continuous neighborhood around a point for which the function is analytic.
$$
\cos \bar z = \cos (x - iy) = \cos x \cosh (-y) - i \sin x \sinh (-y) = \cos x \cosh y + i \sin x \sinh y = u + iv \\
u_x = -\sin x \cosh y, v_y = \sin x \cosh y \\
u_x = v_y \implies \sin x \cosh y = 0 \implies \sin x = 0 \implies x = n \pi \\
u_y = v_x = \cos x \sinh y \\
u_y = -v_x \implies \cos x \sinh y = 0 \implies \cos x = 0 \or \sinh y = 0 \\
\text{For } x = n \pi, \cos x \neq 0 \implies \sinh y = 0 \implies y = 0
$$
Cauchy-Riemann only holds for $z = n \pi$, which are points spaced in discrete intervals, so there is no continuous neighborhood around a point for which the function is analytic.

## 3.33.17

$$
\sin z = \sin x \cosh y + i \cos x \sinh y \\
\sin x \cosh y = \cosh 4 \\
\cos x \sinh y = 0 \implies \cos x = 0 \or \sinh y = 0 \\
\sinh y = 0 \implies y = 0 \implies \cosh y = 1 \implies \sin x = \cosh 4 \\
\text{Since $-1 \leq \sin x \leq 1$ and $\cosh 4 \approx 27.3$, this is not possible.} \\
\cos x = 0 \implies x = \frac{\pi}{2} + n \pi \implies \sin x = (-1)^n \\
n \text{ is odd} \implies \cosh y = -\cosh 4 \\
\text{Since $\cosh y \geq 1$, this is not possible.} \\
n \text{ is even} \implies \cosh y = \cosh 4 \implies y = \pm 4 \\
z = \left(\frac{\pi}{2} + 2n \pi\right) \pm 4i, n = 0, \pm 1, \pm 2, \dots
$$

## 3.34.6

### a)

$$
|\cosh z|^2 = \sinh^2 x + \cos^2 y \geq \sinh^2 x \\
|\cosh z| \geq |\sinh x| \\
|\cosh z|^2 \leq \sinh^2 x + 1 = \cosh^2 x \\
|\cosh z| \leq \cosh x \\
|\sinh x| \leq |\cosh z| \leq \cosh x
$$

### b)

$$
|\sinh y| \leq |\cos z| \leq \cosh y \\
\text{Consider } \cos (iz) = \cosh z \\
i(x + iy) = -y + ix \\
|\sinh x| \leq |\cosh z| \leq \cosh x
$$

## 3.34.12

$$
\overline {\tanh z} = \overline{\left(\frac{\sinh z}{\cosh z}\right)} = \frac{\overline{\sinh z}}{\overline{\cosh z}} = \frac{\sinh \bar z}{\cosh \bar z} = \tanh \bar z
$$

## 3.34.13

### a)

Consider $f(z) = \cosh^2 z - \sinh^2 z - 1$, which is analytic everywhere. By picking the x-axis for our line segment in $D$ and noting that $\cosh^2 x - \sinh^2 x = 1$, we conclude from the Sec. 26 lemma that $f(z) \equiv 0$ in $D$, so $\cosh^2 z - \sinh^2 z = 1$.

### b)

Consider $f(z) = \sinh z + \cosh z - e^z$, which is analytic everywhere. By picking the x-axis for our line segment in $D$ and noting that $\sinh x + \cosh x = e^x$, we conclude from the Sec. 26 lemma that $f(z) \equiv 0$ in $D$, so $\sinh z + \cosh z = e^z$.

## 3.34.14

Both $\sinh z$ and $e^z$ are entire, and a composition of two analytic functions is analytic on the same domain, so $\sinh(e^z)$ is also entire.
$$
e^z = e^x e^{iy} = e^x(\cos y + i \sin y) \\
\Re(\sinh z) = \sinh x \cos y \\
\Re(\sinh (e^z)) = \sinh (e^x \cos y) \cos (e^x \sin y)
$$
We know this function must be harmonic everywhere because it is a component function of a complex function that is analytic everywhere.

## 3.34.16

$$
\cosh z = \cosh x \cos y + i \sinh x \sin y \\
\cosh x \cos y = -2 \\
\sinh x \sin y = 0 \implies \sinh x = 0 \or \sin y = 0 \\
\sinh x = 0 \implies x = 0 \implies \cos y = -2 \text{ which is not possible} \\
\sin y = 0 \implies y = n\pi \implies \cos y = (-1)^n \\
n \text{ is odd} \implies \cosh x = 2 \implies x = \pm \ln (2 + \sqrt 3) \\
n \text{ is even} \implies \cosh x = -2 \text{ which is not possible} \\
z = \pm \ln (2 + \sqrt 3) + (2n + 1) \pi i
$$

## 3.35.3

$$
\cos z = \sqrt 2 \\
\begin{align}
z &= \cos^{-1} \sqrt 2 \\
&= -i \log [\sqrt 2 + i (1 - (\sqrt 2)^2)^{1/2}] \\
&= -i \log [\sqrt 2 \pm 1] \\
&= -i (\ln (\sqrt 2 \pm 1) + i \arg(\sqrt 2 \pm 1)) \\
&= -i \ln (\sqrt 2 \pm 1)
\end{align}
$$

## 3.35.4

$$
\sin^{-1} z = -i \log[iz + (1 - z^2)^{1/2}] \\
\begin{align}
\frac{d}{dz}\sin^{-1} z &= -i \cdot \frac{1}{iz + (1 - z^2)^{1/2}} \cdot (i + \frac{1}{2}(1 - z^2)^{-1/2} \cdot (-2z))\\
&= -\frac{i}{iz + (1 - z^2)^{1/2}} \cdot (i - \frac{z}{(1 - z^2)^{1/2}}) \\
&= -\frac{-1 - \frac{iz}{(1 - z^2)^{1/2}}}{iz + (1 - z^2)^{1/2}} \cdot \frac{iz - (1 - z^2)^{1/2}}{iz - (1 - z^2)^{1/2}} \\
&= \frac{-\frac{1}{(1 - z^2)^{1/2}}}{-1} \\
&= \frac{1}{(1 - z^2)^{1/2}}
\end{align}
$$

## 4.(36-37).2

### a)

$$
\begin{align}
\int_1^2 \left(\frac{1}{t} - i\right)^2 dt &= \int_1^2 \left(\frac{1}{t^2} - \frac{2i}{t} - 1\right) dt \\
&= \left(-\frac{1}{t} - 2i \ln t - t\right)\Big|_1^2 \\
&= \left(-\frac{1}{2} - 2i \ln 2 - 2\right) - (-1 - 2i \ln 1 - 1) \\
&= -\frac{1}{2} - 2i \ln 2 = -\frac{1}{2} - i \ln 4
\end{align}
$$

## 4.(36-37).4

$$
\begin{align}
\int_0^\pi e^{(1 + i)x} dx &= \frac{e^{(1 + i)x}}{1 + i} \Big|_0^\pi \\
&= \frac{e^{(1 + i)\pi}}{1 + i} - \frac{1}{1 + i} \\
&= \frac{-e^\pi - 1}{1 + i} \cdot \frac{1 - i}{1 - i} \\
&= \frac{(-1 - e^\pi) + i(1 + e^\pi)}{2} \\
\int_0^\pi e^x \cos x dx = -\frac{1 + e^\pi}{2} \\
\int_0^\pi e^x \sin x dx = \frac{1 + e^\pi}{2}
\end{align}
$$

## 4.(36-37).5

Consider $w(t) = e^{it}, a = 0, b = 2\pi$
$$
\int_0^{2\pi} e^{it} dt = \frac{1}{i}e^{it} \Big |_0^{2\pi} = 0
$$
If it was true that there exists some $c \in (0, 2\pi)$ such that the mean value theorem held, then
$$
0 = w(c) (b - a) = e^{ic} (2 \pi - 0) \\
e^{ic} = 0
$$
But $e^z \neq 0$ for all $z$, so no such $c$ can exist.

## 4.38.2

$$
\phi(y) = \arctan \frac{y}{\sqrt{4 - y^2}} \\
\begin{align}
z[\phi(y)] &= 2\exp\left(i\arctan \frac{y}{\sqrt{4 - y^2}}\right) \\
&= 2 \left(\cos \arctan \frac{y}{\sqrt{4 - y^2}} + i \sin \arctan \frac{y}{\sqrt{4 - y^2}}\right) \\
&= 2 \left(\frac{1}{\sqrt{1 + \left(\frac{y}{\sqrt{4 - y^2}}\right)^2}} + i \frac{\frac{y}{\sqrt{4 - y^2}}}{\sqrt{1 + \left(\frac{y}{\sqrt{4 - y^2}}\right)^2}} \right) \\
&= 2 \left(\frac{\sqrt{4 - y^2}}{2} + \frac{iy}{2} \right) \\
&= \sqrt{4 - y^2} + iy = Z(y)
\end{align} \\
\frac{d}{dy} \arctan \frac{y}{\sqrt{4 - y^2}} = \frac{1}{\sqrt{4 - y^2}} > 0
$$

## 4.38.5

$$
w(t) = u[x(t), y(t)] + iv[x(t), y(t)] \\
w'(t) = \frac{du}{dt} + i \frac{dv}{dt} = u_x x' + u_y y' + i(v_x x' + v_y y') \\
\text{Apply Cauchy-Riemann:} \\
f'(z_0) = u_x + iv_x \text{ (equation 6 of Sec. 21)} \\
u_x x' + u_y y' + i(v_x x' + v_y y') = x'(u_x + iv_x) + y'(u_y + iv_y) = x' f'(z) + y'f'(z) = f'(z(t))z'(t)
$$

## 4.38.6

### a)

$$
y(x) = 0 \\
x = 0 \implies y(x) = 0 \implies z = 0 \text{ is one intersection point} \\
x > 0 \implies x^3 \sin\left(\frac{\pi}{x}\right) = 0 \implies \sin\left(\frac{\pi}{x}\right) = 0 \implies \frac{\pi}{x} = n\pi \implies x = \frac{1}{n} \implies z = \frac{1}{n}
$$

### b)

$$
0 \leq \left|x^3 \sin\left(\frac{\pi}{x}\right)\right| \leq x^3 \\
\implies \lim_{x \to 0} x^3 \sin\left(\frac{\pi}{x}\right) = 0 \text{ by squeeze theorem} \\
\implies \text{continuous at }x = 0 \\
y'(x) = 3x^2 \sin \left(\frac{\pi}{x}\right) - \pi x \cos\left(\frac{\pi}{x}\right) \\
0 \leq |y'(x)| \leq \pi x + 3x^2 \text{ for } x > 0 \\
\implies \lim_{x \to 0} y'(x) = 0 \\
\implies \text{ continuous at } x = 0
$$

## 4.(39-40).9

$$
\int_C f(z) dz = \int_0^{2\pi} f(Re^{i\theta}) Rie^{i\theta} d\theta \\
\int_{C_0} f(z - z_0) dz = \int_0^{2\pi} f(z_0 + Re^{i\theta} - z_0) Rie^{i\theta} d\theta = \int_0^{2\pi} f(Re^{i\theta}) Rie^{i\theta} d\theta
$$

The two are equal.

## 4.(39-40).10

### a)

$$
\int_{C_0}\frac{dz}{z - z_0} = \int_{-\pi}^\pi \frac{Rie^{i\theta} d\theta}{Re^{i\theta}} = i \int_{-\pi}^\pi d\theta = 2\pi i
$$

### b)

$$
\int_{C_0}(z - z_0)^{n-1}dz = \int_{-\pi}^\pi (Re^{i\theta})^{n-1} Rie^{i\theta} d\theta = R^n i \int_{-\pi}^\pi e^{in\theta} d\theta = \frac{R^n}{n}(e^{in\theta})\Big|_{-\pi}^\pi = \frac{2iR^n \sin(n\pi)}{n} = 0
$$

## 4.(39-40).11

No steps in 4.(39-40).10 relied on $n$ being an integer, so we can apply the exact same steps to get
$$
\int_{C_0}(z - z_0)^{a-1}dz = \frac{2iR^a \sin(a\pi)}{a}
$$
