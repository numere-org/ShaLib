/*****************************************************************************
    ShaLib
    Copyright (C) 2022  Erik Haenel et al.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
******************************************************************************/

#ifndef LIBSHA_HPP
#define LIBSHA_HPP

#include <string>
#include <fstream>
#include <boost/nowide/fstream.hpp>


/////////////////////////////////////////////////
/// \brief Calculates the SHA-256 from the
/// contents in the passed std::string.
///
/// \param input std::string
/// \return std::string
///
/////////////////////////////////////////////////
std::string sha256(std::string input);

/////////////////////////////////////////////////
/// \brief Calculates the SHA-256 of the passed
/// file stream.
///
/// \param file std::fstream&
/// \return std::string
///
/////////////////////////////////////////////////
std::string sha256(std::fstream& file);

/////////////////////////////////////////////////
/// \brief Calculates the SHA-256 of the selected
/// section in the passed file stream.
///
/// \param file std::fstream&
/// \param start std::streampos
/// \param length std::streamsize
/// \return std::string
///
/////////////////////////////////////////////////
std::string sha256(std::fstream& file, std::streampos start, std::streamsize length);

/////////////////////////////////////////////////
/// \brief Calculates the SHA-256 of the passed
/// file stream.
///
/// \param file boost::nowide::fstream&
/// \return std::string
///
/////////////////////////////////////////////////
std::string sha256(boost::nowide::fstream& file);

/////////////////////////////////////////////////
/// \brief Calculates the SHA-256 of the selected
/// section in the passed file stream.
///
/// \param file boost::nowide::fstream&
/// \param start std::streampos
/// \param length std::streamsize
/// \return std::string
///
/////////////////////////////////////////////////
std::string sha256(boost::nowide::fstream& file, std::streampos start, std::streamsize length);

#endif // LIBSHA_HPP

