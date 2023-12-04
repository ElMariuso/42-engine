/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:48:59 by mthiry            #+#    #+#             */
/*   Updated: 2023/12/04 23:50:28 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "render/Window.hpp"

ScopWindow::ScopWindow(const int& width, const int& height, const std::string& title)
    : window(nullptr), width(width), height(height), screen_width(width), screen_height(height), title(title)
{
    glfwSetErrorCallback(ScopWindow::errorCallback);
    this->initialization();
    glfwMakeContextCurrent(this->window);
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        this->shutdown();
        exit(EXIT_FAILURE);
    }
}

ScopWindow::~ScopWindow()
{
    this->shutdown();
}

/* Public functions */
void ScopWindow::errorCallback(int error, const char* description)
{
    std::cerr << "ERROR[" << error << "]: " << description << std::endl;
}

bool ScopWindow::shouldClose() const
{
    return glfwWindowShouldClose(window);
}

void ScopWindow::swapBuffers()
{
    glfwSwapBuffers(window);
}

void ScopWindow::pollEvents()
{
    glfwPollEvents();
}

/* Private functions */
void ScopWindow::initialization()
{
    this->window = glfwCreateWindow((this->width / 100) * 90, (this->height / 100) * 90, this->title.c_str(), NULL, NULL);
    if (!this->window)
    {
        std::cerr << "ERROR: Failed to create GLFW window" << std::endl;
        this->shutdown();
        exit(EXIT_FAILURE);
    }
    glfwSetWindowPos(this->window, (this->screen_width - this->width) / 2, (this->screen_height - this->height) / 2);
}

void ScopWindow::shutdown()
{
    if (this->window)
        glfwDestroyWindow(this->window);
    glfwTerminate();
}