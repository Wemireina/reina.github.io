#include <iostream>
#include <cstdlib>
#include <ctime>
  int main(){
  srand(static_cast<unsigned int>(time(0)));// seed the random number generator
  int randonNumber=rand()% 100+1;// Generate a random number between 1 and 1000
  int guess;
  int tries=0;
  int randomNumber;
  while(tries<4){
    std:: cout<<"Enter your guess(between 1 ans 100):";
    std::cin>>guess;
    tries++;
    if(guess==randomNumber)
    {
        std::cout<<"Congratulations! you guessed the number in"<<tries<<"tries.You are a genius!\n";
        return 0;
    } else{
    std::cout<<"Incorrect guess.Try again.\n";
    }
  }
  std::cout<<"You got it,but it took you more than 4 tries.\n";
  return 0;
  }
