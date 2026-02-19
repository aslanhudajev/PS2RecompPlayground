#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: WriteName
// Address: 0x233158 - 0x233200
void WriteName_0x233158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x233158u;

    // 0x233158: 0x27bdffd0
    ctx->pc = 0x233158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23315c: 0xffbf0020
    ctx->pc = 0x23315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x233160: 0x80282d
    ctx->pc = 0x233160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233164: 0x202d
    ctx->pc = 0x233164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233168: 0x27a70010
    ctx->pc = 0x233168u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    // 0x23316c: 0x24a6099c
    ctx->pc = 0x23316cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 2460));
    // 0x233170: 0x2409005f
    ctx->pc = 0x233170u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 95));
    // 0x233174: 0x24080020
    ctx->pc = 0x233174u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x233178: 0xe41821
    ctx->pc = 0x233178u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x23317c: 0x0
    ctx->pc = 0x23317cu;
    // NOP
label_233180:
    // 0x233180: 0xc41021
    ctx->pc = 0x233180u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x233184: 0x90420000
    ctx->pc = 0x233184u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233188: 0xa0620000
    ctx->pc = 0x233188u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23318c: 0x21600
    ctx->pc = 0x23318cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 24));
    // 0x233190: 0x21603
    ctx->pc = 0x233190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x233194: 0x50490001
    ctx->pc = 0x233194u;
    {
        const bool branch_taken_0x233194 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 9));
        if (branch_taken_0x233194) {
            ctx->pc = 0x233198u;
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 8));
            ctx->pc = 0x23319Cu;
            goto label_23319c;
        }
    }
    ctx->pc = 0x23319Cu;
label_23319c:
    // 0x23319c: 0x24840001
    ctx->pc = 0x23319cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2331a0: 0x28820008
    ctx->pc = 0x2331a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x2331a4: 0x1440fff6
    ctx->pc = 0x2331A4u;
    {
        const bool branch_taken_0x2331a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2331A8u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        if (branch_taken_0x2331a4) {
            ctx->pc = 0x233180u;
            goto label_233180;
        }
    }
    ctx->pc = 0x2331ACu;
    // 0x2331ac: 0xa3a00016
    ctx->pc = 0x2331acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x2331b0: 0x3a0202d
    ctx->pc = 0x2331b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331b4: 0xc0b109a
    ctx->pc = 0x2331B4u;
    SET_GPR_U32(ctx, 31, 0x2331BCu);
    ctx->pc = 0x2331B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 96));
    ctx->pc = 0x2C4268u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldToScreen_0x2c4268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331BCu; }
    }
    if (ctx->pc != 0x2331BCu) { return; }
    ctx->pc = 0x2331BCu;
    // 0x2331bc: 0xc7a00000
    ctx->pc = 0x2331bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2331c0: 0x46000064
    ctx->pc = 0x2331c0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2331c4: 0x44040800
    ctx->pc = 0x2331c4u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x2331c8: 0xc7a00004
    ctx->pc = 0x2331c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2331cc: 0x42023
    ctx->pc = 0x2331ccu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x2331d0: 0x46000064
    ctx->pc = 0x2331d0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2331d4: 0x44050800
    ctx->pc = 0x2331d4u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x2331d8: 0x24060007
    ctx->pc = 0x2331d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x2331dc: 0x3c0700ff
    ctx->pc = 0x2331dcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x2331e0: 0x34e7ffff
    ctx->pc = 0x2331e0u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2331e4: 0x3c013f00
    ctx->pc = 0x2331e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2331e8: 0x44816000
    ctx->pc = 0x2331e8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2331ec: 0xc080510
    ctx->pc = 0x2331ECu;
    SET_GPR_U32(ctx, 31, 0x2331F4u);
    ctx->pc = 0x2331F0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x201440u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawTextScaled_0x201440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331F4u; }
    }
    if (ctx->pc != 0x2331F4u) { return; }
    ctx->pc = 0x2331F4u;
    // 0x2331f4: 0xdfbf0020
    ctx->pc = 0x2331f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2331f8: 0x3e00008
    ctx->pc = 0x2331F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2331FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233180u: goto label_233180;
            case 0x23319Cu: goto label_23319c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233200u;
}
