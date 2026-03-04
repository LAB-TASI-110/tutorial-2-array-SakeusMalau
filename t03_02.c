#include <stdio.h>    
#include <limits.h>   
#include <stdlib.h>   


int* getInputNumbers() {
    int n; 
    int num; 
    int min_val = INT_MAX; 
    int max_val = INT_MIN; 

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num); 
        
        if (num < min_val) {
            min_val = num;
        }
        
        if (num > max_val) {
            max_val = num;
        }
    }

    int* result = (int*) malloc(sizeof(int) * 2);
    if (result == NULL) {
        
        fprintf(stderr, "Gagal mengalokasikan memori!\n");
        exit(EXIT_FAILURE);
    }
    result[0] = min_val;
    result[1] = max_val;
    
    return result; 
}

void displayMinMax(int min_val, int max_val) {
    
    printf("%d\n", min_val);
    
    printf("%d\n", max_val);
}

int main() {
    int* results; 

    results = getInputNumbers();

    displayMinMax(results[0], results[1]);

    free(results);
    results = NULL; 

    return 0; 
}