#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string> 

int main(){

    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    std::ifstream infile; 
    infile.open(inputfilename);

    if(!infile.is_open()){
        std::cout<<"error opening file";
        return EXIT_FAILURE;

    }
    std:: vector<int>v;

    int tmpl;
    while(infile >> tmpl){
        v.push_back(tmpl);
    }
    infile.close();
    std:: string outputname;
    std::cout<<"Enter the name of your output file"<<std::endl;
    std::cin >> outputname;
    std:: ofstream outputfile;
    outputfile.open(outputname);
    if(!outputfile.is_open()){
        std:: cout<<"error opening output file";
        return EXIT_FAILURE;
    }
    for(int i=1; i<v.size()+1; i++){
        outputfile << v[v.size()-i]<<std::endl;
       }
    outputfile.close();



}