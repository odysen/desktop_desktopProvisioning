#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include "partitioner.h"
#include "../lib/common/cli.h"

std::vector<std::string> partitions;

std::string party::evaluateDrive() {
    // STUB
    // here we're actually much better off if we let the user choose the drive - i mean, how else?
    return "sda";
}

void party::mount() {
    // STUB
}

int party::createTable() {
    cli::log("Creating partition table...");
    system("genfstab -U /mnt >> /mnt/etc/fstab");
    cli::okay("Done."); //TODO: check if file actually created without issues
    return 0;
}

void party::create(std::vector<std::string> partitions) {
    // STUB
}