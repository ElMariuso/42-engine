/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Model.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthiry <mthiry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 22:13:15 by mthiry            #+#    #+#             */
/*   Updated: 2023/12/11 23:18:10 by mthiry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "config.hpp"

class Model
{
    public:
        Model(const std::string&    path);
        ~Model();

        inline const std::string&   getPath() const & { return (this->path); }
        inline std::string          getPath() && { return (std::move(this->path)); }

    private:
        std::string path;
};