#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calc_wizard_pos
// Address: 0x2658f8 - 0x2659f8
void calc_wizard_pos_0x2658f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2658f8u;

    // 0x2658f8: 0x3c013f80
    ctx->pc = 0x2658f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2658fc: 0x44811000
    ctx->pc = 0x2658fcu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x265900: 0x3c020036
    ctx->pc = 0x265900u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x265904: 0x2443d940
    ctx->pc = 0x265904u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x265908: 0xc440d940
    ctx->pc = 0x265908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26590c: 0xe4800000
    ctx->pc = 0x26590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265910: 0xc4600004
    ctx->pc = 0x265910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265914: 0xe4800004
    ctx->pc = 0x265914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x265918: 0xc4600008
    ctx->pc = 0x265918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26591c: 0xe4800008
    ctx->pc = 0x26591cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x265920: 0x182d
    ctx->pc = 0x265920u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265924: 0x3c020032
    ctx->pc = 0x265924u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x265928: 0x24491bc0
    ctx->pc = 0x265928u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x26592c: 0x24052b00
    ctx->pc = 0x26592cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x265930: 0x24070001
    ctx->pc = 0x265930u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x265934: 0x24060008
    ctx->pc = 0x265934u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x265938: 0x460010c6
    ctx->pc = 0x265938u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
    // 0x26593c: 0x654018
    ctx->pc = 0x26593cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_265940:
    // 0x265940: 0x1091021
    ctx->pc = 0x265940u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x265944: 0x8c4200fc
    ctx->pc = 0x265944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x265948: 0x10470004
    ctx->pc = 0x265948u;
    {
        const bool branch_taken_0x265948 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        ctx->pc = 0x26594Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x265948) {
            ctx->pc = 0x26595Cu;
            goto label_26595c;
        }
    }
    ctx->pc = 0x265950u;
    // 0x265950: 0x54460017
    ctx->pc = 0x265950u;
    {
        const bool branch_taken_0x265950 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x265950) {
            ctx->pc = 0x265954u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x2659B0u;
            goto label_2659b0;
        }
    }
    ctx->pc = 0x265958u;
    // 0x265958: 0x654018
    ctx->pc = 0x265958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_26595c:
    // 0x26595c: 0x1091021
    ctx->pc = 0x26595cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x265960: 0xc4400050
    ctx->pc = 0x265960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265964: 0xc4810000
    ctx->pc = 0x265964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265968: 0x46010000
    ctx->pc = 0x265968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26596c: 0xe4800000
    ctx->pc = 0x26596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x265970: 0xc4400054
    ctx->pc = 0x265970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265974: 0xc4810004
    ctx->pc = 0x265974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265978: 0x46010000
    ctx->pc = 0x265978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26597c: 0xe4800004
    ctx->pc = 0x26597cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x265980: 0xc4400058
    ctx->pc = 0x265980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265984: 0xc4810008
    ctx->pc = 0x265984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265988: 0x46010000
    ctx->pc = 0x265988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26598c: 0x46031032
    ctx->pc = 0x26598cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265990: 0x0
    ctx->pc = 0x265990u;
    // NOP
    // 0x265994: 0x45000004
    ctx->pc = 0x265994u;
    {
        const bool branch_taken_0x265994 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x265998u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        if (branch_taken_0x265994) {
            ctx->pc = 0x2659A8u;
            goto label_2659a8;
        }
    }
    ctx->pc = 0x26599Cu;
    // 0x26599c: 0xc4400054
    ctx->pc = 0x26599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2659a0: 0x46000000
    ctx->pc = 0x2659a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2659a4: 0xe4800004
    ctx->pc = 0x2659a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2659a8:
    // 0x2659a8: 0x46031080
    ctx->pc = 0x2659a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x2659ac: 0x24630001
    ctx->pc = 0x2659acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2659b0:
    // 0x2659b0: 0x28620004
    ctx->pc = 0x2659b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x2659b4: 0x5440ffe2
    ctx->pc = 0x2659B4u;
    {
        const bool branch_taken_0x2659b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2659b4) {
            ctx->pc = 0x2659B8u;
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x265940u;
            goto label_265940;
        }
    }
    ctx->pc = 0x2659BCu;
    // 0x2659bc: 0x182d
    ctx->pc = 0x2659bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2659c0: 0x31080
    ctx->pc = 0x2659c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2659c4: 0x0
    ctx->pc = 0x2659c4u;
    // NOP
label_2659c8:
    // 0x2659c8: 0x441021
    ctx->pc = 0x2659c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2659cc: 0xc4400000
    ctx->pc = 0x2659ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2659d0: 0x0
    ctx->pc = 0x2659d0u;
    // NOP
    // 0x2659d4: 0x0
    ctx->pc = 0x2659d4u;
    // NOP
    // 0x2659d8: 0x46020003
    ctx->pc = 0x2659d8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2659dc: 0xe4400000
    ctx->pc = 0x2659dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2659e0: 0x24630001
    ctx->pc = 0x2659e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2659e4: 0x28620003
    ctx->pc = 0x2659e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x2659e8: 0x1440fff7
    ctx->pc = 0x2659E8u;
    {
        const bool branch_taken_0x2659e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2659ECu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x2659e8) {
            ctx->pc = 0x2659C8u;
            goto label_2659c8;
        }
    }
    ctx->pc = 0x2659F0u;
    // 0x2659f0: 0x3e00008
    ctx->pc = 0x2659F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265940u: goto label_265940;
            case 0x26595Cu: goto label_26595c;
            case 0x2659A8u: goto label_2659a8;
            case 0x2659B0u: goto label_2659b0;
            case 0x2659C8u: goto label_2659c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2659F8u;
}
