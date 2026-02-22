#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _isOutSizeOK
// Address: 0x125050 - 0x1250ec
void _isOutSizeOK_0x125050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125050u;

    // 0x125050: 0x27bdfee0
    ctx->pc = 0x125050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x125054: 0x3c030017
    ctx->pc = 0x125054u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x125058: 0xffbf0110
    ctx->pc = 0x125058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x12505c: 0x80302d
    ctx->pc = 0x12505cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125060: 0xffb00100
    ctx->pc = 0x125060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x125064: 0x8c6217bc
    ctx->pc = 0x125064u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 6076)));
    // 0x125068: 0x8c420040
    ctx->pc = 0x125068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x12506c: 0x8c4400e0
    ctx->pc = 0x12506cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x125070: 0x5080000a
    ctx->pc = 0x125070u;
    {
        const bool branch_taken_0x125070 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x125070) {
            ctx->pc = 0x125074u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->pc = 0x12509Cu;
            goto label_12509c;
        }
    }
    ctx->pc = 0x125078u;
    // 0x125078: 0x8c4200dc
    ctx->pc = 0x125078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x12507c: 0x8cc30004
    ctx->pc = 0x12507cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x125080: 0x43102a
    ctx->pc = 0x125080u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x125084: 0x1440000a
    ctx->pc = 0x125084u;
    {
        const bool branch_taken_0x125084 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x125088u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x125084) {
            ctx->pc = 0x1250B0u;
            goto label_1250b0;
        }
    }
    ctx->pc = 0x12508Cu;
    // 0x12508c: 0x8cc20008
    ctx->pc = 0x12508cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x125090: 0x82102a
    ctx->pc = 0x125090u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x125094: 0x10000006
    ctx->pc = 0x125094u;
    {
        const bool branch_taken_0x125094 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x125098u;
        SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x125094) {
            ctx->pc = 0x1250B0u;
            goto label_1250b0;
        }
    }
    ctx->pc = 0x12509Cu;
label_12509c:
    // 0x12509c: 0x8cc40010
    ctx->pc = 0x12509cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1250a0: 0x8c4200e4
    ctx->pc = 0x1250a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1250a4: 0x641818
    ctx->pc = 0x1250a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1250a8: 0x43102a
    ctx->pc = 0x1250a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x1250ac: 0x38500001
    ctx->pc = 0x1250acu;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 2), 1));
label_1250b0:
    // 0x1250b0: 0x1600000a
    ctx->pc = 0x1250B0u;
    {
        const bool branch_taken_0x1250b0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1250B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1250b0) {
            ctx->pc = 0x1250DCu;
            goto label_1250dc;
        }
    }
    ctx->pc = 0x1250B8u;
    // 0x1250b8: 0x8cc70008
    ctx->pc = 0x1250b8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1250bc: 0x3c050017
    ctx->pc = 0x1250bcu;
    SET_GPR_S32(ctx, 5, ((uint32_t)23 << 16));
    // 0x1250c0: 0x8cc60004
    ctx->pc = 0x1250c0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1250c4: 0x24a55068
    ctx->pc = 0x1250c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 20584));
    // 0x1250c8: 0xc04ad3a
    ctx->pc = 0x1250C8u;
    SET_GPR_U32(ctx, 31, 0x1250D0u);
    ctx->pc = 0x1250CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x12b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250D0u; }
    }
    if (ctx->pc != 0x1250D0u) { return; }
    ctx->pc = 0x1250D0u;
    // 0x1250d0: 0xc048006
    ctx->pc = 0x1250D0u;
    SET_GPR_U32(ctx, 31, 0x1250D8u);
    ctx->pc = 0x1250D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x120018u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x120018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1250D8u; }
    }
    if (ctx->pc != 0x1250D8u) { return; }
    ctx->pc = 0x1250D8u;
    // 0x1250d8: 0x200102d
    ctx->pc = 0x1250d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1250dc:
    // 0x1250dc: 0xdfbf0110
    ctx->pc = 0x1250dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1250e0: 0xdfb00100
    ctx->pc = 0x1250e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1250e4: 0x3e00008
    ctx->pc = 0x1250E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1250E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12509Cu: goto label_12509c;
            case 0x1250B0u: goto label_1250b0;
            case 0x1250DCu: goto label_1250dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1250ECu;
}
