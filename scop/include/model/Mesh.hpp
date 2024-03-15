/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mesh.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:04:29 by mthiry            #+#    #+#             */
/*   Updated: 2024/03/11 15:45:54 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "config.hpp"
#include "classes.hpp"

struct Vertex;

/**
 * @struct Mesh
 * @brief Represents a 3D mesh composed of vertices and indices for rendering.
 *
 * This structure is designed to store the geometric data of a 3D mesh, 
 * including the positions of vertices and the indices defining the rendering order of triangles.
 */
struct Mesh {
	/**
     * @brief Default constructor.
     *
     * Initializes a new empty mesh. The vectors for vertices and indices are initially empty.
     */
	Mesh() noexcept = default;

	/**
     * @brief Parameterized constructor to initialize a mesh with a name, vertices, and indices.
     * @param name The name of the mesh.
     * @param vertices A vector containing the mesh's vertices.
     * @param indices A vector containing the indices of vertices for mesh rendering.
     */
	Mesh(std::string_view name, const std::vector<Vertex>& vertices, const std::vector<unsigned int>& indices) noexcept
		: name{name}, vertices{vertices}, indices{indices} {}

	/**
     * @brief Adds a vertex to the mesh.
     * @param vertex The vertex to be added to the mesh.
     *
     * This method appends the specified vertex to the end of the vertices vector.
     */
    inline void                    addVertex(const Vertex& vertex) noexcept { this->vertices.emplace_back(vertex); }

	/**
     * @brief Adds an index to the mesh.
     * @param index The index to be added to the mesh.
     *
     * This method appends the specified index to the end of the indices vector.
     * Indices are used to define the rendering order of the triangles formed by the vertices.
     */
     inline void                   addIndex(unsigned int index) noexcept { this->indices.push_back(index); }

     std::string                   name;
     std::vector<Vertex>           vertices;
     std::vector<unsigned int>     indices;
};