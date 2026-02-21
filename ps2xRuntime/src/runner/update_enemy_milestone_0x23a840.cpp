#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: update_enemy_milestone
// Address: 0x23a840 - 0x23a928
void update_enemy_milestone_0x23a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23a840u;

    // 0x23a840: 0x27bdffc0
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23a844: 0xffbf0030
    ctx->pc = 0x23a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x23a848: 0xffb00020
    ctx->pc = 0x23a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23a84c: 0x80802d
    ctx->pc = 0x23a84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a850: 0x8e04035c
    ctx->pc = 0x23a850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 860)));
    // 0x23a854: 0x4800031
    ctx->pc = 0x23A854u;
    {
        const bool branch_taken_0x23a854 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23A858u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x23a854) {
            ctx->pc = 0x23A91Cu;
            goto label_23a91c;
        }
    }
    ctx->pc = 0x23A85Cu;
    // 0x23a85c: 0xc094494
    ctx->pc = 0x23A85Cu;
    SET_GPR_U32(ctx, 31, 0x23A864u);
    ctx->pc = 0x23A860u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x251250u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMilestonePos_0x251250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A864u; }
    }
    if (ctx->pc != 0x23A864u) { return; }
    ctx->pc = 0x23A864u;
    // 0x23a864: 0xc6010040
    ctx->pc = 0x23a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a868: 0xc7a00010
    ctx->pc = 0x23a868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a86c: 0x46000b01
    ctx->pc = 0x23a86cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23a870: 0xe7ac0000
    ctx->pc = 0x23a870u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23a874: 0xc6010044
    ctx->pc = 0x23a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23a878: 0xc7a00014
    ctx->pc = 0x23a878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a87c: 0x46000841
    ctx->pc = 0x23a87cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23a880: 0xe7a10004
    ctx->pc = 0x23a880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23a884: 0xc6020048
    ctx->pc = 0x23a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23a888: 0xc7a00018
    ctx->pc = 0x23a888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23a88c: 0x46001341
    ctx->pc = 0x23a88cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x23a890: 0x46000845
    ctx->pc = 0x23a890u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x23a894: 0x3c014020
    ctx->pc = 0x23a894u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
    // 0x23a898: 0x44810000
    ctx->pc = 0x23a898u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x23a89c: 0x46000834
    ctx->pc = 0x23a89cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a8a0: 0x0
    ctx->pc = 0x23a8a0u;
    // NOP
    // 0x23a8a4: 0x4500001c
    ctx->pc = 0x23A8A4u;
    {
        const bool branch_taken_0x23a8a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A8A8u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        if (branch_taken_0x23a8a4) {
            ctx->pc = 0x23A918u;
            goto label_23a918;
        }
    }
    ctx->pc = 0x23A8ACu;
    // 0x23a8ac: 0xc0b5c34
    ctx->pc = 0x23A8ACu;
    SET_GPR_U32(ctx, 31, 0x23A8B4u);
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A8B4u; }
    }
    if (ctx->pc != 0x23A8B4u) { return; }
    ctx->pc = 0x23A8B4u;
    // 0x23a8b4: 0x3c013fb3
    ctx->pc = 0x23a8b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16307 << 16));
    // 0x23a8b8: 0x34213333
    ctx->pc = 0x23a8b8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13107));
    // 0x23a8bc: 0x44810800
    ctx->pc = 0x23a8bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x23a8c0: 0x46010034
    ctx->pc = 0x23a8c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23a8c4: 0x0
    ctx->pc = 0x23a8c4u;
    // NOP
    // 0x23a8c8: 0x45000014
    ctx->pc = 0x23A8C8u;
    {
        const bool branch_taken_0x23a8c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23A8CCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x23a8c8) {
            ctx->pc = 0x23A91Cu;
            goto label_23a91c;
        }
    }
    ctx->pc = 0x23A8D0u;
    // 0x23a8d0: 0xc08e9ea
    ctx->pc = 0x23A8D0u;
    SET_GPR_U32(ctx, 31, 0x23A8D8u);
    ctx->pc = 0x23A8D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23A7A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adjust_msidx_0x23a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A8D8u; }
    }
    if (ctx->pc != 0x23A8D8u) { return; }
    ctx->pc = 0x23A8D8u;
    // 0x23a8d8: 0x2402ffff
    ctx->pc = 0x23a8d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23a8dc: 0xae02035c
    ctx->pc = 0x23a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 2));
    // 0x23a8e0: 0x8e02037c
    ctx->pc = 0x23a8e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x23a8e4: 0xae020380
    ctx->pc = 0x23a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
    // 0x23a8e8: 0x8e020360
    ctx->pc = 0x23a8e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x23a8ec: 0x18400003
    ctx->pc = 0x23A8ECu;
    {
        const bool branch_taken_0x23a8ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23A8F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x23a8ec) {
            ctx->pc = 0x23A8FCu;
            goto label_23a8fc;
        }
    }
    ctx->pc = 0x23A8F4u;
    // 0x23a8f4: 0xae020360
    ctx->pc = 0x23a8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
    // 0x23a8f8: 0xae020364
    ctx->pc = 0x23a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 2));
label_23a8fc:
    // 0x23a8fc: 0x86030324
    ctx->pc = 0x23a8fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x23a900: 0x2402000a
    ctx->pc = 0x23a900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x23a904: 0x14620005
    ctx->pc = 0x23A904u;
    {
        const bool branch_taken_0x23a904 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23A908u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x23a904) {
            ctx->pc = 0x23A91Cu;
            goto label_23a91c;
        }
    }
    ctx->pc = 0x23A90Cu;
    // 0x23a90c: 0xa6000378
    ctx->pc = 0x23a90cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x23a910: 0xae000368
    ctx->pc = 0x23a910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x23a914: 0xa600037a
    ctx->pc = 0x23a914u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 890), (uint16_t)GPR_U32(ctx, 0));
label_23a918:
    // 0x23a918: 0xdfbf0030
    ctx->pc = 0x23a918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23a91c:
    // 0x23a91c: 0xdfb00020
    ctx->pc = 0x23a91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23a920: 0x3e00008
    ctx->pc = 0x23A920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A924u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23A8FCu: goto label_23a8fc;
            case 0x23A918u: goto label_23a918;
            case 0x23A91Cu: goto label_23a91c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23A928u;
}
