#include<iostream>
int main(){
    int n;
    double mark, total=0, average=0, min=100,max=0;
    std::cout<<"Enter how many tests you have taken:"<<std::endl;
    std::cin>> n;
    
    for(int i=0;  i<n; i++){
        std::cout<< "What is you mark out of 100?"<<std::endl;
        std::cin>>mark;
        total=total+mark;
        if(mark<min){
            min=mark;
        }
        if(mark>max){
            max=mark;
        }

    }
    average= total/n;
    std::cout<< "Your average mark is: " <<average <<"%"<<std::endl;
    std::cout<<"Your maximum mark is: "<< max<<"%"<<std::endl;
    std::cout<<"Your minimum mark is: "<<min<<"%"<<std::endl;


}