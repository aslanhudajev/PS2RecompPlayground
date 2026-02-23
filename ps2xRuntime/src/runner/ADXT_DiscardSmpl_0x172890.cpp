#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_DiscardSmpl
// Address: 0x172890 - 0x172924
void ADXT_DiscardSmpl_0x172890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_DiscardSmpl");


    ctx->pc = 0x172890u;

    // 0x172890: 0x27bdffc0
    ctx->pc = 0x172890u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172894: 0xffb10020
    ctx->pc = 0x172894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x172898: 0xffbf0030
    ctx->pc = 0x172898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17289c: 0x80882d
    ctx->pc = 0x17289cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728a0: 0xffb00010
    ctx->pc = 0x1728a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1728a4: 0x82220072
    ctx->pc = 0x1728a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
    // 0x1728a8: 0x10400019
    ctx->pc = 0x1728A8u;
    {
        const bool branch_taken_0x1728a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1728ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1728a8) {
            ctx->pc = 0x172910u;
            goto label_172910;
        }
    }
    ctx->pc = 0x1728B0u;
    // 0x1728b0: 0xc05b6e2
    ctx->pc = 0x1728B0u;
    SET_GPR_U32(ctx, 31, 0x1728B8u);
    ctx->pc = 0x1728B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x16DB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_DiscardData_0x16db88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728B8u; }
        else if (ctx->pc != 0x1728B8u) { ctx->pc = 0x1728B8u; }
    }
    if (ctx->pc != 0x1728B8u) { return; }
    ctx->pc = 0x1728B8u;
    // 0x1728b8: 0xc05c958
    ctx->pc = 0x1728B8u;
    SET_GPR_U32(ctx, 31, 0x1728C0u);
    ctx->pc = 0x1728BCu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x172560u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_ExecServer_0x172560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728C0u; }
        else if (ctx->pc != 0x1728C0u) { ctx->pc = 0x1728C0u; }
    }
    if (ctx->pc != 0x1728C0u) { return; }
    ctx->pc = 0x1728C0u;
    // 0x1728c0: 0x8e24000c
    ctx->pc = 0x1728c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1728c4: 0x3a0282d
    ctx->pc = 0x1728c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728c8: 0xc05b694
    ctx->pc = 0x1728C8u;
    SET_GPR_U32(ctx, 31, 0x1728D0u);
    ctx->pc = 0x1728CCu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x16DA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetTime_0x16da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1728D0u; }
        else if (ctx->pc != 0x1728D0u) { ctx->pc = 0x1728D0u; }
    }
    if (ctx->pc != 0x1728D0u) { return; }
    ctx->pc = 0x1728D0u;
    // 0x1728d0: 0x8fa20004
    ctx->pc = 0x1728d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1728d4: 0xc7a00000
    ctx->pc = 0x1728d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1728d8: 0x46800020
    ctx->pc = 0x1728d8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1728dc: 0xc7828258
    ctx->pc = 0x1728dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1728e0: 0x468010a0
    ctx->pc = 0x1728e0u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x1728e4: 0x8f838120
    ctx->pc = 0x1728e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x1728e8: 0x44820800
    ctx->pc = 0x1728e8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1728ec: 0x46800860
    ctx->pc = 0x1728ecu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1728f0: 0xae2300a0
    ctx->pc = 0x1728f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
    // 0x1728f4: 0x200102d
    ctx->pc = 0x1728f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728f8: 0x0
    ctx->pc = 0x1728f8u;
    // NOP
    // 0x1728fc: 0x0
    ctx->pc = 0x1728fcu;
    // NOP
    // 0x172900: 0x46010003
    ctx->pc = 0x172900u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x172904: 0x46020002
    ctx->pc = 0x172904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x172908: 0x46000064
    ctx->pc = 0x172908u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x17290c: 0xe621009c
    ctx->pc = 0x17290cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
label_172910:
    // 0x172910: 0xdfbf0030
    ctx->pc = 0x172910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172914: 0xdfb10020
    ctx->pc = 0x172914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172918: 0xdfb00010
    ctx->pc = 0x172918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17291c: 0x3e00008
    ctx->pc = 0x17291Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172920u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172910u: goto label_172910;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172924u;
}
