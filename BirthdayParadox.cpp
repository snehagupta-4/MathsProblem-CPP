#include <math.h>
#include <iostream>
using namespace std;
int paradox(){

    /* There is the probability that out of 23 person there's 550% chance that 2 person would have birthday on the same day.
    and 73 people contributes to 99.9% probability.

    Formula to calculate this problem = (2*365log(1/(1-p)))^(1/2)
    where p is number of person.
    */
    int person;
    cin>>person;
    cout<< ceil(sqrt((2*365log(1/(1-person)))));

    return 0;
}

