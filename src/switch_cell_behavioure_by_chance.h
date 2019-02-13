// -----------------------------------------------------------------------------
//
// Copyright (C) The BioDynaMo Project.
// All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
//
// See the LICENSE file distributed with this work for details.
// See the NOTICE file distributed with this work for additional information
// regarding copyright ownership.
//
// -----------------------------------------------------------------------------
#ifndef SWITCH_CELL_BEHAVIOURE_BY_CHANCE_H_
#define SWITCH_CELL_BEHAVIOURE_BY_CHANCE_H_

#include "biodynamo.h"

namespace bdm {

// Define compile time parameter
BDM_CTPARAM() { BDM_CTPARAM_HEADER(); };

inline int Simulate(int argc, const char** argv) {
  Simulation<> simulation(argc, argv);

  // Define initial model - in this example: single cell at origin
  auto* rm = simulation.GetResourceManager();
  auto&& cell = rm->New<Cell>(30);

  // Run simulation for one timestep
  simulation.GetScheduler()->Simulate(1);

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace bdm

#endif  // SWITCH_CELL_BEHAVIOURE_BY_CHANCE_H_
