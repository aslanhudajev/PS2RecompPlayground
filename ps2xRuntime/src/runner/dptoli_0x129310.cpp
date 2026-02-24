#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dptoli
// Address: 0x129310 - 0x1293a4
void dptoli_0x129310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129310u;

    // 0x129310: 0x27bdffc0
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x129314: 0xffa40020
    ctx->pc = 0x129314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x129318: 0x3a0282d
    ctx->pc = 0x129318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12931c: 0xffbf0030
    ctx->pc = 0x12931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x129320: 0xc04a250
    ctx->pc = 0x129320u;
    SET_GPR_U32(ctx, 31, 0x129328u);
    ctx->pc = 0x129324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x128940u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129328u; }
    }
    if (ctx->pc != 0x129328u) { return; }
    ctx->pc = 0x129328u;
    // 0x129328: 0x8fa30000
    ctx->pc = 0x129328u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12932c: 0x38620002
    ctx->pc = 0x12932cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 2));
    // 0x129330: 0x10400003
    ctx->pc = 0x129330u;
    {
        const bool branch_taken_0x129330 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x129334u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x129330) {
            ctx->pc = 0x129340u;
            goto label_129340;
        }
    }
    ctx->pc = 0x129338u;
    // 0x129338: 0x10400003
    ctx->pc = 0x129338u;
    {
        const bool branch_taken_0x129338 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12933Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x129338) {
            ctx->pc = 0x129348u;
            goto label_129348;
        }
    }
    ctx->pc = 0x129340u;
label_129340:
    // 0x129340: 0x10000015
    ctx->pc = 0x129340u;
    {
        const bool branch_taken_0x129340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129344u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x129340) {
            ctx->pc = 0x129398u;
            goto label_129398;
        }
    }
    ctx->pc = 0x129348u;
label_129348:
    // 0x129348: 0x10400005
    ctx->pc = 0x129348u;
    {
        const bool branch_taken_0x129348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12934Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x129348) {
            ctx->pc = 0x129360u;
            goto label_129360;
        }
    }
    ctx->pc = 0x129350u;
    // 0x129350: 0x480fffb
    ctx->pc = 0x129350u;
    {
        const bool branch_taken_0x129350 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x129354u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 31));
        if (branch_taken_0x129350) {
            ctx->pc = 0x129340u;
            goto label_129340;
        }
    }
    ctx->pc = 0x129358u;
    // 0x129358: 0x14400007
    ctx->pc = 0x129358u;
    {
        const bool branch_taken_0x129358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x12935Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 60));
        if (branch_taken_0x129358) {
            ctx->pc = 0x129378u;
            goto label_129378;
        }
    }
    ctx->pc = 0x129360u;
label_129360:
    // 0x129360: 0x8fa30004
    ctx->pc = 0x129360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129364: 0x3c027fff
    ctx->pc = 0x129364u;
    SET_GPR_S32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x129368: 0x3442ffff
    ctx->pc = 0x129368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65535);
    // 0x12936c: 0x3c048000
    ctx->pc = 0x12936cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)32768 << 16));
    // 0x129370: 0x10000009
    ctx->pc = 0x129370u;
    {
        const bool branch_taken_0x129370 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x129374u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x129370) {
            ctx->pc = 0x129398u;
            goto label_129398;
        }
    }
    ctx->pc = 0x129378u;
label_129378:
    // 0x129378: 0xdfa20010
    ctx->pc = 0x129378u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12937c: 0x641823
    ctx->pc = 0x12937cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129380: 0x621016
    ctx->pc = 0x129380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x129384: 0x8fa40004
    ctx->pc = 0x129384u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129388: 0x2103c
    ctx->pc = 0x129388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12938c: 0x2103f
    ctx->pc = 0x12938cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x129390: 0x21823
    ctx->pc = 0x129390u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x129394: 0x64100b
    ctx->pc = 0x129394u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
label_129398:
    // 0x129398: 0xdfbf0030
    ctx->pc = 0x129398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12939c: 0x3e00008
    ctx->pc = 0x12939Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1293A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129340u: goto label_129340;
            case 0x129348u: goto label_129348;
            case 0x129360u: goto label_129360;
            case 0x129378u: goto label_129378;
            case 0x129398u: goto label_129398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1293A4u;
}
