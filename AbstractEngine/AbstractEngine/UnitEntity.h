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
protected:
	vec3 position;
	//float maxVelocity;
	std::vector<glm::vec3> g_vertex_buffer_data;
	std::vector<glm::vec3> g_color_buffer_data;

public:
	vec3 getPosition(){return vec3(0.0f);};
	/*
	void setPosition(vec3 _position);
	vec3 moveTo();
	*/
	std::vector<glm::vec3> getVertexData();
	std::vector<glm::vec3> getColorData();

};