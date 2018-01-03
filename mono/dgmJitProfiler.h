#ifndef DGM_JIT_PROFILER_H
#define DGM_JIT_PROFILER_H

#ifdef __cplusplus
extern "C" {
#endif

__attribute__ ((visibility ("default"))) void jit_profiler_enable(int bEnable, char* str);

#ifdef __cplusplus
};
#endif

#endif

