#include <iostream>
#include "lib/common/cli.h"

#include "lib/pac/pac.h"
#include "lib/partitioner/partitioner.h"
#include "lib/userspace/userspace.h"

#include "lib/provisioning/provisioning.h"

int main (int argc, char* argv[]) {
    cli::log("Hello from desktop provisioning!");

    if (argc > 1) {
        if (std::string(argv[1]) == "provision" && argc < 3) {
            cli::error("Running in GUI provisioning mode, but no command was provided.");
            return 1;
        }

        else {
            cli::log("Passing to provisioning...");
            prov::execute(argv[3]);
            return 0;
        } // TODO: need to handle incorrect commands
        // speaking of -- the provisioner will need to handle internet connection somehow, hmm...
    }
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