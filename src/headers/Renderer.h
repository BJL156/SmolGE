#pragma once

#include <GLAD/glad.h>
#include <GLM/glm.hpp>
#include <GLM/GTC/matrix_transform.hpp>

#include "Shader.h"
#include "Entity.h"

namespace SmolEngine
{
	class Renderer
	{
	public:
		Renderer();
		~Renderer();

		void Draw(glm::vec2 position, glm::vec2 scale, glm::vec4 color, float windowWidth, float windowHeight);

		void DrawEntity(Entity& entity, float windowWidth, float windowHeight);
	private:
		unsigned int VBO, VAO;
		Shader shader{ "res/shaders/SolidVertex.glsl", "res/shaders/SolidFragment.glsl" };
	};
}