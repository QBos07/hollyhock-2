#include <stddef.h>
#include <sdk/os/mem.hpp>

__attribute__((weak)) void *operator new(size_t size) {
    return malloc(size);
}

__attribute__((weak)) void *operator new[](size_t size) {
    return malloc(size);
}

__attribute__((weak)) void operator delete(void *p) {
    free(p);
}

__attribute__((weak)) void operator delete(void *p, size_t size [[maybe_unused]]) {
    free(p);
}

__attribute__((weak)) void operator delete[](void *p) {
    free(p);
}

__attribute__((weak)) void operator delete[](void *p, size_t size [[maybe_unused]]) {
    free(p);
}
