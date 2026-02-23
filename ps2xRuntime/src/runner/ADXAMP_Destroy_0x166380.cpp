#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_Destroy
// Address: 0x166380 - 0x1663cc
void ADXAMP_Destroy_0x166380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_Destroy");


    ctx->pc = 0x166380u;

    // 0x166380: 0x27bdffe0
    ctx->pc = 0x166380u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166384: 0xffb00000
    ctx->pc = 0x166384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166388: 0x80802d
    ctx->pc = 0x166388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16638c: 0x1200000b
    ctx->pc = 0x16638Cu;
    {
        const bool branch_taken_0x16638c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x166390u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x16638c) {
            ctx->pc = 0x1663BCu;
            goto label_1663bc;
        }
    }
    ctx->pc = 0x166394u;
    // 0x166394: 0xc05a4e4
    ctx->pc = 0x166394u;
    SET_GPR_U32(ctx, 31, 0x16639Cu);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16639Cu; }
        else if (ctx->pc != 0x16639Cu) { ctx->pc = 0x16639Cu; }
    }
    if (ctx->pc != 0x16639Cu) { return; }
    ctx->pc = 0x16639Cu;
    // 0x16639c: 0x200202d
    ctx->pc = 0x16639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663a0: 0x282d
    ctx->pc = 0x1663a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1663a4: 0xc050cfe
    ctx->pc = 0x1663A4u;
    SET_GPR_U32(ctx, 31, 0x1663ACu);
    ctx->pc = 0x1663A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1663ACu; }
        else if (ctx->pc != 0x1663ACu) { ctx->pc = 0x1663ACu; }
    }
    if (ctx->pc != 0x1663ACu) { return; }
    ctx->pc = 0x1663ACu;
    // 0x1663ac: 0xdfbf0010
    ctx->pc = 0x1663acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1663b0: 0xdfb00000
    ctx->pc = 0x1663b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1663b4: 0x805a4f0
    ctx->pc = 0x1663B4u;
    ctx->pc = 0x1663B8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1663BCu;
label_1663bc:
    // 0x1663bc: 0xdfbf0010
    ctx->pc = 0x1663bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1663c0: 0xdfb00000
    ctx->pc = 0x1663c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1663c4: 0x3e00008
    ctx->pc = 0x1663C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1663C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1663BCu: goto label_1663bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1663CCu;
}
