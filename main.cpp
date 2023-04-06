#include <iostream>

#include "PrecedencerConfig.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        // report version
        std::cout << " Version " << Precedencer_VERSION_MAJOR << "."
                << Precedencer_VERSION_MINOR << std::endl;
        return 1;
    }
    return 0;
}