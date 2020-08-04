struct dsu {

    vector<int> p;
    void init(int NN) {
        p.clear(); p.resize(NN);
        iota(p.begin(), p.end(), 0)
    }
    int get(int x) {
        return (x == p[x] ? x : (p[x] = get(p[x])));
    }
    void unite(int x, int y){
        x = get(x);
        y = get(y);
        if(x!=y){
            p[x] = y;
        }
    }   
};
