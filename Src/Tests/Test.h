#ifndef TEST_H
#define TEST_H

namespace Test{
    class Test{
        public:
            Test() {}
            virtual ~Test() {}

            virtual void OnUpdate(float deltaTime) {}
            virtual void OnRender() {}
            virtual void OnImGuiRender() {}
    };
}

#endif