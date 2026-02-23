#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetSpeed
// Address: 0x19a9a8 - 0x19aa10
void SFD_SetSpeed_0x19a9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetSpeed");


    ctx->pc = 0x19a9a8u;

    // 0x19a9a8: 0x27bdffd0
    ctx->pc = 0x19a9a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19a9ac: 0xffb00000
    ctx->pc = 0x19a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a9b0: 0xffb10010
    ctx->pc = 0x19a9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19a9b4: 0x80802d
    ctx->pc = 0x19a9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9b8: 0xffbf0020
    ctx->pc = 0x19a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19a9bc: 0xc064f1e
    ctx->pc = 0x19A9BCu;
    SET_GPR_U32(ctx, 31, 0x19A9C4u);
    ctx->pc = 0x19A9C0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9C4u; }
        else if (ctx->pc != 0x19A9C4u) { ctx->pc = 0x19A9C4u; }
    }
    if (ctx->pc != 0x19A9C4u) { return; }
    ctx->pc = 0x19A9C4u;
    // 0x19a9c4: 0x10400006
    ctx->pc = 0x19A9C4u;
    {
        const bool branch_taken_0x19a9c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A9C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19a9c4) {
            ctx->pc = 0x19A9E0u;
            goto label_19a9e0;
        }
    }
    ctx->pc = 0x19A9CCu;
    // 0x19a9cc: 0x3c05ff00
    ctx->pc = 0x19a9ccu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19a9d0: 0xc064ea0
    ctx->pc = 0x19A9D0u;
    SET_GPR_U32(ctx, 31, 0x19A9D8u);
    ctx->pc = 0x19A9D4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 324));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9D8u; }
        else if (ctx->pc != 0x19A9D8u) { ctx->pc = 0x19A9D8u; }
    }
    if (ctx->pc != 0x19A9D8u) { return; }
    ctx->pc = 0x19A9D8u;
    // 0x19a9d8: 0x10000009
    ctx->pc = 0x19A9D8u;
    {
        const bool branch_taken_0x19a9d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19A9DCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19a9d8) {
            ctx->pc = 0x19AA00u;
            goto label_19aa00;
        }
    }
    ctx->pc = 0x19A9E0u;
label_19a9e0:
    // 0x19a9e0: 0x200202d
    ctx->pc = 0x19a9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9e4: 0xc067b16
    ctx->pc = 0x19A9E4u;
    SET_GPR_U32(ctx, 31, 0x19A9ECu);
    ctx->pc = 0x19A9E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EC58u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_SetSpeed_0x19ec58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9ECu; }
        else if (ctx->pc != 0x19A9ECu) { ctx->pc = 0x19A9ECu; }
    }
    if (ctx->pc != 0x19A9ECu) { return; }
    ctx->pc = 0x19A9ECu;
    // 0x19a9ec: 0x200202d
    ctx->pc = 0x19a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9f0: 0xc064454
    ctx->pc = 0x19A9F0u;
    SET_GPR_U32(ctx, 31, 0x19A9F8u);
    ctx->pc = 0x19A9F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191150u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFAOAP_SetSpeed_0x191150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19A9F8u; }
        else if (ctx->pc != 0x19A9F8u) { ctx->pc = 0x19A9F8u; }
    }
    if (ctx->pc != 0x19A9F8u) { return; }
    ctx->pc = 0x19A9F8u;
    // 0x19a9f8: 0x102d
    ctx->pc = 0x19a9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a9fc: 0xdfbf0020
    ctx->pc = 0x19a9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19aa00:
    // 0x19aa00: 0xdfb10010
    ctx->pc = 0x19aa00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aa04: 0xdfb00000
    ctx->pc = 0x19aa04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa08: 0x3e00008
    ctx->pc = 0x19AA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19A9E0u: goto label_19a9e0;
            case 0x19AA00u: goto label_19aa00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AA10u;
}
