#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpDiff
// Address: 0x2b57f0 - 0x2b585c
void exprOpDiff_0x2b57f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b57f0u;

label_2b57f0:
    // 0x2b57f0: 0x8c820000
    ctx->pc = 0x2b57f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b57f4:
    // 0x2b57f4: 0x2443fffc
    ctx->pc = 0x2b57f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294967292));
label_2b57f8:
    // 0x2b57f8: 0x2c620010
    ctx->pc = 0x2b57f8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_2b57fc:
    // 0x2b57fc: 0x10400011
label_2b5800:
    if (ctx->pc == 0x2B5800u) {
        ctx->pc = 0x2B5800u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B5804u;
        goto label_2b5804;
    }
    ctx->pc = 0x2B57FCu;
    {
        const bool branch_taken_0x2b57fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5800u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b57fc) {
            ctx->pc = 0x2B5844u;
            goto label_2b5844;
        }
    }
    ctx->pc = 0x2B5804u;
label_2b5804:
    // 0x2b5804: 0x24424a50
    ctx->pc = 0x2b5804u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 19024));
label_2b5808:
    // 0x2b5808: 0x31880
    ctx->pc = 0x2b5808u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b580c:
    // 0x2b580c: 0x621821
    ctx->pc = 0x2b580cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b5810:
    // 0x2b5810: 0x8c620000
    ctx->pc = 0x2b5810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5814:
    // 0x2b5814: 0x400008
label_2b5818:
    if (ctx->pc == 0x2B5818u) {
        ctx->pc = 0x2B581Cu;
        goto label_2b581c;
    }
    ctx->pc = 0x2B5814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B57F0u: goto label_2b57f0;
            case 0x2B57F4u: goto label_2b57f4;
            case 0x2B57F8u: goto label_2b57f8;
            case 0x2B57FCu: goto label_2b57fc;
            case 0x2B5800u: goto label_2b5800;
            case 0x2B5804u: goto label_2b5804;
            case 0x2B5808u: goto label_2b5808;
            case 0x2B580Cu: goto label_2b580c;
            case 0x2B5810u: goto label_2b5810;
            case 0x2B5814u: goto label_2b5814;
            case 0x2B5818u: goto label_2b5818;
            case 0x2B581Cu: goto label_2b581c;
            case 0x2B5820u: goto label_2b5820;
            case 0x2B5824u: goto label_2b5824;
            case 0x2B5828u: goto label_2b5828;
            case 0x2B582Cu: goto label_2b582c;
            case 0x2B5830u: goto label_2b5830;
            case 0x2B5834u: goto label_2b5834;
            case 0x2B5838u: goto label_2b5838;
            case 0x2B583Cu: goto label_2b583c;
            case 0x2B5840u: goto label_2b5840;
            case 0x2B5844u: goto label_2b5844;
            case 0x2B5848u: goto label_2b5848;
            case 0x2B584Cu: goto label_2b584c;
            case 0x2B5850u: goto label_2b5850;
            case 0x2B5854u: goto label_2b5854;
            case 0x2B5858u: goto label_2b5858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B581Cu;
label_2b581c:
    // 0x2b581c: 0xc4a00010
    ctx->pc = 0x2b581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5820:
    // 0x2b5820: 0xc4c10010
    ctx->pc = 0x2b5820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5824:
    // 0x2b5824: 0x46010001
    ctx->pc = 0x2b5824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b5828:
    // 0x2b5828: 0x10000009
label_2b582c:
    if (ctx->pc == 0x2B582Cu) {
        ctx->pc = 0x2B582Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->pc = 0x2B5830u;
        goto label_2b5830;
    }
    ctx->pc = 0x2B5828u;
    {
        const bool branch_taken_0x2b5828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B582Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        if (branch_taken_0x2b5828) {
            ctx->pc = 0x2B5850u;
            goto label_2b5850;
        }
    }
    ctx->pc = 0x2B5830u;
label_2b5830:
    // 0x2b5830: 0x8ca20010
    ctx->pc = 0x2b5830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_2b5834:
    // 0x2b5834: 0x8cc30010
    ctx->pc = 0x2b5834u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_2b5838:
    // 0x2b5838: 0x431023
    ctx->pc = 0x2b5838u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b583c:
    // 0x2b583c: 0x10000004
label_2b5840:
    if (ctx->pc == 0x2B5840u) {
        ctx->pc = 0x2B5840u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5844u;
        goto label_2b5844;
    }
    ctx->pc = 0x2B583Cu;
    {
        const bool branch_taken_0x2b583c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5840u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b583c) {
            ctx->pc = 0x2B5850u;
            goto label_2b5850;
        }
    }
    ctx->pc = 0x2B5844u;
label_2b5844:
    // 0x2b5844: 0x3c07003b
    ctx->pc = 0x2b5844u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
label_2b5848:
    // 0x2b5848: 0x80ad496
label_2b584c:
    if (ctx->pc == 0x2B584Cu) {
        ctx->pc = 0x2B584Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 19008));
        ctx->pc = 0x2B5850u;
        goto label_2b5850;
    }
    ctx->pc = 0x2B5848u;
    ctx->pc = 0x2B584Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 19008));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B5850u;
label_2b5850:
    // 0x2b5850: 0x8ca20000
    ctx->pc = 0x2b5850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b5854:
    // 0x2b5854: 0x3e00008
label_2b5858:
    if (ctx->pc == 0x2B5858u) {
        ctx->pc = 0x2B5858u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B585Cu;
        goto label_fallthrough_0x2b5854;
    }
    ctx->pc = 0x2B5854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5858u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B57F0u: goto label_2b57f0;
            case 0x2B57F4u: goto label_2b57f4;
            case 0x2B57F8u: goto label_2b57f8;
            case 0x2B57FCu: goto label_2b57fc;
            case 0x2B5800u: goto label_2b5800;
            case 0x2B5804u: goto label_2b5804;
            case 0x2B5808u: goto label_2b5808;
            case 0x2B580Cu: goto label_2b580c;
            case 0x2B5810u: goto label_2b5810;
            case 0x2B5814u: goto label_2b5814;
            case 0x2B5818u: goto label_2b5818;
            case 0x2B581Cu: goto label_2b581c;
            case 0x2B5820u: goto label_2b5820;
            case 0x2B5824u: goto label_2b5824;
            case 0x2B5828u: goto label_2b5828;
            case 0x2B582Cu: goto label_2b582c;
            case 0x2B5830u: goto label_2b5830;
            case 0x2B5834u: goto label_2b5834;
            case 0x2B5838u: goto label_2b5838;
            case 0x2B583Cu: goto label_2b583c;
            case 0x2B5840u: goto label_2b5840;
            case 0x2B5844u: goto label_2b5844;
            case 0x2B5848u: goto label_2b5848;
            case 0x2B584Cu: goto label_2b584c;
            case 0x2B5850u: goto label_2b5850;
            case 0x2B5854u: goto label_2b5854;
            case 0x2B5858u: goto label_2b5858;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b5854:
    ctx->pc = 0x2B585Cu;
}
