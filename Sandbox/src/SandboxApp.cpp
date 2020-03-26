#include "Test.h"
#include "Object.h"

#include "spdlog/spdlog.h"

int main()
{
	spdlog::info("Welcome to spdlog!");
	spdlog::error("Some error message with arg: {}", 1);
	spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
	spdlog::warn("Easy padding in numbers like {:08d}", 12);
	spdlog::set_level(spdlog::level::debug);
	spdlog::debug("This message should be displayed..");
	Rampart::Print();


	//Deluje samo po x osi
	Vector3 v1 = Vector3(10, 0, 0);
	Vector3 v2 = Vector3(1, 0, 0);

	//Konstantna sila, jer je treci argument == -1000, a drugi argument je u ovom slucaju nebitan
	Force F1 = Force(v1, 0, -1000);
	//Sila koja ima pocetnu vrednost 1, raste za 1 svake sekunde i traje 10 sekundi
	Force F2 = Force(v2, 1, 10);


	Object O = Object();
	O.addForce(&F1);
	O.addForce(&F2);

	//deltaT = 25ms
	double deltaT = 0.025;

	for (double i = 0; i < 20; i += deltaT)
	{
		Vector3 temp = O.getForceTotal(deltaT);
		spdlog::info("Force x, y, z: {0}, {1}, {2}", temp.x, temp.y, temp.z);
	}



}