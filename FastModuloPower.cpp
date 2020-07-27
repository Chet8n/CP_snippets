template<typename T> T pow(T a, T b, ll m) {
    T ans = 1;
    while (b > 0) {
        if (b % 2 == 1)
            ans = (ans * a) % m;
        b /= 2; a = (a * a) % m;
    }
    return ans % m;
}
