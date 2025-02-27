// Copyright 2023 The LMP Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// https://github.com/linuxkerneltravel/lmp/blob/develop/LICENSE
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// author: jinyufeng2000@gmail.com
//
// demangle and simplify mangled C++ symbols

#ifndef UTRACE_DEMANGLE_H
#define UTRACE_DEMANGLE_H

#include <stddef.h>  // for size_t

// defined in libstdc++
extern char *__cxa_demangle(const char *mangled_name, char *output_buffer, size_t *length,
                            int *status);

/**
 * @brief demangle and simplify the `mangled_name`
 * @return demangled name malloced from heap
 */
char *demangle(const char *mangled_name);

#endif  // UTRACE_DEMANGLE_H
