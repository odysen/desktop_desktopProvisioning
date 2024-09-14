#include <string>

#ifndef PAC_H
#define PAC_H

namespace pac {
    namespace strap {
        void install(std::string kerned);
        void setmirr(std::string CC);
    }
    namespace man {
        void refresh();
        void install(std::string* pkgs);
    }   
}

#endif