int main() {
    int n, k, n1;
    string input = Stdio.stdin->read();
    sscanf(input, "%d %d %d", n, k, n1);

    int tiles = (n + n1 - 1) / n1;
    write(k >= tiles * tiles ? "YES\n" : "NO\n");
    return 0;
}
