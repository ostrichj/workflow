#ifndef _BENCHMARK_CONTENT_H_
#define _BENCHMARK_CONTENT_H_

#include <random>
#include <string>

static inline std::string make_content()
{
	std::mt19937_64 gen{42};
	std::uniform_int_distribution<int> dis{32, 126};
	int i, length;

	std::string s;
	s.reserve(length);
	for (i = 0; i < length; i++)
	{
		s.push_back(static_cast<char>(dis(gen)));
	}
	return s;
}

#endif //_BENCHMARK_CONTENT_H_
