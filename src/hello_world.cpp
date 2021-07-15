#include <iostream>
#include <emscripten.h>

int main() {
  std:: cout << "hello world" << std::endl;
  return 0;
}

EMSCRIPTEN_KEEPALIVE
int add(int x, int y) {
  return x + y;
}
