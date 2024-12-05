#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "shader.h"

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* window);

class Engine
{
public:
	Engine(unsigned int screen_width, unsigned int screen_height);
	~Engine();
	void Run();

private:
	GLFWwindow* window;
	unsigned int VAO;
	unsigned int VBO;
	unsigned int EBO;
	unsigned int texture1;
	unsigned int texture2;
	Shader shader;
};

