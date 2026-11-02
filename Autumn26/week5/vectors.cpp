#include <vector>
#include <iostream>

int main(){

int n;
int value;
int t;
std:: cout << "Enter a number:"<<std::endl;
std::cin>> n;
std:: vector<int> sequence;
for(int i=0; i<n; i++){
    std::cin>> value;
    sequence.push_back(value);
}
std:: cout<<"Enter a number:";
std::cin>> t;
for( int i=0; i<n; i++){
    if(sequence[i]<t){
        std::cout<< sequence[i]<<std::endl;
    }
}


}
