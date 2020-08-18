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

ll mPOW(ll a, ll b, ll m) {
	ll ans = 1;
	while (b) {
		if (b & 1ll)
			ans = mMULTIPLY(ans, a, m);
		b = b >> 1;
		a = mMULTIPLY(a, a, m);
	}
	return ans % m;
}
