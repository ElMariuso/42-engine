/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Window.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 20:49:02 by mthiry            #+#    #+#             */
/*   Updated: 2023/12/04 22:28:41 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "config.hpp"

class ScopWindow {
    public:
        ScopWindow(const int& width, const int& height, const std::string& title);
        ~ScopWindow();
        
        static void errorCallback(int error, const char* description);
        bool        shouldClose() const;
        void        swapBuffers();
        void        pollEvents();
        
    private:
        GLFWwindow  *window;
        int         width;
        int         height;
        int         screen_width;
        int         screen_height;
        std::string title;

        void        initialization();
        void        shutdown();
};