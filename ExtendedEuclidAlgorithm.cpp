int x, y, GCD;

void ExtendedEuclid(int a, int b) {

    //Base Case:
    if (b == 0) {
        x = 1;
        y = 0;
        GCD = a;
        return;
    }
    //Recursive:
    ExtendedEuclid(b, a % b);

    int cx = y;
    int cy = x - (a / b) * y;

    x = cx;
    y = cy;
}
