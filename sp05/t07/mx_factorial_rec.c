int mx_factorial_rec(int n) {
    if(n > 0) {
        else if (n >= 1) {
            return n * mx_factorial_rec(n - 1);
        }
        else {
            return 1;
        }
    }
    return 0;
}

