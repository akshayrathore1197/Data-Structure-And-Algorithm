No, the modulus operator `%` cannot be directly applied to floating-point data types like `float` or `double` in C++. The modulus operator is defined for integer operands only.

If you try to use the modulus operator `%` with floating-point operands, the C++ compiler will generate an error. Here's an example:

```cpp
#include <iostream>

int main() {
    float a = 5.2;
    float b = 2.1;
    float result = a % b; // Error: Modulus operator is not defined for floating-point operands

    return 0;
}
```

The above code will produce an error similar to:

```
error: invalid operands of types 'float' and 'float' to binary 'operator%'
```

However, if you need to perform a modulus operation with floating-point numbers, you can use the `fmod` function from the `cmath` library. The `fmod` function takes two floating-point arguments and returns the floating-point remainder of the division operation. Here's an example:

```cpp
#include <iostream>
#include <cmath>

int main() {
    float a = 5.2;
    float b = 2.1;
    float result = std::fmod(a, b); // result = 0.9

    std::cout << "Remainder: " << result << std::endl;

    return 0;
}
```

In this example, `std::fmod(5.2, 2.1)` returns `0.9`, which is the floating-point remainder of `5.2` divided by `2.1`.

Alternatively, you can convert the floating-point numbers to integers using an appropriate casting or rounding technique, perform the modulus operation on the integers, and then convert the result back to a floating-point number if needed.