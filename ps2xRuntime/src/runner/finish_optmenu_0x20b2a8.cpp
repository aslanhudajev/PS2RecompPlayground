#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: finish_optmenu
// Address: 0x20b2a8 - 0x20b3ac
void finish_optmenu_0x20b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20b2a8u;

    // 0x20b2a8: 0x27bdfff0
    ctx->pc = 0x20b2a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20b2ac: 0xffbf0000
    ctx->pc = 0x20b2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b2b0: 0x8c82006c
    ctx->pc = 0x20b2b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x20b2b4: 0x50400005
    ctx->pc = 0x20B2B4u;
    {
        const bool branch_taken_0x20b2b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b2b4) {
            ctx->pc = 0x20B2B8u;
            SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
            ctx->pc = 0x20B2CCu;
            goto label_20b2cc;
        }
    }
    ctx->pc = 0x20B2BCu;
    // 0x20b2bc: 0x8c820070
    ctx->pc = 0x20b2bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x20b2c0: 0x14400014
    ctx->pc = 0x20B2C0u;
    {
        const bool branch_taken_0x20b2c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20B2C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x20b2c0) {
            ctx->pc = 0x20B314u;
            goto label_20b314;
        }
    }
    ctx->pc = 0x20B2C8u;
    // 0x20b2c8: 0x3c040032
    ctx->pc = 0x20b2c8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_20b2cc:
    // 0x20b2cc: 0x8c83d358
    ctx->pc = 0x20b2ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294955864)));
    // 0x20b2d0: 0x24020001
    ctx->pc = 0x20b2d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b2d4: 0x14620032
    ctx->pc = 0x20B2D4u;
    {
        const bool branch_taken_0x20b2d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20B2D8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20b2d4) {
            ctx->pc = 0x20B3A0u;
            goto label_20b3a0;
        }
    }
    ctx->pc = 0x20B2DCu;
    // 0x20b2dc: 0xac80d358
    ctx->pc = 0x20b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955864), GPR_U32(ctx, 0));
    // 0x20b2e0: 0x182d
    ctx->pc = 0x20b2e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2e4: 0x3c02003c
    ctx->pc = 0x20b2e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20b2e8: 0x2444c558
    ctx->pc = 0x20b2e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x20b2ec: 0x0
    ctx->pc = 0x20b2ecu;
    // NOP
label_20b2f0:
    // 0x20b2f0: 0x31080
    ctx->pc = 0x20b2f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b2f4: 0x441021
    ctx->pc = 0x20b2f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b2f8: 0xac400000
    ctx->pc = 0x20b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20b2fc: 0x24630001
    ctx->pc = 0x20b2fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x20b300: 0x28620004
    ctx->pc = 0x20b300u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x20b304: 0x1440fffa
    ctx->pc = 0x20B304u;
    {
        const bool branch_taken_0x20b304 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20b304) {
            ctx->pc = 0x20B2F0u;
            goto label_20b2f0;
        }
    }
    ctx->pc = 0x20B30Cu;
    // 0x20b30c: 0x10000024
    ctx->pc = 0x20B30Cu;
    {
        const bool branch_taken_0x20b30c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B310u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20b30c) {
            ctx->pc = 0x20B3A0u;
            goto label_20b3a0;
        }
    }
    ctx->pc = 0x20B314u;
label_20b314:
    // 0x20b314: 0x8c830070
    ctx->pc = 0x20b314u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x20b318: 0x8c42c508
    ctx->pc = 0x20b318u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952200)));
    // 0x20b31c: 0x621821
    ctx->pc = 0x20b31cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20b320: 0xac830070
    ctx->pc = 0x20b320u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 3));
    // 0x20b324: 0x3c020032
    ctx->pc = 0x20b324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20b328: 0x8c42f2f8
    ctx->pc = 0x20b328u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963960)));
    // 0x20b32c: 0x43102a
    ctx->pc = 0x20b32cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x20b330: 0x14400003
    ctx->pc = 0x20B330u;
    {
        const bool branch_taken_0x20b330 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20b330) {
            ctx->pc = 0x20B340u;
            goto label_20b340;
        }
    }
    ctx->pc = 0x20B338u;
    // 0x20b338: 0x10a00016
    ctx->pc = 0x20B338u;
    {
        const bool branch_taken_0x20b338 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20b338) {
            ctx->pc = 0x20B394u;
            goto label_20b394;
        }
    }
    ctx->pc = 0x20B340u;
label_20b340:
    // 0x20b340: 0xc082c8c
    ctx->pc = 0x20B340u;
    SET_GPR_U32(ctx, 31, 0x20B348u);
    ctx->pc = 0x20B230u;
    {
        const uint32_t __entryPc = ctx->pc;
        remove_optmenu_0x20b230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B348u; }
    }
    if (ctx->pc != 0x20B348u) { return; }
    ctx->pc = 0x20B348u;
    // 0x20b348: 0x3c040032
    ctx->pc = 0x20b348u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20b34c: 0x8c83d358
    ctx->pc = 0x20b34cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294955864)));
    // 0x20b350: 0x24020001
    ctx->pc = 0x20b350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b354: 0x14620012
    ctx->pc = 0x20B354u;
    {
        const bool branch_taken_0x20b354 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20B358u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20b354) {
            ctx->pc = 0x20B3A0u;
            goto label_20b3a0;
        }
    }
    ctx->pc = 0x20B35Cu;
    // 0x20b35c: 0xac80d358
    ctx->pc = 0x20b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294955864), GPR_U32(ctx, 0));
    // 0x20b360: 0x182d
    ctx->pc = 0x20b360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b364: 0x3c02003c
    ctx->pc = 0x20b364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20b368: 0x2444c558
    ctx->pc = 0x20b368u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952280));
    // 0x20b36c: 0x0
    ctx->pc = 0x20b36cu;
    // NOP
label_20b370:
    // 0x20b370: 0x31080
    ctx->pc = 0x20b370u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20b374: 0x441021
    ctx->pc = 0x20b374u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20b378: 0xac400000
    ctx->pc = 0x20b378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x20b37c: 0x24630001
    ctx->pc = 0x20b37cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x20b380: 0x28620004
    ctx->pc = 0x20b380u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x20b384: 0x1440fffa
    ctx->pc = 0x20B384u;
    {
        const bool branch_taken_0x20b384 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20b384) {
            ctx->pc = 0x20B370u;
            goto label_20b370;
        }
    }
    ctx->pc = 0x20B38Cu;
    // 0x20b38c: 0x10000004
    ctx->pc = 0x20B38Cu;
    {
        const bool branch_taken_0x20b38c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20B390u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20b38c) {
            ctx->pc = 0x20B3A0u;
            goto label_20b3a0;
        }
    }
    ctx->pc = 0x20B394u;
label_20b394:
    // 0x20b394: 0xc082d7e
    ctx->pc = 0x20B394u;
    SET_GPR_U32(ctx, 31, 0x20B39Cu);
    ctx->pc = 0x20B5F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        show_optmenu_0x20b5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B39Cu; }
    }
    if (ctx->pc != 0x20B39Cu) { return; }
    ctx->pc = 0x20B39Cu;
    // 0x20b39c: 0x24020001
    ctx->pc = 0x20b39cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_20b3a0:
    // 0x20b3a0: 0xdfbf0000
    ctx->pc = 0x20b3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b3a4: 0x3e00008
    ctx->pc = 0x20B3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B3A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20B2CCu: goto label_20b2cc;
            case 0x20B2F0u: goto label_20b2f0;
            case 0x20B314u: goto label_20b314;
            case 0x20B340u: goto label_20b340;
            case 0x20B370u: goto label_20b370;
            case 0x20B394u: goto label_20b394;
            case 0x20B3A0u: goto label_20b3a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20B3ACu;
}
