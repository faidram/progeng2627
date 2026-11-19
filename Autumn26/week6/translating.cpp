#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<cstdlib>

 void translate_par(const std::vector<std::string>&v1, const std::vector<std::string>&v2, std::vector<std::string>&out){
    for(int i=0; i<v1.size(); i++){
        for(int y=0; y<v2.size(); y++){
            if(v1[i]==v2[y]){
                out.push_back(v2[y+1]);
            }

        }
        if(out.size()==i){
            out.push_back(v1[i]);
        }
        
    }
 }

int main(){
    std::vector<std::string>text;
    std::vector<std::string>word;
    std::vector<std::string>out;
    std::ifstream infile1;
    infile1.open("text.txt");
    if(!infile1.is_open()){
        std::cout<<" error opening the first input file";
        return EXIT_FAILURE;

    }
    std::string txt;
    while(infile1>>txt){
        text.push_back(txt);
    }
    infile1.close();

    std::ifstream infile2;
    infile2.open("words.txt");
    if(!infile2.is_open()){
        std::cout<<"error opening the second input file";
        return EXIT_FAILURE;

    }
    
    std::string tmp;

    while(infile2>>tmp){
        word.push_back(tmp);
    }
    infile2.close();

    std::ofstream outfile;
    outfile.open("output.txt");
    if(!outfile.is_open()){
        std::cout<<"error opening outfile";
        return EXIT_FAILURE;
    }
    translate_par(text,word,out);
    for(int i=0; i<out.size(); (i++)){
        outfile<<out[i]<<" ";
    }

}