#include <iostream>

int myfactorial(int in){
// in is not a special name
// just a name

    int fact=1;
    int mult=0;
    for(int i=0; i<in; i++){
        mult= in-i;
        fact= fact*mult;

    }
    // variable that will store the result

    // TODO: compute the factorial of in
    // so that the result is stored in variable fact


    return fact;
    // return the result
    // we *do not print* anything in the function
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}