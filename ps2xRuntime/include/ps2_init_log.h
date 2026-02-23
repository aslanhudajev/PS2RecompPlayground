#ifndef PS2_INIT_LOG_H
#define PS2_INIT_LOG_H

#include <fstream>
#include <iostream>
#include "ps2_runtime_macros.h"  // R5900Context, GPR_U32

// Entry/exit logging for mwPlyInitSfdFx call tree debugging.
// Change to #if 0 to disable when done debugging.
#if 1

namespace ps2_init_log {
// File overwritten every run (truncated on first open). No data persisted between runs.
inline std::ostream& log_stream() {
    static std::ofstream f("ps2_init_log.txt", std::ios::out);
    return f.is_open() ? f : std::cerr;
}
inline int& depth() {
    static thread_local int d = 0;
    return d;
}
inline void log_entry(const char* name) {
    log_stream() << std::string(depth() * 2, ' ') << ">> " << name << " enter\n";
    log_stream().flush();
    depth()++;
}
inline void log_exit(const char* name) {
    depth()--;
    log_stream() << std::string(depth() * 2, ' ') << "<< " << name << " exit\n";
    log_stream().flush();
}
// Log key ctx registers (pc, gp/r28, r2) for gp-corruption debugging.
// Call log_ctx(ctx, "enter") / log_ctx(ctx, "exit") or use PS2_INIT_LOG_ENTRY_CTX.
inline void log_ctx(R5900Context* ctx, const char* when) {
    if (!ctx) return;
    log_stream() << std::string(depth() * 2, ' ') << "   [ctx " << when << "] pc=0x" << std::hex << ctx->pc
                 << " gp/r28=0x" << GPR_U32(ctx, 28) << " r2=0x" << GPR_U32(ctx, 2) << std::dec << "\n";
    log_stream().flush();
}
// Log before a WRITE32 for debugging unaligned/bad-address faults
inline void log_write32(uint32_t addr, uint32_t val, const char* label = "") {
    log_stream() << std::string(depth() * 2, ' ') << "   [WRITE32" << (label[0] ? " " : "") << label << "] addr=0x"
                 << std::hex << addr << " val=0x" << val << std::dec << "\n";
    log_stream().flush();
}
}

#define PS2_INIT_LOG_ENTRY(name) \
    ps2_init_log::log_entry(name); \
    struct _ps2_log_guard_ { const char* _n; _ps2_log_guard_(const char* n) : _n(n) {} ~_ps2_log_guard_() { ps2_init_log::log_exit(_n); } } _ps2_log_guard_(name)

// Same but logs ctx (pc, gp, r2) at entry and exit
#define PS2_INIT_LOG_ENTRY_CTX(name, ctx) \
    ps2_init_log::log_entry(name); \
    (void)((ctx) && (ps2_init_log::log_ctx(ctx, "enter"), 0)); \
    struct _ps2_log_guard_ctx_ { const char* _n; R5900Context* _c; _ps2_log_guard_ctx_(const char* n, R5900Context* c) : _n(n), _c(c) {} ~_ps2_log_guard_ctx_() { if (_c) ps2_init_log::log_ctx(_c, "exit"); ps2_init_log::log_exit(_n); } } _ps2_log_guard_ctx_(name, ctx)

#else

namespace ps2_init_log {
inline void log_ctx(void*, const char*) {}
inline void log_write32(uint32_t, uint32_t, const char*) {}
}
#define PS2_INIT_LOG_ENTRY(name) ((void)0)
#define PS2_INIT_LOG_ENTRY_CTX(name, ctx) ((void)0)

#endif

#endif
