# switch_cell_behaviour_by_chance

Switch behaviour of a cell based on a random number. Here a single biomodule (`GeneralModule`) is used, that runs the simulation 
step based on the `cell_type`, either `type1behaviour()` or `type2behaviour()` is called in the modules' `Run()`routine.

Simulation starts with `cell_type=1` and is switched to `cell_type=2` by chance (and reverse).

The question is, how to properly use a random number generator inside of the `Run()` function of the BiologyModule (`GeneralModule`).

Further, how to actually get a random number... i.e.:
```
// switch behaviour based on a random number
double myRandNumber = getSomeRandomNumer(); // get some random number from an uniform distribution in [0,1]
```
              