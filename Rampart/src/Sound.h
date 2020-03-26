#pragma once

#include <string>
#include <Windows.h>
#include <mmsystem.h>

class Sound
{
public:
	Sound(std::string);
	void playSound();
private:
	std::string name;
    
};

