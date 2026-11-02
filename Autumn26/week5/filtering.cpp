#include<iostream>
#include<vector>
void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){

for(int i=0; i<vin.size(); i++){

    if(vin[i]<t){
        vout.push_back(vin[i]);
    }
}


}





int main(){
std::vector<double>v2;
std::vector<double>v{5,7,8,9,10};

filter_v(v,9,v2);

for(int i=0; i<v2.size(); i++){

    std::cout<<v2[i]<<std::endl;
}

std::cout<<" "<<std::endl;
v={10, 10, 10, 11};
v2.clear();
filter_v(v,9,v2);
for(int i=0; i<v2.size(); i++){

    std::cout<<v2[i]<<std::endl;
}

std::cout<<" "<<std::endl;
v={-5,-3,6};
v2.clear();
filter_v(v,4,v2);
for(int i=0; i<v2.size(); i++){

    std::cout<<v2[i]<<std::endl;
}


}