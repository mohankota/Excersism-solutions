// doctor_data.cpp
#include "doctor_data.h"

namespace heaven {

Vessel::Vessel(std::string name, int generation, star_map::System current_system)
    : name{std::move(name)}, generation{generation}, current_system{current_system} {}

// New vessel: next generation, same system.
Vessel Vessel::replicate(std::string new_name) const {
    return Vessel{std::move(new_name), generation + 1, current_system};
}

void Vessel::make_buster() { ++busters; }

bool Vessel::shoot_buster() {
    if (busters > 0) {
        --busters;
        return true;
    }
    return false;
}

// Older = earlier generation (lower number).
std::string get_older_bob(const Vessel& first, const Vessel& second) {
    return first.generation <= second.generation ? first.name : second.name;
}

bool in_the_same_system(const Vessel& first, const Vessel& second) {
    return first.current_system == second.current_system;
}

}  // namespace heaven