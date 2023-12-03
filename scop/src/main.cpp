/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 21:37:48 by mthiry            #+#    #+#             */
/*   Updated: 2023/12/03 23:28:36 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.hpp"

int main()
{
    GLFWwindow  *window;
    
    if (!glfwInit())
    {
        std::cerr << "GLFW couldn't start" << std::endl;
        return (1);
    }

    window = glfwCreateWindow(640, 480, "scop", NULL, NULL);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }
    glfwTerminate();
    return (0);
}