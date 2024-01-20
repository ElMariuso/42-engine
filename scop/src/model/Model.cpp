/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Model.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:25:48 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/20 17:36:40 by mthiry           ###   ########.fr       */
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

    std::vector<glm::vec3>  positions;
    std::vector<glm::vec2>  texCoords;
    std::vector<glm::vec3>  normals;
    std::string             line;
    while (std::getline(file, line))
    {
        std::istringstream  lineStream(line);
        std::string         lineType;
        lineStream >> lineType;

        if (lineType == "v")
        {
            glm::vec3   position;
            lineStream >> position.x >> position.y >> position.z;
            positions.push_back(position);
        }
        else if (lineType == "vt")
        {
            glm::vec2   texCoord;
            lineStream >> texCoord.x >> texCoord.y;
            texCoords.push_back(texCoord);
        }
        else if (lineType == "vn")
        {
            glm::vec3   normal;
            lineStream >> normal.x >> normal.y >> normal.z;
            normals.push_back(normal);
        }
        else if (lineType == "f")
        {
            std::vector<Vertex> faceVertices;
            std::string vertexSpec;

            while (lineStream >> vertexSpec)
            {
                std::istringstream  vertexStream(vertexSpec);
                Vertex              vertex;

                std::cout << vertexSpec << std::endl;
            }
            break ;
        }
    }
}