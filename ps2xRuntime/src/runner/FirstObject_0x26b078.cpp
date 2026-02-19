#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FirstObject
// Address: 0x26b078 - 0x26b168
void FirstObject_0x26b078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26b078u;

    // 0x26b078: 0x3c020033
    ctx->pc = 0x26b078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x26b07c: 0x2445dfd0
    ctx->pc = 0x26b07cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x26b080: 0x3c020034
    ctx->pc = 0x26b080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b084: 0x8c44cd94
    ctx->pc = 0x26b084u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x26b088: 0x3c020032
    ctx->pc = 0x26b088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26b08c: 0x24461bc0
    ctx->pc = 0x26b08cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x26b090: 0x3c020034
    ctx->pc = 0x26b090u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b094: 0x24498b80
    ctx->pc = 0x26b094u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x26b098: 0x182d
    ctx->pc = 0x26b098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b09c: 0x24080001
    ctx->pc = 0x26b09cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b0a0: 0x24070006
    ctx->pc = 0x26b0a0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    // 0x26b0a4: 0x0
    ctx->pc = 0x26b0a4u;
    // NOP
label_26b0a8:
    // 0x26b0a8: 0x8ca200c8
    ctx->pc = 0x26b0a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 200)));
    // 0x26b0ac: 0x10480003
    ctx->pc = 0x26B0ACu;
    {
        const bool branch_taken_0x26b0ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        if (branch_taken_0x26b0ac) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26B0B4u;
    // 0x26b0b4: 0x14470003
    ctx->pc = 0x26B0B4u;
    {
        const bool branch_taken_0x26b0b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x26B0B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x26b0b4) {
            ctx->pc = 0x26B0C4u;
            goto label_26b0c4;
        }
    }
    ctx->pc = 0x26B0BCu;
label_26b0bc:
    // 0x26b0bc: 0x3e00008
    ctx->pc = 0x26B0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B0C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0BCu: goto label_26b0bc;
            case 0x26B0C4u: goto label_26b0c4;
            case 0x26B0F0u: goto label_26b0f0;
            case 0x26B110u: goto label_26b110;
            case 0x26B114u: goto label_26b114;
            case 0x26B11Cu: goto label_26b11c;
            case 0x26B128u: goto label_26b128;
            case 0x26B13Cu: goto label_26b13c;
            case 0x26B144u: goto label_26b144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B0C4u;
label_26b0c4:
    // 0x26b0c4: 0x28620019
    ctx->pc = 0x26b0c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 25));
    // 0x26b0c8: 0x1440fff7
    ctx->pc = 0x26B0C8u;
    {
        const bool branch_taken_0x26b0c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26B0CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 944));
        if (branch_taken_0x26b0c8) {
            ctx->pc = 0x26B0A8u;
            goto label_26b0a8;
        }
    }
    ctx->pc = 0x26B0D0u;
    // 0x26b0d0: 0x3c020034
    ctx->pc = 0x26b0d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b0d4: 0x8c42cd98
    ctx->pc = 0x26b0d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x26b0d8: 0x18400010
    ctx->pc = 0x26B0D8u;
    {
        const bool branch_taken_0x26b0d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26B0DCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26b0d8) {
            ctx->pc = 0x26B11Cu;
            goto label_26b11c;
        }
    }
    ctx->pc = 0x26B0E0u;
    // 0x26b0e0: 0x2407ffff
    ctx->pc = 0x26b0e0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26b0e4: 0x3c020034
    ctx->pc = 0x26b0e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b0e8: 0x8c45cd98
    ctx->pc = 0x26b0e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x26b0ec: 0x0
    ctx->pc = 0x26b0ecu;
    // NOP
label_26b0f0:
    // 0x26b0f0: 0x848200d8
    ctx->pc = 0x26b0f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x26b0f4: 0x10470006
    ctx->pc = 0x26B0F4u;
    {
        const bool branch_taken_0x26b0f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        ctx->pc = 0x26B0F8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x26b0f4) {
            ctx->pc = 0x26B110u;
            goto label_26b110;
        }
    }
    ctx->pc = 0x26B0FCu;
    // 0x26b0fc: 0x8c820070
    ctx->pc = 0x26b0fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x26b100: 0x10400004
    ctx->pc = 0x26B100u;
    {
        const bool branch_taken_0x26b100 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26B104u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
        if (branch_taken_0x26b100) {
            ctx->pc = 0x26B114u;
            goto label_26b114;
        }
    }
    ctx->pc = 0x26B108u;
    // 0x26b108: 0x3e00008
    ctx->pc = 0x26B108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B10Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0BCu: goto label_26b0bc;
            case 0x26B0C4u: goto label_26b0c4;
            case 0x26B0F0u: goto label_26b0f0;
            case 0x26B110u: goto label_26b110;
            case 0x26B114u: goto label_26b114;
            case 0x26B11Cu: goto label_26b11c;
            case 0x26B128u: goto label_26b128;
            case 0x26B13Cu: goto label_26b13c;
            case 0x26B144u: goto label_26b144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B110u;
label_26b110:
    // 0x26b110: 0x65102a
    ctx->pc = 0x26b110u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
label_26b114:
    // 0x26b114: 0x1440fff6
    ctx->pc = 0x26B114u;
    {
        const bool branch_taken_0x26b114 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26B118u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 272));
        if (branch_taken_0x26b114) {
            ctx->pc = 0x26B0F0u;
            goto label_26b0f0;
        }
    }
    ctx->pc = 0x26B11Cu;
label_26b11c:
    // 0x26b11c: 0x182d
    ctx->pc = 0x26b11cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b120: 0x24050001
    ctx->pc = 0x26b120u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26b124: 0x24040004
    ctx->pc = 0x26b124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
label_26b128:
    // 0x26b128: 0x8cc200fc
    ctx->pc = 0x26b128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x26b12c: 0x10450003
    ctx->pc = 0x26B12Cu;
    {
        const bool branch_taken_0x26b12c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        if (branch_taken_0x26b12c) {
            ctx->pc = 0x26B13Cu;
            goto label_26b13c;
        }
    }
    ctx->pc = 0x26B134u;
    // 0x26b134: 0x14440003
    ctx->pc = 0x26B134u;
    {
        const bool branch_taken_0x26b134 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x26B138u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x26b134) {
            ctx->pc = 0x26B144u;
            goto label_26b144;
        }
    }
    ctx->pc = 0x26B13Cu;
label_26b13c:
    // 0x26b13c: 0x3e00008
    ctx->pc = 0x26B13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B140u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0BCu: goto label_26b0bc;
            case 0x26B0C4u: goto label_26b0c4;
            case 0x26B0F0u: goto label_26b0f0;
            case 0x26B110u: goto label_26b110;
            case 0x26B114u: goto label_26b114;
            case 0x26B11Cu: goto label_26b11c;
            case 0x26B128u: goto label_26b128;
            case 0x26B13Cu: goto label_26b13c;
            case 0x26B144u: goto label_26b144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B144u;
label_26b144:
    // 0x26b144: 0x28620004
    ctx->pc = 0x26b144u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x26b148: 0x1440fff7
    ctx->pc = 0x26B148u;
    {
        const bool branch_taken_0x26b148 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26B14Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11008));
        if (branch_taken_0x26b148) {
            ctx->pc = 0x26B128u;
            goto label_26b128;
        }
    }
    ctx->pc = 0x26B150u;
    // 0x26b150: 0x3c020034
    ctx->pc = 0x26b150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26b154: 0x8c42c380
    ctx->pc = 0x26b154u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x26b158: 0x28420001
    ctx->pc = 0x26b158u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 1));
    // 0x26b15c: 0x2480b
    ctx->pc = 0x26b15cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 9, GPR_U32(ctx, 0));
    // 0x26b160: 0x3e00008
    ctx->pc = 0x26B160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B164u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26B0A8u: goto label_26b0a8;
            case 0x26B0BCu: goto label_26b0bc;
            case 0x26B0C4u: goto label_26b0c4;
            case 0x26B0F0u: goto label_26b0f0;
            case 0x26B110u: goto label_26b110;
            case 0x26B114u: goto label_26b114;
            case 0x26B11Cu: goto label_26b11c;
            case 0x26B128u: goto label_26b128;
            case 0x26B13Cu: goto label_26b13c;
            case 0x26B144u: goto label_26b144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26B168u;
}
