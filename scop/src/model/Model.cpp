/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Model.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:25:48 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/04 14:22:07 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "model/Model.hpp"

Model::Model(const std::string  &path)
{
    this->path = path;
}
Model::~Model()
{

}

void Model::loadModel()
{
    try
    {
        parseOBJ();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Model::parseOBJ()
{
    std::ifstream   file(this->path);
    if (!file)
        throw std::runtime_error("Unable to open file");

    std::string     line;
    while (std::getline(file, line))
    {
        
    }
}