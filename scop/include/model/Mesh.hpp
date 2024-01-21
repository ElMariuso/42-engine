/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mesh.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:04:29 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/21 23:32:04 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "config.hpp"
#include "classes.hpp"

struct Vertex;

class Mesh
{
    public:
        Mesh() = default;
        ~Mesh() = default;

        /* Getters */
        inline const std::string&               getName() const & noexcept { return (this->name); }
        inline std::string                      getName() && noexcept { return (std::move(this->name)); }
        inline const std::vector<Vertex>&       getVertices() const & noexcept { return (this->vertices); }
        inline std::vector<Vertex>              getVertices() && noexcept { return (std::move(this->vertices)); }
        inline const std::vector<unsigned int>& getIndices() const & noexcept { return (this->indices); }
        inline std::vector<unsigned int>        getIndices() && noexcept { return (std::move(this->indices)); }

        /* Setters */
        inline void                             setName(std::string_view name) noexcept { this->name = name; }
        inline void                             setVertex(const Vertex& vertex) noexcept { this->vertices.emplace_back(vertex); }
        inline void                             setIndex(unsigned int index) noexcept { this->indices.emplace_back(index); }

    private:
        std::string                             name;
        std::vector<Vertex>                     vertices;
        std::vector<unsigned int>               indices;
};