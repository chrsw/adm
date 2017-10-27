// ins_sort.c
// Insertion sort based on the example from The Algorithm Design Manual

void swap(char *, char *);

static void insertion_sort(char s[], int n) {

        int i, j;       // counters and data holders

        // Start with a single element and incrementally insert remaining
        // elements.
        for (i = 0; i < n; i++) {
                for (j = 0; j < i; j++) {
                        if (s[i] < s[j]) swap(&s[i], &s[j]);
                }                
        }

}

// Test driver
int main(void) {

        char s[] = "INSERTION";
        insertion_sort(s, 9);
        return 0;
}

// Swap two values
void swap(char *x, char *y) {

        char temp = *y;
        *y = *x;
        *x = temp;
}
