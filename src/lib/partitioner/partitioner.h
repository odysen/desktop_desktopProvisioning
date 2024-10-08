#ifndef PARTITIONER_H
#define PARTITIONER_H

#include <string>
#include <vector>

namespace party {
    void create(std::vector<std::string> partitions);
    void mount();
    int createTable();
    std::string evaluateDrive();
}

#endif