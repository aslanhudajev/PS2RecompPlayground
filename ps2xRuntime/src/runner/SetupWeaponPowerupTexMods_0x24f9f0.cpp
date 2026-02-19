#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetupWeaponPowerupTexMods
// Address: 0x24f9f0 - 0x24fa54
void SetupWeaponPowerupTexMods_0x24f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f9f0u;

    // 0x24f9f0: 0x27bdffe0
    ctx->pc = 0x24f9f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24f9f4: 0xffbf0010
    ctx->pc = 0x24f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24f9f8: 0xffb00000
    ctx->pc = 0x24f9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24f9fc: 0x3c020034
    ctx->pc = 0x24f9fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fa00: 0x8c44cda8
    ctx->pc = 0x24fa00u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954408)));
    // 0x24fa04: 0x10800003
    ctx->pc = 0x24FA04u;
    {
        const bool branch_taken_0x24fa04 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FA08u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x24fa04) {
            ctx->pc = 0x24FA14u;
            goto label_24fa14;
        }
    }
    ctx->pc = 0x24FA0Cu;
    // 0x24fa0c: 0xc084c42
    ctx->pc = 0x24FA0Cu;
    SET_GPR_U32(ctx, 31, 0x24FA14u);
    ctx->pc = 0x24FA10u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 18800)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA14u; }
    }
    if (ctx->pc != 0x24FA14u) { return; }
    ctx->pc = 0x24FA14u;
label_24fa14:
    // 0x24fa14: 0x3c020034
    ctx->pc = 0x24fa14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24fa18: 0x8c44cdac
    ctx->pc = 0x24fa18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954412)));
    // 0x24fa1c: 0x10800003
    ctx->pc = 0x24FA1Cu;
    {
        const bool branch_taken_0x24fa1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24FA20u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x24fa1c) {
            ctx->pc = 0x24FA2Cu;
            goto label_24fa2c;
        }
    }
    ctx->pc = 0x24FA24u;
    // 0x24fa24: 0xc084c42
    ctx->pc = 0x24FA24u;
    SET_GPR_U32(ctx, 31, 0x24FA2Cu);
    ctx->pc = 0x24FA28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 18804)));
    ctx->pc = 0x213108u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitTexMods_0x213108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA2Cu; }
    }
    if (ctx->pc != 0x24FA2Cu) { return; }
    ctx->pc = 0x24FA2Cu;
label_24fa2c:
    // 0x24fa2c: 0x802d
    ctx->pc = 0x24fa2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24fa30:
    // 0x24fa30: 0xc08bc64
    ctx->pc = 0x24FA30u;
    SET_GPR_U32(ctx, 31, 0x24FA38u);
    ctx->pc = 0x24FA34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22F190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetupPlayerTexMods_0x22f190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24FA38u; }
    }
    if (ctx->pc != 0x24FA38u) { return; }
    ctx->pc = 0x24FA38u;
    // 0x24fa38: 0x26100001
    ctx->pc = 0x24fa38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x24fa3c: 0x2a020004
    ctx->pc = 0x24fa3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x24fa40: 0x1440fffb
    ctx->pc = 0x24FA40u;
    {
        const bool branch_taken_0x24fa40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24FA44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x24fa40) {
            ctx->pc = 0x24FA30u;
            goto label_24fa30;
        }
    }
    ctx->pc = 0x24FA48u;
    // 0x24fa48: 0xdfb00000
    ctx->pc = 0x24fa48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24fa4c: 0x3e00008
    ctx->pc = 0x24FA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FA50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24FA14u: goto label_24fa14;
            case 0x24FA2Cu: goto label_24fa2c;
            case 0x24FA30u: goto label_24fa30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24FA54u;
}
