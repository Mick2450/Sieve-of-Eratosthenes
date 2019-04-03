#include <stdio.h>

int main() {
       
// Maximum integer to test. Declared constant
// This is declared so that the maximum integer
// can easily be changed
    const int MAX = 100;
    char numbers[MAX+1];
    int index;
    int j;
// Initialised numbers[]
    for(index = 0; index <= MAX; index++) {
    numbers[index] = 1;
    }
    
    for(index = 2; index <= MAX; index++){ 
        for(j = 2*index; j < MAX; j += index){
        numbers[j] = 0;
        }
    }

// DO THE SIEVE ALGORITHM HERE
// for(index = 2; ...etc
// Print results
    printf("The following numbers are prime:\n");
    for(index = 2; index < MAX; index++) {
        if(numbers[index] == 1) {
        printf("%d\n", index);
        }
    }
    
    
return 0;
}

