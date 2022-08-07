#pragma once

#include <stdio.h>

#include <GL\glew.h>
#include <GLFW/glfw3.h>
class GLWindow
{
public:
	GLWindow();
	GLWindow(GLint windowWidth, GLint windowHeight);

	int Initialise();

	GLfloat GetBufferWidth() { return bufferWidth;  }
	GLfloat GetBufferHeight() { return bufferHeight; }

	bool GetShouldCLose() { return glfwWindowShouldClose(mainWindow); }

	void swapBuffers() { glfwSwapBuffers(mainWindow); }

	~GLWindow();

private:
	GLFWwindow* mainWindow;

	GLint width, height;
	GLint bufferWidth, bufferHeight;
};

