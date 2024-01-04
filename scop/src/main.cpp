/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 21:37:48 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/04 14:06:50 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.hpp"
#include "classes.hpp"

int main()
{
    // Render render;

    // render.run();

    Model   test("models/obj/42.obj");

    std::cout << test.getPath() << std::endl;

    test.loadModel();

    return (0);
}