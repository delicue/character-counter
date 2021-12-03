#include <iostream>
#include <fstream>
#include "lib/counter/counter.h"

std::string & getFileName();

int main()
{
   std::fstream file;
   std::string filename;
   std::cout << "Please enter the file name to be scanned: ";
   std::getline(std::cin, filename);
   file.open(filename.c_str(), std::ios::in);

   if (file.is_open())
   {
      CharCounter cc;
      std::string lines;

      while (std::getline(file, lines))
      {
         std::cout << lines << "\n";
         cc = cc + CharCounter(lines);
      }
      file.close();
      std::cout << cc;
   }
   else
   {
      std::cerr << "Failed to open file.\n";
   }
   return 0;
}