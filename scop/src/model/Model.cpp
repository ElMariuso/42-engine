/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Model.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:25:48 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/04 14:44:34 by mthiry           ###   ########.fr       */
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
        std::istringstream  lineStream(line);
        std::string         lineType;
        lineStream >> lineType;

        if (lineType == "v")
        {
            glm::vec3   vertex;

            std::cout  << "Line: "  << line << std::endl;

            lineStream >> vertex.x >> vertex.y >> vertex.z;

            std::cout << vertex.x << std::endl;
            std::cout << vertex.y << std::endl;
            std::cout << vertex.z << std::endl;

            break ;
        }
    }
}