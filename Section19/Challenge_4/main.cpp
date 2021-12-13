// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

bool isWhitespace(std::string s){
    for(int index = 0; index < s.length(); index++){
        if(!std::isspace(s[index]))
            return false;
    }
    return true;
}

int main() {

std::ifstream in_file{};
std::string line{};
int line_count{};

std::ofstream out_file{};
out_file.open("output.txt");

if(!out_file.is_open()){
    std::cout<<"Erro handling output file "<<std::endl;
}
in_file.open("romeoandjuliet.txt");
if(!in_file.is_open()){
    std::cout<<"Erro handling input file "<<std::endl;
}
if(in_file.is_open()){
    // std::cout<<"input file is open "<<std::endl;
    while (!in_file.eof()){
        while (std::getline(in_file, line)){
             //std::cout<<line<<std::endl;
                if(!isWhitespace(line)){
                     line_count += 1;
                std::string count{" "};
                count.insert(0, std::to_string(line_count));
                line.insert(0,count);
                out_file<<line<<std::endl;
                }else{
                    out_file<<line<<std::endl;
                }
               
        }
    }
}else{
    std::cout<<"Error handling input file "<<std::endl;
}
in_file.close();
out_file.close();
    return 0;
}

