/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Render.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:28:19 by mthiry            #+#    #+#             */
/*   Updated: 2023/12/04 22:44:58 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "config.hpp"
#include "render/Window.hpp"

class Render {
    public:
        Render();
        ~Render() = default;

        void    run();

    private:
        std::unique_ptr<ScopWindow> scop_window;

        void    colorMainBackground();
};