#ifndef TESTTEXTURE2D_H
#define TESTTEXTURE2D_H
#include "Test.h"

#include "../VertexBuffer.h"
#include "../VertexBufferLayout.h"
#include "../Texture.h"

#include <memory>

namespace Tests{
    class TestTexture2D : public Test{
        public:
            TestTexture2D();
            ~TestTexture2D();

            void OnUpdate(float deltaTime) override;
            void OnRender() override;
            void OnImGuiRender() override;

        private:
            std::unique_ptr<VertexArray> m_VAO;
            std::unique_ptr<VertexBuffer> m_VertexBuffer;
            std::unique_ptr<IndexBuffer> m_IndexBuffer;
            std::unique_ptr<Shader> m_Shader;
            std::unique_ptr<Texture> m_Texture;

            glm::mat4 m_View, m_Proj;
            glm::vec3 m_TranslationA, m_TranslationB;

    };
}

#endif