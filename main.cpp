#include <iostream>
#include <string>

int main() {
    std::string Word;
    std::cout << "Word would you like to change: ";
    std::getline(std::cin, Word);

  char* endWord = &Word[Word.size() - 1];
  char* startWord = &Word[0];

 for (int i = 0; i < Word.size(); i++)
    {
      std::cout<< *endWord;
      if(endWord == startWord)
      {
        break;
      }
      endWord--;
    }
}
