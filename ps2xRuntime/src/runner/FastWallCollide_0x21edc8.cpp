#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FastWallCollide
// Address: 0x21edc8 - 0x21ee8c
void FastWallCollide_0x21edc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21edc8u;

    // 0x21edc8: 0x27bdffd0
    ctx->pc = 0x21edc8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21edcc: 0xffbf0020
    ctx->pc = 0x21edccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21edd0: 0xffb10010
    ctx->pc = 0x21edd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21edd4: 0xffb00000
    ctx->pc = 0x21edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21edd8: 0xc0802d
    ctx->pc = 0x21edd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eddc: 0xe0402d
    ctx->pc = 0x21eddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ede0: 0x3c030032
    ctx->pc = 0x21ede0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21ede4: 0x24020020
    ctx->pc = 0x21ede4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x21ede8: 0x12000003
    ctx->pc = 0x21EDE8u;
    {
        const bool branch_taken_0x21ede8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EDECu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966588), GPR_U32(ctx, 2));
        if (branch_taken_0x21ede8) {
            ctx->pc = 0x21EDF8u;
            goto label_21edf8;
        }
    }
    ctx->pc = 0x21EDF0u;
    // 0x21edf0: 0x24020022
    ctx->pc = 0x21edf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x21edf4: 0xac62fd3c
    ctx->pc = 0x21edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966588), GPR_U32(ctx, 2));
label_21edf8:
    // 0x21edf8: 0x3c020032
    ctx->pc = 0x21edf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21edfc: 0x3c01bf5d
    ctx->pc = 0x21edfcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48989 << 16));
    // 0x21ee00: 0x3421b22d
    ctx->pc = 0x21ee00u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45613));
    // 0x21ee04: 0x44810000
    ctx->pc = 0x21ee04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ee08: 0xe440fd2c
    ctx->pc = 0x21ee08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966572), bits); }
    // 0x21ee0c: 0x3c020032
    ctx->pc = 0x21ee0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21ee10: 0x3c013f5d
    ctx->pc = 0x21ee10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16221 << 16));
    // 0x21ee14: 0x3421b22d
    ctx->pc = 0x21ee14u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 45613));
    // 0x21ee18: 0x44810000
    ctx->pc = 0x21ee18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21ee1c: 0xe440fd30
    ctx->pc = 0x21ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966576), bits); }
    // 0x21ee20: 0x3c110032
    ctx->pc = 0x21ee20u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x21ee24: 0x2626fc00
    ctx->pc = 0x21ee24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294966272));
    // 0x21ee28: 0x3c013dcc
    ctx->pc = 0x21ee28u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x21ee2c: 0x3421cccd
    ctx->pc = 0x21ee2cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x21ee30: 0x44816000
    ctx->pc = 0x21ee30u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x21ee34: 0xc087866
    ctx->pc = 0x21EE34u;
    SET_GPR_U32(ctx, 31, 0x21EE3Cu);
    ctx->pc = 0x21EE38u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 314));
    ctx->pc = 0x21E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldCollide_0x21e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE3Cu; }
    }
    if (ctx->pc != 0x21EE3Cu) { return; }
    ctx->pc = 0x21EE3Cu;
    // 0x21ee3c: 0x1200000d
    ctx->pc = 0x21EE3Cu;
    {
        const bool branch_taken_0x21ee3c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EE40u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21ee3c) {
            ctx->pc = 0x21EE74u;
            goto label_21ee74;
        }
    }
    ctx->pc = 0x21EE44u;
    // 0x21ee44: 0x10600008
    ctx->pc = 0x21EE44u;
    {
        const bool branch_taken_0x21ee44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EE48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294966272));
        if (branch_taken_0x21ee44) {
            ctx->pc = 0x21EE68u;
            goto label_21ee68;
        }
    }
    ctx->pc = 0x21EE4Cu;
    // 0x21ee4c: 0xc4400030
    ctx->pc = 0x21ee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ee50: 0xe6000000
    ctx->pc = 0x21ee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x21ee54: 0xc4400034
    ctx->pc = 0x21ee54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ee58: 0xe6000004
    ctx->pc = 0x21ee58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x21ee5c: 0xc4400038
    ctx->pc = 0x21ee5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ee60: 0x10000004
    ctx->pc = 0x21EE60u;
    {
        const bool branch_taken_0x21ee60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21EE64u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x21ee60) {
            ctx->pc = 0x21EE74u;
            goto label_21ee74;
        }
    }
    ctx->pc = 0x21EE68u;
label_21ee68:
    // 0x21ee68: 0xae000000
    ctx->pc = 0x21ee68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x21ee6c: 0xae000004
    ctx->pc = 0x21ee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x21ee70: 0xae000008
    ctx->pc = 0x21ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_21ee74:
    // 0x21ee74: 0x3102b
    ctx->pc = 0x21ee74u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x21ee78: 0xdfbf0020
    ctx->pc = 0x21ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ee7c: 0xdfb10010
    ctx->pc = 0x21ee7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ee80: 0xdfb00000
    ctx->pc = 0x21ee80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ee84: 0x3e00008
    ctx->pc = 0x21EE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EE88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21EDF8u: goto label_21edf8;
            case 0x21EE68u: goto label_21ee68;
            case 0x21EE74u: goto label_21ee74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21EE8Cu;
}
