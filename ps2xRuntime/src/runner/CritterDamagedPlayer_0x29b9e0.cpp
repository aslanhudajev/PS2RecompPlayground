#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDamagedPlayer
// Address: 0x29b9e0 - 0x29ba6c
void CritterDamagedPlayer_0x29b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29b9e0u;

    // 0x29b9e0: 0x3c020036
    ctx->pc = 0x29b9e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29b9e4: 0x8c42d4c0
    ctx->pc = 0x29b9e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x29b9e8: 0x1840001e
    ctx->pc = 0x29B9E8u;
    {
        const bool branch_taken_0x29b9e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B9ECu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b9e8) {
            ctx->pc = 0x29BA64u;
            goto label_29ba64;
        }
    }
    ctx->pc = 0x29B9F0u;
    // 0x29b9f0: 0x3c020035
    ctx->pc = 0x29b9f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x29b9f4: 0x1000000b
    ctx->pc = 0x29B9F4u;
    {
        const bool branch_taken_0x29b9f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B9F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7616));
        if (branch_taken_0x29b9f4) {
            ctx->pc = 0x29BA24u;
            goto label_29ba24;
        }
    }
    ctx->pc = 0x29B9FCu;
    // 0x29b9fc: 0x0
    ctx->pc = 0x29b9fcu;
    // NOP
label_29ba00:
    // 0x29ba00: 0x3c020036
    ctx->pc = 0x29ba00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ba04: 0x8c42d4c0
    ctx->pc = 0x29ba04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x29ba08: 0xc2102a
    ctx->pc = 0x29ba08u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x29ba0c: 0x10400015
    ctx->pc = 0x29BA0Cu;
    {
        const bool branch_taken_0x29ba0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29BA10u;
        SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
        if (branch_taken_0x29ba0c) {
            ctx->pc = 0x29BA64u;
            goto label_29ba64;
        }
    }
    ctx->pc = 0x29BA14u;
    // 0x29ba14: 0x24631dc0
    ctx->pc = 0x29ba14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7616));
    // 0x29ba18: 0x24020b70
    ctx->pc = 0x29ba18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x29ba1c: 0xc21018
    ctx->pc = 0x29ba1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29ba20: 0x431821
    ctx->pc = 0x29ba20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29ba24:
    // 0x29ba24: 0x8c620004
    ctx->pc = 0x29ba24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29ba28: 0x5040fff5
    ctx->pc = 0x29BA28u;
    {
        const bool branch_taken_0x29ba28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29ba28) {
            ctx->pc = 0x29BA2Cu;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x29BA00u;
            goto label_29ba00;
        }
    }
    ctx->pc = 0x29BA30u;
    // 0x29ba30: 0x84620002
    ctx->pc = 0x29ba30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x29ba34: 0x5445fff2
    ctx->pc = 0x29BA34u;
    {
        const bool branch_taken_0x29ba34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x29ba34) {
            ctx->pc = 0x29BA38u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
            ctx->pc = 0x29BA00u;
            goto label_29ba00;
        }
    }
    ctx->pc = 0x29BA3Cu;
    // 0x29ba3c: 0x3c020036
    ctx->pc = 0x29ba3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29ba40: 0x8c42d4c0
    ctx->pc = 0x29ba40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x29ba44: 0xc2102a
    ctx->pc = 0x29ba44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 2)));
    // 0x29ba48: 0x10400006
    ctx->pc = 0x29BA48u;
    {
        const bool branch_taken_0x29ba48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29BA4Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2928));
        if (branch_taken_0x29ba48) {
            ctx->pc = 0x29BA64u;
            goto label_29ba64;
        }
    }
    ctx->pc = 0x29BA50u;
    // 0x29ba50: 0xc21018
    ctx->pc = 0x29ba50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29ba54: 0x3c050035
    ctx->pc = 0x29ba54u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x29ba58: 0x24a51dc0
    ctx->pc = 0x29ba58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 7616));
    // 0x29ba5c: 0x80a6e6c
    ctx->pc = 0x29BA5Cu;
    ctx->pc = 0x29BA60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x29B9B0u;
    CritterDamagedPlayerSub_0x29b9b0(rdram, ctx, runtime); return;
    ctx->pc = 0x29BA64u;
label_29ba64:
    // 0x29ba64: 0x3e00008
    ctx->pc = 0x29BA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29BA00u: goto label_29ba00;
            case 0x29BA24u: goto label_29ba24;
            case 0x29BA64u: goto label_29ba64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29BA6Cu;
}
