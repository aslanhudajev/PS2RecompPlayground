#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: set_adjustXGC1__Fiii
// Address: 0x1ec730 - 0x1ec7d4
void set_adjustXGC1__Fiii_0x1ec730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("set_adjustXGC1__Fiii");


    ctx->pc = 0x1ec730u;

    // 0x1ec730: 0x24a5fec0
    ctx->pc = 0x1ec730u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294966976));
    // 0x1ec734: 0x24c3ff20
    ctx->pc = 0x1ec734u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 4294967072));
    // 0x1ec738: 0x240200eb
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 235));
    // 0x1ec73c: 0xa23018
    ctx->pc = 0x1ec73cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x1ec740: 0x3c0276b9
    ctx->pc = 0x1ec740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)30393 << 16));
    // 0x1ec744: 0x344581db
    ctx->pc = 0x1ec744u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 33243));
    // 0x1ec748: 0xa60018
    ctx->pc = 0x1ec748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1ec74c: 0x31100
    ctx->pc = 0x1ec74cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1ec750: 0x431821
    ctx->pc = 0x1ec750u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec754: 0x310c0
    ctx->pc = 0x1ec754u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ec758: 0x431823
    ctx->pc = 0x1ec758u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec75c: 0x3c027878
    ctx->pc = 0x1ec75cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)30840 << 16));
    // 0x1ec760: 0x2810
    ctx->pc = 0x1ec760u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x1ec764: 0x34427879
    ctx->pc = 0x1ec764u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 30841));
    // 0x1ec768: 0x637c2
    ctx->pc = 0x1ec768u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 31));
    // 0x1ec76c: 0x430018
    ctx->pc = 0x1ec76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1ec770: 0x51183
    ctx->pc = 0x1ec770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 6));
    // 0x1ec774: 0x462821
    ctx->pc = 0x1ec774u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ec778: 0x1010
    ctx->pc = 0x1ec778u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1ec77c: 0x31fc2
    ctx->pc = 0x1ec77cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 31));
    // 0x1ec780: 0x28a1ff50
    ctx->pc = 0x1ec780u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 4294967120));
    // 0x1ec784: 0x21143
    ctx->pc = 0x1ec784u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1ec788: 0x1420000f
    ctx->pc = 0x1EC788u;
    {
        const bool branch_taken_0x1ec788 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC78Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x1ec788) {
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC790u;
    // 0x1ec790: 0x28a1ffdf
    ctx->pc = 0x1ec790u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 4294967263));
    // 0x1ec794: 0x5020000d
    ctx->pc = 0x1EC794u;
    {
        const bool branch_taken_0x1ec794 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ec794) {
            ctx->pc = 0x1EC798u;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1EC7CCu;
            goto label_1ec7cc;
        }
    }
    ctx->pc = 0x1EC79Cu;
    // 0x1ec79c: 0x2841ff5a
    ctx->pc = 0x1ec79cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967130));
    // 0x1ec7a0: 0x14200009
    ctx->pc = 0x1EC7A0u;
    {
        const bool branch_taken_0x1ec7a0 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EC7A4u;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 4294967273));
        if (branch_taken_0x1ec7a0) {
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC7A8u;
    // 0x1ec7a8: 0x10200007
    ctx->pc = 0x1EC7A8u;
    {
        const bool branch_taken_0x1ec7a8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC7ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1ec7a8) {
            ctx->pc = 0x1EC7C8u;
            goto label_1ec7c8;
        }
    }
    ctx->pc = 0x1EC7B0u;
    // 0x1ec7b0: 0x41940
    ctx->pc = 0x1ec7b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1ec7b4: 0x24420dc0
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3520));
    // 0x1ec7b8: 0x431021
    ctx->pc = 0x1ec7b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ec7bc: 0xac450000
    ctx->pc = 0x1ec7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1ec7c0: 0x10000002
    ctx->pc = 0x1EC7C0u;
    {
        const bool branch_taken_0x1ec7c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EC7C4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ec7c0) {
            ctx->pc = 0x1EC7CCu;
            goto label_1ec7cc;
        }
    }
    ctx->pc = 0x1EC7C8u;
label_1ec7c8:
    // 0x1ec7c8: 0x70001628
    ctx->pc = 0x1ec7c8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ec7cc:
    // 0x1ec7cc: 0x3e00008
    ctx->pc = 0x1EC7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC7C8u: goto label_1ec7c8;
            case 0x1EC7CCu: goto label_1ec7cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC7D4u;
}
