namespace Rampart
{
	__declspec(dllimport) void Print();
}

#include "spdlog/spdlog.h"

int main()
{
	spdlog::info("Welcome to Rampart");
	Rampart::Print();
}