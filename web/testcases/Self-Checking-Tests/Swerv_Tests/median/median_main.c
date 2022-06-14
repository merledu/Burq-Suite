// See LICENSE for license details.

//**************************************************************************
// Median filter bencmark
//--------------------------------------------------------------------------
//
// This benchmark performs a 1D three element median filter. The
// input data (and reference data) should be generated using the
// median_gendata.pl perl script and dumped to a file named
// dataset1.h.

#include "util.h"

#include "median.h"

//--------------------------------------------------------------------------
// Input/Reference Data

#include "dataset1.h"
#include <stdint.h>
//volatile uint32_t tohost = 0;

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
  int results_data[DATA_SIZE];

#if PREALLOCATE
  // If needed we preallocate everything in the caches
  median( DATA_SIZE, input_data, results_data );
#endif

  // Do the filter
  //setStats(1);
  median( DATA_SIZE, input_data, results_data );
  //setStats(0);

  // Check the results
  return verify( DATA_SIZE, results_data, verify_data );
}
/*void _start()
{
  main(1,' ');
  tohost = 1;
}*/
