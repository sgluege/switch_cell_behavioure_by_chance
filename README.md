# switch_cell_behaviour_by_chance

Switch behaviour of a cell based on a random number. Here a single biomodule (`GeneralModule`) is used, that runs the simulation 
step based on the `cell_type`, either `type1behaviour()` or `type2behaviour()` is called in the modules' `Run()`routine.

Simulation starts with `cell_type=1` and is switched to `cell_type=2` by chance whenever the cell devides.
              