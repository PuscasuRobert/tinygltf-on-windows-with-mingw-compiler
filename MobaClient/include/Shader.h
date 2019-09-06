#ifndef SHADER_H
#define SHADER_H

using namespace std;

//#include "tiny_gltf.h"

class Shader
{
public:

    /*class FileNotFoundException: public exception
    {
        public:
            string path;
            FileNotFoundException(string _path)
            {
                path=_path;
            }
    };

    class ShaderException: public exception
    {
        public:
            string path;
            ShaderException(){}
    };

    unsigned int ID;
    // constructor generates the shader on the fly
    // ------------------------------------------------------------------------

    Shader()
    {

    }

    Shader(string vertexPath, string fragmentPath)
    {
        load(vertexPath,fragmentPath);
    }

    void load(string vertexPath, string fragmentPath)
    {
        // 1. retrieve the vertex/fragment source code from filePath
        string vertexCode;
        string fragmentCode;
        ifstream vShaderFile;
        ifstream fShaderFile;
        try
        {
            vShaderFile.open(vertexPath);
            if(vShaderFile.fail())
                throw FileNotFoundException(vertexPath+string(" doesnt exist.\n"));

            fShaderFile.open(fragmentPath);
            if(fShaderFile.fail())
                throw FileNotFoundException(fragmentPath+string(" doesnt exist.\n"));

            stringstream vShaderStream, fShaderStream;
            // read file's buffer contents into streams
            vShaderStream << vShaderFile.rdbuf();
            fShaderStream << fShaderFile.rdbuf();
            // close file handlers
            vShaderFile.close();
            fShaderFile.close();
            // convert stream into string
            vertexCode   = vShaderStream.str();
            fragmentCode = fShaderStream.str();

            const char* vShaderCode = vertexCode.c_str();
            const char * fShaderCode = fragmentCode.c_str();
            // 2. compile shaders
            unsigned int vertex, fragment;
            // vertex shader
            vertex = glCreateShader(GL_VERTEX_SHADER);
            glShaderSource(vertex, 1, &vShaderCode, NULL);
            glCompileShader(vertex);
            int b1=VertexShaderWorks(vertex,vertexPath);
            // fragment Shader
            fragment = glCreateShader(GL_FRAGMENT_SHADER);
            glShaderSource(fragment, 1, &fShaderCode, NULL);
            glCompileShader(fragment);
            int b2=FragmentShaderWorks(fragment,fragmentPath);
            // shader Program
            ID = glCreateProgram();
            glAttachShader(ID, vertex);
            glAttachShader(ID, fragment);
            glLinkProgram(ID);
            int b3=ProgramShaderWorks(ID,vertexPath,fragmentPath);
            // delete the shaders as they're linked into our program now and no longer necessary
            glDeleteShader(vertex);
            glDeleteShader(fragment);

            if(b1+b2+b3!=3)
                throw ShaderException();
        }
        catch (FileNotFoundException e)
        {
            cout<<"FileNotFoundException: "<<e.path<<endl;
        }
        catch (ShaderException e)
        {
            cout<<"Shader Exception:"<<endl;
        }
    }
    // activate the shader
    // ------------------------------------------------------------------------
    void use()
    {
        glUseProgram(ID);
    }
    // utility uniform functions
    // ------------------------------------------------------------------------
    void setUniformInt(const string& name, int value)
	{
		GLint location = glGetUniformLocation(ID, name.c_str());
		glUniform1i(location, value);
	}

	void setUniformFloat(const string& name, float value)
	{
		GLint location = glGetUniformLocation(ID, name.c_str());
		glUniform1f(location, value);
	}

	void setUniformFloat2(const string& name, const glm::vec2& value)
	{
		GLint location = glGetUniformLocation(ID, name.c_str());
		glUniform2f(location, value.x, value.y);
	}

	void setUniformVec3(const string& name, const glm::vec3& value)
	{
		GLint location = glGetUniformLocation(ID, name.c_str());
		glUniform3f(location, value.x, value.y, value.z);
	}

	void setUniformVec4(const string& name, const glm::vec4& value)
	{
		GLint location = glGetUniformLocation(ID, name.c_str());
		glUniform4f(location, value.x, value.y, value.z, value.w);
	}

	void setUniformMat3(const string& name, const glm::mat3& matrix)
	{
		GLint location = glGetUniformLocation(ID, name.c_str());
		glUniformMatrix3fv(location, 1, GL_FALSE, glm::value_ptr(matrix));
	}

	void setUniformMat4(const string& name, const glm::mat4& matrix)
	{
		GLint location = glGetUniformLocation(ID, name.c_str());
		glUniformMatrix4fv(location, 1, GL_FALSE, glm::value_ptr(matrix));
	}

private:

    bool VertexShaderWorks(unsigned int shader, string shaderPath)
    {
        int success;
        char infoLog[1024];
        glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
        if (!success)
        {
            cout<<"Vertex: "<<shaderPath<<endl;
            glGetShaderInfoLog(shader, 1024, NULL, infoLog);
            cout << "VERTEX SHADER COMPILATION ERROR\n" << infoLog << "\n -- --------------------------------------------------- -- " << endl;
            return 0;
        }
        return 1;
    }

    bool FragmentShaderWorks(unsigned int shader, string shaderPath)
    {
        int success;
        char infoLog[1024];
        glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
        if (!success)
        {
            cout<<"Fragment: "<<shaderPath<<endl;
            glGetShaderInfoLog(shader, 1024, NULL, infoLog);
            cout << "FRAGMENT SHADER COMPILATION ERROR\n" << infoLog << "\n -- --------------------------------------------------- -- " << endl;
            return 0;
        }
        return 1;
    }

    bool ProgramShaderWorks(unsigned int shader,string vertexPath,string fragmentPath)
    {
        int success;
        char infoLog[1024];
        glGetProgramiv(shader, GL_LINK_STATUS, &success);
        if (!success)
        {
            cout<<"Linking: "<<vertexPath<<" & "<<fragmentPath<<endl;
            glGetProgramInfoLog(shader, 1024, NULL, infoLog);
            cout << "SHADER LINKING ERROR\n" << infoLog << "\n -- --------------------------------------------------- -- " << endl<<endl<<endl;
            return 0;
        }
        return 1;
    }*/
};
#endif
