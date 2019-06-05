#define ARRAYSIZE 50000
#define DIAPASONE(min, max) (min + rand() % ((max + 1) - min))
#define MIN(a, b) ((a < b) ? a : b)
#define MAX(a, b) ((a > b) ? a : b)

// arrays.cpp
void random_fill(int[], int, int, int);
void ascending_fill(int[], int);
void descending_fill(int[], int);

// sort_algorithms.cpp
void heap_sort(int[], int);
void quick_sort(int[], int, int);
void selection_sort(int[], int);
void swap(int *, int *);
void heapify(int[], int, int);

// files.cpp
void file_fill(int[], int, char[]);