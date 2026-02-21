#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpSum
// Address: 0x2b5780 - 0x2b57ec
void exprOpSum_0x2b5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5780u;

label_2b5780:
    // 0x2b5780: 0x8c820000
    ctx->pc = 0x2b5780u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b5784:
    // 0x2b5784: 0x2443fffc
    ctx->pc = 0x2b5784u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967292));
label_2b5788:
    // 0x2b5788: 0x2c620010
    ctx->pc = 0x2b5788u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_2b578c:
    // 0x2b578c: 0x10400011
label_2b5790:
    if (ctx->pc == 0x2B5790u) {
        ctx->pc = 0x2B5790u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B5794u;
        goto label_2b5794;
    }
    ctx->pc = 0x2B578Cu;
    {
        const bool branch_taken_0x2b578c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5790u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b578c) {
            ctx->pc = 0x2B57D4u;
            goto label_2b57d4;
        }
    }
    ctx->pc = 0x2B5794u;
label_2b5794:
    // 0x2b5794: 0x24424a00
    ctx->pc = 0x2b5794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18944));
label_2b5798:
    // 0x2b5798: 0x31880
    ctx->pc = 0x2b5798u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b579c:
    // 0x2b579c: 0x621821
    ctx->pc = 0x2b579cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b57a0:
    // 0x2b57a0: 0x8c620000
    ctx->pc = 0x2b57a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b57a4:
    // 0x2b57a4: 0x400008
label_2b57a8:
    if (ctx->pc == 0x2B57A8u) {
        ctx->pc = 0x2B57ACu;
        goto label_2b57ac;
    }
    ctx->pc = 0x2B57A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5780u: goto label_2b5780;
            case 0x2B5784u: goto label_2b5784;
            case 0x2B5788u: goto label_2b5788;
            case 0x2B578Cu: goto label_2b578c;
            case 0x2B5790u: goto label_2b5790;
            case 0x2B5794u: goto label_2b5794;
            case 0x2B5798u: goto label_2b5798;
            case 0x2B579Cu: goto label_2b579c;
            case 0x2B57A0u: goto label_2b57a0;
            case 0x2B57A4u: goto label_2b57a4;
            case 0x2B57A8u: goto label_2b57a8;
            case 0x2B57ACu: goto label_2b57ac;
            case 0x2B57B0u: goto label_2b57b0;
            case 0x2B57B4u: goto label_2b57b4;
            case 0x2B57B8u: goto label_2b57b8;
            case 0x2B57BCu: goto label_2b57bc;
            case 0x2B57C0u: goto label_2b57c0;
            case 0x2B57C4u: goto label_2b57c4;
            case 0x2B57C8u: goto label_2b57c8;
            case 0x2B57CCu: goto label_2b57cc;
            case 0x2B57D0u: goto label_2b57d0;
            case 0x2B57D4u: goto label_2b57d4;
            case 0x2B57D8u: goto label_2b57d8;
            case 0x2B57DCu: goto label_2b57dc;
            case 0x2B57E0u: goto label_2b57e0;
            case 0x2B57E4u: goto label_2b57e4;
            case 0x2B57E8u: goto label_2b57e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B57ACu;
label_2b57ac:
    // 0x2b57ac: 0xc4a00010
    ctx->pc = 0x2b57acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b57b0:
    // 0x2b57b0: 0xc4c10010
    ctx->pc = 0x2b57b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b57b4:
    // 0x2b57b4: 0x46010000
    ctx->pc = 0x2b57b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b57b8:
    // 0x2b57b8: 0x10000009
label_2b57bc:
    if (ctx->pc == 0x2B57BCu) {
        ctx->pc = 0x2B57BCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->pc = 0x2B57C0u;
        goto label_2b57c0;
    }
    ctx->pc = 0x2B57B8u;
    {
        const bool branch_taken_0x2b57b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B57BCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        if (branch_taken_0x2b57b8) {
            ctx->pc = 0x2B57E0u;
            goto label_2b57e0;
        }
    }
    ctx->pc = 0x2B57C0u;
label_2b57c0:
    // 0x2b57c0: 0x8ca20010
    ctx->pc = 0x2b57c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b57c4:
    // 0x2b57c4: 0x8cc30010
    ctx->pc = 0x2b57c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2b57c8:
    // 0x2b57c8: 0x431021
    ctx->pc = 0x2b57c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b57cc:
    // 0x2b57cc: 0x10000004
label_2b57d0:
    if (ctx->pc == 0x2B57D0u) {
        ctx->pc = 0x2B57D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B57D4u;
        goto label_2b57d4;
    }
    ctx->pc = 0x2B57CCu;
    {
        const bool branch_taken_0x2b57cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B57D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b57cc) {
            ctx->pc = 0x2B57E0u;
            goto label_2b57e0;
        }
    }
    ctx->pc = 0x2B57D4u;
label_2b57d4:
    // 0x2b57d4: 0x3c07003b
    ctx->pc = 0x2b57d4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
label_2b57d8:
    // 0x2b57d8: 0x80ad496
label_2b57dc:
    if (ctx->pc == 0x2B57DCu) {
        ctx->pc = 0x2B57DCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18936));
        ctx->pc = 0x2B57E0u;
        goto label_2b57e0;
    }
    ctx->pc = 0x2B57D8u;
    ctx->pc = 0x2B57DCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18936));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B57E0u;
label_2b57e0:
    // 0x2b57e0: 0x8ca20000
    ctx->pc = 0x2b57e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b57e4:
    // 0x2b57e4: 0x3e00008
label_2b57e8:
    if (ctx->pc == 0x2B57E8u) {
        ctx->pc = 0x2B57E8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B57ECu;
        goto label_fallthrough_0x2b57e4;
    }
    ctx->pc = 0x2B57E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B57E8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5780u: goto label_2b5780;
            case 0x2B5784u: goto label_2b5784;
            case 0x2B5788u: goto label_2b5788;
            case 0x2B578Cu: goto label_2b578c;
            case 0x2B5790u: goto label_2b5790;
            case 0x2B5794u: goto label_2b5794;
            case 0x2B5798u: goto label_2b5798;
            case 0x2B579Cu: goto label_2b579c;
            case 0x2B57A0u: goto label_2b57a0;
            case 0x2B57A4u: goto label_2b57a4;
            case 0x2B57A8u: goto label_2b57a8;
            case 0x2B57ACu: goto label_2b57ac;
            case 0x2B57B0u: goto label_2b57b0;
            case 0x2B57B4u: goto label_2b57b4;
            case 0x2B57B8u: goto label_2b57b8;
            case 0x2B57BCu: goto label_2b57bc;
            case 0x2B57C0u: goto label_2b57c0;
            case 0x2B57C4u: goto label_2b57c4;
            case 0x2B57C8u: goto label_2b57c8;
            case 0x2B57CCu: goto label_2b57cc;
            case 0x2B57D0u: goto label_2b57d0;
            case 0x2B57D4u: goto label_2b57d4;
            case 0x2B57D8u: goto label_2b57d8;
            case 0x2B57DCu: goto label_2b57dc;
            case 0x2B57E0u: goto label_2b57e0;
            case 0x2B57E4u: goto label_2b57e4;
            case 0x2B57E8u: goto label_2b57e8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b57e4:
    ctx->pc = 0x2B57ECu;
}
