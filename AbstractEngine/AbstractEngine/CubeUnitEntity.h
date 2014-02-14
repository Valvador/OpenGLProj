#include "stdafx.h"
#include "UnitEntity.h"
#include "objloader.h"



//Bullshit class that pastes cubes from Tutorial 5
//TODO: Import the ability to have different positions!


std::vector<glm::vec3> vertices;
std::vector<glm::vec3> colors;



class CubeUnitEntity: public UnitEntity
{
public:
	CubeUnitEntity(vec3 position)
	{
		loadOBJnoTexture("ship.obj", vertices, colors);
		this->g_vertex_buffer_data = vertices;
		this->g_color_buffer_data = colors;
	}
	~CubeUnitEntity();
};