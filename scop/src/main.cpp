/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 21:37:48 by mthiry            #+#    #+#             */
/*   Updated: 2023/12/04 19:23:13 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.hpp"

void errorCallback(int error, const char* description)
{
    std::cerr << "ERROR[" << error << "]: " << description << std::endl;
}

int main()
{
    glfwSetErrorCallback(errorCallback);
    
    if (!glfwInit())
    {
        std::cerr << "GLFW couldn't start" << std::endl;
        return (-1);
    }

    GLFWwindow  *window = glfwCreateWindow(640, 480, "scop", NULL, NULL);
    if (!window)
    {
        std::cerr << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return (-1);   
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        glfwTerminate();
        return (-1);
    }

    glClearColor(0.25f, 0.5f, 0.75f, 1.0f);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return (0);
}