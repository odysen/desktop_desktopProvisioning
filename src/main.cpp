#include <iostream>
#include "lib/common/cli.h"

#include "lib/pac/pac.h"
#include "lib/partitioner/partitioner.h"
#include "lib/userspace/userspace.h"

#include "lib/provisioning/provisioning.h"

int main (int argc, char* argv[]) {
    cli::log("Hello from desktop provisioning!");

    std::cout << "        -*+-                                                              " << std::endl;
    std::cout << "     =*######*=                                                           " << std::endl;
    std::cout << "  +*#############+                                                        " << std::endl;
    std::cout << "  *##############*.       :-.          #%.                                " << std::endl;
    std::cout << "   =####+  *####+      =@@@%@@%.       %@.                                " << std::endl;
    std::cout << "    :*#:    -##:      *@#     @@. =@@@@@@.-@%  -@% %@@@@  .%@@@%.  @#@@@%." << std::endl;
    std::cout << "     ..      .        #@.     *@--@#   @@. =@+ @% :@%=:  :@@---@@. @%  :@#" << std::endl;
    std::cout << "    :*#:    -##.      -@@:   +@@ -@#   @@.  %@@@.   .-%@=:@@:..:.  @#   @#" << std::endl;
    std::cout << "   =####+  *####=       *@@@@%=   =@@@@#@.   @@:  :@@@@%  .%@@@@=  @#   @#" << std::endl;
    std::cout << "  *##############*                          +@*                           " << std::endl;
    std::cout << "  +##############+                          #+                            " << std::endl;
    std::cout << "     =*######*=                                                           " << std::endl;
    std::cout << "        -**-                                                              " << std::endl;

    cli::log("Running in CLI mode...");

    // now we go as per arch wiki
    cli::log("Ensure an internet connection is available before proceeding!");
}