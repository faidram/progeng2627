#include <iostream>

int main(){
    double x;
    std:: cin>> x;
    int n;
    
    double result = 1;

    for(int i = 0; i < x; i++){
        n = x-i;
        result = result* n;
       
    }

    std::cout << result << std::endl;
}
