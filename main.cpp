#include "Engine.h"

// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
	Engine engine(SCR_WIDTH, SCR_HEIGHT);
	engine.Run();
}