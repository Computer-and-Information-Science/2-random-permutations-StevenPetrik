// Steven Petrik

#include "permutations.h"
#include "randint.h"
#include <cstddef>
#include <utility>

// A sequential search function, for your convenience.
// Parameters:
//  array - The array of int's to be searched
//  size - The size of the array
//  target - The target value
// Returns:
//  Array index where target is found, or size if target is not found.
// Example:
//  if (search(array, size, x) < size)
//      cout << "x was found in the array\n";
//  else
//      cout << "x was not found in the array\n";
static size_t search (const int array[], size_t size, int target) {
    for (size_t i = 0; i < size; i++)
    if (array[i] == target)
        return i;
    return size;
}
// finds a random permutation of the first N integers
void permutations1 (int array[], size_t size) {
    // TODO: Implement algorithm #1 here
    for (int i = 0; i < size; i++){
        int x = randint(size) + 1;
        if (search (array, size, x) < size){
            i--;
        }else{
            array[i] =  x;
        }
    }
}

void permutations2 (int array[], size_t size) {
    // TODO: Implement algorithm #2 here
    int x;
    bool used[size] = {};
    for (int i = 0; i < size; i++){
        x = randint(1, size);
        if (used[x-1]){
            i--;
        }else{
            array[i] =  x;
            used[x-1] = true;
        }
    }
}

void permutations3 (int array[], size_t size) {
    // TODO: Implement algorithm #3 here
    for (int i = 0; i < size; ++i){
        array[i] = i+1;
        // I used this source to find the header file for the swap function
        // https://stackoverflow.com/questions/70787645/does-swap-function-works-in-iostream-header
        std::swap(array[i], array[randint(0, i)]);
    }
}
