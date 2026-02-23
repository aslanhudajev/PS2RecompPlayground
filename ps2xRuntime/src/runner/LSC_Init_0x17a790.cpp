#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_Init
// Address: 0x17a790 - 0x17a7f8
void LSC_Init_0x17a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_Init");
    ctx->pc = 0x17a790u;

    // 0x17a790: 0x27bdffe0
    ctx->pc = 0x17a790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a794: 0x8f8282b0
    ctx->pc = 0x17a794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935216)));
    // 0x17a798: 0xffbf0010
    ctx->pc = 0x17a798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a79c: 0xc05e9b4
    ctx->pc = 0x17A79Cu;
    SET_GPR_U32(ctx, 31, 0x17A7A4u);
    ctx->pc = 0x17A7A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_LockCrs_0x17a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7A4u; }
        else if (ctx->pc != 0x17A7A4u) { ctx->pc = 0x17A7A4u; }
    }
    if (ctx->pc != 0x17A7A4u) { return; }
    ctx->pc = 0x17A7A4u;
    // 0x17a7a4: 0x8f8282b4
    ctx->pc = 0x17a7a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x17a7a8: 0x1440000d
    ctx->pc = 0x17A7A8u;
    {
        const bool branch_taken_0x17a7a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A7ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x17a7a8) {
            ctx->pc = 0x17A7E0u;
            goto label_17a7e0;
        }
    }
    ctx->pc = 0x17A7B0u;
    // 0x17a7b0: 0x3c040024
    ctx->pc = 0x17a7b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x17a7b4: 0x282d
    ctx->pc = 0x17a7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7b8: 0x2484a680
    ctx->pc = 0x17a7b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944384));
    // 0x17a7bc: 0xc050cfe
    ctx->pc = 0x17A7BCu;
    SET_GPR_U32(ctx, 31, 0x17A7C4u);
    ctx->pc = 0x17A7C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8640));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7C4u; }
        else if (ctx->pc != 0x17A7C4u) { ctx->pc = 0x17A7C4u; }
    }
    if (ctx->pc != 0x17A7C4u) { return; }
    ctx->pc = 0x17A7C4u;
    // 0x17a7c4: 0xc05e9e0
    ctx->pc = 0x17A7C4u;
    SET_GPR_U32(ctx, 31, 0x17A7CCu);
    ctx->pc = 0x17A780u;
    {
        const uint32_t __entryPc = ctx->pc;
        lsc_EntrySvrInt_0x17a780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7CCu; }
        else if (ctx->pc != 0x17A7CCu) { ctx->pc = 0x17A7CCu; }
    }
    if (ctx->pc != 0x17A7CCu) { return; }
    ctx->pc = 0x17A7CCu;
    // 0x17a7cc: 0x202d
    ctx->pc = 0x17a7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7d0: 0xc05e9be
    ctx->pc = 0x17A7D0u;
    SET_GPR_U32(ctx, 31, 0x17A7D8u);
    ctx->pc = 0x17A7D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_EntryErrFunc_0x17a6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7D8u; }
        else if (ctx->pc != 0x17A7D8u) { ctx->pc = 0x17A7D8u; }
    }
    if (ctx->pc != 0x17A7D8u) { return; }
    ctx->pc = 0x17A7D8u;
    // 0x17a7d8: 0x8f8282b4
    ctx->pc = 0x17a7d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935220)));
    // 0x17a7dc: 0x24420001
    ctx->pc = 0x17a7dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_17a7e0:
    // 0x17a7e0: 0x3a0202d
    ctx->pc = 0x17a7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a7e4: 0xc05e9bc
    ctx->pc = 0x17A7E4u;
    SET_GPR_U32(ctx, 31, 0x17A7ECu);
    ctx->pc = 0x17A7E8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935220), GPR_U32(ctx, 2));
    ctx->pc = 0x17A6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_UnlockCrs_0x17a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A7ECu; }
        else if (ctx->pc != 0x17A7ECu) { ctx->pc = 0x17A7ECu; }
    }
    if (ctx->pc != 0x17A7ECu) { return; }
    ctx->pc = 0x17A7ECu;
    // 0x17a7ec: 0xdfbf0010
    ctx->pc = 0x17a7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a7f0: 0x3e00008
    ctx->pc = 0x17A7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A7F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A7E0u: goto label_17a7e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A7F8u;
}
