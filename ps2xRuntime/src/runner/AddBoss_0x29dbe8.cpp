#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddBoss
// Address: 0x29dbe8 - 0x29dc5c
void AddBoss_0x29dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29dbe8u;

    // 0x29dbe8: 0x27bdffd0
    ctx->pc = 0x29dbe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29dbec: 0xffbf0020
    ctx->pc = 0x29dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29dbf0: 0xffb10010
    ctx->pc = 0x29dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29dbf4: 0xffb00000
    ctx->pc = 0x29dbf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29dbf8: 0x80802d
    ctx->pc = 0x29dbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbfc: 0x3c110036
    ctx->pc = 0x29dbfcu;
    SET_GPR_U32(ctx, 17, ((uint32_t)54 << 16));
    // 0x29dc00: 0xae20d930
    ctx->pc = 0x29dc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294957360), GPR_U32(ctx, 0));
    // 0x29dc04: 0x3c020036
    ctx->pc = 0x29dc04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29dc08: 0x2443d940
    ctx->pc = 0x29dc08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294957376));
    // 0x29dc0c: 0xc6000030
    ctx->pc = 0x29dc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dc10: 0xe440d940
    ctx->pc = 0x29dc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294957376), bits); }
    // 0x29dc14: 0xc6000034
    ctx->pc = 0x29dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dc18: 0xe4600004
    ctx->pc = 0x29dc18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x29dc1c: 0xc6000038
    ctx->pc = 0x29dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dc20: 0xe4600008
    ctx->pc = 0x29dc20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x29dc24: 0x24040004
    ctx->pc = 0x29dc24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x29dc28: 0xc0a4974
    ctx->pc = 0x29DC28u;
    SET_GPR_U32(ctx, 31, 0x29DC30u);
    ctx->pc = 0x29DC2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2925D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterTypeLoaded_0x2925d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DC30u; }
    }
    if (ctx->pc != 0x29DC30u) { return; }
    ctx->pc = 0x29DC30u;
    // 0x29dc30: 0x10400005
    ctx->pc = 0x29DC30u;
    {
        const bool branch_taken_0x29dc30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29DC34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x29dc30) {
            ctx->pc = 0x29DC48u;
            goto label_29dc48;
        }
    }
    ctx->pc = 0x29DC38u;
    // 0x29dc38: 0x282d
    ctx->pc = 0x29dc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc3c: 0xc0a4f50
    ctx->pc = 0x29DC3Cu;
    SET_GPR_U32(ctx, 31, 0x29DC44u);
    ctx->pc = 0x29DC40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x293D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterNewInst_0x293d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DC44u; }
    }
    if (ctx->pc != 0x29DC44u) { return; }
    ctx->pc = 0x29DC44u;
    // 0x29dc44: 0xae22d930
    ctx->pc = 0x29dc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294957360), GPR_U32(ctx, 2));
label_29dc48:
    // 0x29dc48: 0xdfbf0020
    ctx->pc = 0x29dc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29dc4c: 0xdfb10010
    ctx->pc = 0x29dc4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29dc50: 0xdfb00000
    ctx->pc = 0x29dc50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29dc54: 0x3e00008
    ctx->pc = 0x29DC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DC48u: goto label_29dc48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DC5Cu;
}
