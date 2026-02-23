#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: Malloc
// Address: 0x1a1e30 - 0x1a1ec0
void Malloc_0x1a1e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("Malloc");


    ctx->pc = 0x1a1e30u;

    // 0x1a1e30: 0x70802e28
    ctx->pc = 0x1a1e30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a1e34: 0x3c020051
    ctx->pc = 0x1a1e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1a1e38: 0x24445040
    ctx->pc = 0x1a1e38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 20544));
    // 0x1a1e3c: 0x27bdfff0
    ctx->pc = 0x1a1e3cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1e40: 0x24a2000f
    ctx->pc = 0x1a1e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 15));
    // 0x1a1e44: 0x7fbf0000
    ctx->pc = 0x1a1e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1a1e48: 0x21103
    ctx->pc = 0x1a1e48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1a1e4c: 0xaf858930
    ctx->pc = 0x1a1e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936880), GPR_U32(ctx, 5));
    // 0x1a1e50: 0x21080
    ctx->pc = 0x1a1e50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a1e54: 0x24450004
    ctx->pc = 0x1a1e54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a1e58: 0x3c020051
    ctx->pc = 0x1a1e58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1a1e5c: 0x24435040
    ctx->pc = 0x1a1e5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 20544));
label_1a1e60:
    // 0x1a1e60: 0x8c820008
    ctx->pc = 0x1a1e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1e64: 0x21080
    ctx->pc = 0x1a1e64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a1e68: 0x622021
    ctx->pc = 0x1a1e68u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1e6c: 0x8c820000
    ctx->pc = 0x1a1e6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a1e70: 0x21023
    ctx->pc = 0x1a1e70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1a1e74: 0x45102a
    ctx->pc = 0x1a1e74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x1a1e78: 0x14400005
    ctx->pc = 0x1A1E78u;
    {
        const bool branch_taken_0x1a1e78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1e78) {
            ctx->pc = 0x1A1E90u;
            goto label_1a1e90;
        }
    }
    ctx->pc = 0x1A1E80u;
    // 0x1a1e80: 0xc06874c
    ctx->pc = 0x1A1E80u;
    SET_GPR_U32(ctx, 31, 0x1A1E88u);
    ctx->pc = 0x1A1D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        getRam_0x1a1d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1E88u; }
        else if (ctx->pc != 0x1A1E88u) { ctx->pc = 0x1A1E88u; }
    }
    if (ctx->pc != 0x1A1E88u) { return; }
    ctx->pc = 0x1A1E88u;
    // 0x1a1e88: 0x1000000b
    ctx->pc = 0x1A1E88u;
    {
        const bool branch_taken_0x1a1e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A1E8Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1a1e88) {
            ctx->pc = 0x1A1EB8u;
            goto label_1a1eb8;
        }
    }
    ctx->pc = 0x1A1E90u;
label_1a1e90:
    // 0x1a1e90: 0x8c820008
    ctx->pc = 0x1a1e90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a1e94: 0x1440fff2
    ctx->pc = 0x1A1E94u;
    {
        const bool branch_taken_0x1a1e94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a1e94) {
            ctx->pc = 0x1A1E60u;
            goto label_1a1e60;
        }
    }
    ctx->pc = 0x1A1E9Cu;
    // 0x1a1e9c: 0xc07d03c
    ctx->pc = 0x1A1E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1EA4u);
    ctx->pc = 0x1F40F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___am1MallocOverCallback_0x1f40f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EA4u; }
        else if (ctx->pc != 0x1A1EA4u) { ctx->pc = 0x1A1EA4u; }
    }
    if (ctx->pc != 0x1A1EA4u) { return; }
    ctx->pc = 0x1A1EA4u;
    // 0x1a1ea4: 0x3c020026
    ctx->pc = 0x1a1ea4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a1ea8: 0xc07d01c
    ctx->pc = 0x1A1EA8u;
    SET_GPR_U32(ctx, 31, 0x1A1EB0u);
    ctx->pc = 0x1A1EACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294959040));
    ctx->pc = 0x1F4070u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___am1FatalError_0x1f4070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1EB0u; }
        else if (ctx->pc != 0x1A1EB0u) { ctx->pc = 0x1A1EB0u; }
    }
    if (ctx->pc != 0x1A1EB0u) { return; }
    ctx->pc = 0x1A1EB0u;
    // 0x1a1eb0: 0x70001628
    ctx->pc = 0x1a1eb0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a1eb4: 0x7bbf0000
    ctx->pc = 0x1a1eb4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a1eb8:
    // 0x1a1eb8: 0x3e00008
    ctx->pc = 0x1A1EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1EBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1E60u: goto label_1a1e60;
            case 0x1A1E90u: goto label_1a1e90;
            case 0x1A1EB8u: goto label_1a1eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1EC0u;
}
