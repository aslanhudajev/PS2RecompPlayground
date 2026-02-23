#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _isOutSizeOK
// Address: 0x162830 - 0x1628cc
void _isOutSizeOK_0x162830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_isOutSizeOK");


    ctx->pc = 0x162830u;

    // 0x162830: 0x27bdfee0
    ctx->pc = 0x162830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x162834: 0x3c030023
    ctx->pc = 0x162834u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x162838: 0xffbf0110
    ctx->pc = 0x162838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x16283c: 0x80302d
    ctx->pc = 0x16283cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162840: 0xffb00100
    ctx->pc = 0x162840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x162844: 0x8c62a21c
    ctx->pc = 0x162844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294943260)));
    // 0x162848: 0x8c420040
    ctx->pc = 0x162848u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x16284c: 0x8c4400e0
    ctx->pc = 0x16284cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x162850: 0x5080000a
    ctx->pc = 0x162850u;
    {
        const bool branch_taken_0x162850 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x162850) {
            ctx->pc = 0x162854u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->pc = 0x16287Cu;
            goto label_16287c;
        }
    }
    ctx->pc = 0x162858u;
    // 0x162858: 0x8c4200dc
    ctx->pc = 0x162858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x16285c: 0x8cc30004
    ctx->pc = 0x16285cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x162860: 0x43102a
    ctx->pc = 0x162860u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x162864: 0x1440000a
    ctx->pc = 0x162864u;
    {
        const bool branch_taken_0x162864 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162868u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162864) {
            ctx->pc = 0x162890u;
            goto label_162890;
        }
    }
    ctx->pc = 0x16286Cu;
    // 0x16286c: 0x8cc20008
    ctx->pc = 0x16286cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x162870: 0x82102a
    ctx->pc = 0x162870u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x162874: 0x10000006
    ctx->pc = 0x162874u;
    {
        const bool branch_taken_0x162874 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162878u;
        SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x162874) {
            ctx->pc = 0x162890u;
            goto label_162890;
        }
    }
    ctx->pc = 0x16287Cu;
label_16287c:
    // 0x16287c: 0x8cc40010
    ctx->pc = 0x16287cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x162880: 0x8c4200e4
    ctx->pc = 0x162880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x162884: 0x641818
    ctx->pc = 0x162884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x162888: 0x43102a
    ctx->pc = 0x162888u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x16288c: 0x38500001
    ctx->pc = 0x16288cu;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
label_162890:
    // 0x162890: 0x1600000a
    ctx->pc = 0x162890u;
    {
        const bool branch_taken_0x162890 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x162894u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x162890) {
            ctx->pc = 0x1628BCu;
            goto label_1628bc;
        }
    }
    ctx->pc = 0x162898u;
    // 0x162898: 0x8cc70008
    ctx->pc = 0x162898u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16289c: 0x3c05002c
    ctx->pc = 0x16289cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x1628a0: 0x8cc60004
    ctx->pc = 0x1628a0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1628a4: 0x24a58d20
    ctx->pc = 0x1628a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294937888));
    // 0x1628a8: 0xc0513ca
    ctx->pc = 0x1628A8u;
    SET_GPR_U32(ctx, 31, 0x1628B0u);
    ctx->pc = 0x1628ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x144F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x144f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628B0u; }
        else if (ctx->pc != 0x1628B0u) { ctx->pc = 0x1628B0u; }
    }
    if (ctx->pc != 0x1628B0u) { return; }
    ctx->pc = 0x1628B0u;
    // 0x1628b0: 0xc059112
    ctx->pc = 0x1628B0u;
    SET_GPR_U32(ctx, 31, 0x1628B8u);
    ctx->pc = 0x1628B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1628B8u; }
        else if (ctx->pc != 0x1628B8u) { ctx->pc = 0x1628B8u; }
    }
    if (ctx->pc != 0x1628B8u) { return; }
    ctx->pc = 0x1628B8u;
    // 0x1628b8: 0x200102d
    ctx->pc = 0x1628b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1628bc:
    // 0x1628bc: 0xdfbf0110
    ctx->pc = 0x1628bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1628c0: 0xdfb00100
    ctx->pc = 0x1628c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1628c4: 0x3e00008
    ctx->pc = 0x1628C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1628C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16287Cu: goto label_16287c;
            case 0x162890u: goto label_162890;
            case 0x1628BCu: goto label_1628bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1628CCu;
}
