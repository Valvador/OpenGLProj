#include "stdafx.h"
#include "UnitEntity.h"



UnitEntity::UnitEntity(vec3 startPosition, std::vector<GLfloat> vertexData, std::vector<GLfloat> colorData)
{
	position = startPosition;
	g_vertex_buffer_data = vertexData;
	g_color_buffer_data = colorData;
}

UnitEntity::~UnitEntity()
{
}

std::vector<GLfloat> UnitEntity::getVertexData()
{
	return g_vertex_buffer_data;
}

std::vector<GLfloat> UnitEntity::getColorData()
{
	return g_color_buffer_data;
}
