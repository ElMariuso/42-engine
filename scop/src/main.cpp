/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 21:37:48 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/04 14:39:35 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "config.hpp"
#include "classes.hpp"

int main()
{
    // Render render;

    // render.run();

    Model   test("models/obj/42.obj");

    test.loadModel();
    return (0);
}