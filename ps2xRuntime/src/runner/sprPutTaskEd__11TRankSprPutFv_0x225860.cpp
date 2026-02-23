#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sprPutTaskEd__11TRankSprPutFv
// Address: 0x225860 - 0x2258cc
void sprPutTaskEd__11TRankSprPutFv_0x225860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sprPutTaskEd__11TRankSprPutFv");


    ctx->pc = 0x225860u;

    // 0x225860: 0x27bdffe0
    ctx->pc = 0x225860u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225864: 0x7fbf0010
    ctx->pc = 0x225864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x225868: 0x7fb00000
    ctx->pc = 0x225868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22586c: 0x8c830088
    ctx->pc = 0x22586cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x225870: 0x10600003
    ctx->pc = 0x225870u;
    {
        const bool branch_taken_0x225870 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x225874u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x225870) {
            ctx->pc = 0x225880u;
            goto label_225880;
        }
    }
    ctx->pc = 0x225878u;
    // 0x225878: 0xc085bd8
    ctx->pc = 0x225878u;
    SET_GPR_U32(ctx, 31, 0x225880u);
    ctx->pc = 0x22587Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225880u; }
        else if (ctx->pc != 0x225880u) { ctx->pc = 0x225880u; }
    }
    if (ctx->pc != 0x225880u) { return; }
    ctx->pc = 0x225880u;
label_225880:
    // 0x225880: 0xc6010074
    ctx->pc = 0x225880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225884: 0x44800000
    ctx->pc = 0x225884u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x225888: 0x0
    ctx->pc = 0x225888u;
    // NOP
    // 0x22588c: 0x46000836
    ctx->pc = 0x22588cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x225890: 0x0
    ctx->pc = 0x225890u;
    // NOP
    // 0x225894: 0x45010007
    ctx->pc = 0x225894u;
    {
        const bool branch_taken_0x225894 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x225898u;
        SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
        if (branch_taken_0x225894) {
            ctx->pc = 0x2258B4u;
            goto label_2258b4;
        }
    }
    ctx->pc = 0x22589Cu;
    // 0x22589c: 0x3463cccd
    ctx->pc = 0x22589cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x2258a0: 0x44830000
    ctx->pc = 0x2258a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2258a4: 0x0
    ctx->pc = 0x2258a4u;
    // NOP
    // 0x2258a8: 0x46000801
    ctx->pc = 0x2258a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2258ac: 0x10000003
    ctx->pc = 0x2258ACu;
    {
        const bool branch_taken_0x2258ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2258B0u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        if (branch_taken_0x2258ac) {
            ctx->pc = 0x2258BCu;
            goto label_2258bc;
        }
    }
    ctx->pc = 0x2258B4u;
label_2258b4:
    // 0x2258b4: 0xc06898c
    ctx->pc = 0x2258B4u;
    SET_GPR_U32(ctx, 31, 0x2258BCu);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2258BCu; }
        else if (ctx->pc != 0x2258BCu) { ctx->pc = 0x2258BCu; }
    }
    if (ctx->pc != 0x2258BCu) { return; }
    ctx->pc = 0x2258BCu;
label_2258bc:
    // 0x2258bc: 0x7bbf0010
    ctx->pc = 0x2258bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2258c0: 0x7bb00000
    ctx->pc = 0x2258c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2258c4: 0x3e00008
    ctx->pc = 0x2258C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2258C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225880u: goto label_225880;
            case 0x2258B4u: goto label_2258b4;
            case 0x2258BCu: goto label_2258bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2258CCu;
}
