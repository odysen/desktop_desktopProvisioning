#include <iostream>
#include <cstdio>
#include <string>
#include "pac.h"
#include "lib/common/base.h"
#include "lib/common/cli.h"
#include "lib/common/utils.h"

void pac::strap::install(std::string packageListPath) // TODO: rewrite the pacstrap implementation to use a package list pre-supplied in the config
{
	cli::log("Installing basic packages...");

	//std::string kern = (kerned == "mainline") ? "linux" : ("linux-" + kerned);
	//std::string pacs = "base " + kern + " linux-firmware";
	
	std::string toinstall_s = "pacstrap /mnt --noconfirm ";

	system(toinstall_s.c_str());					//	< ---------------------------------------
	
	cli::log("Done.");
}

// also TODO: allow generating a package list with this, too

void pac::strap::setmirr(std::string CC)
{
	cli::log("Reaching national mirror...");
		
	std::string toreach_s = "reflector -c \"" + CC + "\" -f 12 -l 10 -n 12 --save /etc/pacman.d/mirrorlist";

	system("cp /etc/pacman.d/mirrorlist /etc/pacman.d/mirrorlist.bak");		//	< ---------------------------------------
	system(toreach_s.c_str());					//	< ---------------------------------------
	
	cli::log("Done.");
}

void pac::man::refresh()
{
	cli::log("Syncing packages repositories...");

	system("pacman -Syy");					//	< ---------------------------------------
	
	cli::log("Done.");
}

void pac::man::install(std::string* pkgs) // TODO: deprecate if pacstrap installs all the neccessary packages
{
	cli::log("Installing utilities...");

	std::string pacs;
	for(int i = 0; i < utils::arrsize(pkgs); i++)
	{
		pacs += " " + pkgs[i];
	}

	std::string toinstall_s = "pacman -S --noconfirm" + pacs;

	system(toinstall_s.c_str());					//	< ---------------------------------------
	
	cli::log("Done.");
}