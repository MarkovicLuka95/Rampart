#include "Test.h"
#include "Object.h"

#include "spdlog/spdlog.h"
#include <iostream>

int main()
{
	spdlog::info("Welcome to spdlog!");
	spdlog::error("Some error message with arg: {}", 1);
	spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
	spdlog::warn("Easy padding in numbers like {:08d}", 12);
	spdlog::set_level(spdlog::level::debug);
	spdlog::debug("This message should be displayed..");
	Rampart::Print();
	Object O = Object();
	spdlog::critical("Colision status: {}", O.getColisionStatus());
	
	

	
}