/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mesh.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:04:29 by mthiry            #+#    #+#             */
/*   Updated: 2024/02/12 19:16:08 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "config.hpp"
#include "classes.hpp"

struct Vertex;

struct Mesh {
	Mesh() noexcept = default;
	Mesh(std::string_view name, const std::vector<Vertex>& vertices, const std::vector<unsigned int>& indices) noexcept
		: name{name}, vertices{vertices}, indices{indices} {}

    inline void					addVertex(const Vertex& vertex) noexcept { this->vertices.emplace_back(vertex); }
    inline void					addIndex(unsigned int index) noexcept { this->indices.push_back(index); }

    std::string					name;
    std::vector<Vertex>			vertices;
	std::vector<unsigned int>	indices;
};