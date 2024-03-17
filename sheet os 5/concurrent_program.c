const int n = 50;
int tally;

void total() {
    int count;
    for (count = 1; count <= n; count++) {
        tally++;
    }
}

void main() {
    tally = 0;
    parbegin (total (), total ());
    write (tally);
}