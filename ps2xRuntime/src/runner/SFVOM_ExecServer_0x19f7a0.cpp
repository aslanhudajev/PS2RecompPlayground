#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFVOM_ExecServer
// Address: 0x19f7a0 - 0x19f7f8
void SFVOM_ExecServer_0x19f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFVOM_ExecServer");


    ctx->pc = 0x19f7a0u;

    // 0x19f7a0: 0x27bdffd0
    ctx->pc = 0x19f7a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f7a4: 0x24050005
    ctx->pc = 0x19f7a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x19f7a8: 0xffb10010
    ctx->pc = 0x19f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19f7ac: 0x80882d
    ctx->pc = 0x19f7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f7b0: 0xffbf0020
    ctx->pc = 0x19f7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f7b4: 0xc0674c2
    ctx->pc = 0x19F7B4u;
    SET_GPR_U32(ctx, 31, 0x19F7BCu);
    ctx->pc = 0x19F7B8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7BCu; }
        else if (ctx->pc != 0x19F7BCu) { ctx->pc = 0x19F7BCu; }
    }
    if (ctx->pc != 0x19F7BCu) { return; }
    ctx->pc = 0x19F7BCu;
    // 0x19f7bc: 0x10400009
    ctx->pc = 0x19F7BCu;
    {
        const bool branch_taken_0x19f7bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19F7C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19f7bc) {
            ctx->pc = 0x19F7E4u;
            goto label_19f7e4;
        }
    }
    ctx->pc = 0x19F7C4u;
    // 0x19f7c4: 0xc067dfe
    ctx->pc = 0x19F7C4u;
    SET_GPR_U32(ctx, 31, 0x19F7CCu);
    ctx->pc = 0x19F7C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfvom_ChkTermFlg_0x19f7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7CCu; }
        else if (ctx->pc != 0x19F7CCu) { ctx->pc = 0x19F7CCu; }
    }
    if (ctx->pc != 0x19F7CCu) { return; }
    ctx->pc = 0x19F7CCu;
    // 0x19f7cc: 0xc067e4c
    ctx->pc = 0x19F7CCu;
    SET_GPR_U32(ctx, 31, 0x19F7D4u);
    ctx->pc = 0x19F7D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F930u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfvom_OutputServer_0x19f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7D4u; }
        else if (ctx->pc != 0x19F7D4u) { ctx->pc = 0x19F7D4u; }
    }
    if (ctx->pc != 0x19F7D4u) { return; }
    ctx->pc = 0x19F7D4u;
    // 0x19f7d4: 0x40802d
    ctx->pc = 0x19f7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f7d8: 0xc067e2c
    ctx->pc = 0x19F7D8u;
    SET_GPR_U32(ctx, 31, 0x19F7E0u);
    ctx->pc = 0x19F7DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfvom_ChkPrepFlg_0x19f8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F7E0u; }
        else if (ctx->pc != 0x19F7E0u) { ctx->pc = 0x19F7E0u; }
    }
    if (ctx->pc != 0x19F7E0u) { return; }
    ctx->pc = 0x19F7E0u;
    // 0x19f7e0: 0x200102d
    ctx->pc = 0x19f7e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f7e4:
    // 0x19f7e4: 0xdfbf0020
    ctx->pc = 0x19f7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f7e8: 0xdfb10010
    ctx->pc = 0x19f7e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f7ec: 0xdfb00000
    ctx->pc = 0x19f7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f7f0: 0x3e00008
    ctx->pc = 0x19F7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F7F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F7E4u: goto label_19f7e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F7F8u;
}
