/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 21:37:48 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/21 15:06:06 by mthiry           ###   ########.fr       */
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