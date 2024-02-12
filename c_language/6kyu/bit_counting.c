// Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary
//mrepresentation of that number. You can guarantee that input is non-negative.

// Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case

// link: https://www.codewars.com/kata/526571aae218b8ee490006f4

#include <stddef.h>

size_t countBits(unsigned value){
	
    int binaryNum[32];
    int counter_1 = 0;
    int counter_2 = 0;
    size_t total = 0;
  
    if (value == 0) {
        return 0;
    }
   
   
    while (value > 0) {
        binaryNum[counter_1++] = value % 2;
        value /= 2;
    }
   
   
    for (int counter_2 = counter_1-1; counter_2 >= 0; counter_2--){
        
        if (binaryNum[counter_2] == 1){
            total = total + 1;
        }
    }
    
  return total;
}