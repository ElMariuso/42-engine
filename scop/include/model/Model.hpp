/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Model.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:13:15 by mthiry            #+#    #+#             */
/*   Updated: 2024/02/12 19:54:44 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "config.hpp"
#include "classes.hpp"

struct Mesh;

class Model
{
    public:
        Model() = default;
        ~Model() = default;
        Model(std::string_view path);

        void                        loadModel();

    private:
        std::string                 path;
        std::vector<Mesh>           meshes;

        void                        parseOBJ(std::ifstream& file);
};