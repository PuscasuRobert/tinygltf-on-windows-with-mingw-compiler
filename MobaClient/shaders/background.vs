#version 330 core
layout (location = 0) in vec3 pos;
layout (location = 1) in vec3 normal;
layout (location = 2) in vec2 texCoords;

out vec3 WorldPos;
out vec3 Normal;
out vec2 TexCoords;

void main()
{
    WorldPos=pos;
    Normal=normal;
    TexCoords=texCoords;
    gl_Position = vec4(pos, 1.0);
}
