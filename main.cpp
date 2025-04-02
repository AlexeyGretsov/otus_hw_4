#include <iostream>

int main(int argc, char *argv[]) {
  try {
    std::cout << "otus_hw_4 ...\n";
  } catch (const std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}
