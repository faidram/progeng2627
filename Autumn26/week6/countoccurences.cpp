#include<iostream>
#include <string>
#include<fstream>
#include<cstdlib>
#include<vector>
void count_occ(const std::vector<std::string>&v1, const std::vector<std::string>&v2, std::vector<int>&vcount){
for(int i=0; i<v2.size(); i++){
    for(int y=0; y<v1.size(); y++){
        if(v2[i]==v1[y]){
            vcount[i]++;
        }
    }
}


}


int main(){
    std::vector<std::string>v1;
    std::vector<std::string>v2;
    std::vector<int>vcount;

std::ifstream infile;
infile.open("text.txt");
if(!infile.is_open()){
    std::cout<<"error opening input file"<<std::endl;
    return EXIT_FAILURE;

}
std::string par;
while(infile >> par){
    v1.push_back(par);
}
std::ifstream infile2;
infile2.open("words.txt");
if(!infile2.is_open()){
    std::cout<<"error opening second input file"<<std::endl;
    return EXIT_FAILURE;
}
std::string word;
while(infile2>> word){
    v2.push_back(word);

}
for(int i=0; i<v2.size(); i++){
    vcount.push_back(0);
}
count_occ(v1, v2, vcount);
for(int i=0; i<vcount.size(); i++){
    std::cout<<v2[i]<<" : "<< vcount[i]<<std::endl;
}




}