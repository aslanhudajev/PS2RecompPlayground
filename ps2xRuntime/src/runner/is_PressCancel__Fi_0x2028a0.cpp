#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressCancel__Fi
// Address: 0x2028a0 - 0x202948
void is_PressCancel__Fi_0x2028a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressCancel__Fi");


    ctx->pc = 0x2028a0u;

    // 0x2028a0: 0x27bdffd0
    ctx->pc = 0x2028a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2028a4: 0x7fbf0020
    ctx->pc = 0x2028a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2028a8: 0x7fb10010
    ctx->pc = 0x2028a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2028ac: 0x70808e28
    ctx->pc = 0x2028acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x2028b0: 0x7fb00000
    ctx->pc = 0x2028b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2028b4: 0x2a210002
    ctx->pc = 0x2028b4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 17), 2));
    // 0x2028b8: 0x1020001d
    ctx->pc = 0x2028B8u;
    {
        const bool branch_taken_0x2028b8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2028BCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2028b8) {
            ctx->pc = 0x202930u;
            goto label_202930;
        }
    }
    ctx->pc = 0x2028C0u;
    // 0x2028c0: 0xc07bf9c
    ctx->pc = 0x2028C0u;
    SET_GPR_U32(ctx, 31, 0x2028C8u);
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2028C8u; }
        else if (ctx->pc != 0x2028C8u) { ctx->pc = 0x2028C8u; }
    }
    if (ctx->pc != 0x2028C8u) { return; }
    ctx->pc = 0x2028C8u;
    // 0x2028c8: 0x5040001a
    ctx->pc = 0x2028C8u;
    {
        const bool branch_taken_0x2028c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2028c8) {
            ctx->pc = 0x2028CCu;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
            ctx->pc = 0x202934u;
            goto label_202934;
        }
    }
    ctx->pc = 0x2028D0u;
    // 0x2028d0: 0x24030003
    ctx->pc = 0x2028d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2028d4: 0x10430013
    ctx->pc = 0x2028D4u;
    {
        const bool branch_taken_0x2028d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2028D8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2028d4) {
            ctx->pc = 0x202924u;
            goto label_202924;
        }
    }
    ctx->pc = 0x2028DCu;
    // 0x2028dc: 0x24030002
    ctx->pc = 0x2028dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2028e0: 0x10430010
    ctx->pc = 0x2028E0u;
    {
        const bool branch_taken_0x2028e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2028E4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2028e0) {
            ctx->pc = 0x202924u;
            goto label_202924;
        }
    }
    ctx->pc = 0x2028E8u;
    // 0x2028e8: 0x10430003
    ctx->pc = 0x2028E8u;
    {
        const bool branch_taken_0x2028e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x2028ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x2028e8) {
            ctx->pc = 0x2028F8u;
            goto label_2028f8;
        }
    }
    ctx->pc = 0x2028F0u;
    // 0x2028f0: 0x1000000f
    ctx->pc = 0x2028F0u;
    {
        const bool branch_taken_0x2028f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2028f0) {
            ctx->pc = 0x202930u;
            goto label_202930;
        }
    }
    ctx->pc = 0x2028F8u;
label_2028f8:
    // 0x2028f8: 0x511021
    ctx->pc = 0x2028f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2028fc: 0x21080
    ctx->pc = 0x2028fcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x202900: 0x511021
    ctx->pc = 0x202900u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x202904: 0x21840
    ctx->pc = 0x202904u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 1));
    // 0x202908: 0x3c020050
    ctx->pc = 0x202908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20290c: 0x2442dc46
    ctx->pc = 0x20290cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958150));
    // 0x202910: 0x431021
    ctx->pc = 0x202910u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202914: 0x94420000
    ctx->pc = 0x202914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202918: 0x30421000
    ctx->pc = 0x202918u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x20291c: 0x10000004
    ctx->pc = 0x20291Cu;
    {
        const bool branch_taken_0x20291c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x202920u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x20291c) {
            ctx->pc = 0x202930u;
            goto label_202930;
        }
    }
    ctx->pc = 0x202924u;
label_202924:
    // 0x202924: 0xc080930
    ctx->pc = 0x202924u;
    SET_GPR_U32(ctx, 31, 0x20292Cu);
    ctx->pc = 0x2024C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressReload0__Fi_0x2024c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20292Cu; }
        else if (ctx->pc != 0x20292Cu) { ctx->pc = 0x20292Cu; }
    }
    if (ctx->pc != 0x20292Cu) { return; }
    ctx->pc = 0x20292Cu;
    // 0x20292c: 0x70408628
    ctx->pc = 0x20292cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_202930:
    // 0x202930: 0x72001628
    ctx->pc = 0x202930u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_202934:
    // 0x202934: 0x7bbf0020
    ctx->pc = 0x202934u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202938: 0x7bb10010
    ctx->pc = 0x202938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20293c: 0x7bb00000
    ctx->pc = 0x20293cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202940: 0x3e00008
    ctx->pc = 0x202940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202944u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2028F8u: goto label_2028f8;
            case 0x202924u: goto label_202924;
            case 0x202930u: goto label_202930;
            case 0x202934u: goto label_202934;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202948u;
}
