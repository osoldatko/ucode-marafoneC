int mx_gcd(int a, int b);

int mx_lcm(int a, int b){
    if(0 > a) {
        a *= -1;
    }
    if(0 > b) {
        b *= -1;
    }
    return (a * b) / mx_gcd(a, b);
}


