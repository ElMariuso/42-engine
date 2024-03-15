/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Model.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:25:48 by mthiry            #+#    #+#             */
/*   Updated: 2024/03/15 19:46:35 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "model/Model.hpp"

Model::Model(std::string_view path): path(path) {}

void Model::loadModel()
{
    std::ifstream	file(this->path);
    if (!file)
        throw std::runtime_error("Unable to open file");
    parseOBJ(file);
}

void Model::parseOBJ(std::ifstream& file)
{
    std::string line;

    while (std::getline(file, line))
    {
        std::istringstream  lineStream(line);
        std::string         lineType;
        lineStream >> lineType;

        if (lineType == "o")
            this->handleOLine(lineStream);
    }
}

void Model::handleOLine(std::istringstream &stream)
{
    std::string name;
    
    if (stream >> name)
    {
        std::cout << name << std::endl;
    }
}