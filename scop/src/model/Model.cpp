/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Model.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:25:48 by mthiry            #+#    #+#             */
/*   Updated: 2024/01/22 00:31:37 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "model/Model.hpp"

Model::Model(std::string_view path): path(path) {}

void Model::loadModel()
{
    std::ifstream   file(this->path);
    if (!file)
        throw std::runtime_error("Unable to open file");
    parseOBJ(file);
}

void Model::parseOBJ(std::ifstream& file)
{
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
    //     else if (lineType == "f")
    //     {
    //         std::vector<Vertex> faceVertices;
    //         std::string         vertexSpec;
        
    //         while (lineStream >> vertexSpec)
    //         {
    //             std::istringstream                  vertexStream(vertexSpec);
    //             std::vector<glm::vec3>::size_type   posIndex;
    //             std::vector<glm::vec2>::size_type   texIndex = 0;
    //             std::vector<glm::vec3>::size_type   normIndex = 0;
                
    //             char slash;
    //             vertexStream >> posIndex >> std::noskipws >> slash;
                
    //             if (vertexStream.peek() != '/') {
    //                 vertexStream >> texIndex;
    //             }
    //             vertexStream >> slash;
    //             if (vertexStream.peek() != '/') {
    //                 vertexStream >> normIndex;
    //             }

    //             // std::cout << "POS: " << posIndex << std::endl;
    //             // std::cout << "TEX: " << texIndex << std::endl;
    //             // std::cout << "NORM: " << normIndex << std::endl << std::endl;

    //             Vertex  vertex;

    //             if (posIndex > 0 && posIndex <= positions.size())
    //                 vertex.position = positions[posIndex - 1];
    //             if (texIndex > 0 && texIndex <= texCoords.size())
    //                 vertex.texcoord = texCoords[texIndex - 1];
    //             if (normIndex > 0 && normIndex <= normals.size())
    //                 vertex.normal = normals[normIndex - 1];
                
    //             faceVertices.push_back(vertex);
    //         }
    //         for (size_t i = 1; i + 1 < faceVertices.size(); ++i) {
    //             this->vertices.push_back(faceVertices[0]);
    //             this->vertices.push_back(faceVertices[i]);
    //             this->vertices.push_back(faceVertices[i + 1]);
    //         }

    //         // for (const auto& vertex : this->vertices) {
    //         //     std::cout << "Position: "
    //         //         << vertex.position.x << ", "
    //         //         << vertex.position.y << ", "
    //         //         << vertex.position.z << " | ";

    //         //     std::cout << "Texcoord: "
    //         //         << vertex.texcoord.x << ", "
    //         //         << vertex.texcoord.y << " | ";

    //         //     std::cout << "Normal: "
    //         //         << vertex.normal.x << ", "
    //         //         << vertex.normal.y << ", "
    //         //         << vertex.normal.z << std::endl;
    //         // }

    //     }
    }
}