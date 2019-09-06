#version 330 core

layout (location = 0) in vec3 pos;
layout (location = 1) in vec2 texCoords;
layout (location = 2) in vec3 normal;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

out vec3 WorldPos;
out vec3 Normal;
out vec2 TexCoords;

void main()
{
    WorldPos=(view * model *vec4(pos,1.0)).xyz;
    Normal=normal;
    TexCoords=texCoords;
    gl_Position = projection * view * model * vec4(pos, 1.0);
}
