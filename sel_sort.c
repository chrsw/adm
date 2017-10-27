// sel_sort.c
// Selection sort based on the example from The Algorithm Design Manual

#include <stdio.h>

void swap(char *, char *);
static void selection_sort(char s[], int n) {

        int i, j;       // counters
        int min = 0;    // hold the index of the smallest found value 

        // Identify the smallest remaining element in the unsorted
        // portion of the set and place it at the end of the sorted
        // portion.
        for (i = 0; i < n; i++) {
                for (j = i, min = i; j < n; j++) {
                        if (s[j] < s[min]) {
                                min = j;
                                // min now is the index
                                // of the smallest value
                        }
                }                
                swap(&s[i], &s[min]);
        }

}

int main(void) {

        char s[] = "INSERTION";
        selection_sort(s, 9);
        return 0;
}


void swap(char *x, char *y) {

        char temp = *y;
        *y = *x;
        *x = temp;
}
