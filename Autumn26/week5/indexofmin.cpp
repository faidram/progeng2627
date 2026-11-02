#include<iostream>
#include<vector>
#include<cmath>

int min_vector_element(const std::vector<double>& vin){
    int ind=0;
    if(vin.size()==0){
        return -1;
    }


    int min=vin[0];
    for(int i=1; i<vin.size(); i++){
        if( vin[i]<min){
            ind=i;
        }


    }
    return ind;
}






int main(){
    std::vector<double> v{ 3, 7,9};
    double expected =0;
    std::cout<< (std::abs(min_vector_element(v))- expected)<<std::endl;

    v={2,1,4,5,6};
    expected =1;
    std::cout<< (std::abs(min_vector_element(v))- expected)<<std::endl;
    v={};
    expected = -1;
    std::cout<< ((min_vector_element(v))- expected)<<std::endl;



}