/*
* author Hamza Chakoubi aka OTOSSA
*/

#include "preveiwer.hpp"
#include <cmath>

namespace ft {
std::string repeat(std::string str, int n)
{
  std::string buffer;
  for(int i = 0; i < n; i++)
    buffer+=str;
  return buffer;
}
void printEdges(int height, int level, int maxHeight){
  for (int i = 0; i < height; i++) {
       std::cout << repeat(" ", (maxHeight - level) * height);
    for(int x = 0; x < level; x++)
      std::cout <<  repeat(" ", height - i) << "/" << ft::repeat(" ", i * 2) << "\\" << repeat(" ", height - i);
    std::cout << std::endl;
  }
}

void testTree() {
  int size = 3;
  int maxHeight = 5;
  int leftSpace = 0;
  for (int i = 0; i < maxHeight; i++) {
    leftSpace = (maxHeight - i) * size;
ft::printEdges(size, i, maxHeight);
    std::cout << ft::repeat(" ", leftSpace);
    for (int x = 0; x < i * 2; x++) {
      std::cout << "x";
      if(x % 2 == 0)
        std::cout << ft::repeat(" ", size * 2);
      else if (x != i * 2 - 1) 
        std::cout << " | ";
    }
    std::cout << std::endl;
  }
}
} // namespace ft
