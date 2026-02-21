#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerToggleShard
// Address: 0x276ac8 - 0x276b58
void PlayerToggleShard_0x276ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x276ac8u;

    // 0x276ac8: 0x4810003
    ctx->pc = 0x276AC8u;
    {
        const bool branch_taken_0x276ac8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x276ACCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x276ac8) {
            ctx->pc = 0x276AD8u;
            goto label_276ad8;
        }
    }
    ctx->pc = 0x276AD0u;
    // 0x276ad0: 0x102d
    ctx->pc = 0x276ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ad4: 0x24040003
    ctx->pc = 0x276ad4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_276ad8:
    // 0x276ad8: 0x40382d
    ctx->pc = 0x276ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276adc: 0x87102a
    ctx->pc = 0x276adcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x276ae0: 0x1440001b
    ctx->pc = 0x276AE0u;
    {
        const bool branch_taken_0x276ae0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276AE4u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x276ae0) {
            ctx->pc = 0x276B50u;
            goto label_276b50;
        }
    }
    ctx->pc = 0x276AE8u;
    // 0x276ae8: 0x3c020032
    ctx->pc = 0x276ae8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x276aec: 0x244c1bc0
    ctx->pc = 0x276aecu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x276af0: 0x24090001
    ctx->pc = 0x276af0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x276af4: 0x240800b4
    ctx->pc = 0x276af4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 180));
    // 0x276af8: 0xea1018
    ctx->pc = 0x276af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276afc: 0x0
    ctx->pc = 0x276afcu;
    // NOP
label_276b00:
    // 0x276b00: 0x4c3021
    ctx->pc = 0x276b00u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x276b04: 0x8cc300fc
    ctx->pc = 0x276b04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 252)));
    // 0x276b08: 0x5469000e
    ctx->pc = 0x276B08u;
    {
        const bool branch_taken_0x276b08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x276b08) {
            ctx->pc = 0x276B0Cu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
            ctx->pc = 0x276B44u;
            goto label_276b44;
        }
    }
    ctx->pc = 0x276B10u;
    // 0x276b10: 0xa31804
    ctx->pc = 0x276b10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x276b14: 0x94c21a24
    ctx->pc = 0x276b14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6692)));
    // 0x276b18: 0x431826
    ctx->pc = 0x276b18u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276b1c: 0x3062ffff
    ctx->pc = 0x276b1cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x276b20: 0xa21007
    ctx->pc = 0x276b20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x276b24: 0x30420001
    ctx->pc = 0x276b24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x276b28: 0x14400005
    ctx->pc = 0x276B28u;
    {
        const bool branch_taken_0x276b28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x276B2Cu;
        WRITE16(ADD32(GPR_U32(ctx, 6), 6692), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x276b28) {
            ctx->pc = 0x276B40u;
            goto label_276b40;
        }
    }
    ctx->pc = 0x276B30u;
    // 0x276b30: 0x8cc2000c
    ctx->pc = 0x276b30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x276b34: 0x485818
    ctx->pc = 0x276b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276b38: 0x1661021
    ctx->pc = 0x276b38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x276b3c: 0xa4430cf0
    ctx->pc = 0x276b3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 3312), (uint16_t)GPR_U32(ctx, 3));
label_276b40:
    // 0x276b40: 0x24e70001
    ctx->pc = 0x276b40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
label_276b44:
    // 0x276b44: 0x87102a
    ctx->pc = 0x276b44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 7)));
    // 0x276b48: 0x1040ffed
    ctx->pc = 0x276B48u;
    {
        const bool branch_taken_0x276b48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276B4Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276b48) {
            ctx->pc = 0x276B00u;
            goto label_276b00;
        }
    }
    ctx->pc = 0x276B50u;
label_276b50:
    // 0x276b50: 0x3e00008
    ctx->pc = 0x276B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x276AD8u: goto label_276ad8;
            case 0x276B00u: goto label_276b00;
            case 0x276B40u: goto label_276b40;
            case 0x276B44u: goto label_276b44;
            case 0x276B50u: goto label_276b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276B58u;
}
