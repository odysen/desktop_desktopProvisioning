#include <iostream>
#include <unistd.h>
#include "lib/common/cli.h"

#include "lib/pac/pac.h"
#include "lib/partitioner/partitioner.h"
#include "lib/userspace/userspace.h"

#include "lib/provisioning/provisioning.h"

int main (int argc, char* argv[]) {
    cli::log("Hello from desktop provisioning!");

    cli::log("Ensure an internet connection is available before proceeding! You can do so with the GUI of Odysen, in the settings, etc.");

        // still ensure whether we're connected
    if (system("ping -c1 pkg.odysen.space")) {
        cli::error("No internet connection detected. Exiting.");
        exit(1);
    } else {
        cli::okay("Internet connection detected.");
    }

    // now we check if we're root
    if (getuid()) {
        cli::error("Not running as root. Exiting.");
        exit(1);
    } else {
        cli::okay("Running as root.");
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
    cli::log("Entering partitioning...");
    std::string userDrive = party::evaluateDrive(); //still a stub
}