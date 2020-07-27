ll mMULTIPLY(ll a, ll b, ll m) {
	ll res = 0;
	while (b) {
		if (b & 1ll)
			res = (res + a) % m;
		b = b >> 1;
		a = (a * 2) % m;
	}
	return res % m;
}
