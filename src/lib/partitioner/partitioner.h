#ifndef PARTITIONER_H
#define PARTITIONER_H

#include <string>
#include <vector>

namespace party {
    void create(std::vector<std::string> partitions);
    void createTable();
    std::string evaluateDrive();
}

#endif