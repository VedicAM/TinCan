#include "Camera.h"

#include "Vendor/glm/glm.hpp"
#include "Vendor/glm/gtc/matrix_transform.hpp"
#include "Vendor/GLFW/glfw3.h"
#include <iostream>

Camera::Camera(){

}

Camera::~Camera(){
    
}

float m_Yscroll;

float clamp(float value, float minVal, float maxVal) {
    return (value < minVal) ? minVal : (value > maxVal) ? maxVal : value;
}

void Camera::scrollCallback(GLFWwindow* window, double xoffset, double yoffset){
  m_Yscroll += yoffset;

  m_Yscroll = clamp(m_Yscroll, -26.9, 26.9);
}

void Camera::updateViewMatrix(GLFWwindow* window, float speed, glm::mat4 &viewMat, glm::mat4 &projMat, glm::vec3 &position){
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
  
  glfwSetScrollCallback(window, scrollCallback);

  float FOV = glm::max(45.0f - 5 * m_Yscroll, 1.0f);
  std::cout << m_Yscroll << std::endl; 
  position.z = 1.0f;

  projMat = glm::perspective(glm::radians(FOV), 6.0f / 3.0f, -1.0f, 1.0f);
  viewMat = glm::lookAt(position, glm::vec3(position.x, position.y, 0), glm::vec3(0, 1, 0));
}

