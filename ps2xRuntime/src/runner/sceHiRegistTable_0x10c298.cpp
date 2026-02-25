#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Globals from xrefs: sceHiRegistTable writes to these
static constexpr uint32_t kHiTable = 0x0010c2a0u;
static constexpr uint32_t kHiNtable = 0x0010c2acu;

void sceHiRegistTable_0x10c298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiRegistTable_0x10c298");
#endif
    uint32_t table = GPR_U32(ctx, 4);   // a0
    uint32_t ntable = GPR_U32(ctx, 5);  // a1

    FAST_WRITE32(kHiTable, table);
    FAST_WRITE32(kHiNtable, ntable);

    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
