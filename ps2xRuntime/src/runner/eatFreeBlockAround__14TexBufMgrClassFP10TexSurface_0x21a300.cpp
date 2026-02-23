#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: eatFreeBlockAround__14TexBufMgrClassFP10TexSurface
// Address: 0x21a300 - 0x21a3c4
void eatFreeBlockAround__14TexBufMgrClassFP10TexSurface_0x21a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("eatFreeBlockAround__14TexBufMgrClassFP10TexSurface");


    ctx->pc = 0x21a300u;

label_21a300:
    // 0x21a300: 0x27bdffd0
    ctx->pc = 0x21a300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a304: 0x7fbf0020
    ctx->pc = 0x21a304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21a308: 0x7fb10010
    ctx->pc = 0x21a308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a30c: 0x7fb00000
    ctx->pc = 0x21a30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a310: 0x70a08628
    ctx->pc = 0x21a310u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x21a314: 0x8c850394
    ctx->pc = 0x21a314u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 916)));
    // 0x21a318: 0x10a00025
    ctx->pc = 0x21A318u;
    {
        const bool branch_taken_0x21a318 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A31Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a318) {
            ctx->pc = 0x21A3B0u;
            goto label_21a3b0;
        }
    }
    ctx->pc = 0x21A320u;
    // 0x21a320: 0x8e080008
    ctx->pc = 0x21a320u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21a324: 0x8e06000c
    ctx->pc = 0x21a324u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21a328: 0x1062021
    ctx->pc = 0x21a328u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_21a32c:
    // 0x21a32c: 0x8ca70008
    ctx->pc = 0x21a32cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x21a330: 0x14e4000b
    ctx->pc = 0x21A330u;
    {
        const bool branch_taken_0x21a330 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 4));
        if (branch_taken_0x21a330) {
            ctx->pc = 0x21A360u;
            goto label_21a360;
        }
    }
    ctx->pc = 0x21A338u;
    // 0x21a338: 0x8ca2000c
    ctx->pc = 0x21a338u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21a33c: 0x72202628
    ctx->pc = 0x21a33cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21a340: 0xc21021
    ctx->pc = 0x21a340u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21a344: 0xc086810
    ctx->pc = 0x21A344u;
    SET_GPR_U32(ctx, 31, 0x21A34Cu);
    ctx->pc = 0x21A348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x21A040u;
    {
        const uint32_t __entryPc = ctx->pc;
        removeFreeBlockList__14TexBufMgrClassFP10TexSurface_0x21a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A34Cu; }
        else if (ctx->pc != 0x21A34Cu) { ctx->pc = 0x21A34Cu; }
    }
    if (ctx->pc != 0x21A34Cu) { return; }
    ctx->pc = 0x21A34Cu;
    // 0x21a34c: 0x72202628
    ctx->pc = 0x21a34cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21a350: 0xc0868c0
    ctx->pc = 0x21A350u;
    SET_GPR_U32(ctx, 31, 0x21A358u);
    ctx->pc = 0x21A354u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21A300u;
    goto label_21a300;
    ctx->pc = 0x21A358u;
label_21a358:
    // 0x21a358: 0x10000016
    ctx->pc = 0x21A358u;
    {
        const bool branch_taken_0x21a358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A35Cu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x21a358) {
            ctx->pc = 0x21A3B4u;
            goto label_21a3b4;
        }
    }
    ctx->pc = 0x21A360u;
label_21a360:
    // 0x21a360: 0x8ca3000c
    ctx->pc = 0x21a360u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21a364: 0xe31821
    ctx->pc = 0x21a364u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x21a368: 0x1503000d
    ctx->pc = 0x21A368u;
    {
        const bool branch_taken_0x21a368 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 3));
        if (branch_taken_0x21a368) {
            ctx->pc = 0x21A3A0u;
            goto label_21a3a0;
        }
    }
    ctx->pc = 0x21A370u;
    // 0x21a370: 0xae070008
    ctx->pc = 0x21a370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x21a374: 0x8e03000c
    ctx->pc = 0x21a374u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21a378: 0x8ca2000c
    ctx->pc = 0x21a378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x21a37c: 0x72202628
    ctx->pc = 0x21a37cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21a380: 0x621021
    ctx->pc = 0x21a380u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21a384: 0xc086810
    ctx->pc = 0x21A384u;
    SET_GPR_U32(ctx, 31, 0x21A38Cu);
    ctx->pc = 0x21A388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x21A040u;
    {
        const uint32_t __entryPc = ctx->pc;
        removeFreeBlockList__14TexBufMgrClassFP10TexSurface_0x21a040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A38Cu; }
        else if (ctx->pc != 0x21A38Cu) { ctx->pc = 0x21A38Cu; }
    }
    if (ctx->pc != 0x21A38Cu) { return; }
    ctx->pc = 0x21A38Cu;
    // 0x21a38c: 0x72202628
    ctx->pc = 0x21a38cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21a390: 0xc0868c0
    ctx->pc = 0x21A390u;
    SET_GPR_U32(ctx, 31, 0x21A398u);
    ctx->pc = 0x21A394u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x21A300u;
    goto label_21a300;
    ctx->pc = 0x21A398u;
label_21a398:
    // 0x21a398: 0x10000005
    ctx->pc = 0x21A398u;
    {
        const bool branch_taken_0x21a398 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21a398) {
            ctx->pc = 0x21A3B0u;
            goto label_21a3b0;
        }
    }
    ctx->pc = 0x21A3A0u;
label_21a3a0:
    // 0x21a3a0: 0x8ca50000
    ctx->pc = 0x21a3a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21a3a4: 0x14a0ffe1
    ctx->pc = 0x21A3A4u;
    {
        const bool branch_taken_0x21a3a4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        if (branch_taken_0x21a3a4) {
            ctx->pc = 0x21A32Cu;
            goto label_21a32c;
        }
    }
    ctx->pc = 0x21A3ACu;
    // 0x21a3ac: 0x0
    ctx->pc = 0x21a3acu;
    // NOP
label_21a3b0:
    // 0x21a3b0: 0x7bbf0020
    ctx->pc = 0x21a3b0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21a3b4:
    // 0x21a3b4: 0x7bb10010
    ctx->pc = 0x21a3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a3b8: 0x7bb00000
    ctx->pc = 0x21a3b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a3bc: 0x3e00008
    ctx->pc = 0x21A3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A3C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A300u: goto label_21a300;
            case 0x21A32Cu: goto label_21a32c;
            case 0x21A358u: goto label_21a358;
            case 0x21A360u: goto label_21a360;
            case 0x21A398u: goto label_21a398;
            case 0x21A3A0u: goto label_21a3a0;
            case 0x21A3B0u: goto label_21a3b0;
            case 0x21A3B4u: goto label_21a3b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A3C4u;
}
