#include "pch.h"

using namespace std;

int main()
{

    tinygltf::Model model;
    tinygltf::TinyGLTF gltf_ctx;
    std::string err;
    std::string warn;

    string filename="models/scene.gltf";

    gltf_ctx.LoadASCIIFromFile(&model, &err, &warn, filename.c_str());

    cout<<helmet.meshes.size();

    return 0;
}
