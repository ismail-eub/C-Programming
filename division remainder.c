#include <stdio.h>

int main()
{
    int a, b, q, r;

    // Input two integers
    scanf("%d %d", &a, &b);

    // Perform division with correct handling for negative integers
    if (a >= 0)
    {
        q = a / b;
        r = a % b;
    }
    else
    {
        // For negative a, adjust the quotient and remainder
        q = (a / b) - 1;
        r = a - (q * b);
    }

    // Output results
    printf("%d %d\n", q, r);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    int quotient = 0, remainder = 0;

    for (int r = 0; r < abs(b); ++r)
    {
        int q = (a - r) / b;
        if (a == b * q + r)
        {
            quotient = q;
            remainder = r;
            break;
        }
    }

    printf("%d %d\n", quotient, remainder);

    return 0;
}
