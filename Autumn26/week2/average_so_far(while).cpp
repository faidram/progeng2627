#include <iostream>

int main(){
    int x, counter=1;
    double avrg, sum=0;

    std::cout <<"enter a number:" << std::endl;
    std::cin >> x;
    while (x != 0){
        sum= sum + x;
        avrg = sum / counter;
        std::cout <<"the average so far is:" <<std::endl << avrg <<std::endl;
        std::cout <<"enter a number:" << std::endl;
        std::cin >> x;
        counter = counter + 1;
    }

}
