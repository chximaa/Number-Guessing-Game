#include <iostream>
int main(){
std::cout<<"lets play a little guess the number game"<<std::endl;
std::cout<<"try guessing what umber am i thinking abt"<<std::endl;
int number;
int tries=0;
std::cin>>number;
while(number!=51){
    if(number>=0 and number<=40){
        std::cout<<"youre very far away"<<std::endl;
        std::cin>>number;
        tries++;
    }
    else if(number>=40 and number<=60){
        std::cout<<"youre so close"<<std::endl;
        std::cin>>number;
        tries++;
    }
    else{
        std::cout<<"youre nowhere near the number"<<std::endl;
        std::cin>>number;
        tries++;
    }
    
    
}
std::cout<<"congragulation! you found the number."<<std::endl;
std::cout<<"the number of tries is "<<tries;

    return 0;
}