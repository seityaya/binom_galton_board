long long int fact(int n)
{
    long long int sum = 1;

    for (int i = 2; i <= n; ++i)
    {
        sum = sum  * i;
    }
    return sum;
}
