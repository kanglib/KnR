#include <stdio.h>

float ftoc(float fahr);

main()
{
    int fahr;

    for (fahr = 0; fahr <= 300; fahr = fahr + 20)
        printf("%3d %6.1f\n", fahr, ftoc(fahr));
    return 0;
}

float ftoc(float fahr)
{
    return (5.0/9.0)*(fahr-32);
}
