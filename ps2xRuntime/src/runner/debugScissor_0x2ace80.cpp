#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: debugScissor
// Address: 0x2ace80 - 0x2acf68
void debugScissor_0x2ace80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ace80u;

    // 0x2ace80: 0x27bdffc0
    ctx->pc = 0x2ace80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ace84: 0xffbf0030
    ctx->pc = 0x2ace84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ace88: 0xffb00020
    ctx->pc = 0x2ace88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2ace8c: 0x80802d
    ctx->pc = 0x2ace8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ace90: 0x3c020036
    ctx->pc = 0x2ace90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ace94: 0x8c45dee0
    ctx->pc = 0x2ace94u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ace98: 0x3c020037
    ctx->pc = 0x2ace98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ace9c: 0x8c448400
    ctx->pc = 0x2ace9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2acea0: 0x8c820000
    ctx->pc = 0x2acea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2acea4: 0x1040002d
    ctx->pc = 0x2ACEA4u;
    {
        const bool branch_taken_0x2acea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ACEA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2acea4) {
            ctx->pc = 0x2ACF5Cu;
            goto label_2acf5c;
        }
    }
    ctx->pc = 0x2ACEACu;
    // 0x2aceac: 0x8c820008
    ctx->pc = 0x2aceacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2aceb0: 0x10400007
    ctx->pc = 0x2ACEB0u;
    {
        const bool branch_taken_0x2aceb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ACEB4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2aceb0) {
            ctx->pc = 0x2ACED0u;
            goto label_2aced0;
        }
    }
    ctx->pc = 0x2ACEB8u;
    // 0x2aceb8: 0x402d
    ctx->pc = 0x2aceb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acebc: 0x8ca20010
    ctx->pc = 0x2acebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2acec0: 0x8c430020
    ctx->pc = 0x2acec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2acec4: 0x382d
    ctx->pc = 0x2acec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acec8: 0x1000001b
    ctx->pc = 0x2ACEC8u;
    {
        const bool branch_taken_0x2acec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ACECCu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 36)));
        if (branch_taken_0x2acec8) {
            ctx->pc = 0x2ACF38u;
            goto label_2acf38;
        }
    }
    ctx->pc = 0x2ACED0u;
label_2aced0:
    // 0x2aced0: 0x8c428400
    ctx->pc = 0x2aced0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935552)));
    // 0x2aced4: 0xc441000c
    ctx->pc = 0x2aced4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2aced8: 0x44800000
    ctx->pc = 0x2aced8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2acedc: 0x46000832
    ctx->pc = 0x2acedcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2acee0: 0x0
    ctx->pc = 0x2acee0u;
    // NOP
    // 0x2acee4: 0x45010015
    ctx->pc = 0x2ACEE4u;
    {
        const bool branch_taken_0x2acee4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2ACEE8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x2acee4) {
            ctx->pc = 0x2ACF3Cu;
            goto label_2acf3c;
        }
    }
    ctx->pc = 0x2ACEECu;
    // 0x2aceec: 0x3a0202d
    ctx->pc = 0x2aceecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acef0: 0x27a50004
    ctx->pc = 0x2acef0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 4));
    // 0x2acef4: 0x27a60008
    ctx->pc = 0x2acef4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 8));
    // 0x2acef8: 0x27a7000c
    ctx->pc = 0x2acef8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 12));
    // 0x2acefc: 0x27a80010
    ctx->pc = 0x2acefcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 16));
    // 0x2acf00: 0xc0ab364
    ctx->pc = 0x2ACF00u;
    SET_GPR_U32(ctx, 31, 0x2ACF08u);
    ctx->pc = 0x2ACF04u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 20));
    ctx->pc = 0x2ACD90u;
    {
        const uint32_t __entryPc = ctx->pc;
        debugShrink_0x2acd90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACF08u; }
    }
    if (ctx->pc != 0x2ACF08u) { return; }
    ctx->pc = 0x2ACF08u;
    // 0x2acf08: 0xc7a00000
    ctx->pc = 0x2acf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf0c: 0x46000064
    ctx->pc = 0x2acf0cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2acf10: 0x44080800
    ctx->pc = 0x2acf10u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[1]);
    // 0x2acf14: 0xc7a00004
    ctx->pc = 0x2acf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf18: 0x46000064
    ctx->pc = 0x2acf18u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2acf1c: 0x44030800
    ctx->pc = 0x2acf1cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[1]);
    // 0x2acf20: 0xc7a00008
    ctx->pc = 0x2acf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf24: 0x46000064
    ctx->pc = 0x2acf24u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2acf28: 0x44070800
    ctx->pc = 0x2acf28u;
    SET_GPR_U32(ctx, 7, *(uint32_t*)&ctx->f[1]);
    // 0x2acf2c: 0xc7a0000c
    ctx->pc = 0x2acf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2acf30: 0x46000064
    ctx->pc = 0x2acf30u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2acf34: 0x44060800
    ctx->pc = 0x2acf34u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
label_2acf38:
    // 0x2acf38: 0x31c00
    ctx->pc = 0x2acf38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
label_2acf3c:
    // 0x2acf3c: 0x1031825
    ctx->pc = 0x2acf3cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x2acf40: 0xae0301c0
    ctx->pc = 0x2acf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
    // 0x2acf44: 0x61400
    ctx->pc = 0x2acf44u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x2acf48: 0xe21025
    ctx->pc = 0x2acf48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2acf4c: 0xae0201c4
    ctx->pc = 0x2acf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 452), GPR_U32(ctx, 2));
    // 0x2acf50: 0xae0301d0
    ctx->pc = 0x2acf50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 3));
    // 0x2acf54: 0xae0201d4
    ctx->pc = 0x2acf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x2acf58: 0xdfbf0030
    ctx->pc = 0x2acf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2acf5c:
    // 0x2acf5c: 0xdfb00020
    ctx->pc = 0x2acf5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acf60: 0x3e00008
    ctx->pc = 0x2ACF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACF64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ACED0u: goto label_2aced0;
            case 0x2ACF38u: goto label_2acf38;
            case 0x2ACF3Cu: goto label_2acf3c;
            case 0x2ACF5Cu: goto label_2acf5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ACF68u;
}
