#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<vector>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for(int i=0; i<vin.size(); i++){
        if(vin[i]==s){
            return 1;

        }
               }
        return -1;
    
}





void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for(int i=0; i<vin1.size(); i++){
        if(search_vector(vin1[i],vin2)==1){
            vout.push_back(vin1[i]);
        }
    }

    }
void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for(int i=0; i<vin1.size(); i++){
        if(search_vector(vin1[i],vin2)==-1){
            vout.push_back(vin1[i]);
        }
    }
    for(int i=0; i<vin2.size(); i++){
        vout.push_back(vin2[i]);
    }
}
   
    




int main(){
 
std::ifstream infile1;
infile1.open("warehouse1.txt");
if(!infile1.is_open()){
    std::cout<<"error opening first input file";
    return EXIT_FAILURE;
}

std::ifstream infile2;
infile2.open("warehouse2.txt");
if(!infile2.is_open()){

std::cout<<"error opening the second input file";
    return EXIT_FAILURE;    
}
std::vector<std::string>v1;
std:: string fruits;
while(infile1>> fruits){
    v1.push_back(fruits);
}
infile1.close();

std::vector<std::string>v2;
std:: string fruits2;
while(infile2>> fruits2){
    v2.push_back(fruits2);
}
infile2.close();

std::vector<std::string>vunion;
union_vector(v1,v2,vunion);
std::ofstream outfile1;
outfile1.open("union.txt");
if(!outfile1.is_open()){
        std::cout << "error opening output file" << std::endl;
        return EXIT_FAILURE;
    }
for(int i=0; i<vunion.size(); i++){
    outfile1<<vunion[i]<<std::endl;
}
outfile1.close();

 std::ofstream outfile2;
outfile2.open("intersection.txt");
if(!outfile2.is_open()){
        std::cout << "error opening output file" << std::endl;
        return EXIT_FAILURE;
    }
std::vector<std::string>vinter;
intersection_vector(v1,v2,vinter);
for(int i=0; i<vinter.size(); i++){
    outfile2 <<vinter[i]<<std::endl;
}

outfile2.close();

}