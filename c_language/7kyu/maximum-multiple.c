// Task
// Given a Divisor and a Bound, Find the largest integer N, Such That,

// Conditions :
// N is divisible by divisor

// N is less than or equal to bound

// N is greater than 0.

// Notes
// The parameters (divisor, bound) passed to the function are only positive values .
// It's guaranteed that a divisor is Found .

// Input >> Output Examples

// divisor = 2, bound = 7 ==> return (6)
// ...

// link: https://www.codewars.com/kata/5aba780a6a176b029800041c

int maxMultiple(int divisor, int bound) {
  
    int maxMultiple, counter, remainder;

    for (counter = 0; counter <= bound; counter++){
        
        remainder = counter % divisor; 

        if (remainder == 0){
            maxMultiple = counter;
        }
    }

    return maxMultiple;
}