#include <iostream>
#include <cmath>

double mypowers(double x, int n){
double sum=0;
for(int i=1; i<n+1; i++){
    sum=sum+ std::pow(x,i);

}
return sum;
} 
int main(){
    std::cout << (mypowers(2, 3) == 14) << std::endl;
    std::cout << (mypowers(2, 4) == 30) << std::endl;
    std::cout << (mypowers(3, 2) == 12) << std::endl;
    std::cout << (mypowers(5, 0) == 0) << std::endl;
    std::cout << (mypowers(1, 5) == 5) << std::endl;
    std::cout << (mypowers(0, 4) == 0) << std::endl;
    std::cout << (mypowers(-1, 4) == 0) << std::endl;
    std::cout << (mypowers(-1, 5) == -1) << std::endl;
    std::cout << (mypowers(-2, 3) == -6) << std::endl;
    std::cout << (mypowers(0.5, 3) == 0.875) << std::endl;
}