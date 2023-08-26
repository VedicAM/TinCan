#include "Camera.h"

#include "Vendor/glm/gtc/matrix_transform.hpp"
#include "Vendor/GLFW/glfw3.h"

Camera::Camera(){

}

Camera::~Camera(){
    
}

void Camera::updateViewMatrix(GLFWwindow* window, float speed, glm::mat4 &viewMat, glm::vec3 &position){
  if(glfwGetKey(window, GLFW_KEY_RIGHT) == GLFW_PRESS || glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
    position.x += speed;
  else if(glfwGetKey(window, GLFW_KEY_LEFT) == GLFW_PRESS || glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
    position.x += -speed;
  else
    position.x += 0.0f;
        
  if(glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS || glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
    position.y += speed;
  else if(glfwGetKey(window, GLFW_KEY_DOWN)== GLFW_PRESS || glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
    position.y += -speed;
  else
    position.y += 0.0f;
        
  position.z = 1.0f;
  viewMat = glm::lookAt(position, glm::vec3(position.x, position.y, 0), glm::vec3(0, 1, 0));
}

