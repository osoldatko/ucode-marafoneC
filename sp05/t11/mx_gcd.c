int mx_gcd(int a, int b) {
    if (a < 0) {
        a *= -1;
    }
    if (b < 0) {
        b *= -1;
    }
    return b ? mx_gcd (b, a % b) : a;
}


