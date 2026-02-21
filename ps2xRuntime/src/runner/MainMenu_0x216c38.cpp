#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MainMenu
// Address: 0x216c38 - 0x216e80
void MainMenu_0x216c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x216c38u;

label_216c38:
    // 0x216c38: 0x27bdffd0
    ctx->pc = 0x216c38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_216c3c:
    // 0x216c3c: 0xffbf0020
    ctx->pc = 0x216c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_216c40:
    // 0x216c40: 0xffb10010
    ctx->pc = 0x216c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_216c44:
    // 0x216c44: 0xc0b46de
label_216c48:
    if (ctx->pc == 0x216C48u) {
        ctx->pc = 0x216C48u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x216C4Cu;
        goto label_216c4c;
    }
    ctx->pc = 0x216C44u;
    SET_GPR_U32(ctx, 31, 0x216C4Cu);
    ctx->pc = 0x216C48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x2D1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_clear_0x2d1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216C4Cu; }
    }
    if (ctx->pc != 0x216C4Cu) { return; }
    ctx->pc = 0x216C4Cu;
label_216c4c:
    // 0x216c4c: 0x3c03003c
    ctx->pc = 0x216c4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_216c50:
    // 0x216c50: 0x8c62cf40
    ctx->pc = 0x216c50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954816)));
label_216c54:
    // 0x216c54: 0x18400005
label_216c58:
    if (ctx->pc == 0x216C58u) {
        ctx->pc = 0x216C58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x216C5Cu;
        goto label_216c5c;
    }
    ctx->pc = 0x216C54u;
    {
        const bool branch_taken_0x216c54 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x216C58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x216c54) {
            ctx->pc = 0x216C6Cu;
            goto label_216c6c;
        }
    }
    ctx->pc = 0x216C5Cu;
label_216c5c:
    // 0x216c5c: 0xac62cf40
    ctx->pc = 0x216c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954816), GPR_U32(ctx, 2));
label_216c60:
    // 0x216c60: 0x3c03003c
    ctx->pc = 0x216c60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_216c64:
    // 0x216c64: 0x10000005
label_216c68:
    if (ctx->pc == 0x216C68u) {
        ctx->pc = 0x216C68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x216C6Cu;
        goto label_216c6c;
    }
    ctx->pc = 0x216C64u;
    {
        const bool branch_taken_0x216c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216C68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x216c64) {
            ctx->pc = 0x216C7Cu;
            goto label_216c7c;
        }
    }
    ctx->pc = 0x216C6Cu;
label_216c6c:
    // 0x216c6c: 0x3c02003c
    ctx->pc = 0x216c6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216c70:
    // 0x216c70: 0xac40cf40
    ctx->pc = 0x216c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954816), GPR_U32(ctx, 0));
label_216c74:
    // 0x216c74: 0x3c03003c
    ctx->pc = 0x216c74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_216c78:
    // 0x216c78: 0x24020008
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_216c7c:
    // 0x216c7c: 0xac62cf44
    ctx->pc = 0x216c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954820), GPR_U32(ctx, 2));
label_216c80:
    // 0x216c80: 0x282d
    ctx->pc = 0x216c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216c84:
    // 0x216c84: 0x3c02003c
    ctx->pc = 0x216c84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216c88:
    // 0x216c88: 0x244bcef8
    ctx->pc = 0x216c88u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294954744));
label_216c8c:
    // 0x216c8c: 0x3c020031
    ctx->pc = 0x216c8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_216c90:
    // 0x216c90: 0x244a1b20
    ctx->pc = 0x216c90u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 6944));
label_216c94:
    // 0x216c94: 0x3c02003c
    ctx->pc = 0x216c94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216c98:
    // 0x216c98: 0x2449cf08
    ctx->pc = 0x216c98u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 4294954760));
label_216c9c:
    // 0x216c9c: 0x3c020031
    ctx->pc = 0x216c9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_216ca0:
    // 0x216ca0: 0x24481b38
    ctx->pc = 0x216ca0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 6968));
label_216ca4:
    // 0x216ca4: 0x3c02003c
    ctx->pc = 0x216ca4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216ca8:
    // 0x216ca8: 0x2447cf18
    ctx->pc = 0x216ca8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294954776));
label_216cac:
    // 0x216cac: 0x3c020031
    ctx->pc = 0x216cacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_216cb0:
    // 0x216cb0: 0x24461b50
    ctx->pc = 0x216cb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 6992));
label_216cb4:
    // 0x216cb4: 0x51880
    ctx->pc = 0x216cb4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_216cb8:
    // 0x216cb8: 0x6b2021
    ctx->pc = 0x216cb8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_216cbc:
    // 0x216cbc: 0x6a1021
    ctx->pc = 0x216cbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_216cc0:
    // 0x216cc0: 0x8c420000
    ctx->pc = 0x216cc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216cc4:
    // 0x216cc4: 0xac820000
    ctx->pc = 0x216cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_216cc8:
    // 0x216cc8: 0x692021
    ctx->pc = 0x216cc8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_216ccc:
    // 0x216ccc: 0x681021
    ctx->pc = 0x216cccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_216cd0:
    // 0x216cd0: 0x8c420000
    ctx->pc = 0x216cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216cd4:
    // 0x216cd4: 0xac820000
    ctx->pc = 0x216cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_216cd8:
    // 0x216cd8: 0x672021
    ctx->pc = 0x216cd8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_216cdc:
    // 0x216cdc: 0x661821
    ctx->pc = 0x216cdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_216ce0:
    // 0x216ce0: 0x8c620000
    ctx->pc = 0x216ce0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_216ce4:
    // 0x216ce4: 0xac820000
    ctx->pc = 0x216ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_216ce8:
    // 0x216ce8: 0x24a50001
    ctx->pc = 0x216ce8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_216cec:
    // 0x216cec: 0x28a20004
    ctx->pc = 0x216cecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
label_216cf0:
    // 0x216cf0: 0x1440fff1
label_216cf4:
    if (ctx->pc == 0x216CF4u) {
        ctx->pc = 0x216CF4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x216CF8u;
        goto label_216cf8;
    }
    ctx->pc = 0x216CF0u;
    {
        const bool branch_taken_0x216cf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216CF4u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x216cf0) {
            ctx->pc = 0x216CB8u;
            goto label_216cb8;
        }
    }
    ctx->pc = 0x216CF8u;
label_216cf8:
    // 0x216cf8: 0x3c02003c
    ctx->pc = 0x216cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216cfc:
    // 0x216cfc: 0x8c42cf38
    ctx->pc = 0x216cfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954808)));
label_216d00:
    // 0x216d00: 0x4410031
label_216d04:
    if (ctx->pc == 0x216D04u) {
        ctx->pc = 0x216D04u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        ctx->pc = 0x216D08u;
        goto label_216d08;
    }
    ctx->pc = 0x216D00u;
    {
        const bool branch_taken_0x216d00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x216D04u;
        SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
        if (branch_taken_0x216d00) {
            ctx->pc = 0x216DC8u;
            goto label_216dc8;
        }
    }
    ctx->pc = 0x216D08u;
label_216d08:
    // 0x216d08: 0x202d
    ctx->pc = 0x216d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216d0c:
    // 0x216d0c: 0x282d
    ctx->pc = 0x216d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216d10:
    // 0x216d10: 0xc0b1734
label_216d14:
    if (ctx->pc == 0x216D14u) {
        ctx->pc = 0x216D14u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216D18u;
        goto label_216d18;
    }
    ctx->pc = 0x216D10u;
    SET_GPR_U32(ctx, 31, 0x216D18u);
    ctx->pc = 0x216D14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetBGColor_0x2c5cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D18u; }
    }
    if (ctx->pc != 0x216D18u) { return; }
    ctx->pc = 0x216D18u;
label_216d18:
    // 0x216d18: 0x3c10003c
    ctx->pc = 0x216d18u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_216d1c:
    // 0x216d1c: 0x8e11cf34
    ctx->pc = 0x216d1cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 4294954804)));
label_216d20:
    // 0x216d20: 0x202d
    ctx->pc = 0x216d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216d24:
    // 0x216d24: 0x282d
    ctx->pc = 0x216d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216d28:
    // 0x216d28: 0x220302d
    ctx->pc = 0x216d28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216d2c:
    // 0x216d2c: 0x382d
    ctx->pc = 0x216d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216d30:
    // 0x216d30: 0xc085a1e
label_216d34:
    if (ctx->pc == 0x216D34u) {
        ctx->pc = 0x216D34u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x216D38u;
        goto label_216d38;
    }
    ctx->pc = 0x216D30u;
    SET_GPR_U32(ctx, 31, 0x216D38u);
    ctx->pc = 0x216D34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x216878u;
    {
        const uint32_t __entryPc = ctx->pc;
        MenuMod_0x216878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D38u; }
    }
    if (ctx->pc != 0x216D38u) { return; }
    ctx->pc = 0x216D38u;
label_216d38:
    // 0x216d38: 0x40182d
    ctx->pc = 0x216d38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216d3c:
    // 0x216d3c: 0x10710009
label_216d40:
    if (ctx->pc == 0x216D40u) {
        ctx->pc = 0x216D40u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294954804), GPR_U32(ctx, 3));
        ctx->pc = 0x216D44u;
        goto label_216d44;
    }
    ctx->pc = 0x216D3Cu;
    {
        const bool branch_taken_0x216d3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 17));
        ctx->pc = 0x216D40u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294954804), GPR_U32(ctx, 3));
        if (branch_taken_0x216d3c) {
            ctx->pc = 0x216D64u;
            goto label_216d64;
        }
    }
    ctx->pc = 0x216D44u;
label_216d44:
    // 0x216d44: 0x2402000c
    ctx->pc = 0x216d44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_216d48:
    // 0x216d48: 0x621018
    ctx->pc = 0x216d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_216d4c:
    // 0x216d4c: 0x3c050032
    ctx->pc = 0x216d4cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
label_216d50:
    // 0x216d50: 0x24a5f890
    ctx->pc = 0x216d50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965392));
label_216d54:
    // 0x216d54: 0x3c04003a
    ctx->pc = 0x216d54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_216d58:
    // 0x216d58: 0x24845b98
    ctx->pc = 0x216d58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23448));
label_216d5c:
    // 0x216d5c: 0xc0bed0a
label_216d60:
    if (ctx->pc == 0x216D60u) {
        ctx->pc = 0x216D60u;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x216D64u;
        goto label_216d64;
    }
    ctx->pc = 0x216D5Cu;
    SET_GPR_U32(ctx, 31, 0x216D64u);
    ctx->pc = 0x216D60u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D64u; }
    }
    if (ctx->pc != 0x216D64u) { return; }
    ctx->pc = 0x216D64u;
label_216d64:
    // 0x216d64: 0xc085a76
label_216d68:
    if (ctx->pc == 0x216D68u) {
        ctx->pc = 0x216D6Cu;
        goto label_216d6c;
    }
    ctx->pc = 0x216D64u;
    SET_GPR_U32(ctx, 31, 0x216D6Cu);
    ctx->pc = 0x2169D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisplayMenu_0x2169d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D6Cu; }
    }
    if (ctx->pc != 0x216D6Cu) { return; }
    ctx->pc = 0x216D6Cu;
label_216d6c:
    // 0x216d6c: 0x3c02003c
    ctx->pc = 0x216d6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216d70:
    // 0x216d70: 0x8c42cf40
    ctx->pc = 0x216d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954816)));
label_216d74:
    // 0x216d74: 0x1440003d
label_216d78:
    if (ctx->pc == 0x216D78u) {
        ctx->pc = 0x216D78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216D7Cu;
        goto label_216d7c;
    }
    ctx->pc = 0x216D74u;
    {
        const bool branch_taken_0x216d74 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216D78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x216d74) {
            ctx->pc = 0x216E6Cu;
            goto label_216e6c;
        }
    }
    ctx->pc = 0x216D7Cu;
label_216d7c:
    // 0x216d7c: 0x3c02003c
    ctx->pc = 0x216d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216d80:
    // 0x216d80: 0x8c42cf08
    ctx->pc = 0x216d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
label_216d84:
    // 0x216d84: 0x3c030200
    ctx->pc = 0x216d84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
label_216d88:
    // 0x216d88: 0x431024
    ctx->pc = 0x216d88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216d8c:
    // 0x216d8c: 0x10400036
label_216d90:
    if (ctx->pc == 0x216D90u) {
        ctx->pc = 0x216D90u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x216D94u;
        goto label_216d94;
    }
    ctx->pc = 0x216D8Cu;
    {
        const bool branch_taken_0x216d8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216D90u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x216d8c) {
            ctx->pc = 0x216E68u;
            goto label_216e68;
        }
    }
    ctx->pc = 0x216D94u;
label_216d94:
    // 0x216d94: 0x3c04003c
    ctx->pc = 0x216d94u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_216d98:
    // 0x216d98: 0x8c43cf34
    ctx->pc = 0x216d98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954804)));
label_216d9c:
    // 0x216d9c: 0xac83cf38
    ctx->pc = 0x216d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954808), GPR_U32(ctx, 3));
label_216da0:
    // 0x216da0: 0x2402000c
    ctx->pc = 0x216da0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_216da4:
    // 0x216da4: 0x621818
    ctx->pc = 0x216da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_216da8:
    // 0x216da8: 0x3c050032
    ctx->pc = 0x216da8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
label_216dac:
    // 0x216dac: 0x24a5f890
    ctx->pc = 0x216dacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294965392));
label_216db0:
    // 0x216db0: 0x3c04003a
    ctx->pc = 0x216db0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_216db4:
    // 0x216db4: 0x24845bb0
    ctx->pc = 0x216db4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23472));
label_216db8:
    // 0x216db8: 0xc0bed0a
label_216dbc:
    if (ctx->pc == 0x216DBCu) {
        ctx->pc = 0x216DBCu;
        SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x216DC0u;
        goto label_216dc0;
    }
    ctx->pc = 0x216DB8u;
    SET_GPR_U32(ctx, 31, 0x216DC0u);
    ctx->pc = 0x216DBCu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DC0u; }
    }
    if (ctx->pc != 0x216DC0u) { return; }
    ctx->pc = 0x216DC0u;
label_216dc0:
    // 0x216dc0: 0x1000002a
label_216dc4:
    if (ctx->pc == 0x216DC4u) {
        ctx->pc = 0x216DC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216DC8u;
        goto label_216dc8;
    }
    ctx->pc = 0x216DC0u;
    {
        const bool branch_taken_0x216dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216DC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x216dc0) {
            ctx->pc = 0x216E6Cu;
            goto label_216e6c;
        }
    }
    ctx->pc = 0x216DC8u;
label_216dc8:
    // 0x216dc8: 0x2484f890
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294965392));
label_216dcc:
    // 0x216dcc: 0x3c02003c
    ctx->pc = 0x216dccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216dd0:
    // 0x216dd0: 0x8c42cf38
    ctx->pc = 0x216dd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954808)));
label_216dd4:
    // 0x216dd4: 0x2403000c
    ctx->pc = 0x216dd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
label_216dd8:
    // 0x216dd8: 0x431018
    ctx->pc = 0x216dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_216ddc:
    // 0x216ddc: 0x822021
    ctx->pc = 0x216ddcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_216de0:
    // 0x216de0: 0x8c820008
    ctx->pc = 0x216de0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_216de4:
    // 0x216de4: 0x40f809
label_216de8:
    if (ctx->pc == 0x216DE8u) {
        ctx->pc = 0x216DECu;
        goto label_216dec;
    }
    ctx->pc = 0x216DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216DECu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216C38u: goto label_216c38;
            case 0x216C3Cu: goto label_216c3c;
            case 0x216C40u: goto label_216c40;
            case 0x216C44u: goto label_216c44;
            case 0x216C48u: goto label_216c48;
            case 0x216C4Cu: goto label_216c4c;
            case 0x216C50u: goto label_216c50;
            case 0x216C54u: goto label_216c54;
            case 0x216C58u: goto label_216c58;
            case 0x216C5Cu: goto label_216c5c;
            case 0x216C60u: goto label_216c60;
            case 0x216C64u: goto label_216c64;
            case 0x216C68u: goto label_216c68;
            case 0x216C6Cu: goto label_216c6c;
            case 0x216C70u: goto label_216c70;
            case 0x216C74u: goto label_216c74;
            case 0x216C78u: goto label_216c78;
            case 0x216C7Cu: goto label_216c7c;
            case 0x216C80u: goto label_216c80;
            case 0x216C84u: goto label_216c84;
            case 0x216C88u: goto label_216c88;
            case 0x216C8Cu: goto label_216c8c;
            case 0x216C90u: goto label_216c90;
            case 0x216C94u: goto label_216c94;
            case 0x216C98u: goto label_216c98;
            case 0x216C9Cu: goto label_216c9c;
            case 0x216CA0u: goto label_216ca0;
            case 0x216CA4u: goto label_216ca4;
            case 0x216CA8u: goto label_216ca8;
            case 0x216CACu: goto label_216cac;
            case 0x216CB0u: goto label_216cb0;
            case 0x216CB4u: goto label_216cb4;
            case 0x216CB8u: goto label_216cb8;
            case 0x216CBCu: goto label_216cbc;
            case 0x216CC0u: goto label_216cc0;
            case 0x216CC4u: goto label_216cc4;
            case 0x216CC8u: goto label_216cc8;
            case 0x216CCCu: goto label_216ccc;
            case 0x216CD0u: goto label_216cd0;
            case 0x216CD4u: goto label_216cd4;
            case 0x216CD8u: goto label_216cd8;
            case 0x216CDCu: goto label_216cdc;
            case 0x216CE0u: goto label_216ce0;
            case 0x216CE4u: goto label_216ce4;
            case 0x216CE8u: goto label_216ce8;
            case 0x216CECu: goto label_216cec;
            case 0x216CF0u: goto label_216cf0;
            case 0x216CF4u: goto label_216cf4;
            case 0x216CF8u: goto label_216cf8;
            case 0x216CFCu: goto label_216cfc;
            case 0x216D00u: goto label_216d00;
            case 0x216D04u: goto label_216d04;
            case 0x216D08u: goto label_216d08;
            case 0x216D0Cu: goto label_216d0c;
            case 0x216D10u: goto label_216d10;
            case 0x216D14u: goto label_216d14;
            case 0x216D18u: goto label_216d18;
            case 0x216D1Cu: goto label_216d1c;
            case 0x216D20u: goto label_216d20;
            case 0x216D24u: goto label_216d24;
            case 0x216D28u: goto label_216d28;
            case 0x216D2Cu: goto label_216d2c;
            case 0x216D30u: goto label_216d30;
            case 0x216D34u: goto label_216d34;
            case 0x216D38u: goto label_216d38;
            case 0x216D3Cu: goto label_216d3c;
            case 0x216D40u: goto label_216d40;
            case 0x216D44u: goto label_216d44;
            case 0x216D48u: goto label_216d48;
            case 0x216D4Cu: goto label_216d4c;
            case 0x216D50u: goto label_216d50;
            case 0x216D54u: goto label_216d54;
            case 0x216D58u: goto label_216d58;
            case 0x216D5Cu: goto label_216d5c;
            case 0x216D60u: goto label_216d60;
            case 0x216D64u: goto label_216d64;
            case 0x216D68u: goto label_216d68;
            case 0x216D6Cu: goto label_216d6c;
            case 0x216D70u: goto label_216d70;
            case 0x216D74u: goto label_216d74;
            case 0x216D78u: goto label_216d78;
            case 0x216D7Cu: goto label_216d7c;
            case 0x216D80u: goto label_216d80;
            case 0x216D84u: goto label_216d84;
            case 0x216D88u: goto label_216d88;
            case 0x216D8Cu: goto label_216d8c;
            case 0x216D90u: goto label_216d90;
            case 0x216D94u: goto label_216d94;
            case 0x216D98u: goto label_216d98;
            case 0x216D9Cu: goto label_216d9c;
            case 0x216DA0u: goto label_216da0;
            case 0x216DA4u: goto label_216da4;
            case 0x216DA8u: goto label_216da8;
            case 0x216DACu: goto label_216dac;
            case 0x216DB0u: goto label_216db0;
            case 0x216DB4u: goto label_216db4;
            case 0x216DB8u: goto label_216db8;
            case 0x216DBCu: goto label_216dbc;
            case 0x216DC0u: goto label_216dc0;
            case 0x216DC4u: goto label_216dc4;
            case 0x216DC8u: goto label_216dc8;
            case 0x216DCCu: goto label_216dcc;
            case 0x216DD0u: goto label_216dd0;
            case 0x216DD4u: goto label_216dd4;
            case 0x216DD8u: goto label_216dd8;
            case 0x216DDCu: goto label_216ddc;
            case 0x216DE0u: goto label_216de0;
            case 0x216DE4u: goto label_216de4;
            case 0x216DE8u: goto label_216de8;
            case 0x216DECu: goto label_216dec;
            case 0x216DF0u: goto label_216df0;
            case 0x216DF4u: goto label_216df4;
            case 0x216DF8u: goto label_216df8;
            case 0x216DFCu: goto label_216dfc;
            case 0x216E00u: goto label_216e00;
            case 0x216E04u: goto label_216e04;
            case 0x216E08u: goto label_216e08;
            case 0x216E0Cu: goto label_216e0c;
            case 0x216E10u: goto label_216e10;
            case 0x216E14u: goto label_216e14;
            case 0x216E18u: goto label_216e18;
            case 0x216E1Cu: goto label_216e1c;
            case 0x216E20u: goto label_216e20;
            case 0x216E24u: goto label_216e24;
            case 0x216E28u: goto label_216e28;
            case 0x216E2Cu: goto label_216e2c;
            case 0x216E30u: goto label_216e30;
            case 0x216E34u: goto label_216e34;
            case 0x216E38u: goto label_216e38;
            case 0x216E3Cu: goto label_216e3c;
            case 0x216E40u: goto label_216e40;
            case 0x216E44u: goto label_216e44;
            case 0x216E48u: goto label_216e48;
            case 0x216E4Cu: goto label_216e4c;
            case 0x216E50u: goto label_216e50;
            case 0x216E54u: goto label_216e54;
            case 0x216E58u: goto label_216e58;
            case 0x216E5Cu: goto label_216e5c;
            case 0x216E60u: goto label_216e60;
            case 0x216E64u: goto label_216e64;
            case 0x216E68u: goto label_216e68;
            case 0x216E6Cu: goto label_216e6c;
            case 0x216E70u: goto label_216e70;
            case 0x216E74u: goto label_216e74;
            case 0x216E78u: goto label_216e78;
            case 0x216E7Cu: goto label_216e7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216DECu; }
            if (ctx->pc != 0x216DECu) { return; }
        }
    }
    ctx->pc = 0x216DECu;
label_216dec:
    // 0x216dec: 0x40182d
    ctx->pc = 0x216decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216df0:
    // 0x216df0: 0x24020001
    ctx->pc = 0x216df0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_216df4:
    // 0x216df4: 0x10620005
label_216df8:
    if (ctx->pc == 0x216DF8u) {
        ctx->pc = 0x216DF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x216DFCu;
        goto label_216dfc;
    }
    ctx->pc = 0x216DF4u;
    {
        const bool branch_taken_0x216df4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x216DF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x216df4) {
            ctx->pc = 0x216E0Cu;
            goto label_216e0c;
        }
    }
    ctx->pc = 0x216DFCu;
label_216dfc:
    // 0x216dfc: 0x1462000a
label_216e00:
    if (ctx->pc == 0x216E00u) {
        ctx->pc = 0x216E00u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x216E04u;
        goto label_216e04;
    }
    ctx->pc = 0x216DFCu;
    {
        const bool branch_taken_0x216dfc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x216E00u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x216dfc) {
            ctx->pc = 0x216E28u;
            goto label_216e28;
        }
    }
    ctx->pc = 0x216E04u;
label_216e04:
    // 0x216e04: 0x1000001a
label_216e08:
    if (ctx->pc == 0x216E08u) {
        ctx->pc = 0x216E08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x216E0Cu;
        goto label_216e0c;
    }
    ctx->pc = 0x216E04u;
    {
        const bool branch_taken_0x216e04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216E08u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x216e04) {
            ctx->pc = 0x216E70u;
            goto label_216e70;
        }
    }
    ctx->pc = 0x216E0Cu;
label_216e0c:
    // 0x216e0c: 0x3c02003c
    ctx->pc = 0x216e0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216e10:
    // 0x216e10: 0x2403ffff
    ctx->pc = 0x216e10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_216e14:
    // 0x216e14: 0xac43cf38
    ctx->pc = 0x216e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954808), GPR_U32(ctx, 3));
label_216e18:
    // 0x216e18: 0x3c04003a
    ctx->pc = 0x216e18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_216e1c:
    // 0x216e1c: 0xc0bed0a
label_216e20:
    if (ctx->pc == 0x216E20u) {
        ctx->pc = 0x216E20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23496));
        ctx->pc = 0x216E24u;
        goto label_216e24;
    }
    ctx->pc = 0x216E1Cu;
    SET_GPR_U32(ctx, 31, 0x216E24u);
    ctx->pc = 0x216E20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23496));
    ctx->pc = 0x2FB428u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x2fb428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E24u; }
    }
    if (ctx->pc != 0x216E24u) { return; }
    ctx->pc = 0x216E24u;
label_216e24:
    // 0x216e24: 0x3c03003c
    ctx->pc = 0x216e24u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_216e28:
    // 0x216e28: 0x3c02003c
    ctx->pc = 0x216e28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216e2c:
    // 0x216e2c: 0x8c42cf38
    ctx->pc = 0x216e2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954808)));
label_216e30:
    // 0x216e30: 0xac62cf3c
    ctx->pc = 0x216e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954812), GPR_U32(ctx, 2));
label_216e34:
    // 0x216e34: 0x3c02003c
    ctx->pc = 0x216e34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_216e38:
    // 0x216e38: 0x8c42cf08
    ctx->pc = 0x216e38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954760)));
label_216e3c:
    // 0x216e3c: 0x3c030010
    ctx->pc = 0x216e3cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
label_216e40:
    // 0x216e40: 0x431024
    ctx->pc = 0x216e40u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_216e44:
    // 0x216e44: 0x10400009
label_216e48:
    if (ctx->pc == 0x216E48u) {
        ctx->pc = 0x216E48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x216E4Cu;
        goto label_216e4c;
    }
    ctx->pc = 0x216E44u;
    {
        const bool branch_taken_0x216e44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x216E48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x216e44) {
            ctx->pc = 0x216E6Cu;
            goto label_216e6c;
        }
    }
    ctx->pc = 0x216E4Cu;
label_216e4c:
    // 0x216e4c: 0x3c03003c
    ctx->pc = 0x216e4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_216e50:
    // 0x216e50: 0x8c62cf30
    ctx->pc = 0x216e50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294954800)));
label_216e54:
    // 0x216e54: 0x24420001
    ctx->pc = 0x216e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_216e58:
    // 0x216e58: 0xac62cf30
    ctx->pc = 0x216e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954800), GPR_U32(ctx, 2));
label_216e5c:
    // 0x216e5c: 0x2c420009
    ctx->pc = 0x216e5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 9));
label_216e60:
    // 0x216e60: 0x50400001
label_216e64:
    if (ctx->pc == 0x216E64u) {
        ctx->pc = 0x216E64u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954800), GPR_U32(ctx, 0));
        ctx->pc = 0x216E68u;
        goto label_216e68;
    }
    ctx->pc = 0x216E60u;
    {
        const bool branch_taken_0x216e60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x216e60) {
            ctx->pc = 0x216E64u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294954800), GPR_U32(ctx, 0));
            ctx->pc = 0x216E68u;
            goto label_216e68;
        }
    }
    ctx->pc = 0x216E68u;
label_216e68:
    // 0x216e68: 0x102d
    ctx->pc = 0x216e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216e6c:
    // 0x216e6c: 0xdfbf0020
    ctx->pc = 0x216e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_216e70:
    // 0x216e70: 0xdfb10010
    ctx->pc = 0x216e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_216e74:
    // 0x216e74: 0xdfb00000
    ctx->pc = 0x216e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_216e78:
    // 0x216e78: 0x3e00008
label_216e7c:
    if (ctx->pc == 0x216E7Cu) {
        ctx->pc = 0x216E7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x216E80u;
        goto label_fallthrough_0x216e78;
    }
    ctx->pc = 0x216E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216E7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216C38u: goto label_216c38;
            case 0x216C3Cu: goto label_216c3c;
            case 0x216C40u: goto label_216c40;
            case 0x216C44u: goto label_216c44;
            case 0x216C48u: goto label_216c48;
            case 0x216C4Cu: goto label_216c4c;
            case 0x216C50u: goto label_216c50;
            case 0x216C54u: goto label_216c54;
            case 0x216C58u: goto label_216c58;
            case 0x216C5Cu: goto label_216c5c;
            case 0x216C60u: goto label_216c60;
            case 0x216C64u: goto label_216c64;
            case 0x216C68u: goto label_216c68;
            case 0x216C6Cu: goto label_216c6c;
            case 0x216C70u: goto label_216c70;
            case 0x216C74u: goto label_216c74;
            case 0x216C78u: goto label_216c78;
            case 0x216C7Cu: goto label_216c7c;
            case 0x216C80u: goto label_216c80;
            case 0x216C84u: goto label_216c84;
            case 0x216C88u: goto label_216c88;
            case 0x216C8Cu: goto label_216c8c;
            case 0x216C90u: goto label_216c90;
            case 0x216C94u: goto label_216c94;
            case 0x216C98u: goto label_216c98;
            case 0x216C9Cu: goto label_216c9c;
            case 0x216CA0u: goto label_216ca0;
            case 0x216CA4u: goto label_216ca4;
            case 0x216CA8u: goto label_216ca8;
            case 0x216CACu: goto label_216cac;
            case 0x216CB0u: goto label_216cb0;
            case 0x216CB4u: goto label_216cb4;
            case 0x216CB8u: goto label_216cb8;
            case 0x216CBCu: goto label_216cbc;
            case 0x216CC0u: goto label_216cc0;
            case 0x216CC4u: goto label_216cc4;
            case 0x216CC8u: goto label_216cc8;
            case 0x216CCCu: goto label_216ccc;
            case 0x216CD0u: goto label_216cd0;
            case 0x216CD4u: goto label_216cd4;
            case 0x216CD8u: goto label_216cd8;
            case 0x216CDCu: goto label_216cdc;
            case 0x216CE0u: goto label_216ce0;
            case 0x216CE4u: goto label_216ce4;
            case 0x216CE8u: goto label_216ce8;
            case 0x216CECu: goto label_216cec;
            case 0x216CF0u: goto label_216cf0;
            case 0x216CF4u: goto label_216cf4;
            case 0x216CF8u: goto label_216cf8;
            case 0x216CFCu: goto label_216cfc;
            case 0x216D00u: goto label_216d00;
            case 0x216D04u: goto label_216d04;
            case 0x216D08u: goto label_216d08;
            case 0x216D0Cu: goto label_216d0c;
            case 0x216D10u: goto label_216d10;
            case 0x216D14u: goto label_216d14;
            case 0x216D18u: goto label_216d18;
            case 0x216D1Cu: goto label_216d1c;
            case 0x216D20u: goto label_216d20;
            case 0x216D24u: goto label_216d24;
            case 0x216D28u: goto label_216d28;
            case 0x216D2Cu: goto label_216d2c;
            case 0x216D30u: goto label_216d30;
            case 0x216D34u: goto label_216d34;
            case 0x216D38u: goto label_216d38;
            case 0x216D3Cu: goto label_216d3c;
            case 0x216D40u: goto label_216d40;
            case 0x216D44u: goto label_216d44;
            case 0x216D48u: goto label_216d48;
            case 0x216D4Cu: goto label_216d4c;
            case 0x216D50u: goto label_216d50;
            case 0x216D54u: goto label_216d54;
            case 0x216D58u: goto label_216d58;
            case 0x216D5Cu: goto label_216d5c;
            case 0x216D60u: goto label_216d60;
            case 0x216D64u: goto label_216d64;
            case 0x216D68u: goto label_216d68;
            case 0x216D6Cu: goto label_216d6c;
            case 0x216D70u: goto label_216d70;
            case 0x216D74u: goto label_216d74;
            case 0x216D78u: goto label_216d78;
            case 0x216D7Cu: goto label_216d7c;
            case 0x216D80u: goto label_216d80;
            case 0x216D84u: goto label_216d84;
            case 0x216D88u: goto label_216d88;
            case 0x216D8Cu: goto label_216d8c;
            case 0x216D90u: goto label_216d90;
            case 0x216D94u: goto label_216d94;
            case 0x216D98u: goto label_216d98;
            case 0x216D9Cu: goto label_216d9c;
            case 0x216DA0u: goto label_216da0;
            case 0x216DA4u: goto label_216da4;
            case 0x216DA8u: goto label_216da8;
            case 0x216DACu: goto label_216dac;
            case 0x216DB0u: goto label_216db0;
            case 0x216DB4u: goto label_216db4;
            case 0x216DB8u: goto label_216db8;
            case 0x216DBCu: goto label_216dbc;
            case 0x216DC0u: goto label_216dc0;
            case 0x216DC4u: goto label_216dc4;
            case 0x216DC8u: goto label_216dc8;
            case 0x216DCCu: goto label_216dcc;
            case 0x216DD0u: goto label_216dd0;
            case 0x216DD4u: goto label_216dd4;
            case 0x216DD8u: goto label_216dd8;
            case 0x216DDCu: goto label_216ddc;
            case 0x216DE0u: goto label_216de0;
            case 0x216DE4u: goto label_216de4;
            case 0x216DE8u: goto label_216de8;
            case 0x216DECu: goto label_216dec;
            case 0x216DF0u: goto label_216df0;
            case 0x216DF4u: goto label_216df4;
            case 0x216DF8u: goto label_216df8;
            case 0x216DFCu: goto label_216dfc;
            case 0x216E00u: goto label_216e00;
            case 0x216E04u: goto label_216e04;
            case 0x216E08u: goto label_216e08;
            case 0x216E0Cu: goto label_216e0c;
            case 0x216E10u: goto label_216e10;
            case 0x216E14u: goto label_216e14;
            case 0x216E18u: goto label_216e18;
            case 0x216E1Cu: goto label_216e1c;
            case 0x216E20u: goto label_216e20;
            case 0x216E24u: goto label_216e24;
            case 0x216E28u: goto label_216e28;
            case 0x216E2Cu: goto label_216e2c;
            case 0x216E30u: goto label_216e30;
            case 0x216E34u: goto label_216e34;
            case 0x216E38u: goto label_216e38;
            case 0x216E3Cu: goto label_216e3c;
            case 0x216E40u: goto label_216e40;
            case 0x216E44u: goto label_216e44;
            case 0x216E48u: goto label_216e48;
            case 0x216E4Cu: goto label_216e4c;
            case 0x216E50u: goto label_216e50;
            case 0x216E54u: goto label_216e54;
            case 0x216E58u: goto label_216e58;
            case 0x216E5Cu: goto label_216e5c;
            case 0x216E60u: goto label_216e60;
            case 0x216E64u: goto label_216e64;
            case 0x216E68u: goto label_216e68;
            case 0x216E6Cu: goto label_216e6c;
            case 0x216E70u: goto label_216e70;
            case 0x216E74u: goto label_216e74;
            case 0x216E78u: goto label_216e78;
            case 0x216E7Cu: goto label_216e7c;
            default: break;
        }
        return;
    }
label_fallthrough_0x216e78:
    ctx->pc = 0x216E80u;
}
