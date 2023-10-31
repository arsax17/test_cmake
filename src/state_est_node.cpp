#include "state_estimation/state_est_node.hpp"
#include "state_estimation/MSF/sensor.hpp"
#include "state_estimation/common/math.hpp"
#include "state_estimation/MSF/MSF_core/core_file.hpp"
#include "state_estimation/MSF/MSF_update/update_file.hpp"

#include <iostream>

void run_my_node() {
    std::cout << "Running my_node...\n";
    msf_function();
    common_function();
    core_function();
    updates_function();
}

