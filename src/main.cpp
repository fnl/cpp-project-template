#include <iostream>
#include <cxxopts.hpp>
#include "include/sample.h"

int main(int argc, char *argv[]) {
    cxxopts::Options options("sample_exec", "A one-line description of this program.");
    options.add_options()
            ("h,help", "Show help")
            ("d,debug", "Enable debugging")
            ("f,file", "File name", cxxopts::value<std::string>());
    options.custom_help("[-h] [-d] [-f FILE]");
    auto result = options.parse(argc, argv);

    sample_lib::sample s(2);

    if (result.count("help")) std::cout << options.help() << std::endl;
    std::cout << "sample: " << s.get_value() << std::endl;
    std::cout << "file: " << (result.count("file") ? result["file"].as<std::string>() : "N/A") << std::endl;

    return 0;
}