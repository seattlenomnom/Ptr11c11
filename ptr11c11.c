/* source file for ptr11c11
 *
 * an example program from, Kochan, Stephen, "Programming in C 3rd ed"
 *
 * Create an array of integers, write a function to sum the elements of
 * the array.
 *
*/

#include <stdio.h>

int array_sum(int array[], const int n);

int main(void){

    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};

    printf("The sum is %i.\n", array_sum(values, 10));

    return(0);

}


int array_sum(int array[], const int n){
    int sum = 0, *p2array;
    int * const array_end = array + n;

    for(p2array = array; p2array < array_end; ++p2array)
        sum += *p2array;

    return(sum);
}
