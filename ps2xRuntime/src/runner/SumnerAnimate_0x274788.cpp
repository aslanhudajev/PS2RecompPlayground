#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerAnimate
// Address: 0x274788 - 0x274824
void SumnerAnimate_0x274788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274788u;

    // 0x274788: 0x27bdffe0
    ctx->pc = 0x274788u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27478c: 0xffbf0010
    ctx->pc = 0x27478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274790: 0xffb00000
    ctx->pc = 0x274790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x274794: 0x3c020034
    ctx->pc = 0x274794u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x274798: 0x8c42fba8
    ctx->pc = 0x274798u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966184)));
    // 0x27479c: 0x10400012
    ctx->pc = 0x27479Cu;
    {
        const bool branch_taken_0x27479c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2747A0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x27479c) {
            ctx->pc = 0x2747E8u;
            goto label_2747e8;
        }
    }
    ctx->pc = 0x2747A4u;
    // 0x2747a4: 0x3c020034
    ctx->pc = 0x2747a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2747a8: 0x8c42fbac
    ctx->pc = 0x2747a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966188)));
    // 0x2747ac: 0x24060002
    ctx->pc = 0x2747acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2747b0: 0x3c040034
    ctx->pc = 0x2747b0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2747b4: 0x2484fc40
    ctx->pc = 0x2747b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966336));
    // 0x2747b8: 0x8e05fc88
    ctx->pc = 0x2747b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294966408)));
    // 0x2747bc: 0xc084a96
    ctx->pc = 0x2747BCu;
    SET_GPR_U32(ctx, 31, 0x2747C4u);
    ctx->pc = 0x2747C0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 0));
    ctx->pc = 0x212A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateATree_0x212a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2747C4u; }
    }
    if (ctx->pc != 0x2747C4u) { return; }
    ctx->pc = 0x2747C4u;
    // 0x2747c4: 0x10400008
    ctx->pc = 0x2747C4u;
    {
        const bool branch_taken_0x2747c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2747C8u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294966408)));
        if (branch_taken_0x2747c4) {
            ctx->pc = 0x2747E8u;
            goto label_2747e8;
        }
    }
    ctx->pc = 0x2747CCu;
    // 0x2747cc: 0x24420001
    ctx->pc = 0x2747ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2747d0: 0xae02fc88
    ctx->pc = 0x2747d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966408), GPR_U32(ctx, 2));
    // 0x2747d4: 0x28420003
    ctx->pc = 0x2747d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2747d8: 0x50400001
    ctx->pc = 0x2747D8u;
    {
        const bool branch_taken_0x2747d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2747d8) {
            ctx->pc = 0x2747DCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294966408), GPR_U32(ctx, 0));
            ctx->pc = 0x2747E0u;
            goto label_2747e0;
        }
    }
    ctx->pc = 0x2747E0u;
label_2747e0:
    // 0x2747e0: 0x3c020034
    ctx->pc = 0x2747e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2747e4: 0xac40fbac
    ctx->pc = 0x2747e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966188), GPR_U32(ctx, 0));
label_2747e8:
    // 0x2747e8: 0x3c020034
    ctx->pc = 0x2747e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2747ec: 0x8c42fbbc
    ctx->pc = 0x2747ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966204)));
    // 0x2747f0: 0x10400009
    ctx->pc = 0x2747F0u;
    {
        const bool branch_taken_0x2747f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2747F4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2747f0) {
            ctx->pc = 0x274818u;
            goto label_274818;
        }
    }
    ctx->pc = 0x2747F8u;
    // 0x2747f8: 0x3c020034
    ctx->pc = 0x2747f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2747fc: 0x3c040034
    ctx->pc = 0x2747fcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x274800: 0x2484fc90
    ctx->pc = 0x274800u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294966416));
    // 0x274804: 0x8c45fcd8
    ctx->pc = 0x274804u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294966488)));
    // 0x274808: 0x302d
    ctx->pc = 0x274808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27480c: 0xdfb00000
    ctx->pc = 0x27480cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274810: 0x8084a96
    ctx->pc = 0x274810u;
    ctx->pc = 0x274814u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x212A58u;
    AnimateATree_0x212a58(rdram, ctx, runtime); return;
    ctx->pc = 0x274818u;
label_274818:
    // 0x274818: 0xdfb00000
    ctx->pc = 0x274818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27481c: 0x3e00008
    ctx->pc = 0x27481Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2747E0u: goto label_2747e0;
            case 0x2747E8u: goto label_2747e8;
            case 0x274818u: goto label_274818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274824u;
}
