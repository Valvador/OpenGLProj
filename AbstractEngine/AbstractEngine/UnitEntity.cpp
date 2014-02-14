#include "stdafx.h"
#include "UnitEntity.h"






std::vector<glm::vec3> UnitEntity::getVertexData()
{
	return this->g_vertex_buffer_data;
}

std::vector<glm::vec3> UnitEntity::getColorData()
{
	return this->g_color_buffer_data;
}

