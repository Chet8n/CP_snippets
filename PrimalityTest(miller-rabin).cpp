// for the range upto 3 * 10^18
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



bool miller_rabin(ll n) {

	if (n == 1)return false;

	if (n == 2)return true;

	if (n % 2 == 0)return false;

	ll d = n - 1; // d is Even
	ll s = 0;
	while (d % 2 == 0) {
		s++;
		d /= 2;
	}
	// n-1 = d*pow(2,s);
	// now d is an add number;

	vl a({2, 3, 5, 7, 11, 13, 17, 19, 23});
	// a represents random number

	for (ll i = 0; i < a.size(); i++) {
		if (a[i] > n - 2)continue;
		// (a[i]^d)%n
		ll ad = mPOW(a[i], d, n);
		if (ad % n == 1)continue;
		bool isPrime = false;
		for (ll r = 0; r <= s - 1; r++) {
			// 2^r % n;
			ll rr = mPOW(2ll, r, n);
			// (a^(d*2^r))%n;
			ll ard = mPOW(ad,rr,n);
			if(ard%n == n-1){
				isPrime = true;
				break;
			}
		}
		if(!isPrime)return false;
	}
	return true;
}
