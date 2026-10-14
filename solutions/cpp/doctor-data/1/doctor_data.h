// doctor_data.h
#pragma once
#include <string>

namespace star_map {
enum class System {
    BetaHydri,
    EpsilonEridani,
    AlphaCentauri,
    DeltaEridani,
    Omicron2Eridani,
    Sol
};
}  // namespace star_map

namespace heaven {

class Vessel {
public:
    Vessel(std::string name, int generation,
           star_map::System current_system = star_map::System::Sol);

    Vessel replicate(std::string new_name) const;
    void make_buster();
    bool shoot_buster();

    std::string name;
    int generation;
    star_map::System current_system;
    int busters{0};
};

std::string get_older_bob(const Vessel& first, const Vessel& second);
bool in_the_same_system(const Vessel& first, const Vessel& second);

}  // namespace heaven