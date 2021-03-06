
/* Fig.2.2 Iterative selection sort. */

void SelectionSort(int A[], int n) {
    int i, j, small, temp;

    for (i = 0; i < n-1; i++) {
        /* set small to the index of the first occurrence */
        /* of the smallest element remaining */
        small = i;
        for (j = i+1; j < n; j++)
            if (A[j] < A[small])
                small = j;
        /* when we reach here, small is the index of */
        /* the first smallest element in A[i..n-1]; */
        /* we now exchange A[small] with A[i] */
        temp = A[small];
        A[small] = A[i];
        A[i] = temp;
    }
}