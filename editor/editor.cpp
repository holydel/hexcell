#include "hexcell.h"
#include <iostream>


int main()
{

	hexcell::ApplicationDesc appDesc;
	appDesc.Name = "Editor";
	appDesc.Vendor = "HexCell";
	appDesc.Version = 1;

	hexcell::Application* app = hexcell::InitApp(appDesc);

	delete app;

	int r = somefunc(2,4);
	std::cout << "R:" << r << std::endl;
	return 0;
}