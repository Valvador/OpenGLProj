#ifndef CAMCONTROLS_H
#define CAMCONTROLS_H

#define 	GLFW_KEY_0   48
#define 	GLFW_KEY_1   49
#define 	GLFW_KEY_2   50
#define 	GLFW_KEY_3   51
#define 	GLFW_KEY_4   52
#define 	GLFW_KEY_5   53
#define 	GLFW_KEY_6   54
#define 	GLFW_KEY_7   55
#define 	GLFW_KEY_8   56
#define 	GLFW_KEY_9   57
#define 	GLFW_KEY_SEMICOLON   59 /* ; */
#define 	GLFW_KEY_EQUAL   61 /* = */
#define 	GLFW_KEY_A   65
#define 	GLFW_KEY_B   66
#define 	GLFW_KEY_C   67
#define 	GLFW_KEY_D   68
#define 	GLFW_KEY_E   69
#define 	GLFW_KEY_F   70
#define 	GLFW_KEY_G   71
#define 	GLFW_KEY_H   72
#define 	GLFW_KEY_I   73
#define 	GLFW_KEY_J   74
#define 	GLFW_KEY_K   75
#define 	GLFW_KEY_L   76
#define 	GLFW_KEY_M   77
#define 	GLFW_KEY_N   78
#define 	GLFW_KEY_O   79
#define 	GLFW_KEY_P   80
#define 	GLFW_KEY_Q   81
#define 	GLFW_KEY_R   82
#define 	GLFW_KEY_S   83
#define 	GLFW_KEY_T   84
#define 	GLFW_KEY_U   85
#define 	GLFW_KEY_V   86
#define 	GLFW_KEY_W   87
#define 	GLFW_KEY_X   88
#define 	GLFW_KEY_Y   89
#define 	GLFW_KEY_Z   90

void computeMatricesFromInputs();
glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();

#endif