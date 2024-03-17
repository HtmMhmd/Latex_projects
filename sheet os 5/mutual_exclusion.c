boolean blocked[2];
int turn;

void P(int id) {
    while (true) {
        blocked[id] = true;
        while (turn != id) {
            while (blocked[1-id])
            // do nothing;
            turn = id;
        }
        
        /* critical section */
        blocked[id] = false;
        /* remainder */
    }
}

void main() {
    blocked[0] = false;
    blocked[1] = false;
    turn = 0;
    parbegin (P(0), P(1));
}