#include <iostream>
#include <cstdio>
#include <string>
#include <unistd.h>
#include "pac.h"
#include "lib/common/base.h"
#include "lib/common/cli.h"
#include "lib/common/utils.h"

void pac::strap::install(std::string kerned)
{
	std::cout << ylw << "\nInstalling basic packages...\n" << def;
	cli::log("Installing basic packages...");

	std::string kern = (kerned == "mainline") ? "linux" : ("linux-" + kerned);
	std::string pacs = "base " + kern + " linux-firmware";
	
	std::string toinstall_s = "pacstrap /mnt --noconfirm " + pacs;

	system(toinstall_s.c_str());					//	< ---------------------------------------
	
	std::cout << grn << "Done.\n" << def;
	cli::log("Done.");
}

void pac::strap::setmirr(std::string CC)
{
	std::cout << ylw << "\nReaching national mirror...\n" << def;
	cli::log("Reaching national mirror...");
		
	std::string toreach_s = "reflector -c \"" + CC + "\" -f 12 -l 10 -n 12 --save /etc/pacman.d/mirrorlist";

	system("cp /etc/pacman.d/mirrorlist /etc/pacman.d/mirrorlist.bak");		//	< ---------------------------------------
	system(toreach_s.c_str());					//	< ---------------------------------------
	
	std::cout << grn << "Done.\n" def;
	cli::log("Done.");
}

void pac::man::refresh()
{
	std::cout << ylw << "\nSyncing packages\' repositories...\n" << def;
	cli::log("Syncing packages repositories...");

	system("pacman -Syy");					//	< ---------------------------------------
	
	std::cout << grn << "Done.\n" << def;
	cli::log("Done.");
}

void pac::man::install(std::string* pkgs)
{
	std::cout << ylw << "\nInstalling utilities...\n" << def;
	cli::log("Installing utilities...");

	std::string pacs;
	for(int i = 0; i < utils::arrsize(pkgs); i++)
	{
		pacs += " " + pkgs[i];
	}

	std::string toinstall_s = "pacman -S --noconfirm" + pacs;

	system(toinstall_s.c_str());					//	< ---------------------------------------
	
	std::cout << grn << "Done.\n" << def;
	cli::log("Done.");
}