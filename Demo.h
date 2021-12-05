#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint lightmapShader,depthmapShader, shadowmapShader, cubeVBO, cubeVAO, cubeEBO, cube_texture, cube_texture2, planeVBO, planeVAO, planeEBO, plane_texture, stexture, stexture2, stexture3, depthMapFBO, depthMap, cubeVBO2, cubeVAO2, cubeEBO2, cubeVBO3, cubeVAO3, cubeEBO3, cube_texture3, stexturePlane;
	const unsigned int SHADOW_WIDTH = 1024, SHADOW_HEIGHT = 1024;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	float angle = 0;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);


	void BuildTexturedCube();
	void BuildTexturedCube2();
	void BuildTexturedCube3();

	void DrawTexturedCube(GLuint shader);
	void DrawTexturedCube2(GLuint shader);
	void DrawTexturedCube3(GLuint shader);


	void BuildTexturedPlane();
	void DrawTexturedPlane(GLuint shader);

	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();


	void BuildDepthMap();
	void BuildShaders();
};

