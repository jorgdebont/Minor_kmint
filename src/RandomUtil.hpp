//
// Created by jazula on 10/20/16.
//

#ifndef MINOR_CPP1_RANDOMUTIL_HPP
#define MINOR_CPP1_RANDOMUTIL_HPP

#define RANDOM Util::RandomUtil::get_instance()

#include <random>
#include <ctime>

namespace Util
{
    class RandomUtil {

    public:
        RandomUtil();

        static RandomUtil& get_instance();

        int get_weighted_int(std::vector<int> weights);
        int get_weighted_int(std::vector<int> weights, std::vector<int> return_values);
        int get_random_int(int min_range, int max_range);
        bool weighted_coin_toss(int percentage_to_succeed);

        template<class T>
        T& choice(std::vector<T> haystack)
        {
            int random_index = this->get_random_int(0, (int)haystack.size()-1);
            return haystack[random_index];
        }
    private:
        std::default_random_engine _generator;

    };
}


#endif //MINOR_CPP1_RANDOMUTIL_HPP
