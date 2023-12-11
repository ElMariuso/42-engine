/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vertex.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:48:37 by mthiry            #+#    #+#             */
/*   Updated: 2023/12/11 19:59:11 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "config.hpp"

struct Vertex
{
    glm::vec3   position;
    glm::vec3   color;
    glm::vec2   texcoord;
    glm::vec3   normal;
};