//// Ariana Baza
// baza.ariana05@csu.fullerton.edu
// @arianabazaa
// Partners: @alexperez14
#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO: Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (argc < 1){
  std:: cout << "Error";
  return 1;}
  // TODO: Write a for-each loop to sum (add up) all of the command line
  // arguments.
  for (std::string d: arguments) {
    std::cout << d << '\n'; }
  for (std::string c: arguments) {
    std::cout << c << '\n'; 
  }
  // Use a double or float type so that your program preserves fractional
  // values.
  //double d + s 
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  

  // TODO: After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.

  // TODO: Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.

  return 0;
}
