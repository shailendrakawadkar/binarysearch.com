int solve(int a) {
    int fact = 1, i = 1;
    while(fact < a)
    {
        fact *= i;
        ++i;
    }

    if(fact == a) return i - 1;
    return -1;
}
