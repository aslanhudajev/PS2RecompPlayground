#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterCollideCritters
// Address: 0x29da90 - 0x29db4c
void CritterCollideCritters_0x29da90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29da90u;

    // 0x29da90: 0x27bdffa0
    ctx->pc = 0x29da90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29da94: 0xffbf0040
    ctx->pc = 0x29da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29da98: 0xffb10030
    ctx->pc = 0x29da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x29da9c: 0xffb00020
    ctx->pc = 0x29da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x29daa0: 0xe7b40050
    ctx->pc = 0x29daa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x29daa4: 0x80182d
    ctx->pc = 0x29daa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29daa8: 0xa0882d
    ctx->pc = 0x29daa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29daac: 0x24700060
    ctx->pc = 0x29daacu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 96));
    // 0x29dab0: 0x8c620004
    ctx->pc = 0x29dab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29dab4: 0xc454007c
    ctx->pc = 0x29dab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29dab8: 0xc4600060
    ctx->pc = 0x29dab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dabc: 0xc6210000
    ctx->pc = 0x29dabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dac0: 0x46010000
    ctx->pc = 0x29dac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29dac4: 0xe7a00000
    ctx->pc = 0x29dac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29dac8: 0xc6000004
    ctx->pc = 0x29dac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dacc: 0xc6210004
    ctx->pc = 0x29daccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dad0: 0x46010000
    ctx->pc = 0x29dad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29dad4: 0xe7a00004
    ctx->pc = 0x29dad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29dad8: 0xc6000008
    ctx->pc = 0x29dad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dadc: 0xc6210008
    ctx->pc = 0x29dadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dae0: 0x46010000
    ctx->pc = 0x29dae0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29dae4: 0xe7a00008
    ctx->pc = 0x29dae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29dae8: 0x3a0202d
    ctx->pc = 0x29dae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29daec: 0x4600a306
    ctx->pc = 0x29daecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29daf0: 0xc0a684c
    ctx->pc = 0x29DAF0u;
    SET_GPR_U32(ctx, 31, 0x29DAF8u);
    ctx->pc = 0x29DAF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29A130u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCollideStart_0x29a130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DAF8u; }
    }
    if (ctx->pc != 0x29DAF8u) { return; }
    ctx->pc = 0x29DAF8u;
    // 0x29daf8: 0x200202d
    ctx->pc = 0x29daf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dafc: 0x3a0282d
    ctx->pc = 0x29dafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db00: 0x27a60010
    ctx->pc = 0x29db00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x29db04: 0x4600a306
    ctx->pc = 0x29db04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x29db08: 0x2407ffff
    ctx->pc = 0x29db08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29db0c: 0x44806800
    ctx->pc = 0x29db0cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x29db10: 0xc0a6a5c
    ctx->pc = 0x29DB10u;
    SET_GPR_U32(ctx, 31, 0x29DB18u);
    ctx->pc = 0x29DB14u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29A970u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterLineCollide_0x29a970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DB18u; }
    }
    if (ctx->pc != 0x29DB18u) { return; }
    ctx->pc = 0x29DB18u;
    // 0x29db18: 0x10400005
    ctx->pc = 0x29DB18u;
    {
        const bool branch_taken_0x29db18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29DB1Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29db18) {
            ctx->pc = 0x29DB30u;
            goto label_29db30;
        }
    }
    ctx->pc = 0x29DB20u;
    // 0x29db20: 0x44800000
    ctx->pc = 0x29db20u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29db24: 0xe6200008
    ctx->pc = 0x29db24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x29db28: 0x10000002
    ctx->pc = 0x29DB28u;
    {
        const bool branch_taken_0x29db28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29DB2Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x29db28) {
            ctx->pc = 0x29DB34u;
            goto label_29db34;
        }
    }
    ctx->pc = 0x29DB30u;
label_29db30:
    // 0x29db30: 0x102d
    ctx->pc = 0x29db30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29db34:
    // 0x29db34: 0xdfbf0040
    ctx->pc = 0x29db34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29db38: 0xdfb10030
    ctx->pc = 0x29db38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29db3c: 0xdfb00020
    ctx->pc = 0x29db3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29db40: 0xc7b40050
    ctx->pc = 0x29db40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29db44: 0x3e00008
    ctx->pc = 0x29DB44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DB48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DB30u: goto label_29db30;
            case 0x29DB34u: goto label_29db34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DB4Cu;
}
