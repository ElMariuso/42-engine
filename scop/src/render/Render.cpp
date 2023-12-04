/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Render.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:29:17 by mthiry            #+#    #+#             */
/*   Updated: 2023/12/04 22:50:50 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render/Render.hpp"

Render::Render()
{
    if (!glfwInit())
    {
        std::cerr << "ERROR: GLFW couldn't start" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    GLFWmonitor* monitor = glfwGetPrimaryMonitor();
    if (!monitor)
    {
        std::cerr << "ERROR: No primary monitor found" << std::endl;
        exit(EXIT_FAILURE);
    }

    const GLFWvidmode* mode = glfwGetVideoMode(monitor);
    this->scop_window = std::make_unique<ScopWindow>(mode->width, mode->height, "scop");
    this->colorMainBackground();
}

void Render::run()
{
    while (!this->scop_window->shouldClose())
    {
        this->scop_window->pollEvents();
        glClear(GL_COLOR_BUFFER_BIT);
        this->scop_window->swapBuffers();
    }
}

/* Private functions */
void Render::colorMainBackground()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}