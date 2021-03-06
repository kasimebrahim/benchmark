/*
 * benchmark.cc
 *
 * Copyright (C) 2018 OpenCog Foundation
 * All Rights Reserved
 *
 * Created by Vitaly Bogdanov <vsbogd@gmail.com> May 29, 2018
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <benchmark/benchmark.h>
#include <sstream>

#include <opencog/util/Logger.h>

using namespace opencog;

std::string get_unique_name(const std::string& prefix, size_t& seed)
{
	std::ostringstream oss;
	oss << prefix << "-" << ++seed;
	return oss.str();
}

int main(int argc, char** argv)
{
	logger().set_level(Logger::FINE);
	benchmark::Initialize(&argc, argv);
	benchmark::RunSpecifiedBenchmarks();
}
