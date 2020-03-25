#include "log.h"
namespace Rampart {

	std::shared_ptr<spdlog::logger> log::s_CoreLogger;
	std::shared_ptr<spdlog::logger> log::s_ClientLogger;

	void log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		
	}

}