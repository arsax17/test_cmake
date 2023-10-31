#include "state_estimation/MSF/sensor.hpp"
#include "state_estimation/MSF/MSF_core/core_file.hpp"
#include "state_estimation/MSF/MSF_update/update_file.hpp"
#include <iostream>

void msf_function() {
    std::cout << "Inside MSF function.\n";
    core_function();  // Demonstrate integration in MSF
    updates_function(); // Demonstrate integration in MSF
}