#include "Test.h"
#include "Object.h"

#include "spdlog/spdlog.h"
#include <iostream>

#include <iostream>
//#include <SDL.h>
#include <vector>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <Bullet/src/btBulletDynamicsCommon.h>
#include <vector>


using namespace std;


#define SCALING .5

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





	GLFWwindow * window;
	if (!glfwInit())
		return -1;

	window = glfwCreateWindow(640, 480, "hello world", NULL, NULL);
	if (!window) {
		glfwTerminate();
		return -1;

	}
	btAlignedObjectArray <btCollisionShape*> mCollisionShapes;
	btBroadphaseInterface* mBroadphase;
	btCollisionDispatcher* mDispatcher;
	btConstraintSolver* mSolver;
	btDefaultCollisionConfiguration* mCollisionConfiguration;
	btDynamicsWorld* mDynamicsWorld;
	vector<btRigidBody*> mBoxesRB;
	double mLastElapsedSeconds;


	return 0;
}