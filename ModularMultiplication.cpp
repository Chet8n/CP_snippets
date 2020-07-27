template<typename T> T mMULTIPLY(T a, T b, T m) {
	T res = 0;
	while (b) {
		if (b & 1ll)
			res = (res + a) % m;
		b >> 1;
		a = (a * 2) % m;
	}
	return res % m;
}
