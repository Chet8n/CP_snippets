struct dsu {

    vector<int> par, sz;
    int total_component;

    //initialize:
    void init(int n) {
        par.resize(n);
        sz.resize(n);
        for (int i = 0; i < n; i++) {
            par[i] = i;
        }
        for (int i = 0; i < n; i++) {
            sz[i] = 1;
        }
        total_component = n;
    }

    int get_superparent(int x) {
        if (x == par[x]) {
            return x;
        }
        return par[x] = get_superparent(par[x]);
    }

    void unite(int x, int y) {
        int spx = get_superparent(x);
        int spy = get_superparent(y);
        if (spx != spy) {
            par[spx] = spy;
            sz[spy] = sz[spy] + sz[spx];
            sz[spx] = 0;
        }
        total_component--;
    }
};
