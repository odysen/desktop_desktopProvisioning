#ifndef PAC_H
#define PAC_H

#include <string>

namespace pac {
    namespace strap {
        void install(std::string packageListPath);
        void setmirr(std::string CC);
    }
    namespace man {
        void refresh();
        void install(std::string* pkgs);
    }   
}

#endif