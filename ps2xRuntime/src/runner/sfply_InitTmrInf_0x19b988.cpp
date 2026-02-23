#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_InitTmrInf
// Address: 0x19b988 - 0x19b9e8
void sfply_InitTmrInf_0x19b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_InitTmrInf");


    ctx->pc = 0x19b988u;

    // 0x19b988: 0x27bdffc0
    ctx->pc = 0x19b988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19b98c: 0x80102d
    ctx->pc = 0x19b98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b990: 0xffb20020
    ctx->pc = 0x19b990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19b994: 0x282d
    ctx->pc = 0x19b994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b998: 0xffb00000
    ctx->pc = 0x19b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b99c: 0x245200a0
    ctx->pc = 0x19b99cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 160));
    // 0x19b9a0: 0xffb10010
    ctx->pc = 0x19b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19b9a4: 0xffbf0030
    ctx->pc = 0x19b9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19b9a8: 0x24060030
    ctx->pc = 0x19b9a8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x19b9ac: 0x40802d
    ctx->pc = 0x19b9acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9b0: 0xc0601e6
    ctx->pc = 0x19B9B0u;
    SET_GPR_U32(ctx, 31, 0x19B9B8u);
    ctx->pc = 0x19B9B4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9B8u; }
        else if (ctx->pc != 0x19B9B8u) { ctx->pc = 0x19B9B8u; }
    }
    if (ctx->pc != 0x19B9B8u) { return; }
    ctx->pc = 0x19B9B8u;
label_19b9b8:
    // 0x19b9b8: 0x200202d
    ctx->pc = 0x19b9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9bc: 0xc067b1a
    ctx->pc = 0x19B9BCu;
    SET_GPR_U32(ctx, 31, 0x19B9C4u);
    ctx->pc = 0x19B9C0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x19EC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTMR_InitTsum_0x19ec68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9C4u; }
        else if (ctx->pc != 0x19B9C4u) { ctx->pc = 0x19B9C4u; }
    }
    if (ctx->pc != 0x19B9C4u) { return; }
    ctx->pc = 0x19B9C4u;
    // 0x19b9c4: 0x621fffc
    ctx->pc = 0x19B9C4u;
    {
        const bool branch_taken_0x19b9c4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x19B9C8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 32));
        if (branch_taken_0x19b9c4) {
            ctx->pc = 0x19B9B8u;
            goto label_19b9b8;
        }
    }
    ctx->pc = 0x19B9CCu;
    // 0x19b9cc: 0x240202d
    ctx->pc = 0x19b9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b9d0: 0xdfbf0030
    ctx->pc = 0x19b9d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19b9d4: 0xdfb20020
    ctx->pc = 0x19b9d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19b9d8: 0xdfb10010
    ctx->pc = 0x19b9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b9dc: 0xdfb00000
    ctx->pc = 0x19b9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b9e0: 0x8067b1a
    ctx->pc = 0x19B9E0u;
    ctx->pc = 0x19B9E4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x19EC68u;
    SFTMR_InitTsum_0x19ec68(rdram, ctx, runtime); return;
    ctx->pc = 0x19B9E8u;
}
