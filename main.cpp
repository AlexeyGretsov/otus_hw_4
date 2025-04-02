#include <iostream>

#include "sfinae_templates.h"

int main(int argc, char *argv[]) {
  try {
    std::cout << "otus_hw_4 ...\n";
    std::cout << "print_ip: " << print_ip(1) << "\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}
