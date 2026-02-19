#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FloorCollide
// Address: 0x21ec90 - 0x21ed70
void FloorCollide_0x21ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ec90u;

    // 0x21ec90: 0x27bdffd0
    ctx->pc = 0x21ec90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ec94: 0xffbf0020
    ctx->pc = 0x21ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ec98: 0xa0482d
    ctx->pc = 0x21ec98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec9c: 0xe0402d
    ctx->pc = 0x21ec9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eca0: 0x40024800
    ctx->pc = 0x21eca0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_count);
    // 0x21eca4: 0x3c03003a
    ctx->pc = 0x21eca4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x21eca8: 0x8c6321d0
    ctx->pc = 0x21eca8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8656)));
    // 0x21ecac: 0x15200003
    ctx->pc = 0x21ECACu;
    {
        const bool branch_taken_0x21ecac = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x21ECB0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
        if (branch_taken_0x21ecac) {
            ctx->pc = 0x21ECBCu;
            goto label_21ecbc;
        }
    }
    ctx->pc = 0x21ECB4u;
    // 0x21ecb4: 0x3c020032
    ctx->pc = 0x21ecb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ecb8: 0x2449fbb0
    ctx->pc = 0x21ecb8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294966192));
label_21ecbc:
    // 0x21ecbc: 0xad200044
    ctx->pc = 0x21ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 68), GPR_U32(ctx, 0));
    // 0x21ecc0: 0xc4820000
    ctx->pc = 0x21ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21ecc4: 0xe7a20000
    ctx->pc = 0x21ecc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21ecc8: 0xc4810004
    ctx->pc = 0x21ecc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eccc: 0xc4800008
    ctx->pc = 0x21ecccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ecd0: 0xe7a00008
    ctx->pc = 0x21ecd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21ecd4: 0xe7a20010
    ctx->pc = 0x21ecd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21ecd8: 0xe7a00018
    ctx->pc = 0x21ecd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x21ecdc: 0x46016800
    ctx->pc = 0x21ecdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x21ece0: 0xe7a00004
    ctx->pc = 0x21ece0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21ece4: 0x46017040
    ctx->pc = 0x21ece4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[14], ctx->f[1]);
    // 0x21ece8: 0xe7a10014
    ctx->pc = 0x21ece8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x21ecec: 0x3c030032
    ctx->pc = 0x21ececu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21ecf0: 0x24020007
    ctx->pc = 0x21ecf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x21ecf4: 0x10c00003
    ctx->pc = 0x21ECF4u;
    {
        const bool branch_taken_0x21ecf4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x21ECF8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966588), GPR_U32(ctx, 2));
        if (branch_taken_0x21ecf4) {
            ctx->pc = 0x21ED04u;
            goto label_21ed04;
        }
    }
    ctx->pc = 0x21ECFCu;
    // 0x21ecfc: 0x24020017
    ctx->pc = 0x21ecfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 23));
    // 0x21ed00: 0xac62fd3c
    ctx->pc = 0x21ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966588), GPR_U32(ctx, 2));
label_21ed04:
    // 0x21ed04: 0x3c020032
    ctx->pc = 0x21ed04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ed08: 0x3c013f00
    ctx->pc = 0x21ed08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x21ed0c: 0x44810000
    ctx->pc = 0x21ed0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ed10: 0xe440fd2c
    ctx->pc = 0x21ed10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966572), bits); }
    // 0x21ed14: 0x3c020032
    ctx->pc = 0x21ed14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ed18: 0x3c014000
    ctx->pc = 0x21ed18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x21ed1c: 0x44810000
    ctx->pc = 0x21ed1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ed20: 0xe440fd30
    ctx->pc = 0x21ed20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966576), bits); }
    // 0x21ed24: 0x3a0202d
    ctx->pc = 0x21ed24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed28: 0x27a50010
    ctx->pc = 0x21ed28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    // 0x21ed2c: 0x120302d
    ctx->pc = 0x21ed2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed30: 0xc087866
    ctx->pc = 0x21ED30u;
    SET_GPR_U32(ctx, 31, 0x21ED38u);
    ctx->pc = 0x21ED34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 572));
    ctx->pc = 0x21E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldCollide_0x21e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED38u; }
    }
    if (ctx->pc != 0x21ED38u) { return; }
    ctx->pc = 0x21ED38u;
    // 0x21ed38: 0x40044800
    ctx->pc = 0x21ed38u;
    SET_GPR_U32(ctx, 4, ctx->cop0_count);
    // 0x21ed3c: 0x3c03003a
    ctx->pc = 0x21ed3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x21ed40: 0x8c6521d0
    ctx->pc = 0x21ed40u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 8656)));
    // 0x21ed44: 0x8ca300f8
    ctx->pc = 0x21ed44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 248)));
    // 0x21ed48: 0x832023
    ctx->pc = 0x21ed48u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21ed4c: 0x8ca300f0
    ctx->pc = 0x21ed4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x21ed50: 0x832021
    ctx->pc = 0x21ed50u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21ed54: 0xaca400f0
    ctx->pc = 0x21ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 4));
    // 0x21ed58: 0x8ca300f4
    ctx->pc = 0x21ed58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x21ed5c: 0x24630001
    ctx->pc = 0x21ed5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21ed60: 0xaca300f4
    ctx->pc = 0x21ed60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 3));
    // 0x21ed64: 0xdfbf0020
    ctx->pc = 0x21ed64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ed68: 0x3e00008
    ctx->pc = 0x21ED68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ED6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21ECBCu: goto label_21ecbc;
            case 0x21ED04u: goto label_21ed04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21ED70u;
}
