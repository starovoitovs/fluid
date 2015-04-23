#include "real.h"
#include "config.h"
#include "matrix.h"
#include "differences.h"

REAL dU2dx(Config::geo geoConfig, Config::constants constantsConfig, Matrix U, unsigned i, unsigned j) { return 0; }
REAL dUVdy(Config::geo geoConfig, Config::constants constantsConfig, Matrix U, Matrix V, unsigned i, unsigned j) { return 0; }
REAL d2Udx2(Config::geo geoConfig, Config::constants constantsConfig, Matrix U, unsigned i, unsigned j) { return 0; }
REAL d2Udy2(Config::geo geoConfig, Config::constants constantsConfig, Matrix U, unsigned i, unsigned j) { return 0; }

REAL dUVdx(Config::geo geoConfig, Config::constants constantsConfig, Matrix U, Matrix V, unsigned i, unsigned j) { return 0; }
REAL dV2dy(Config::geo geoConfig, Config::constants constantsConfig, Matrix V, unsigned i, unsigned j) { return 0; }
REAL d2Vdx2(Config::geo geoConfig, Config::constants constantsConfig, Matrix V, unsigned i, unsigned j) { return 0; }
REAL d2Vdy2(Config::geo geoConfig, Config::constants constantsConfig, Matrix V, unsigned i, unsigned j) { return 0; }

REAL dpdx(Config::geo geoConfig, Config::constants constantsConfig, Matrix P, unsigned i, unsigned j) { return 0; }
REAL dpdy(Config::geo geoConfig, Config::constants constantsConfig, Matrix P, unsigned i, unsigned j) { return 0; }
