# Pset 2

## 2.13.1

$$
z = x + iy \\
u = x^2 - y^2 \\
v = 2xy \\
1 \leq u, v \leq 2 \\
1 \leq x^2 - y^2, 2xy \leq 2
$$

We want the intersection of the area between the hyperbolas $x^2 - y^2 = 1$ and $x^2 - y^2 = 2$, and the area between the hyperbolas $xy = 1/2$ and $xy = 1$.

## 2.(14-17).7

$$
\lim_{z \to z_0} f(z) = w_0 \\
\implies \forall \ \epsilon \ \exists \ \delta, |f(z) - w_0| < \epsilon, 0 < |z - z_0| < \delta \\
\text{By the inequality } ||z_1| - |z_2|| \leq |z_1 - z_2| \\
\implies ||f(z)| - |w_0|| \leq |f(z) - w_0| < \epsilon \\
||f(z)| - |w_0|| < \epsilon, 0 < |z - z_0| < \delta \\
\implies \lim_{z \to z_0} |f(z)| = |w_0|
$$

## 2.(14-17).10

### a)

$$
\lim_{z \to \infin} \frac{4z^2}{(z - 1)^2} = 4 \\
\iff \lim_{z \to 0} \frac{4/z^2}{(1/z-1)^2} = 4 \\
\begin{align}
\lim_{z \to 0} \frac{4/z^2}{(1/z-1)^2}
&= \lim_{z \to 0} \frac{4/z^2}{1/z^2 - 2/z + 1} \\
&= \lim_{z \to 0} \frac{4}{1 - 2z + z^2}, z \neq 0 \\
&= \frac{4}{1 - 2 \cdot 0 + 0^2} = 4
\end{align}
$$

### b)

$$
\lim_{z \to 1} \frac{1}{(z - 1)^3} = \infin \\
\iff \lim_{z \to 1} (z - 1)^3 = 0 \\
\lim_{z \to 1} (z - 1)^3 = (1 - 1)^3 = 0
$$

### c)

$$
\lim_{z \to \infin} \frac{z^2 + 1}{z - 1} = \infin \\
\iff \lim_{z \to 0} \frac{1/z - 1}{1 / z^2 + 1} = 0 \\
\begin{align}
\lim_{z \to 0} \frac{1/z - 1}{1 / z^2 + 1} &= \lim_{z \to 0} \frac{z - z^2}{1 + z^2}, z \neq 0 \\
&= \frac{0 - 0^2}{1 + 0^2} = 0
\end{align}
$$

## 2.(14-17).13

Definition of bounded: every point of $S$ lies inside some circle $|z| = R$.

Assume that there exists a neighborhood of $\infin$ that contains no points of $S$. The definition of a neighborhood of $\infin$ is some set $|z| > 1 / \epsilon$ for some small positive number $\epsilon$. Since no points of $S$ lie in this neighborhood, all points of $S$ must instead lie inside the set $|z| \leq 1 / \epsilon$. This is the definition of a bounded set with $R = 1 / \epsilon$, thus $S$ is not unbounded. Each neighborhood of $\infin$ must thus contain a point in $S$ for $S$ to be unbounded.

## 2.(18-19).8

### a)

$$
f(z) = \overline z \\
\begin{align}
\frac{\Delta w}{\Delta z} &= \frac{\overline{z + \Delta z} - \overline z}{\Delta z} \\
&= \frac{\overline z + \overline {\Delta z} - \overline z}{\Delta z} \\
&= \frac{\overline {\Delta z}}{\Delta z}
\end{align}
$$

$$
\text{Approach from } (\Delta x, 0): \\
\lim_{\Delta z \to 0} \frac{\overline {\Delta z}}{\Delta z} = \lim_{\Delta z \to 0} \frac{\Delta z}{\Delta z} = 1
$$

$$
\text{Approach from } (0, \Delta y): \\
\lim_{\Delta z \to 0} \frac{\overline {\Delta z}}{\Delta z} = \lim_{\Delta z \to 0} \frac{-\Delta z}{\Delta z} = -1
$$

$1 \neq -1$, so no limit exists and thus the derivative fails to exist for any point $z$.

### b)

$$
f(z) = \Re(z) \\
\begin{align}
\frac{\Delta w}{\Delta z} &= \frac{\Re(z + \Delta z) - \Re (z)}{\Delta z} \\
&= \frac{\Re(z) + \Re ({\Delta z}) - \Re (z)}{\Delta z} \\
&= \frac{\Re(\Delta z)}{\Delta z}
\end{align}
$$

$$
\text{Approach from } (\Delta x, 0): \\
\lim_{\Delta z \to 0} \frac{\Re (\Delta z)}{\Delta z} = \lim_{\Delta z \to 0} \frac{\Delta z}{\Delta z} = 1
$$

$$
\text{Approach from } (0, \Delta y): \\
\lim_{\Delta z \to 0} \frac{\Re (\Delta z)}{\Delta z} = \lim_{\Delta z \to 0} \frac{0}{\Delta z} = 0
$$

$1 \neq 0$, so no limit exists and thus the derivative fails to exist for any point $z$.

### c)

$$
f(z) = \Im(z) \\
\begin{align}
\frac{\Delta w}{\Delta z} &= \frac{\Im(z + \Delta z) - \Im (z)}{\Delta z} \\
&= \frac{\Im(z) + \Im ({\Delta z}) - \Im (z)}{\Delta z} \\
&= \frac{\Im(\Delta z)}{\Delta z}
\end{align}
$$

$$
\text{Approach from } (\Delta x, 0): \\
\lim_{\Delta z \to 0} \frac{\Im (\Delta z)}{\Delta z} = \lim_{\Delta z \to 0} \frac{0}{\Delta z} = 0
$$

$$
\text{Approach from } (0, \Delta y): \\
\lim_{\Delta z \to 0} \frac{\Im (\Delta z)}{\Delta z} = \lim_{\Delta z \to 0} \frac{\Delta z}{\Delta z} = 1
$$

$0 \neq 1$, so no limit exists and thus the derivative fails to exist for any point $z$.

## 2.(18-19).9

$$
f(z) = \frac{\overline z^2}{z}, z \neq 0 \\
\begin{align}
\frac{\Delta w}{\Delta z} &= \frac{\frac{\overline {z + \Delta z}^2}{z + \Delta z} - \frac{\overline z^2}{z}}{\Delta z} \\
&= \frac{\overline{(z + \Delta z)}^2}{(z + \Delta z)\Delta z} - \frac{\overline z^2}{z \Delta z}
\end{align}
$$

$$
\text{Approach from } (\Delta x, 0) \text{ or } (0, \Delta y), z = 0: \\
\lim_{\Delta z \to 0} \frac{\overline{(z + \Delta z)}^2}{(z + \Delta z)\Delta z} - \lim_{\Delta z \to 0} \frac{\overline z^2}{z \Delta z} = \lim_{\Delta z \to 0} \frac{\overline{(\Delta z)}^2}{(\Delta z)^2} - 0 = \lim_{\Delta z \to 0} \frac{(\Delta z)^2}{(\Delta z)^2} = 1
$$

$$
\text{Approach from } (\Delta x, \Delta x), z = 0: \\
(\Delta x + i \Delta x)^2 = (\Delta x)^2 + 2i (\Delta x)^2 - (\Delta x)^2 = 2i(\Delta x)^2 \\
\lim_{\Delta z \to 0} \frac{\overline{(z + \Delta z)}^2}{(z + \Delta z)\Delta z} - \lim_{\Delta z \to 0} \frac{\overline z^2}{z \Delta z} = \lim_{\Delta z \to 0} \frac{\overline{(\Delta z)}^2}{(\Delta z)^2} - 0 = \lim_{\Delta z \to 0} \frac{-2i (\Delta x)^2}{2i (\Delta x)^2} = -1
$$

$1 \neq -1$, so no limit exists and thus the derivative fails to exist at $z = 0$.

## 2.(20-22).1

### a)

$$
f(z) = \overline z = x - iy \\
u_x = 1, v_y = -1, u_x \neq v_y
$$

Since the Cauchy-Riemann equations are never satisfied, $f'(z)$ cannot possibly exist for any $z$.

### b)

$$
f(z) = z - \overline z = (x - x) + i(y - (-y)) = 0 + i \cdot 2y \\
u_x = 0, v_y = 2, u_x \neq v_y
$$

Since the Cauchy-Riemann equations are never satisfied, $f'(z)$ cannot possibly exist for any $z$.

### c)

$$
f(z) = 2x + ixy^2 \\
u_x = 2, v_y = 2xy, u_x \neq v_y
$$

Since the Cauchy-Riemann equations are never satisfied, $f'(z)$ cannot possibly exist for any $z$.

### d)

$$
f(z) = e^x e^{-iy} = e^x (\cos (-y) + i \sin (-y)) = e^x \cos y - i \cdot e^x \sin y \\
u_y = -e^x \sin y, v_x = -e^x \sin y, u_y \neq -v_x
$$

Since the Cauchy-Riemann equations are never satisfied, $f'(z)$ cannot possibly exist for any $z$.

## 2.(20-22).4

### b)

For all $z$ in the domain of definition, the function is defined in its neighborhood, the first-order partial derivatives exist everywhere in that neighborhood, the function is continuous at the point, and the Cauchy-Riemann equations are satisfied:
$$
f(z) = \sqrt r e^{i \theta / 2} = \sqrt r \cos (\theta / 2) + i \cdot \sqrt r \sin(\theta / 2) \\
u_r = \frac{1}{2}r^{-1/2} \cos (\theta / 2) \\
r u_r = \frac{1}{2} \sqrt r \cos (\theta / 2) \\
v_\theta = \sqrt r \cdot \frac{1}{2} \cos(\theta / 2) \\
ru_r = v_\theta \\
u_\theta = -\frac{1}{2}\sqrt{r} \sin(\theta / 2) \\
v_r = \frac{1}{2} r^{-1/2} \sin(\theta / 2) \\
-rv_r = -\frac{1}{2} \sqrt r \sin(\theta / 2) \\
u_\theta = -rv_r
$$
Thus, the function is differentiable in its domain of definition.
$$
\begin{align}
f'(z) &= e^{-i\theta} (u_r + iv_r) \\
&= e^{-i \theta} \left(\frac{1}{2} r^{-1/2} \cos(\theta / 2) + i \cdot \frac{1}{2} r^{-1/2} \sin(\theta / 2)\right) \\
&= \frac{1}{2 \sqrt r e^{i\theta}} \cdot e^{i \theta / 2} \\
&= \frac{1}{2 \sqrt r e^{i\theta/2}} \\
&= \frac{1}{2 f(z)}
\end{align}
$$

## 2.(20-22).6

$$
f(z) = 0, z = 0 \\
u_x = v_y = u_y = -v_x = 0
$$

The Cauchy-Riemann equations are satisfied at the origin, yet in Exercise 9, Sec. 19, we proved $f'(0)$ fails to exist. This is because $z_0$ satisfying the Cauchy-Riemann equations alone is insufficient to ensure the existence of $f'(z_0)$.

## 2.(20-22).9

### a)

$$
\begin{align}
f'(z_0) &= \frac{-i}{z_0}(u_\theta + iv_\theta) \\
&= \frac{-i}{re^{i\theta}} (-rv_r + iru_r) \\
&= \frac{v_r}{e^{i\theta}} i + \frac{u_r}{e^{i\theta}} \\
&= e^{-i\theta} (u_r + iv_r)
\end{align}
$$

### b)

$$
f(z) = 1 / z = 1 / {re^{i\theta}} = \frac{1}{r}e^{-i \theta} = \frac{1}{r}(\cos \theta - i \sin \theta) \\
u_r = -\frac{1}{r^2} \cos \theta \\
v_r = \frac{1}{r^2} \sin \theta \\
f'(z) = e^{-i \theta} (-\frac{1}{r^2} \cos \theta + i \cdot \frac{1}{r^2} \sin \theta) = -\frac{e^{-i\theta}}{r^2} \cdot e^{-i \theta} = -\frac{1}{r^2 e^{i2\theta}} = -\frac{1}{(r e^{i\theta})^2} = -\frac{1}{z^2}
$$

## 2.(23-24).1

### a)

Existence of neighborhood and continuity conditions are satisfied.
$$
f(z) = (3x + y) + i(3y - x) \\
u_x = 3, v_y = 3, u_x = v_y \\
u_y = 1, v_x = -1, u_y = -v_x
$$
The Cauchy-Riemann equations are also satisfied, thus $f(z)$ is analytic everywhere, and thus $f(z)$ is entire.

## 2.(23-24).2

### a)

$$
f(z) = xy + iy \\
u_x = y, v_y = 1, u_x \neq v_y
$$

Since the Cauchy-Riemann equations are never satisfied, $f(z)$ is not differentiable anywhere and thus not analytic anywhere.

## 2.(23-24).4

### a)

$$
f(z) = \frac{2z + 1}{z(z^2 + 1)} \\
z(z^2 + 1) = 0 \implies z = 0, \pm i
$$

$z = 0, \pm i$ are singular points. The function is analytic everywhere except at those points because at the aforementioned points, $f(z)$ is not defined.

## 2.(23-24).5

$f(z)$ is defined, has partial derivatives, and is continuous everywhere.
$$
f(z) = 2z - 2 + i = (2x - 2) + i (2y + 1) \\
u_x = 2, v_y = 2, u_x = v_y \\
u_y = 0, v_x = 0, u_y = -v_x
$$
Thus, $f(z)$ is analytic everywhere.

When $x > 1$, $\Re(2z - 2 + i) = 2x - 2 > 2 \cdot 1 - 2 = 0$, meaning $r \cos \theta > 0$ and thus $-\pi < \theta < \pi$, so the image of $f(z)$ in the half plane is within the domain of definition of $g(w)$. It is also known that the composition of two analytic functions is analytic if the image of the inner function is contained in the domain of definition of the outer function, so $G(z) = g(f(z))$ is analytic in the half plane.
$$
G'(z) = G'(f(z)) f'(z) = \frac{1}{2 \cdot g(2z - 2 + i)} \cdot 2 = \frac{1}{g(2z - 2 + i)}
$$

## 2.(23-24).7

### a)

If $f(z)$ is real-valued in $D$, then $v = 0, v_x = v_y = 0$. Being analytic implies it satisfies Cauchy-Riemann, so $u_x = v_y = 0$. It is also known that $f'(z) = u_x + iv_x = 0 + i0 = 0$, which means $f(z)$ is constant throughout $D$.

### b)

We know $|f(z)|^2 = f(z) \cdot \overline{f(z)}$. Since $|f(z)|$ is constant, say $|f(z)| = c$, we get that $\overline {f(z)}$ = $c^2 / f(z)$. If $c = 0$, then $\overline {f(z)} = 0$ is analytic, and the result from Example 3, Sec. 24 says if $f(z)$ and $\overline {f(z)}$ are both analytic, $f(z)$ is constant throughout $D$. If $c \neq 0$, then $\overline {f(z)}$ is still analytic because the quotient of two analytic functions is analytic, so Example 3, Sec. 24 applies once again.

## 2.25.1

### a)

$$
u(x, y) = 2x(1 - y) \\
u_{xx} = 0, u_{yy} = 0, u_{xx} + u_{yy} = 0 \implies u(x, y) \text{ is harmonic} \\
u_x = 2 - 2y, u_y = -2x \\
u_x = v_y, u_y = -v_x \\
v(x, y) = 2y - y^2 + x^2 \\
v_{xx} = 2, v_{yy} = -2, v_{xx} + v_{yy} = 0 \implies v(x, y) \text{ is harmonic}
$$

$v(x, y)$ is a harmonic conjugate of $u$.

## 2.25.2

Suppose that $V = v + c(x, y)$:
$$
u_x = v_y = V_y, u_y = -v_x = -V_x \\
v_{xx} + v_{yy} = V_{xx} + V_{yy} = 0 \\
v_y = V_y = v_y + c_y \implies c_y = 0 \implies c(x, y) \text{ contains no $y$'s} \\
v_x = V_x = v_x + c_x \implies c_x = 0 \implies c(x, y) \text{ contains no $x$'s}
$$
Thus, $c(x, y)$ must be a constant.

## 2.25.7

$u(x, y)$ and $v(x, y)$ are constant, meaning their derivatives are zero:
$$
\nabla u = \langle \frac{\partial u}{\partial x}, \frac{\partial u}{\partial y} \rangle = \langle 0, 0 \rangle \\
\nabla v = \langle \frac{\partial v}{\partial x}, \frac{\partial v}{\partial y} \rangle = \langle 0, 0 \rangle \\
\nabla u \cdot \nabla v = 0 \implies \text{perpendicular}
$$

## 2.25.8

$$
f(z) = z^2 = (x + iy)^2 = (x^2 - y^2) + i \cdot 2xy
$$

When you plot $u(x, y) = x^2 - y^2$ and $v(x, y) = 2xy$, you indeed get two hyperbolas that look as shown in the diagram.

## 3.28.3

$$
f(z) = e^{\overline z} = e^x e^{-iy} = e^x (\cos y - i \sin y) \\
u_x = e^x \cos y, v_y = -e^x \cos y, u_x \neq v_y
$$

Since the Cauchy-Riemann equations are never satisfied, $f(z)$ is not differentiable and thus not analytic anywhere.

## 3.28.5

$$
|e^{2z + i}| = |e^{2x} e^{i(2y + 1)}| = e^{2x} \\
|e^{iz^2}| = |e^{-2xy} e^{i(x^2 - y^2)}| = e^{-2xy} \\
|e^{2z + i} + e^{iz^2}| \leq |e^{2z + i}| + |e^{iz^2}| = e^{2x} + e^{-2xy}
$$

## 3.28.10

### a)

If $e^z$ is real, that implies $e^z = e^x e^{iy}, e^{iy} = \pm 1$, as $e^z$ must lie on the real axis. This means $y \in \{0 + n \cdot  2\pi \} \cup \{ \pi + n \cdot 2 \pi \}$, or $y \in \{ 0 + n \pi \}$, and $y = \Im (z)$

### b)

$y \in {\pi / 2 + n \pi}$, as that's the necessary angle to get $e^z$ onto the imaginary axis.

## 3.28.13

Because of the nature of $e^z$ giving itself when differentiating, and $\cos z$ and $\sin z$ giving signed versions of each other upon differentiating, and we get several other chain rule terms that end up canceling, we get $U_{xx} + U_{yy} = V_{xx} + V_{yy} = 0$ and the Cauchy-Riemann equations satisfied, so the two functions are harmonic and $V$ is a harmonic conjugate of $U$.