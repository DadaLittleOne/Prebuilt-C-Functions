float Q_rsqrt(float number)
{
    long i;
    float x2, y;

    x2 = number * 0.5F;
    y = number;
    i = *(long *)&y;
    i = 0x5f3759df - (i >> 1);
    y = *(float *)&i;
    y = y * (1.5F - (x2 * y * 2));
}

double fsqrt(int n)
{
    double a = (double)n;
    double x = 1;

    for (int i = 0; i < n; i++)
    {
        x = 0.5 * (x + a / x);
    }

    return x;
}