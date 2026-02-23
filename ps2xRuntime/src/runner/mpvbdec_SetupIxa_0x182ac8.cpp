#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvbdec_SetupIxa
// Address: 0x182ac8 - 0x182b20
void mpvbdec_SetupIxa_0x182ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvbdec_SetupIxa");


    ctx->pc = 0x182ac8u;

    // 0x182ac8: 0x27bdffe0
    ctx->pc = 0x182ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182acc: 0xffb00000
    ctx->pc = 0x182accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182ad0: 0x80802d
    ctx->pc = 0x182ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ad4: 0x26040020
    ctx->pc = 0x182ad4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x182ad8: 0x10800005
    ctx->pc = 0x182AD8u;
    {
        const bool branch_taken_0x182ad8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x182ADCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x182ad8) {
            ctx->pc = 0x182AF0u;
            goto label_182af0;
        }
    }
    ctx->pc = 0x182AE0u;
    // 0x182ae0: 0x3c050024
    ctx->pc = 0x182ae0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x182ae4: 0x24060010
    ctx->pc = 0x182ae4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x182ae8: 0xc0601b2
    ctx->pc = 0x182AE8u;
    SET_GPR_U32(ctx, 31, 0x182AF0u);
    ctx->pc = 0x182AECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5440));
    ctx->pc = 0x1806C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182AF0u; }
        else if (ctx->pc != 0x182AF0u) { ctx->pc = 0x182AF0u; }
    }
    if (ctx->pc != 0x182AF0u) { return; }
    ctx->pc = 0x182AF0u;
label_182af0:
    // 0x182af0: 0x12000008
    ctx->pc = 0x182AF0u;
    {
        const bool branch_taken_0x182af0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x182AF4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x182af0) {
            ctx->pc = 0x182B14u;
            goto label_182b14;
        }
    }
    ctx->pc = 0x182AF8u;
    // 0x182af8: 0x200202d
    ctx->pc = 0x182af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182afc: 0x3c05002c
    ctx->pc = 0x182afcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x182b00: 0x24a5c7c8
    ctx->pc = 0x182b00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294952904));
    // 0x182b04: 0xdfb00000
    ctx->pc = 0x182b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182b08: 0x24060008
    ctx->pc = 0x182b08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x182b0c: 0x80601b2
    ctx->pc = 0x182B0Cu;
    ctx->pc = 0x182B10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1806C8u;
    UTY_MemcpyDword_0x1806c8(rdram, ctx, runtime); return;
    ctx->pc = 0x182B14u;
label_182b14:
    // 0x182b14: 0xdfb00000
    ctx->pc = 0x182b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182b18: 0x3e00008
    ctx->pc = 0x182B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182B1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182AF0u: goto label_182af0;
            case 0x182B14u: goto label_182b14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182B20u;
}
