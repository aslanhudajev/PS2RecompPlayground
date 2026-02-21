#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerHasShard
// Address: 0x2769b8 - 0x276a60
void PlayerHasShard_0x2769b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2769b8u;

    // 0x2769b8: 0x4810004
    ctx->pc = 0x2769B8u;
    {
        const bool branch_taken_0x2769b8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2769BCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2769b8) {
            ctx->pc = 0x2769CCu;
            goto label_2769cc;
        }
    }
    ctx->pc = 0x2769C0u;
    // 0x2769c0: 0x102d
    ctx->pc = 0x2769c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769c4: 0x10000002
    ctx->pc = 0x2769C4u;
    {
        const bool branch_taken_0x2769c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2769C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2769c4) {
            ctx->pc = 0x2769D0u;
            goto label_2769d0;
        }
    }
    ctx->pc = 0x2769CCu;
label_2769cc:
    // 0x2769cc: 0x80102d
    ctx->pc = 0x2769ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2769d0:
    // 0x2769d0: 0x40302d
    ctx->pc = 0x2769d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2769d4: 0x86102a
    ctx->pc = 0x2769d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x2769d8: 0x14400013
    ctx->pc = 0x2769D8u;
    {
        const bool branch_taken_0x2769d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2769DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2769d8) {
            ctx->pc = 0x276A28u;
            goto label_276a28;
        }
    }
    ctx->pc = 0x2769E0u;
    // 0x2769e0: 0x24092b00
    ctx->pc = 0x2769e0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2769e4: 0x244b1bc0
    ctx->pc = 0x2769e4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2769e8: 0x240800b4
    ctx->pc = 0x2769e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 180));
    // 0x2769ec: 0xc91018
    ctx->pc = 0x2769ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2769f0:
    // 0x2769f0: 0x4b1821
    ctx->pc = 0x2769f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2769f4: 0x8c6200fc
    ctx->pc = 0x2769f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x2769f8: 0x10400008
    ctx->pc = 0x2769F8u;
    {
        const bool branch_taken_0x2769f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2769FCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x2769f8) {
            ctx->pc = 0x276A1Cu;
            goto label_276a1c;
        }
    }
    ctx->pc = 0x276A00u;
    // 0x276a00: 0x8c62000c
    ctx->pc = 0x276a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x276a04: 0x485018
    ctx->pc = 0x276a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x276a08: 0x1431021
    ctx->pc = 0x276a08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x276a0c: 0x94420cf0
    ctx->pc = 0x276a0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 3312)));
    // 0x276a10: 0x94631a24
    ctx->pc = 0x276a10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6692)));
    // 0x276a14: 0x431025
    ctx->pc = 0x276a14u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x276a18: 0xe23825
    ctx->pc = 0x276a18u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_276a1c:
    // 0x276a1c: 0x86102a
    ctx->pc = 0x276a1cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 6)));
    // 0x276a20: 0x1040fff3
    ctx->pc = 0x276A20u;
    {
        const bool branch_taken_0x276a20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x276A24u;
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x276a20) {
            ctx->pc = 0x2769F0u;
            goto label_2769f0;
        }
    }
    ctx->pc = 0x276A28u;
label_276a28:
    // 0x276a28: 0x4a10003
    ctx->pc = 0x276A28u;
    {
        const bool branch_taken_0x276a28 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x276A2Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 15));
        if (branch_taken_0x276a28) {
            ctx->pc = 0x276A38u;
            goto label_276a38;
        }
    }
    ctx->pc = 0x276A30u;
    // 0x276a30: 0x3e00008
    ctx->pc = 0x276A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276A34u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2769CCu: goto label_2769cc;
            case 0x2769D0u: goto label_2769d0;
            case 0x2769F0u: goto label_2769f0;
            case 0x276A1Cu: goto label_276a1c;
            case 0x276A28u: goto label_276a28;
            case 0x276A38u: goto label_276a38;
            case 0x276A48u: goto label_276a48;
            case 0x276A50u: goto label_276a50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276A38u;
label_276a38:
    // 0x276a38: 0x54400003
    ctx->pc = 0x276A38u;
    {
        const bool branch_taken_0x276a38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x276a38) {
            ctx->pc = 0x276A3Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x276A48u;
            goto label_276a48;
        }
    }
    ctx->pc = 0x276A40u;
    // 0x276a40: 0x10000003
    ctx->pc = 0x276A40u;
    {
        const bool branch_taken_0x276a40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x276A44u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 65535));
        if (branch_taken_0x276a40) {
            ctx->pc = 0x276A50u;
            goto label_276a50;
        }
    }
    ctx->pc = 0x276A48u;
label_276a48:
    // 0x276a48: 0xa21004
    ctx->pc = 0x276a48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x276a4c: 0x3045ffff
    ctx->pc = 0x276a4cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 2), 65535));
label_276a50:
    // 0x276a50: 0xe51024
    ctx->pc = 0x276a50u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x276a54: 0x451026
    ctx->pc = 0x276a54u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x276a58: 0x3e00008
    ctx->pc = 0x276A58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276A5Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2769CCu: goto label_2769cc;
            case 0x2769D0u: goto label_2769d0;
            case 0x2769F0u: goto label_2769f0;
            case 0x276A1Cu: goto label_276a1c;
            case 0x276A28u: goto label_276a28;
            case 0x276A38u: goto label_276a38;
            case 0x276A48u: goto label_276a48;
            case 0x276A50u: goto label_276a50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x276A60u;
}
