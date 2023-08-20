#include "Test.h"
#include "../Vendor/imgui/imgui.h"

namespace Tests{
    TestMenu::TestMenu(Test *&currentTestPointer) : m_CurrentTest(currentTestPointer){

    }
    
    void TestMenu::OnImGuiRender(){
        for(auto &test: m_Tests){
            if(ImGui::Button(test.first.c_str()))
                m_CurrentTest = test.second();
        }
    }
}