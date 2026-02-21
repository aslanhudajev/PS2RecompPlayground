#ifndef PS2_SYSCALLS_H
#define PS2_SYSCALLS_H

#include "ps2_runtime.h"
#include "ps2_call_list.h"
#include <mutex>
#include <atomic>
#include <string>

// Implemented in ps2_syscalls.cpp; used by runners that need to resolve PS2 paths (e.g. sceeLoadFile).
std::string translatePs2Path(const char* ps2Path);

// Number of active host threads spawned for PS2 thread emulation
extern std::atomic<int> g_activeThreads;

static std::mutex g_sys_fd_mutex;

namespace ps2_syscalls
{
#define PS2_DECLARE_SYSCALL(name) void name(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    PS2_SYSCALL_LIST(PS2_DECLARE_SYSCALL)
#undef PS2_DECLARE_SYSCALL

    bool dispatchNumericSyscall(uint32_t syscallNumber, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime);
    void TODO(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime, uint32_t encodedSyscallId);
    void notifyRuntimeStop();
}

#endif // PS2_SYSCALLS_H
