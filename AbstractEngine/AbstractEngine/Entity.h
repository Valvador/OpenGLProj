#include "stdafx.h"

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
using namespace glm;

class Entity
{
public:
	virtual vec3 getPosition() = 0;

};