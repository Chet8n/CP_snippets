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

// for multiplying 10^18 * 10^18(ll * ll)
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

// for multiplying 10^9 * 10^9(int * int)
ll mpow(ll a, ll b, ll m = mod) {
    ll ans = 1;
    while (b) {
        if (b & 1ll) {
            ans *= a;
            ans %= m;
        }
        a *= a;
        a %= m;
        b = b >> 1;
    }
    return ans;
}
