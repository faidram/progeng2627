#include <iostream>

int main(){
   double weight, height, BMI, heightsqr;

   std::cout <<"Enter your weight in kg" << std::endl;
   std::cin >> weight;
   std::cout <<"Enter your height in meters" << std::endl;
   std::cin >> height;
   heightsqr= height * height;
   BMI= weight / heightsqr;

   std::cout << "This is your BMI " << BMI <<std::endl;

}