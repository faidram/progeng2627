#include<iostream>
#include<vector>
int search_vector(int n, const std::vector<int>& vin){
if(vin.size()==0){
    return -1;
}
for(int i=0; i<vin.size(); i++){
    if(vin[i]==n){
        return i;

    }

}
return -1;


}

int main(){
std:: vector<int> v{3,4,5};
int expected=0;
std::cout<<(search_vector(3,v))-expected<<std::endl;

v={3,4,5};
expected=-1;
std::cout<<(search_vector(8,v))-expected<<std::endl;
v={};
expected=-1;
std::cout<<(search_vector(3,v))-expected<<std::endl;
v={3,4,3};
expected=0;
std::cout<<(search_vector(3,v))-expected<<std::endl;

}