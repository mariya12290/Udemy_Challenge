// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    
    std::fstream in_file{};
    std::string str{};
    std::cout<<"Enter the substring to search for: ";
    std::cin>>str;

    in_file.open("romeoandjuliet.txt");
    std::string line{};
    std::string word{};
    int count {};
    if(in_file.is_open()){
        while (std::getline(in_file, line ))
        {
            std::istringstream iss{line};
            while (iss>>word)
            {
             if (word == str){
                 count +=1;
             }else if(word.find(str) !=std::string::npos){
                 count +=1;
             }
            }
          
        }
        
    }
    std::cout<<"The substring "<<str<<" was found "<<count<<" times"<<std::endl;
    cout << endl;
    return 0;
}

