template<typename T> T gcd(T a, T b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

template<typename T> T lcm(T a, T b) {
    return (a * b) / gcd;
}
