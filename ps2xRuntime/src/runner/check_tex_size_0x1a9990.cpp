#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: check_tex_size
// Address: 0x1a9990 - 0x1a9a1c
void check_tex_size_0x1a9990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("check_tex_size");


    ctx->pc = 0x1a9990u;

    // 0x1a9990: 0x70a04628
    ctx->pc = 0x1a9990u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1a9994: 0x70c03e28
    ctx->pc = 0x1a9994u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1a9998: 0x1072818
    ctx->pc = 0x1a9998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1a999c: 0x27bdfff0
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a99a0: 0x24030014
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a99a4: 0x1083000f
    ctx->pc = 0x1A99A4u;
    {
        const bool branch_taken_0x1a99a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A99A8u;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x1a99a4) {
            ctx->pc = 0x1A99E4u;
            goto label_1a99e4;
        }
    }
    ctx->pc = 0x1A99ACu;
    // 0x1a99ac: 0x24030013
    ctx->pc = 0x1a99acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 19));
    // 0x1a99b0: 0x1083000e
    ctx->pc = 0x1A99B0u;
    {
        const bool branch_taken_0x1a99b0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1A99B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
        if (branch_taken_0x1a99b0) {
            ctx->pc = 0x1A99ECu;
            goto label_1a99ec;
        }
    }
    ctx->pc = 0x1A99B8u;
    // 0x1a99b8: 0x24030002
    ctx->pc = 0x1a99b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a99bc: 0x50830007
    ctx->pc = 0x1A99BCu;
    {
        const bool branch_taken_0x1a99bc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1a99bc) {
            ctx->pc = 0x1A99C0u;
            SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x1A99DCu;
            goto label_1a99dc;
        }
    }
    ctx->pc = 0x1A99C4u;
    // 0x1a99c4: 0x50800003
    ctx->pc = 0x1A99C4u;
    {
        const bool branch_taken_0x1a99c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a99c4) {
            ctx->pc = 0x1A99C8u;
            SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
            ctx->pc = 0x1A99D4u;
            goto label_1a99d4;
        }
    }
    ctx->pc = 0x1A99CCu;
    // 0x1a99cc: 0x10000006
    ctx->pc = 0x1A99CCu;
    {
        const bool branch_taken_0x1a99cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a99cc) {
            ctx->pc = 0x1A99E8u;
            goto label_1a99e8;
        }
    }
    ctx->pc = 0x1A99D4u;
label_1a99d4:
    // 0x1a99d4: 0x10000004
    ctx->pc = 0x1A99D4u;
    {
        const bool branch_taken_0x1a99d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a99d4) {
            ctx->pc = 0x1A99E8u;
            goto label_1a99e8;
        }
    }
    ctx->pc = 0x1A99DCu;
label_1a99dc:
    // 0x1a99dc: 0x10000002
    ctx->pc = 0x1A99DCu;
    {
        const bool branch_taken_0x1a99dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a99dc) {
            ctx->pc = 0x1A99E8u;
            goto label_1a99e8;
        }
    }
    ctx->pc = 0x1A99E4u;
label_1a99e4:
    // 0x1a99e4: 0x52842
    ctx->pc = 0x1a99e4u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 1));
label_1a99e8:
    // 0x1a99e8: 0x3c030008
    ctx->pc = 0x1a99e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
label_1a99ec:
    // 0x1a99ec: 0xa3182b
    ctx->pc = 0x1a99ecu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a99f0: 0x14600007
    ctx->pc = 0x1A99F0u;
    {
        const bool branch_taken_0x1a99f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A99F4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a99f0) {
            ctx->pc = 0x1A9A10u;
            goto label_1a9a10;
        }
    }
    ctx->pc = 0x1A99F8u;
    // 0x1a99f8: 0x3c020026
    ctx->pc = 0x1a99f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1a99fc: 0x71003628
    ctx->pc = 0x1a99fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1a9a00: 0xc05114a
    ctx->pc = 0x1A9A00u;
    SET_GPR_U32(ctx, 31, 0x1A9A08u);
    ctx->pc = 0x1A9A04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964416));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9A08u; }
        else if (ctx->pc != 0x1A9A08u) { ctx->pc = 0x1A9A08u; }
    }
    if (ctx->pc != 0x1A9A08u) { return; }
    ctx->pc = 0x1A9A08u;
label_1a9a08:
    // 0x1a9a08: 0x1000ffff
    ctx->pc = 0x1A9A08u;
    {
        const bool branch_taken_0x1a9a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a9a08) {
            ctx->pc = 0x1A9A08u;
            goto label_1a9a08;
        }
    }
    ctx->pc = 0x1A9A10u;
label_1a9a10:
    // 0x1a9a10: 0x7bbf0000
    ctx->pc = 0x1a9a10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9a14: 0x3e00008
    ctx->pc = 0x1A9A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9A18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A99D4u: goto label_1a99d4;
            case 0x1A99DCu: goto label_1a99dc;
            case 0x1A99E4u: goto label_1a99e4;
            case 0x1A99E8u: goto label_1a99e8;
            case 0x1A99ECu: goto label_1a99ec;
            case 0x1A9A08u: goto label_1a9a08;
            case 0x1A9A10u: goto label_1a9a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9A1Cu;
}
