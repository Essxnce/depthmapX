// Copyright (C) 2017 Christian Sailer

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef RADIUSCONVERTER_H
#define RADIUSCONVERTER_H
#include <string>

class IRadiusConverter
{
public:
    virtual double ConvertForVisibility(const std::string &radius) const = 0;
    virtual double ConvertForMetric(const std::string &radius) const = 0;
    virtual ~IRadiusConverter(){}
};


class RadiusConverter : public IRadiusConverter
{
public:
    virtual double ConvertForVisibility(const std::string &radius) const;
    virtual double ConvertForMetric(const std::string &radius) const;
};

#endif // RADIUSCONVERTER_H
