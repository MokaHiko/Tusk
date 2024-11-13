/**
 * @file defines.h
 * @brief This file contains time utility functions for the Tusk library.
 *
 * @author Moka
 * @date 2024-11-03
 */

#ifndef TIME_H_
#define TIME_H_

#include "tsk.h"

namespace tsk {

/*@brief Retrieves the current high-performance counter value.*/
TUSK_API int64_t get_hp_counter();

} // namespace tsk

#endif