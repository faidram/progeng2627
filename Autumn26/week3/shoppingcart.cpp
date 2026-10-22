#include<iostream>
#include<string>
int main(){
    std:: string answer;
    int n;
    double price, total;
    std::cout<< "Enter the price of your first item"<< std::endl;
    std::cin>> price;
    total=price;
    std::cout<<"Do you want to add another item?" <<std::endl;
    std::cin>> answer;
    while (answer=="yes"){

        std::cout <<"Enter the price of your item" <<std::endl;
        std::cin >> price;
        total=total+ price;
        std::cout<<"Do you want to add another item?" <<std::endl;
        std::cin>> answer;

    }
    std:: cout<< "Your total is: "<<total <<"$";
    
    

}