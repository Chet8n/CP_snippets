template <typename T>
T POW(T a, T b) {
	T r = 1;
	while (b) {
		if (b & 1) {
			r *= a;
		}
		a *= a;
		b >>= 1;
	}
	return r;
}
