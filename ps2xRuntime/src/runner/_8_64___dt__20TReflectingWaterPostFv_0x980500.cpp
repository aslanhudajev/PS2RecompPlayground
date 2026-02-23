#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void _8_64___dt__20TReflectingWaterPostFv_0x980500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_8_64___dt__20TReflectingWaterPostFv");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("@8@64@__dt__20TReflectingWaterPostFv", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
