const int x = 32;

char *toUpperCase(char *a)
{
    for (int i = 0; a[i] != '\0'; i++)
        a[i] = a[i] & ~x;

    return a;
}

char *toLowerCase(char *a)
{
    for (int i = 0; a[i] != '\0'; i++)
        a[i] = a[i] | x;

    return a;
}