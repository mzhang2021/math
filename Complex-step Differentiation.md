# Complex-step Differentiation

## Motivation

Simple method for approximating derivative of $f(x)$:
$$
f'(x) \approx \frac{f(x + h) - f(x)}{h}
$$
for some small $h$.

Main disadvantage: you have to evaluate $f$ twice and take a difference, which could lead to loss in significant digits with a computer (catastrophic cancellation).

Example:
$$
h = 10^{-9} \\
f(x + h) \approx 0.123456789123456789 \\
f(x) \approx 0.123456789000000000 \\
\frac{f(x + h) - f(x)}{h} \approx 0.123456789
$$
But computers can't hold infinitely many decimal places, so they might do something like this:
$$
h = 10^{-9} \\
f(x + h) \approx 0.123456789123456789 \text{ which rounds to } 0.123456789 \\
f(x) \approx 0.123456789000000000 \text{ which rounds to } 0.123456789 \\
\frac{f(x + h) - f(x)}{h} = 0
$$

## The Method

Prerequisite: $f(z)$ is a **complex analytic function** (sometimes also called holomorphic), meaning it is "at every point of its domain, complex differentiable in a neighborhood of the point."

Consider some complex number $x_0 + ih$, where $h$ is once again small. Consider the Taylor series expansion of $f(z)$ at $x_0 + ih$:
$$
f(x_0 + ih) = f(x_0) + ih \cdot f'(x_0) - h^2 \cdot f''(x_0) / 2! - ih^3 \cdot f^{(3)}(x_0)/3! + \dots
$$
Take the imaginary part of both sides, divide by $h$, omit the trailing terms of the Taylor series expansion since it's an approximation:
$$
\Im (f(x_0 + ih)) \approx h \cdot f'(x_0) \\
f'(x_0) \approx \frac{\Im (f(x_0 + ih))}{h}
$$

## Benchmarking

One of the [articles](https://blogs.mathworks.com/cleve/2013/10/14/complex-step-differentiation/) I referenced does a benchmark of evaluations of the derivative of $f(x) = \frac{e^x}{(cos x)^3 + (sin x)^3}$ at $x = \pi / 4$ and yields the following results:

![pic1](pic1.png)

And just because I can, I decided to write my own code in C++ to verify this:

![pic2](pic2.png)



## Sources

https://math.stackexchange.com/a/1080292

https://blogs.mathworks.com/cleve/2013/10/14/complex-step-differentiation/

https://timvieira.github.io/blog/post/2014/08/07/complex-step-derivative/

http://www.johnlapeyre.com/posts/complex-step-differentiation/

https://en.wikipedia.org/wiki/Numerical_differentiation#Complex-variable_methods

https://en.wikipedia.org/wiki/Automatic_differentiation#Automatic_differentiation_using_dual_numbers