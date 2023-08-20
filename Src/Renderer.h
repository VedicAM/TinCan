#ifndef RENDERER_H
#define RENDERER_H

#include <GL/glew.h>

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"

#define ASSERT(x) if(!(x)) __builtin_trap() //TODO: Add Cross Platform Support!
#define GLCall(x)\
    GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))



void GLClearError();

bool GLLogCall(const char* function, const char* file, int line);

class Renderer{
    public:
        void Clear() const;
        void Draw(const VertexArray &va, const IndexBuffer &ib, const Shader &shader) const;
};

#endif