#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShardBits
// Address: 0x2809e0 - 0x280a78
void ShardBits_0x2809e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2809e0u;

    // 0x2809e0: 0x282d
    ctx->pc = 0x2809e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809e4: 0x202d
    ctx->pc = 0x2809e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2809e8: 0x24072b00
    ctx->pc = 0x2809e8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2809ec: 0x3c020032
    ctx->pc = 0x2809ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2809f0: 0x24481bc0
    ctx->pc = 0x2809f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2809f4: 0x24060001
    ctx->pc = 0x2809f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2809f8: 0x871018
    ctx->pc = 0x2809f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2809fc: 0x0
    ctx->pc = 0x2809fcu;
    // NOP
label_280a00:
    // 0x280a00: 0x481821
    ctx->pc = 0x280a00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x280a04: 0x8c6200fc
    ctx->pc = 0x280a04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x280a08: 0x14460003
    ctx->pc = 0x280A08u;
    {
        const bool branch_taken_0x280a08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x280A0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x280a08) {
            ctx->pc = 0x280A18u;
            goto label_280a18;
        }
    }
    ctx->pc = 0x280A10u;
    // 0x280a10: 0x94621a24
    ctx->pc = 0x280a10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6692)));
    // 0x280a14: 0xa22825
    ctx->pc = 0x280a14u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_280a18:
    // 0x280a18: 0x28820004
    ctx->pc = 0x280a18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x280a1c: 0x1440fff8
    ctx->pc = 0x280A1Cu;
    {
        const bool branch_taken_0x280a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x280A20u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x280a1c) {
            ctx->pc = 0x280A00u;
            goto label_280a00;
        }
    }
    ctx->pc = 0x280A24u;
    // 0x280a24: 0x202d
    ctx->pc = 0x280a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280a28: 0x3c020035
    ctx->pc = 0x280a28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x280a2c: 0x244396e0
    ctx->pc = 0x280a2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294940384));
    // 0x280a30: 0x24070031
    ctx->pc = 0x280a30u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 49));
    // 0x280a34: 0x24060030
    ctx->pc = 0x280a34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 48));
    // 0x280a38: 0x24820001
    ctx->pc = 0x280a38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x280a3c: 0x0
    ctx->pc = 0x280a3cu;
    // NOP
label_280a40:
    // 0x280a40: 0x451007
    ctx->pc = 0x280a40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x280a44: 0x30420001
    ctx->pc = 0x280a44u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x280a48: 0x10400003
    ctx->pc = 0x280A48u;
    {
        const bool branch_taken_0x280a48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x280A4Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x280a48) {
            ctx->pc = 0x280A58u;
            goto label_280a58;
        }
    }
    ctx->pc = 0x280A50u;
    // 0x280a50: 0x10000002
    ctx->pc = 0x280A50u;
    {
        const bool branch_taken_0x280a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x280A54u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
        if (branch_taken_0x280a50) {
            ctx->pc = 0x280A5Cu;
            goto label_280a5c;
        }
    }
    ctx->pc = 0x280A58u;
label_280a58:
    // 0x280a58: 0xa0460000
    ctx->pc = 0x280a58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
label_280a5c:
    // 0x280a5c: 0x24840001
    ctx->pc = 0x280a5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x280a60: 0x2882000b
    ctx->pc = 0x280a60u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 11));
    // 0x280a64: 0x5440fff6
    ctx->pc = 0x280A64u;
    {
        const bool branch_taken_0x280a64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x280a64) {
            ctx->pc = 0x280A68u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x280A40u;
            goto label_280a40;
        }
    }
    ctx->pc = 0x280A6Cu;
    // 0x280a6c: 0x3c020035
    ctx->pc = 0x280a6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x280a70: 0x3e00008
    ctx->pc = 0x280A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280A74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294940384));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280A00u: goto label_280a00;
            case 0x280A18u: goto label_280a18;
            case 0x280A40u: goto label_280a40;
            case 0x280A58u: goto label_280a58;
            case 0x280A5Cu: goto label_280a5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x280A78u;
}
