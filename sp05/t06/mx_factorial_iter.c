int mx_factorial_iter(int n) {
    int pp = 1;
    if (n > 0) {
        for (int i = 2; n >= i; i++) {
            pp *= i;
            if (pp > 2147483647) {
                return 0;
            }
        }
        return pp;
    }
    return 0;
}

