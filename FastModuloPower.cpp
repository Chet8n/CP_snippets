template<typename T> T mPOW(T a, T b, ll m) {
	T ans = 1;
	while (b) {
		if (b & 1ll)
			ans = (ans * a) % m;
		b >> 1;
		a = (a * a) % m;
	}
	return ans % m;
}
