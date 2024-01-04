/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Model.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:13:15 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/04 14:23:48 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "config.hpp"
#include "classes.hpp"

struct Vertex;

class Model
{
    public:
        Model(const std::string&    path);
        ~Model();

        void                        loadModel();

        inline const std::string&   getPath() const & { return (this->path); }
        inline std::string          getPath() && { return (std::move(this->path)); }

    private:
        std::string                 path;
        std::vector<Vertex>         vertex;
        std::vector<unsigned int>   indices;

        void                        parseOBJ();
};