int main(void) {
    int n1= 0, n2 = 1;
    int n3;

    for (int i = 0; i <= 10; ++i) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }

    return 0;
}
