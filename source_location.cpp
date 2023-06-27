#include <iostream>
#include <source_location>
#include <string_view>

void log(const std::string_view message, const std::source_location& location =
                                             std::source_location::current()) {
  std::cout << "info: " << location.file_name() << "(" << location.line() << ":"
            << location.column() << ") `" << location.function_name() << "` "
            << message << '\n';
}

int main(int, char*[]) { log("Hello world!"); }