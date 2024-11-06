#ifndef CLOX_COMMON_H
#define CLOX_COMMON_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

//> Optimization define-nan-boxing
#define NAN_BOXING
//< Optimization define-nan-boxing
//> Compiling Expressions define-debug-print-code
#define DEBUG_PRINT_CODE
//<Compiling Expressions define-debug-print-code
#define DEBUG_TRACE_EXECUTION

#define DEBUG_STRESS_GC

#define DEBUG_LOG_GC

#define UNIT8_COUNT (UNIT8_MAX + 1)

#endif

#undef DEBUG_PRINT_CODE
#undef DEBUG_TRACE_EXECUTION
#undef DEBUG_STRESS_GC
#undef DEBUG_LOG_GC
