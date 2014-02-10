#include "stdafx.h"
#include <vector> 

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
using namespace glm;

// Include GLEW
#include <GL/glew.h>

// Include GLFW
#include <GL/glfw.h>

#include "Entity.h"

class UnitEntity : Entity
{
private:
	vec3 position;
	//float maxVelocity;
	std::vector<GLfloat> g_vertex_buffer_data;
	std::vector<GLfloat> g_color_buffer_data;

public:
	UnitEntity(vec3 startPosition, std::vector<GLfloat> vertexData, std::vector<GLfloat> colorData);
	~UnitEntity();
	vec3 getPosition(){return vec3(0.0f);}
	/*
	void setPosition(vec3 _position);
	vec3 moveTo();
	*/
	std::vector<GLfloat> getVertexData();
	std::vector<GLfloat> getColorData();

};