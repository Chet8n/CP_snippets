template <typename T>
T minverse(T a, T m) {
	a = a % m;
	if (a < 0) {
		a += m;
	}
	T b = m, u = 0, v = 1;
	while (a != 0) {
		T t = b / a;
		b -= a * t;
		swap(a, b);
		u -= v * t;
		swap(u, v);
	}
	if (u < 0) {
		u += m;
	}
	return u;
}
