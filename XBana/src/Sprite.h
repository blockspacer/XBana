#pragma once
#include <iostream>
#include <GL/glew.h>
#include "../XTypes.h"
#include "../Texture.h"
#include "Shader.h"
class Sprite
{
public:
	Sprite();
	~Sprite();
	void Init();
	void Draw();
	void SetTexture(std::string path);
	Shader* shdr;
	glm::vec2 position;
	glm::vec2 scale;
	float rotation;
private:
	Vertex vertices[6];
	unsigned int VAO, VBO;
	Texture* tex;
	glm::mat4 model;
	unsigned int viewLoc;
	unsigned int projectionLoc;
	glm::mat4 view;
	glm::mat4 projection;
	
};

