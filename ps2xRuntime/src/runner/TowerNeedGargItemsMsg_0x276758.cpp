#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: TowerNeedGargItemsMsg
// Address: 0x276758 - 0x2767f4
void TowerNeedGargItemsMsg_0x276758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276758u;

    // 0x276758: 0x27bdffb0
    ctx->pc = 0x276758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27675c: 0xffbf0040
    ctx->pc = 0x27675cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x276760: 0xffb30030
    ctx->pc = 0x276760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x276764: 0xffb20020
    ctx->pc = 0x276764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x276768: 0xffb10010
    ctx->pc = 0x276768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27676c: 0xffb00000
    ctx->pc = 0x27676cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x276770: 0xa0802d
    ctx->pc = 0x276770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276774: 0x3c02003c
    ctx->pc = 0x276774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x276778: 0x24423a30
    ctx->pc = 0x276778u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 14896));
    // 0x27677c: 0x101880
    ctx->pc = 0x27677cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x276780: 0x628821
    ctx->pc = 0x276780u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x276784: 0x3c130031
    ctx->pc = 0x276784u;
    SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
    // 0x276788: 0xc6210000
    ctx->pc = 0x276788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27678c: 0xc660ffa4
    ctx->pc = 0x27678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276790: 0x46000834
    ctx->pc = 0x276790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276794: 0x0
    ctx->pc = 0x276794u;
    // NOP
    // 0x276798: 0x4500000f
    ctx->pc = 0x276798u;
    {
        const bool branch_taken_0x276798 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27679Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276798) {
            ctx->pc = 0x2767D8u;
            goto label_2767d8;
        }
    }
    ctx->pc = 0x2767A0u;
    // 0x2767a0: 0x202d
    ctx->pc = 0x2767a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767a4: 0x3c05003b
    ctx->pc = 0x2767a4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2767a8: 0xc080726
    ctx->pc = 0x2767A8u;
    SET_GPR_U32(ctx, 31, 0x2767B0u);
    ctx->pc = 0x2767ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294945272));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2767B0u; }
    }
    if (ctx->pc != 0x2767B0u) { return; }
    ctx->pc = 0x2767B0u;
    // 0x2767b0: 0x240202d
    ctx->pc = 0x2767b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767b4: 0x40282d
    ctx->pc = 0x2767b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767b8: 0x200302d
    ctx->pc = 0x2767b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2767bc: 0xc08a0b4
    ctx->pc = 0x2767BCu;
    SET_GPR_U32(ctx, 31, 0x2767C4u);
    ctx->pc = 0x2767C0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2767C4u; }
    }
    if (ctx->pc != 0x2767C4u) { return; }
    ctx->pc = 0x2767C4u;
    // 0x2767c4: 0xc660ffa4
    ctx->pc = 0x2767c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2767c8: 0x3c014120
    ctx->pc = 0x2767c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2767cc: 0x44810800
    ctx->pc = 0x2767ccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2767d0: 0x46010000
    ctx->pc = 0x2767d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2767d4: 0xe6200000
    ctx->pc = 0x2767d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2767d8:
    // 0x2767d8: 0xdfbf0040
    ctx->pc = 0x2767d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2767dc: 0xdfb30030
    ctx->pc = 0x2767dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2767e0: 0xdfb20020
    ctx->pc = 0x2767e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2767e4: 0xdfb10010
    ctx->pc = 0x2767e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2767e8: 0xdfb00000
    ctx->pc = 0x2767e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2767ec: 0x3e00008
    ctx->pc = 0x2767ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2767F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2767D8u: goto label_2767d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2767F4u;
}
