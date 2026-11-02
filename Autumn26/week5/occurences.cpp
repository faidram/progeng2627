#include <iostream>
#include <vector>
int main(){
    int n;
    int value;
    int s;
    std::vector<int> sequence;
    std::vector<int> ind;
    std::cout<< "Enter n:"<<std::endl;
    std::cin>> n;
    for(int i=0; i<n; i++){
        std::cout<< "Please enter a number:"<<std::endl;
        std::cin>>value;
        sequence.push_back(value);

    }
    std::cout<<"Please enter s:"<<std::endl;
    std::cin>>s;
    int calc=0;
    for(int i=0; i<n; i++){
        if( sequence[i]==s){
        calc=calc+1;
        ind.push_back(i);

        }
    }
    if(calc !=0){
        std::cout<<"There are "<< calc <<" occurences of "<< s<<" at indices:"<<std::endl;
        for( int i=0; i<ind.size(); i++){
            std::cout<< ind[i]<<std::endl;
        }
    }
    else{
        std::cout<< "There are no occurences of "<< s;
    }
    

}