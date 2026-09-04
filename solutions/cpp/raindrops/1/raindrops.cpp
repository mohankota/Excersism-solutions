#include "raindrops.h"

#define divisible_by_3(x) x % 3 == 0
#define divisible_by_5(x) x % 5 == 0
#define divisible_by_7(x) x % 7 == 0

#define not_divisible(x) !(divisible_by_3(x) \
                        || divisible_by_5(x) \
                        || divisible_by_7(x))

namespace raindrops {

// TODO: add your solution here
    std::string convert(int drop) {
        std::string ret = "";

        if(divisible_by_3(drop)) {
            ret.append("Pling");
        }

        if(divisible_by_5(drop)) {
            ret.append("Plang");
        }

        if(divisible_by_7(drop)) {
            ret.append("Plong");
        }

        if (not_divisible(drop)) {
            ret.append(std::to_string(drop));
        }

        return ret;
    }

}  // namespace raindrops
