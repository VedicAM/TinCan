#ifndef CAMERA_H
#define CAMERA_H

#include "Vendor/GLFW/glfw3.h"
#include "Vendor/glm/ext/vector_float3.hpp"
#include "Vendor/glm/fwd.hpp"
#include "Vendor/glm/glm.hpp"

class Camera{
    public:
      Camera();
      ~Camera();

      void updateViewMatrix(GLFWwindow* window, float speed, glm::mat4 &viewMat, glm::mat4 &projMat, glm::vec3 &position);
    private:
      static void scrollCallback(GLFWwindow* window, double xoffset, double yoffset);
};

#endif
