#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoPolyInst
// Address: 0x2cecd8 - 0x2ced64
void DoPolyInst_0x2cecd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cecd8u;

    // 0x2cecd8: 0x27bdfff0
    ctx->pc = 0x2cecd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cecdc: 0xffbf0000
    ctx->pc = 0x2cecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cece0: 0x80382d
    ctx->pc = 0x2cece0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cece4: 0x94e20002
    ctx->pc = 0x2cece4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x2cece8: 0x1440001c
    ctx->pc = 0x2CECE8u;
    {
        const bool branch_taken_0x2cece8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CECECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2cece8) {
            ctx->pc = 0x2CED5Cu;
            goto label_2ced5c;
        }
    }
    ctx->pc = 0x2CECF0u;
    // 0x2cecf0: 0x84e20000
    ctx->pc = 0x2cecf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cecf4: 0x28420003
    ctx->pc = 0x2cecf4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2cecf8: 0x14400018
    ctx->pc = 0x2CECF8u;
    {
        const bool branch_taken_0x2cecf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cecf8) {
            ctx->pc = 0x2CED5Cu;
            goto label_2ced5c;
        }
    }
    ctx->pc = 0x2CED00u;
    // 0x2ced00: 0x10c00006
    ctx->pc = 0x2CED00u;
    {
        const bool branch_taken_0x2ced00 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CED04u;
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 11)));
        if (branch_taken_0x2ced00) {
            ctx->pc = 0x2CED1Cu;
            goto label_2ced1c;
        }
    }
    ctx->pc = 0x2CED08u;
    // 0x2ced08: 0x2402000b
    ctx->pc = 0x2ced08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ced0c: 0x14a20013
    ctx->pc = 0x2CED0Cu;
    {
        const bool branch_taken_0x2ced0c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x2CED10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ced0c) {
            ctx->pc = 0x2CED5Cu;
            goto label_2ced5c;
        }
    }
    ctx->pc = 0x2CED14u;
    // 0x2ced14: 0x1000000a
    ctx->pc = 0x2CED14u;
    {
        const bool branch_taken_0x2ced14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ced14) {
            ctx->pc = 0x2CED40u;
            goto label_2ced40;
        }
    }
    ctx->pc = 0x2CED1Cu;
label_2ced1c:
    // 0x2ced1c: 0x2402000b
    ctx->pc = 0x2ced1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2ced20: 0x14a2000b
    ctx->pc = 0x2CED20u;
    {
        const bool branch_taken_0x2ced20 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x2CED24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ced20) {
            ctx->pc = 0x2CED50u;
            goto label_2ced50;
        }
    }
    ctx->pc = 0x2CED28u;
    // 0x2ced28: 0x3c02003a
    ctx->pc = 0x2ced28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ced2c: 0x9443cc00
    ctx->pc = 0x2ced2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953984)));
    // 0x2ced30: 0x94e4000e
    ctx->pc = 0x2ced30u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 14)));
    // 0x2ced34: 0x641821
    ctx->pc = 0x2ced34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ced38: 0xa443cc00
    ctx->pc = 0x2ced38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294953984), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ced3c: 0xe0202d
    ctx->pc = 0x2ced3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ced40:
    // 0x2ced40: 0xc0b3ad0
    ctx->pc = 0x2CED40u;
    SET_GPR_U32(ctx, 31, 0x2CED48u);
    ctx->pc = 0x2CED44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CEB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPolyInstSub_0x2ceb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED48u; }
    }
    if (ctx->pc != 0x2CED48u) { return; }
    ctx->pc = 0x2CED48u;
    // 0x2ced48: 0x10000004
    ctx->pc = 0x2CED48u;
    {
        const bool branch_taken_0x2ced48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CED4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2ced48) {
            ctx->pc = 0x2CED5Cu;
            goto label_2ced5c;
        }
    }
    ctx->pc = 0x2CED50u;
label_2ced50:
    // 0x2ced50: 0xc0b3ad0
    ctx->pc = 0x2CED50u;
    SET_GPR_U32(ctx, 31, 0x2CED58u);
    ctx->pc = 0x2CED54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CEB40u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPolyInstSub_0x2ceb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED58u; }
    }
    if (ctx->pc != 0x2CED58u) { return; }
    ctx->pc = 0x2CED58u;
    // 0x2ced58: 0xdfbf0000
    ctx->pc = 0x2ced58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ced5c:
    // 0x2ced5c: 0x3e00008
    ctx->pc = 0x2CED5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CED60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CED1Cu: goto label_2ced1c;
            case 0x2CED40u: goto label_2ced40;
            case 0x2CED50u: goto label_2ced50;
            case 0x2CED5Cu: goto label_2ced5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CED64u;
}
