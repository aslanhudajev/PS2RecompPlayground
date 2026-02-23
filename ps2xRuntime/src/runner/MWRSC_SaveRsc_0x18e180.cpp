#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWRSC_SaveRsc
// Address: 0x18e180 - 0x18e1f8
void MWRSC_SaveRsc_0x18e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWRSC_SaveRsc");


    ctx->pc = 0x18e180u;

    // 0x18e180: 0x27bdffd0
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18e184: 0xffb10010
    ctx->pc = 0x18e184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18e188: 0x3c110024
    ctx->pc = 0x18e188u;
    SET_GPR_U32(ctx, 17, ((uint32_t)36 << 16));
    // 0x18e18c: 0xffb00000
    ctx->pc = 0x18e18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e190: 0x8e223b70
    ctx->pc = 0x18e190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 15216)));
    // 0x18e194: 0x24100001
    ctx->pc = 0x18e194u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e198: 0x10500012
    ctx->pc = 0x18E198u;
    {
        const bool branch_taken_0x18e198 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        ctx->pc = 0x18E19Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x18e198) {
            ctx->pc = 0x18E1E4u;
            goto label_18e1e4;
        }
    }
    ctx->pc = 0x18E1A0u;
    // 0x18e1a0: 0xc06389a
    ctx->pc = 0x18E1A0u;
    SET_GPR_U32(ctx, 31, 0x18E1A8u);
    ctx->pc = 0x18E268u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwrsc_WaitSprDmaEnd_0x18e268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1A8u; }
        else if (ctx->pc != 0x18E1A8u) { ctx->pc = 0x18E1A8u; }
    }
    if (ctx->pc != 0x18E1A8u) { return; }
    ctx->pc = 0x18E1A8u;
    // 0x18e1a8: 0x3c06002e
    ctx->pc = 0x18e1a8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)46 << 16));
    // 0x18e1ac: 0x202d
    ctx->pc = 0x18e1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e1b0: 0x24c64400
    ctx->pc = 0x18e1b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 17408));
    // 0x18e1b4: 0xc0638a2
    ctx->pc = 0x18E1B4u;
    SET_GPR_U32(ctx, 31, 0x18E1BCu);
    ctx->pc = 0x18E1B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x18E288u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSPR_SaveSprMem_0x18e288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1BCu; }
        else if (ctx->pc != 0x18E1BCu) { ctx->pc = 0x18E1BCu; }
    }
    if (ctx->pc != 0x18E1BCu) { return; }
    ctx->pc = 0x18E1BCu;
    // 0x18e1bc: 0xc0638d6
    ctx->pc = 0x18E1BCu;
    SET_GPR_U32(ctx, 31, 0x18E1C4u);
    ctx->pc = 0x18E1C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x18E358u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWDMA_WaitEnd_0x18e358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1C4u; }
        else if (ctx->pc != 0x18E1C4u) { ctx->pc = 0x18E1C4u; }
    }
    if (ctx->pc != 0x18E1C4u) { return; }
    ctx->pc = 0x18E1C4u;
    // 0x18e1c4: 0x3c04002f
    ctx->pc = 0x18e1c4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)47 << 16));
    // 0x18e1c8: 0x24054000
    ctx->pc = 0x18e1c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x18e1cc: 0x24848400
    ctx->pc = 0x18e1ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294935552));
    // 0x18e1d0: 0xc0638bc
    ctx->pc = 0x18E1D0u;
    SET_GPR_U32(ctx, 31, 0x18E1D8u);
    ctx->pc = 0x18E1D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E2F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSPR_RestoreSprMem_0x18e2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1D8u; }
        else if (ctx->pc != 0x18E1D8u) { ctx->pc = 0x18E1D8u; }
    }
    if (ctx->pc != 0x18E1D8u) { return; }
    ctx->pc = 0x18E1D8u;
    // 0x18e1d8: 0xc0638d6
    ctx->pc = 0x18E1D8u;
    SET_GPR_U32(ctx, 31, 0x18E1E0u);
    ctx->pc = 0x18E1DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x18E358u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWDMA_WaitEnd_0x18e358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E1E0u; }
        else if (ctx->pc != 0x18E1E0u) { ctx->pc = 0x18E1E0u; }
    }
    if (ctx->pc != 0x18E1E0u) { return; }
    ctx->pc = 0x18E1E0u;
    // 0x18e1e0: 0xae303b70
    ctx->pc = 0x18e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15216), GPR_U32(ctx, 16));
label_18e1e4:
    // 0x18e1e4: 0xdfbf0020
    ctx->pc = 0x18e1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e1e8: 0xdfb10010
    ctx->pc = 0x18e1e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e1ec: 0xdfb00000
    ctx->pc = 0x18e1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e1f0: 0x3e00008
    ctx->pc = 0x18E1F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E1F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E1E4u: goto label_18e1e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E1F8u;
}
