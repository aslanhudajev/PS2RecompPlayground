#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: evalOp
// Address: 0x2b4d98 - 0x2b5254
void evalOp_0x2b4d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b4d98u;

label_2b4d98:
    // 0x2b4d98: 0x27bdffb0
    ctx->pc = 0x2b4d98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b4d9c:
    // 0x2b4d9c: 0xffbf0040
    ctx->pc = 0x2b4d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b4da0:
    // 0x2b4da0: 0xffb30030
    ctx->pc = 0x2b4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2b4da4:
    // 0x2b4da4: 0xffb20020
    ctx->pc = 0x2b4da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b4da8:
    // 0x2b4da8: 0xffb10010
    ctx->pc = 0x2b4da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2b4dac:
    // 0x2b4dac: 0xffb00000
    ctx->pc = 0x2b4dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b4db0:
    // 0x2b4db0: 0x80902d
    ctx->pc = 0x2b4db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4db4:
    // 0x2b4db4: 0xa0802d
    ctx->pc = 0x2b4db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b4db8:
    // 0x2b4db8: 0xc0882d
    ctx->pc = 0x2b4db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b4dbc:
    // 0x2b4dbc: 0x8e020000
    ctx->pc = 0x2b4dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b4dc0:
    // 0x2b4dc0: 0x8e230000
    ctx->pc = 0x2b4dc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4dc4:
    // 0x2b4dc4: 0x431025
    ctx->pc = 0x2b4dc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b4dc8:
    // 0x2b4dc8: 0x30420020
    ctx->pc = 0x2b4dc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
label_2b4dcc:
    // 0x2b4dcc: 0x144000fb
label_2b4dd0:
    if (ctx->pc == 0x2B4DD0u) {
        ctx->pc = 0x2B4DD0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DD4u;
        goto label_2b4dd4;
    }
    ctx->pc = 0x2B4DCCu;
    {
        const bool branch_taken_0x2b4dcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B4DD0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4dcc) {
            ctx->pc = 0x2B51BCu;
            goto label_2b51bc;
        }
    }
    ctx->pc = 0x2B4DD4u;
label_2b4dd4:
    // 0x2b4dd4: 0x3c040037
    ctx->pc = 0x2b4dd4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)55 << 16));
label_2b4dd8:
    // 0x2b4dd8: 0x248421c8
    ctx->pc = 0x2b4dd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8648));
label_2b4ddc:
    // 0x2b4ddc: 0xc0ad05e
label_2b4de0:
    if (ctx->pc == 0x2B4DE0u) {
        ctx->pc = 0x2B4DE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DE4u;
        goto label_2b4de4;
    }
    ctx->pc = 0x2B4DDCu;
    SET_GPR_U32(ctx, 31, 0x2B4DE4u);
    ctx->pc = 0x2B4DE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4DE4u; }
    }
    if (ctx->pc != 0x2B4DE4u) { return; }
    ctx->pc = 0x2B4DE4u;
label_2b4de4:
    // 0x2b4de4: 0x40202d
    ctx->pc = 0x2b4de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b4de8:
    // 0x2b4de8: 0x1480000b
label_2b4dec:
    if (ctx->pc == 0x2B4DECu) {
        ctx->pc = 0x2B4DECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        ctx->pc = 0x2B4DF0u;
        goto label_2b4df0;
    }
    ctx->pc = 0x2B4DE8u;
    {
        const bool branch_taken_0x2b4de8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B4DECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2b4de8) {
            ctx->pc = 0x2B4E18u;
            goto label_2b4e18;
        }
    }
    ctx->pc = 0x2B4DF0u;
label_2b4df0:
    // 0x2b4df0: 0x3c04003b
    ctx->pc = 0x2b4df0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b4df4:
    // 0x2b4df4: 0x24844650
    ctx->pc = 0x2b4df4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b4df8:
    // 0x2b4df8: 0x24050020
    ctx->pc = 0x2b4df8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b4dfc:
    // 0x2b4dfc: 0x3c06003b
    ctx->pc = 0x2b4dfcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b4e00:
    // 0x2b4e00: 0x24c60d80
    ctx->pc = 0x2b4e00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b4e04:
    // 0x2b4e04: 0xc0ad0d6
label_2b4e08:
    if (ctx->pc == 0x2B4E08u) {
        ctx->pc = 0x2B4E08u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B4E0Cu;
        goto label_2b4e0c;
    }
    ctx->pc = 0x2B4E04u;
    SET_GPR_U32(ctx, 31, 0x2B4E0Cu);
    ctx->pc = 0x2B4E08u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E0Cu; }
    }
    if (ctx->pc != 0x2B4E0Cu) { return; }
    ctx->pc = 0x2B4E0Cu;
label_2b4e0c:
    // 0x2b4e0c: 0x3c04003b
    ctx->pc = 0x2b4e0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b4e10:
    // 0x2b4e10: 0x100000e0
label_2b4e14:
    if (ctx->pc == 0x2B4E14u) {
        ctx->pc = 0x2B4E14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18496));
        ctx->pc = 0x2B4E18u;
        goto label_2b4e18;
    }
    ctx->pc = 0x2B4E10u;
    {
        const bool branch_taken_0x2b4e10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4E14u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18496));
        if (branch_taken_0x2b4e10) {
            ctx->pc = 0x2B5194u;
            goto label_2b5194;
        }
    }
    ctx->pc = 0x2B4E18u;
label_2b4e18:
    // 0x2b4e18: 0x244221d8
    ctx->pc = 0x2b4e18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8664));
label_2b4e1c:
    // 0x2b4e1c: 0x3c030037
    ctx->pc = 0x2b4e1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
label_2b4e20:
    // 0x2b4e20: 0x246321c8
    ctx->pc = 0x2b4e20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8648));
label_2b4e24:
    // 0x2b4e24: 0x831823
    ctx->pc = 0x2b4e24u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2b4e28:
    // 0x2b4e28: 0x621821
    ctx->pc = 0x2b4e28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b4e2c:
    // 0x2b4e2c: 0x80630000
    ctx->pc = 0x2b4e2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2b4e30:
    // 0x2b4e30: 0x24020049
    ctx->pc = 0x2b4e30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 73));
label_2b4e34:
    // 0x2b4e34: 0x1062001c
label_2b4e38:
    if (ctx->pc == 0x2B4E38u) {
        ctx->pc = 0x2B4E38u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 74));
        ctx->pc = 0x2B4E3Cu;
        goto label_2b4e3c;
    }
    ctx->pc = 0x2B4E34u;
    {
        const bool branch_taken_0x2b4e34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4E38u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 74));
        if (branch_taken_0x2b4e34) {
            ctx->pc = 0x2B4EA8u;
            goto label_2b4ea8;
        }
    }
    ctx->pc = 0x2B4E3Cu;
label_2b4e3c:
    // 0x2b4e3c: 0x54400024
label_2b4e40:
    if (ctx->pc == 0x2B4E40u) {
        ctx->pc = 0x2B4E40u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B4E44u;
        goto label_2b4e44;
    }
    ctx->pc = 0x2B4E3Cu;
    {
        const bool branch_taken_0x2b4e3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2b4e3c) {
            ctx->pc = 0x2B4E40u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B4ED0u;
            goto label_2b4ed0;
        }
    }
    ctx->pc = 0x2B4E44u;
label_2b4e44:
    // 0x2b4e44: 0x24020050
    ctx->pc = 0x2b4e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
label_2b4e48:
    // 0x2b4e48: 0x54620021
label_2b4e4c:
    if (ctx->pc == 0x2B4E4Cu) {
        ctx->pc = 0x2B4E4Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B4E50u;
        goto label_2b4e50;
    }
    ctx->pc = 0x2B4E48u;
    {
        const bool branch_taken_0x2b4e48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b4e48) {
            ctx->pc = 0x2B4E4Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B4ED0u;
            goto label_2b4ed0;
        }
    }
    ctx->pc = 0x2B4E50u;
label_2b4e50:
    // 0x2b4e50: 0x8e030000
    ctx->pc = 0x2b4e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b4e54:
    // 0x2b4e54: 0x24020001
    ctx->pc = 0x2b4e54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b4e58:
    // 0x2b4e58: 0x5462000b
label_2b4e5c:
    if (ctx->pc == 0x2B4E5Cu) {
        ctx->pc = 0x2B4E5Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2B4E60u;
        goto label_2b4e60;
    }
    ctx->pc = 0x2B4E58u;
    {
        const bool branch_taken_0x2b4e58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b4e58) {
            ctx->pc = 0x2B4E5Cu;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x2B4E88u;
            goto label_2b4e88;
        }
    }
    ctx->pc = 0x2B4E60u;
label_2b4e60:
    // 0x2b4e60: 0x8e220000
    ctx->pc = 0x2b4e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4e64:
    // 0x2b4e64: 0x5043001a
label_2b4e68:
    if (ctx->pc == 0x2B4E68u) {
        ctx->pc = 0x2B4E68u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B4E6Cu;
        goto label_2b4e6c;
    }
    ctx->pc = 0x2B4E64u;
    {
        const bool branch_taken_0x2b4e64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2b4e64) {
            ctx->pc = 0x2B4E68u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B4ED0u;
            goto label_2b4ed0;
        }
    }
    ctx->pc = 0x2B4E6Cu;
label_2b4e6c:
    // 0x2b4e6c: 0x200202d
    ctx->pc = 0x2b4e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b4e70:
    // 0x2b4e70: 0xc0ad1d2
label_2b4e74:
    if (ctx->pc == 0x2B4E74u) {
        ctx->pc = 0x2B4E74u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B4E78u;
        goto label_2b4e78;
    }
    ctx->pc = 0x2B4E70u;
    SET_GPR_U32(ctx, 31, 0x2B4E78u);
    ctx->pc = 0x2B4E74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E78u; }
    }
    if (ctx->pc != 0x2B4E78u) { return; }
    ctx->pc = 0x2B4E78u;
label_2b4e78:
    // 0x2b4e78: 0xe6000010
    ctx->pc = 0x2b4e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2b4e7c:
    // 0x2b4e7c: 0xae000000
    ctx->pc = 0x2b4e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2b4e80:
    // 0x2b4e80: 0x8e230000
    ctx->pc = 0x2b4e80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4e84:
    // 0x2b4e84: 0x24020001
    ctx->pc = 0x2b4e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b4e88:
    // 0x2b4e88: 0x54620011
label_2b4e8c:
    if (ctx->pc == 0x2B4E8Cu) {
        ctx->pc = 0x2B4E8Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B4E90u;
        goto label_2b4e90;
    }
    ctx->pc = 0x2B4E88u;
    {
        const bool branch_taken_0x2b4e88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b4e88) {
            ctx->pc = 0x2B4E8Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2B4ED0u;
            goto label_2b4ed0;
        }
    }
    ctx->pc = 0x2B4E90u;
label_2b4e90:
    // 0x2b4e90: 0x220202d
    ctx->pc = 0x2b4e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b4e94:
    // 0x2b4e94: 0xc0ad1d2
label_2b4e98:
    if (ctx->pc == 0x2B4E98u) {
        ctx->pc = 0x2B4E98u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2B4E9Cu;
        goto label_2b4e9c;
    }
    ctx->pc = 0x2B4E94u;
    SET_GPR_U32(ctx, 31, 0x2B4E9Cu);
    ctx->pc = 0x2B4E98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2B4748u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalFloat_0x2b4748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4E9Cu; }
    }
    if (ctx->pc != 0x2B4E9Cu) { return; }
    ctx->pc = 0x2B4E9Cu;
label_2b4e9c:
    // 0x2b4e9c: 0xe6200010
    ctx->pc = 0x2b4e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2b4ea0:
    // 0x2b4ea0: 0x1000000a
label_2b4ea4:
    if (ctx->pc == 0x2B4EA4u) {
        ctx->pc = 0x2B4EA4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2B4EA8u;
        goto label_2b4ea8;
    }
    ctx->pc = 0x2B4EA0u;
    {
        const bool branch_taken_0x2b4ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4EA4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2b4ea0) {
            ctx->pc = 0x2B4ECCu;
            goto label_2b4ecc;
        }
    }
    ctx->pc = 0x2B4EA8u;
label_2b4ea8:
    // 0x2b4ea8: 0xc0ad1a2
label_2b4eac:
    if (ctx->pc == 0x2B4EACu) {
        ctx->pc = 0x2B4EACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B4EB0u;
        goto label_2b4eb0;
    }
    ctx->pc = 0x2B4EA8u;
    SET_GPR_U32(ctx, 31, 0x2B4EB0u);
    ctx->pc = 0x2B4EACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EB0u; }
    }
    if (ctx->pc != 0x2B4EB0u) { return; }
    ctx->pc = 0x2B4EB0u;
label_2b4eb0:
    // 0x2b4eb0: 0xae020010
    ctx->pc = 0x2b4eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_2b4eb4:
    // 0x2b4eb4: 0xc0ad1a2
label_2b4eb8:
    if (ctx->pc == 0x2B4EB8u) {
        ctx->pc = 0x2B4EB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B4EBCu;
        goto label_2b4ebc;
    }
    ctx->pc = 0x2B4EB4u;
    SET_GPR_U32(ctx, 31, 0x2B4EBCu);
    ctx->pc = 0x2B4EB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B4EBCu; }
    }
    if (ctx->pc != 0x2B4EBCu) { return; }
    ctx->pc = 0x2B4EBCu;
label_2b4ebc:
    // 0x2b4ebc: 0xae220010
    ctx->pc = 0x2b4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2b4ec0:
    // 0x2b4ec0: 0x24020001
    ctx->pc = 0x2b4ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2b4ec4:
    // 0x2b4ec4: 0xae020000
    ctx->pc = 0x2b4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2b4ec8:
    // 0x2b4ec8: 0xae220000
    ctx->pc = 0x2b4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b4ecc:
    // 0x2b4ecc: 0x8e020000
    ctx->pc = 0x2b4eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b4ed0:
    // 0x2b4ed0: 0x21880
    ctx->pc = 0x2b4ed0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
label_2b4ed4:
    // 0x2b4ed4: 0x8e220000
    ctx->pc = 0x2b4ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b4ed8:
    // 0x2b4ed8: 0x621825
    ctx->pc = 0x2b4ed8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b4edc:
    // 0x2b4edc: 0xae420000
    ctx->pc = 0x2b4edcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2b4ee0:
    // 0x2b4ee0: 0x24020005
    ctx->pc = 0x2b4ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_2b4ee4:
    // 0x2b4ee4: 0x50620001
label_2b4ee8:
    if (ctx->pc == 0x2B4EE8u) {
        ctx->pc = 0x2B4EE8u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2B4EECu;
        goto label_2b4eec;
    }
    ctx->pc = 0x2B4EE4u;
    {
        const bool branch_taken_0x2b4ee4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2b4ee4) {
            ctx->pc = 0x2B4EE8u;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2B4EECu;
            goto label_2b4eec;
        }
    }
    ctx->pc = 0x2B4EECu;
label_2b4eec:
    // 0x2b4eec: 0x2402002b
    ctx->pc = 0x2b4eecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_2b4ef0:
    // 0x2b4ef0: 0x1262001c
label_2b4ef4:
    if (ctx->pc == 0x2B4EF4u) {
        ctx->pc = 0x2B4EF4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 44));
        ctx->pc = 0x2B4EF8u;
        goto label_2b4ef8;
    }
    ctx->pc = 0x2B4EF0u;
    {
        const bool branch_taken_0x2b4ef0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4EF4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 44));
        if (branch_taken_0x2b4ef0) {
            ctx->pc = 0x2B4F64u;
            goto label_2b4f64;
        }
    }
    ctx->pc = 0x2B4EF8u;
label_2b4ef8:
    // 0x2b4ef8: 0x1040000e
label_2b4efc:
    if (ctx->pc == 0x2B4EFCu) {
        ctx->pc = 0x2B4EFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x2B4F00u;
        goto label_2b4f00;
    }
    ctx->pc = 0x2B4EF8u;
    {
        const bool branch_taken_0x2b4ef8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4EFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 38));
        if (branch_taken_0x2b4ef8) {
            ctx->pc = 0x2B4F34u;
            goto label_2b4f34;
        }
    }
    ctx->pc = 0x2B4F00u;
label_2b4f00:
    // 0x2b4f00: 0x12620080
label_2b4f04:
    if (ctx->pc == 0x2B4F04u) {
        ctx->pc = 0x2B4F04u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 39));
        ctx->pc = 0x2B4F08u;
        goto label_2b4f08;
    }
    ctx->pc = 0x2B4F00u;
    {
        const bool branch_taken_0x2b4f00 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4F04u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 39));
        if (branch_taken_0x2b4f00) {
            ctx->pc = 0x2B5104u;
            goto label_2b5104;
        }
    }
    ctx->pc = 0x2B4F08u;
label_2b4f08:
    // 0x2b4f08: 0x10400005
label_2b4f0c:
    if (ctx->pc == 0x2B4F0Cu) {
        ctx->pc = 0x2B4F0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x2B4F10u;
        goto label_2b4f10;
    }
    ctx->pc = 0x2B4F08u;
    {
        const bool branch_taken_0x2b4f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4F0Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
        if (branch_taken_0x2b4f08) {
            ctx->pc = 0x2B4F20u;
            goto label_2b4f20;
        }
    }
    ctx->pc = 0x2B4F10u;
label_2b4f10:
    // 0x2b4f10: 0x12620069
label_2b4f14:
    if (ctx->pc == 0x2B4F14u) {
        ctx->pc = 0x2B4F14u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B4F18u;
        goto label_2b4f18;
    }
    ctx->pc = 0x2B4F10u;
    {
        const bool branch_taken_0x2b4f10 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4F14u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4f10) {
            ctx->pc = 0x2B50B8u;
            goto label_2b50b8;
        }
    }
    ctx->pc = 0x2B4F18u;
label_2b4f18:
    // 0x2b4f18: 0x10000097
label_2b4f1c:
    if (ctx->pc == 0x2B4F1Cu) {
        ctx->pc = 0x2B4F1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        ctx->pc = 0x2B4F20u;
        goto label_2b4f20;
    }
    ctx->pc = 0x2B4F18u;
    {
        const bool branch_taken_0x2b4f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4F1Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b4f18) {
            ctx->pc = 0x2B5178u;
            goto label_2b5178;
        }
    }
    ctx->pc = 0x2B4F20u;
label_2b4f20:
    // 0x2b4f20: 0x2402002a
    ctx->pc = 0x2b4f20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 42));
label_2b4f24:
    // 0x2b4f24: 0x12620037
label_2b4f28:
    if (ctx->pc == 0x2B4F28u) {
        ctx->pc = 0x2B4F28u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B4F2Cu;
        goto label_2b4f2c;
    }
    ctx->pc = 0x2B4F24u;
    {
        const bool branch_taken_0x2b4f24 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4F28u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4f24) {
            ctx->pc = 0x2B5004u;
            goto label_2b5004;
        }
    }
    ctx->pc = 0x2B4F2Cu;
label_2b4f2c:
    // 0x2b4f2c: 0x10000092
label_2b4f30:
    if (ctx->pc == 0x2B4F30u) {
        ctx->pc = 0x2B4F30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        ctx->pc = 0x2B4F34u;
        goto label_2b4f34;
    }
    ctx->pc = 0x2B4F2Cu;
    {
        const bool branch_taken_0x2b4f2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4F30u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b4f2c) {
            ctx->pc = 0x2B5178u;
            goto label_2b5178;
        }
    }
    ctx->pc = 0x2B4F34u;
label_2b4f34:
    // 0x2b4f34: 0x2402002d
    ctx->pc = 0x2b4f34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
label_2b4f38:
    // 0x2b4f38: 0x1262001e
label_2b4f3c:
    if (ctx->pc == 0x2B4F3Cu) {
        ctx->pc = 0x2B4F3Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 45));
        ctx->pc = 0x2B4F40u;
        goto label_2b4f40;
    }
    ctx->pc = 0x2B4F38u;
    {
        const bool branch_taken_0x2b4f38 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4F3Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 45));
        if (branch_taken_0x2b4f38) {
            ctx->pc = 0x2B4FB4u;
            goto label_2b4fb4;
        }
    }
    ctx->pc = 0x2B4F40u;
label_2b4f40:
    // 0x2b4f40: 0x14400078
label_2b4f44:
    if (ctx->pc == 0x2B4F44u) {
        ctx->pc = 0x2B4F44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F48u;
        goto label_2b4f48;
    }
    ctx->pc = 0x2B4F40u;
    {
        const bool branch_taken_0x2b4f40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B4F44u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b4f40) {
            ctx->pc = 0x2B5124u;
            goto label_2b5124;
        }
    }
    ctx->pc = 0x2B4F48u;
label_2b4f48:
    // 0x2b4f48: 0x2402002f
    ctx->pc = 0x2b4f48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
label_2b4f4c:
    // 0x2b4f4c: 0x12620041
label_2b4f50:
    if (ctx->pc == 0x2B4F50u) {
        ctx->pc = 0x2B4F50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 124));
        ctx->pc = 0x2B4F54u;
        goto label_2b4f54;
    }
    ctx->pc = 0x2B4F4Cu;
    {
        const bool branch_taken_0x2b4f4c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4F50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 124));
        if (branch_taken_0x2b4f4c) {
            ctx->pc = 0x2B5054u;
            goto label_2b5054;
        }
    }
    ctx->pc = 0x2B4F54u;
label_2b4f54:
    // 0x2b4f54: 0x12620063
label_2b4f58:
    if (ctx->pc == 0x2B4F58u) {
        ctx->pc = 0x2B4F58u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        ctx->pc = 0x2B4F5Cu;
        goto label_2b4f5c;
    }
    ctx->pc = 0x2B4F54u;
    {
        const bool branch_taken_0x2b4f54 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B4F58u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4f54) {
            ctx->pc = 0x2B50E4u;
            goto label_2b50e4;
        }
    }
    ctx->pc = 0x2B4F5Cu;
label_2b4f5c:
    // 0x2b4f5c: 0x10000086
label_2b4f60:
    if (ctx->pc == 0x2B4F60u) {
        ctx->pc = 0x2B4F60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        ctx->pc = 0x2B4F64u;
        goto label_2b4f64;
    }
    ctx->pc = 0x2B4F5Cu;
    {
        const bool branch_taken_0x2b4f5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4F60u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
        if (branch_taken_0x2b4f5c) {
            ctx->pc = 0x2B5178u;
            goto label_2b5178;
        }
    }
    ctx->pc = 0x2B4F64u;
label_2b4f64:
    // 0x2b4f64: 0x2463fffc
    ctx->pc = 0x2b4f64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_2b4f68:
    // 0x2b4f68: 0x2c620010
    ctx->pc = 0x2b4f68u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_2b4f6c:
    // 0x2b4f6c: 0x10400096
label_2b4f70:
    if (ctx->pc == 0x2B4F70u) {
        ctx->pc = 0x2B4F70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B4F74u;
        goto label_2b4f74;
    }
    ctx->pc = 0x2B4F6Cu;
    {
        const bool branch_taken_0x2b4f6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4F70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4f6c) {
            ctx->pc = 0x2B51C8u;
            goto label_2b51c8;
        }
    }
    ctx->pc = 0x2B4F74u;
label_2b4f74:
    // 0x2b4f74: 0x24424890
    ctx->pc = 0x2b4f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18576));
label_2b4f78:
    // 0x2b4f78: 0x31880
    ctx->pc = 0x2b4f78u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b4f7c:
    // 0x2b4f7c: 0x621821
    ctx->pc = 0x2b4f7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b4f80:
    // 0x2b4f80: 0x8c620000
    ctx->pc = 0x2b4f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b4f84:
    // 0x2b4f84: 0x400008
label_2b4f88:
    if (ctx->pc == 0x2B4F88u) {
        ctx->pc = 0x2B4F8Cu;
        goto label_2b4f8c;
    }
    ctx->pc = 0x2B4F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4D98u: goto label_2b4d98;
            case 0x2B4D9Cu: goto label_2b4d9c;
            case 0x2B4DA0u: goto label_2b4da0;
            case 0x2B4DA4u: goto label_2b4da4;
            case 0x2B4DA8u: goto label_2b4da8;
            case 0x2B4DACu: goto label_2b4dac;
            case 0x2B4DB0u: goto label_2b4db0;
            case 0x2B4DB4u: goto label_2b4db4;
            case 0x2B4DB8u: goto label_2b4db8;
            case 0x2B4DBCu: goto label_2b4dbc;
            case 0x2B4DC0u: goto label_2b4dc0;
            case 0x2B4DC4u: goto label_2b4dc4;
            case 0x2B4DC8u: goto label_2b4dc8;
            case 0x2B4DCCu: goto label_2b4dcc;
            case 0x2B4DD0u: goto label_2b4dd0;
            case 0x2B4DD4u: goto label_2b4dd4;
            case 0x2B4DD8u: goto label_2b4dd8;
            case 0x2B4DDCu: goto label_2b4ddc;
            case 0x2B4DE0u: goto label_2b4de0;
            case 0x2B4DE4u: goto label_2b4de4;
            case 0x2B4DE8u: goto label_2b4de8;
            case 0x2B4DECu: goto label_2b4dec;
            case 0x2B4DF0u: goto label_2b4df0;
            case 0x2B4DF4u: goto label_2b4df4;
            case 0x2B4DF8u: goto label_2b4df8;
            case 0x2B4DFCu: goto label_2b4dfc;
            case 0x2B4E00u: goto label_2b4e00;
            case 0x2B4E04u: goto label_2b4e04;
            case 0x2B4E08u: goto label_2b4e08;
            case 0x2B4E0Cu: goto label_2b4e0c;
            case 0x2B4E10u: goto label_2b4e10;
            case 0x2B4E14u: goto label_2b4e14;
            case 0x2B4E18u: goto label_2b4e18;
            case 0x2B4E1Cu: goto label_2b4e1c;
            case 0x2B4E20u: goto label_2b4e20;
            case 0x2B4E24u: goto label_2b4e24;
            case 0x2B4E28u: goto label_2b4e28;
            case 0x2B4E2Cu: goto label_2b4e2c;
            case 0x2B4E30u: goto label_2b4e30;
            case 0x2B4E34u: goto label_2b4e34;
            case 0x2B4E38u: goto label_2b4e38;
            case 0x2B4E3Cu: goto label_2b4e3c;
            case 0x2B4E40u: goto label_2b4e40;
            case 0x2B4E44u: goto label_2b4e44;
            case 0x2B4E48u: goto label_2b4e48;
            case 0x2B4E4Cu: goto label_2b4e4c;
            case 0x2B4E50u: goto label_2b4e50;
            case 0x2B4E54u: goto label_2b4e54;
            case 0x2B4E58u: goto label_2b4e58;
            case 0x2B4E5Cu: goto label_2b4e5c;
            case 0x2B4E60u: goto label_2b4e60;
            case 0x2B4E64u: goto label_2b4e64;
            case 0x2B4E68u: goto label_2b4e68;
            case 0x2B4E6Cu: goto label_2b4e6c;
            case 0x2B4E70u: goto label_2b4e70;
            case 0x2B4E74u: goto label_2b4e74;
            case 0x2B4E78u: goto label_2b4e78;
            case 0x2B4E7Cu: goto label_2b4e7c;
            case 0x2B4E80u: goto label_2b4e80;
            case 0x2B4E84u: goto label_2b4e84;
            case 0x2B4E88u: goto label_2b4e88;
            case 0x2B4E8Cu: goto label_2b4e8c;
            case 0x2B4E90u: goto label_2b4e90;
            case 0x2B4E94u: goto label_2b4e94;
            case 0x2B4E98u: goto label_2b4e98;
            case 0x2B4E9Cu: goto label_2b4e9c;
            case 0x2B4EA0u: goto label_2b4ea0;
            case 0x2B4EA4u: goto label_2b4ea4;
            case 0x2B4EA8u: goto label_2b4ea8;
            case 0x2B4EACu: goto label_2b4eac;
            case 0x2B4EB0u: goto label_2b4eb0;
            case 0x2B4EB4u: goto label_2b4eb4;
            case 0x2B4EB8u: goto label_2b4eb8;
            case 0x2B4EBCu: goto label_2b4ebc;
            case 0x2B4EC0u: goto label_2b4ec0;
            case 0x2B4EC4u: goto label_2b4ec4;
            case 0x2B4EC8u: goto label_2b4ec8;
            case 0x2B4ECCu: goto label_2b4ecc;
            case 0x2B4ED0u: goto label_2b4ed0;
            case 0x2B4ED4u: goto label_2b4ed4;
            case 0x2B4ED8u: goto label_2b4ed8;
            case 0x2B4EDCu: goto label_2b4edc;
            case 0x2B4EE0u: goto label_2b4ee0;
            case 0x2B4EE4u: goto label_2b4ee4;
            case 0x2B4EE8u: goto label_2b4ee8;
            case 0x2B4EECu: goto label_2b4eec;
            case 0x2B4EF0u: goto label_2b4ef0;
            case 0x2B4EF4u: goto label_2b4ef4;
            case 0x2B4EF8u: goto label_2b4ef8;
            case 0x2B4EFCu: goto label_2b4efc;
            case 0x2B4F00u: goto label_2b4f00;
            case 0x2B4F04u: goto label_2b4f04;
            case 0x2B4F08u: goto label_2b4f08;
            case 0x2B4F0Cu: goto label_2b4f0c;
            case 0x2B4F10u: goto label_2b4f10;
            case 0x2B4F14u: goto label_2b4f14;
            case 0x2B4F18u: goto label_2b4f18;
            case 0x2B4F1Cu: goto label_2b4f1c;
            case 0x2B4F20u: goto label_2b4f20;
            case 0x2B4F24u: goto label_2b4f24;
            case 0x2B4F28u: goto label_2b4f28;
            case 0x2B4F2Cu: goto label_2b4f2c;
            case 0x2B4F30u: goto label_2b4f30;
            case 0x2B4F34u: goto label_2b4f34;
            case 0x2B4F38u: goto label_2b4f38;
            case 0x2B4F3Cu: goto label_2b4f3c;
            case 0x2B4F40u: goto label_2b4f40;
            case 0x2B4F44u: goto label_2b4f44;
            case 0x2B4F48u: goto label_2b4f48;
            case 0x2B4F4Cu: goto label_2b4f4c;
            case 0x2B4F50u: goto label_2b4f50;
            case 0x2B4F54u: goto label_2b4f54;
            case 0x2B4F58u: goto label_2b4f58;
            case 0x2B4F5Cu: goto label_2b4f5c;
            case 0x2B4F60u: goto label_2b4f60;
            case 0x2B4F64u: goto label_2b4f64;
            case 0x2B4F68u: goto label_2b4f68;
            case 0x2B4F6Cu: goto label_2b4f6c;
            case 0x2B4F70u: goto label_2b4f70;
            case 0x2B4F74u: goto label_2b4f74;
            case 0x2B4F78u: goto label_2b4f78;
            case 0x2B4F7Cu: goto label_2b4f7c;
            case 0x2B4F80u: goto label_2b4f80;
            case 0x2B4F84u: goto label_2b4f84;
            case 0x2B4F88u: goto label_2b4f88;
            case 0x2B4F8Cu: goto label_2b4f8c;
            case 0x2B4F90u: goto label_2b4f90;
            case 0x2B4F94u: goto label_2b4f94;
            case 0x2B4F98u: goto label_2b4f98;
            case 0x2B4F9Cu: goto label_2b4f9c;
            case 0x2B4FA0u: goto label_2b4fa0;
            case 0x2B4FA4u: goto label_2b4fa4;
            case 0x2B4FA8u: goto label_2b4fa8;
            case 0x2B4FACu: goto label_2b4fac;
            case 0x2B4FB0u: goto label_2b4fb0;
            case 0x2B4FB4u: goto label_2b4fb4;
            case 0x2B4FB8u: goto label_2b4fb8;
            case 0x2B4FBCu: goto label_2b4fbc;
            case 0x2B4FC0u: goto label_2b4fc0;
            case 0x2B4FC4u: goto label_2b4fc4;
            case 0x2B4FC8u: goto label_2b4fc8;
            case 0x2B4FCCu: goto label_2b4fcc;
            case 0x2B4FD0u: goto label_2b4fd0;
            case 0x2B4FD4u: goto label_2b4fd4;
            case 0x2B4FD8u: goto label_2b4fd8;
            case 0x2B4FDCu: goto label_2b4fdc;
            case 0x2B4FE0u: goto label_2b4fe0;
            case 0x2B4FE4u: goto label_2b4fe4;
            case 0x2B4FE8u: goto label_2b4fe8;
            case 0x2B4FECu: goto label_2b4fec;
            case 0x2B4FF0u: goto label_2b4ff0;
            case 0x2B4FF4u: goto label_2b4ff4;
            case 0x2B4FF8u: goto label_2b4ff8;
            case 0x2B4FFCu: goto label_2b4ffc;
            case 0x2B5000u: goto label_2b5000;
            case 0x2B5004u: goto label_2b5004;
            case 0x2B5008u: goto label_2b5008;
            case 0x2B500Cu: goto label_2b500c;
            case 0x2B5010u: goto label_2b5010;
            case 0x2B5014u: goto label_2b5014;
            case 0x2B5018u: goto label_2b5018;
            case 0x2B501Cu: goto label_2b501c;
            case 0x2B5020u: goto label_2b5020;
            case 0x2B5024u: goto label_2b5024;
            case 0x2B5028u: goto label_2b5028;
            case 0x2B502Cu: goto label_2b502c;
            case 0x2B5030u: goto label_2b5030;
            case 0x2B5034u: goto label_2b5034;
            case 0x2B5038u: goto label_2b5038;
            case 0x2B503Cu: goto label_2b503c;
            case 0x2B5040u: goto label_2b5040;
            case 0x2B5044u: goto label_2b5044;
            case 0x2B5048u: goto label_2b5048;
            case 0x2B504Cu: goto label_2b504c;
            case 0x2B5050u: goto label_2b5050;
            case 0x2B5054u: goto label_2b5054;
            case 0x2B5058u: goto label_2b5058;
            case 0x2B505Cu: goto label_2b505c;
            case 0x2B5060u: goto label_2b5060;
            case 0x2B5064u: goto label_2b5064;
            case 0x2B5068u: goto label_2b5068;
            case 0x2B506Cu: goto label_2b506c;
            case 0x2B5070u: goto label_2b5070;
            case 0x2B5074u: goto label_2b5074;
            case 0x2B5078u: goto label_2b5078;
            case 0x2B507Cu: goto label_2b507c;
            case 0x2B5080u: goto label_2b5080;
            case 0x2B5084u: goto label_2b5084;
            case 0x2B5088u: goto label_2b5088;
            case 0x2B508Cu: goto label_2b508c;
            case 0x2B5090u: goto label_2b5090;
            case 0x2B5094u: goto label_2b5094;
            case 0x2B5098u: goto label_2b5098;
            case 0x2B509Cu: goto label_2b509c;
            case 0x2B50A0u: goto label_2b50a0;
            case 0x2B50A4u: goto label_2b50a4;
            case 0x2B50A8u: goto label_2b50a8;
            case 0x2B50ACu: goto label_2b50ac;
            case 0x2B50B0u: goto label_2b50b0;
            case 0x2B50B4u: goto label_2b50b4;
            case 0x2B50B8u: goto label_2b50b8;
            case 0x2B50BCu: goto label_2b50bc;
            case 0x2B50C0u: goto label_2b50c0;
            case 0x2B50C4u: goto label_2b50c4;
            case 0x2B50C8u: goto label_2b50c8;
            case 0x2B50CCu: goto label_2b50cc;
            case 0x2B50D0u: goto label_2b50d0;
            case 0x2B50D4u: goto label_2b50d4;
            case 0x2B50D8u: goto label_2b50d8;
            case 0x2B50DCu: goto label_2b50dc;
            case 0x2B50E0u: goto label_2b50e0;
            case 0x2B50E4u: goto label_2b50e4;
            case 0x2B50E8u: goto label_2b50e8;
            case 0x2B50ECu: goto label_2b50ec;
            case 0x2B50F0u: goto label_2b50f0;
            case 0x2B50F4u: goto label_2b50f4;
            case 0x2B50F8u: goto label_2b50f8;
            case 0x2B50FCu: goto label_2b50fc;
            case 0x2B5100u: goto label_2b5100;
            case 0x2B5104u: goto label_2b5104;
            case 0x2B5108u: goto label_2b5108;
            case 0x2B510Cu: goto label_2b510c;
            case 0x2B5110u: goto label_2b5110;
            case 0x2B5114u: goto label_2b5114;
            case 0x2B5118u: goto label_2b5118;
            case 0x2B511Cu: goto label_2b511c;
            case 0x2B5120u: goto label_2b5120;
            case 0x2B5124u: goto label_2b5124;
            case 0x2B5128u: goto label_2b5128;
            case 0x2B512Cu: goto label_2b512c;
            case 0x2B5130u: goto label_2b5130;
            case 0x2B5134u: goto label_2b5134;
            case 0x2B5138u: goto label_2b5138;
            case 0x2B513Cu: goto label_2b513c;
            case 0x2B5140u: goto label_2b5140;
            case 0x2B5144u: goto label_2b5144;
            case 0x2B5148u: goto label_2b5148;
            case 0x2B514Cu: goto label_2b514c;
            case 0x2B5150u: goto label_2b5150;
            case 0x2B5154u: goto label_2b5154;
            case 0x2B5158u: goto label_2b5158;
            case 0x2B515Cu: goto label_2b515c;
            case 0x2B5160u: goto label_2b5160;
            case 0x2B5164u: goto label_2b5164;
            case 0x2B5168u: goto label_2b5168;
            case 0x2B516Cu: goto label_2b516c;
            case 0x2B5170u: goto label_2b5170;
            case 0x2B5174u: goto label_2b5174;
            case 0x2B5178u: goto label_2b5178;
            case 0x2B517Cu: goto label_2b517c;
            case 0x2B5180u: goto label_2b5180;
            case 0x2B5184u: goto label_2b5184;
            case 0x2B5188u: goto label_2b5188;
            case 0x2B518Cu: goto label_2b518c;
            case 0x2B5190u: goto label_2b5190;
            case 0x2B5194u: goto label_2b5194;
            case 0x2B5198u: goto label_2b5198;
            case 0x2B519Cu: goto label_2b519c;
            case 0x2B51A0u: goto label_2b51a0;
            case 0x2B51A4u: goto label_2b51a4;
            case 0x2B51A8u: goto label_2b51a8;
            case 0x2B51ACu: goto label_2b51ac;
            case 0x2B51B0u: goto label_2b51b0;
            case 0x2B51B4u: goto label_2b51b4;
            case 0x2B51B8u: goto label_2b51b8;
            case 0x2B51BCu: goto label_2b51bc;
            case 0x2B51C0u: goto label_2b51c0;
            case 0x2B51C4u: goto label_2b51c4;
            case 0x2B51C8u: goto label_2b51c8;
            case 0x2B51CCu: goto label_2b51cc;
            case 0x2B51D0u: goto label_2b51d0;
            case 0x2B51D4u: goto label_2b51d4;
            case 0x2B51D8u: goto label_2b51d8;
            case 0x2B51DCu: goto label_2b51dc;
            case 0x2B51E0u: goto label_2b51e0;
            case 0x2B51E4u: goto label_2b51e4;
            case 0x2B51E8u: goto label_2b51e8;
            case 0x2B51ECu: goto label_2b51ec;
            case 0x2B51F0u: goto label_2b51f0;
            case 0x2B51F4u: goto label_2b51f4;
            case 0x2B51F8u: goto label_2b51f8;
            case 0x2B51FCu: goto label_2b51fc;
            case 0x2B5200u: goto label_2b5200;
            case 0x2B5204u: goto label_2b5204;
            case 0x2B5208u: goto label_2b5208;
            case 0x2B520Cu: goto label_2b520c;
            case 0x2B5210u: goto label_2b5210;
            case 0x2B5214u: goto label_2b5214;
            case 0x2B5218u: goto label_2b5218;
            case 0x2B521Cu: goto label_2b521c;
            case 0x2B5220u: goto label_2b5220;
            case 0x2B5224u: goto label_2b5224;
            case 0x2B5228u: goto label_2b5228;
            case 0x2B522Cu: goto label_2b522c;
            case 0x2B5230u: goto label_2b5230;
            case 0x2B5234u: goto label_2b5234;
            case 0x2B5238u: goto label_2b5238;
            case 0x2B523Cu: goto label_2b523c;
            case 0x2B5240u: goto label_2b5240;
            case 0x2B5244u: goto label_2b5244;
            case 0x2B5248u: goto label_2b5248;
            case 0x2B524Cu: goto label_2b524c;
            case 0x2B5250u: goto label_2b5250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4F8Cu;
label_2b4f8c:
    // 0x2b4f8c: 0xc6000010
    ctx->pc = 0x2b4f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4f90:
    // 0x2b4f90: 0xc6210010
    ctx->pc = 0x2b4f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4f94:
    // 0x2b4f94: 0x46010000
    ctx->pc = 0x2b4f94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b4f98:
    // 0x2b4f98: 0x100000a7
label_2b4f9c:
    if (ctx->pc == 0x2B4F9Cu) {
        ctx->pc = 0x2B4F9Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->pc = 0x2B4FA0u;
        goto label_2b4fa0;
    }
    ctx->pc = 0x2B4F98u;
    {
        const bool branch_taken_0x2b4f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4F9Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        if (branch_taken_0x2b4f98) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B4FA0u;
label_2b4fa0:
    // 0x2b4fa0: 0x8e020010
    ctx->pc = 0x2b4fa0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b4fa4:
    // 0x2b4fa4: 0x8e230010
    ctx->pc = 0x2b4fa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b4fa8:
    // 0x2b4fa8: 0x431021
    ctx->pc = 0x2b4fa8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b4fac:
    // 0x2b4fac: 0x100000a2
label_2b4fb0:
    if (ctx->pc == 0x2B4FB0u) {
        ctx->pc = 0x2B4FB0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B4FB4u;
        goto label_2b4fb4;
    }
    ctx->pc = 0x2B4FACu;
    {
        const bool branch_taken_0x2b4fac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4FB0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b4fac) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B4FB4u;
label_2b4fb4:
    // 0x2b4fb4: 0x2463fffc
    ctx->pc = 0x2b4fb4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_2b4fb8:
    // 0x2b4fb8: 0x2c620010
    ctx->pc = 0x2b4fb8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_2b4fbc:
    // 0x2b4fbc: 0x10400082
label_2b4fc0:
    if (ctx->pc == 0x2B4FC0u) {
        ctx->pc = 0x2B4FC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B4FC4u;
        goto label_2b4fc4;
    }
    ctx->pc = 0x2B4FBCu;
    {
        const bool branch_taken_0x2b4fbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4FC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b4fbc) {
            ctx->pc = 0x2B51C8u;
            goto label_2b51c8;
        }
    }
    ctx->pc = 0x2B4FC4u;
label_2b4fc4:
    // 0x2b4fc4: 0x244248d0
    ctx->pc = 0x2b4fc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18640));
label_2b4fc8:
    // 0x2b4fc8: 0x31880
    ctx->pc = 0x2b4fc8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b4fcc:
    // 0x2b4fcc: 0x621821
    ctx->pc = 0x2b4fccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b4fd0:
    // 0x2b4fd0: 0x8c620000
    ctx->pc = 0x2b4fd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b4fd4:
    // 0x2b4fd4: 0x400008
label_2b4fd8:
    if (ctx->pc == 0x2B4FD8u) {
        ctx->pc = 0x2B4FDCu;
        goto label_2b4fdc;
    }
    ctx->pc = 0x2B4FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4D98u: goto label_2b4d98;
            case 0x2B4D9Cu: goto label_2b4d9c;
            case 0x2B4DA0u: goto label_2b4da0;
            case 0x2B4DA4u: goto label_2b4da4;
            case 0x2B4DA8u: goto label_2b4da8;
            case 0x2B4DACu: goto label_2b4dac;
            case 0x2B4DB0u: goto label_2b4db0;
            case 0x2B4DB4u: goto label_2b4db4;
            case 0x2B4DB8u: goto label_2b4db8;
            case 0x2B4DBCu: goto label_2b4dbc;
            case 0x2B4DC0u: goto label_2b4dc0;
            case 0x2B4DC4u: goto label_2b4dc4;
            case 0x2B4DC8u: goto label_2b4dc8;
            case 0x2B4DCCu: goto label_2b4dcc;
            case 0x2B4DD0u: goto label_2b4dd0;
            case 0x2B4DD4u: goto label_2b4dd4;
            case 0x2B4DD8u: goto label_2b4dd8;
            case 0x2B4DDCu: goto label_2b4ddc;
            case 0x2B4DE0u: goto label_2b4de0;
            case 0x2B4DE4u: goto label_2b4de4;
            case 0x2B4DE8u: goto label_2b4de8;
            case 0x2B4DECu: goto label_2b4dec;
            case 0x2B4DF0u: goto label_2b4df0;
            case 0x2B4DF4u: goto label_2b4df4;
            case 0x2B4DF8u: goto label_2b4df8;
            case 0x2B4DFCu: goto label_2b4dfc;
            case 0x2B4E00u: goto label_2b4e00;
            case 0x2B4E04u: goto label_2b4e04;
            case 0x2B4E08u: goto label_2b4e08;
            case 0x2B4E0Cu: goto label_2b4e0c;
            case 0x2B4E10u: goto label_2b4e10;
            case 0x2B4E14u: goto label_2b4e14;
            case 0x2B4E18u: goto label_2b4e18;
            case 0x2B4E1Cu: goto label_2b4e1c;
            case 0x2B4E20u: goto label_2b4e20;
            case 0x2B4E24u: goto label_2b4e24;
            case 0x2B4E28u: goto label_2b4e28;
            case 0x2B4E2Cu: goto label_2b4e2c;
            case 0x2B4E30u: goto label_2b4e30;
            case 0x2B4E34u: goto label_2b4e34;
            case 0x2B4E38u: goto label_2b4e38;
            case 0x2B4E3Cu: goto label_2b4e3c;
            case 0x2B4E40u: goto label_2b4e40;
            case 0x2B4E44u: goto label_2b4e44;
            case 0x2B4E48u: goto label_2b4e48;
            case 0x2B4E4Cu: goto label_2b4e4c;
            case 0x2B4E50u: goto label_2b4e50;
            case 0x2B4E54u: goto label_2b4e54;
            case 0x2B4E58u: goto label_2b4e58;
            case 0x2B4E5Cu: goto label_2b4e5c;
            case 0x2B4E60u: goto label_2b4e60;
            case 0x2B4E64u: goto label_2b4e64;
            case 0x2B4E68u: goto label_2b4e68;
            case 0x2B4E6Cu: goto label_2b4e6c;
            case 0x2B4E70u: goto label_2b4e70;
            case 0x2B4E74u: goto label_2b4e74;
            case 0x2B4E78u: goto label_2b4e78;
            case 0x2B4E7Cu: goto label_2b4e7c;
            case 0x2B4E80u: goto label_2b4e80;
            case 0x2B4E84u: goto label_2b4e84;
            case 0x2B4E88u: goto label_2b4e88;
            case 0x2B4E8Cu: goto label_2b4e8c;
            case 0x2B4E90u: goto label_2b4e90;
            case 0x2B4E94u: goto label_2b4e94;
            case 0x2B4E98u: goto label_2b4e98;
            case 0x2B4E9Cu: goto label_2b4e9c;
            case 0x2B4EA0u: goto label_2b4ea0;
            case 0x2B4EA4u: goto label_2b4ea4;
            case 0x2B4EA8u: goto label_2b4ea8;
            case 0x2B4EACu: goto label_2b4eac;
            case 0x2B4EB0u: goto label_2b4eb0;
            case 0x2B4EB4u: goto label_2b4eb4;
            case 0x2B4EB8u: goto label_2b4eb8;
            case 0x2B4EBCu: goto label_2b4ebc;
            case 0x2B4EC0u: goto label_2b4ec0;
            case 0x2B4EC4u: goto label_2b4ec4;
            case 0x2B4EC8u: goto label_2b4ec8;
            case 0x2B4ECCu: goto label_2b4ecc;
            case 0x2B4ED0u: goto label_2b4ed0;
            case 0x2B4ED4u: goto label_2b4ed4;
            case 0x2B4ED8u: goto label_2b4ed8;
            case 0x2B4EDCu: goto label_2b4edc;
            case 0x2B4EE0u: goto label_2b4ee0;
            case 0x2B4EE4u: goto label_2b4ee4;
            case 0x2B4EE8u: goto label_2b4ee8;
            case 0x2B4EECu: goto label_2b4eec;
            case 0x2B4EF0u: goto label_2b4ef0;
            case 0x2B4EF4u: goto label_2b4ef4;
            case 0x2B4EF8u: goto label_2b4ef8;
            case 0x2B4EFCu: goto label_2b4efc;
            case 0x2B4F00u: goto label_2b4f00;
            case 0x2B4F04u: goto label_2b4f04;
            case 0x2B4F08u: goto label_2b4f08;
            case 0x2B4F0Cu: goto label_2b4f0c;
            case 0x2B4F10u: goto label_2b4f10;
            case 0x2B4F14u: goto label_2b4f14;
            case 0x2B4F18u: goto label_2b4f18;
            case 0x2B4F1Cu: goto label_2b4f1c;
            case 0x2B4F20u: goto label_2b4f20;
            case 0x2B4F24u: goto label_2b4f24;
            case 0x2B4F28u: goto label_2b4f28;
            case 0x2B4F2Cu: goto label_2b4f2c;
            case 0x2B4F30u: goto label_2b4f30;
            case 0x2B4F34u: goto label_2b4f34;
            case 0x2B4F38u: goto label_2b4f38;
            case 0x2B4F3Cu: goto label_2b4f3c;
            case 0x2B4F40u: goto label_2b4f40;
            case 0x2B4F44u: goto label_2b4f44;
            case 0x2B4F48u: goto label_2b4f48;
            case 0x2B4F4Cu: goto label_2b4f4c;
            case 0x2B4F50u: goto label_2b4f50;
            case 0x2B4F54u: goto label_2b4f54;
            case 0x2B4F58u: goto label_2b4f58;
            case 0x2B4F5Cu: goto label_2b4f5c;
            case 0x2B4F60u: goto label_2b4f60;
            case 0x2B4F64u: goto label_2b4f64;
            case 0x2B4F68u: goto label_2b4f68;
            case 0x2B4F6Cu: goto label_2b4f6c;
            case 0x2B4F70u: goto label_2b4f70;
            case 0x2B4F74u: goto label_2b4f74;
            case 0x2B4F78u: goto label_2b4f78;
            case 0x2B4F7Cu: goto label_2b4f7c;
            case 0x2B4F80u: goto label_2b4f80;
            case 0x2B4F84u: goto label_2b4f84;
            case 0x2B4F88u: goto label_2b4f88;
            case 0x2B4F8Cu: goto label_2b4f8c;
            case 0x2B4F90u: goto label_2b4f90;
            case 0x2B4F94u: goto label_2b4f94;
            case 0x2B4F98u: goto label_2b4f98;
            case 0x2B4F9Cu: goto label_2b4f9c;
            case 0x2B4FA0u: goto label_2b4fa0;
            case 0x2B4FA4u: goto label_2b4fa4;
            case 0x2B4FA8u: goto label_2b4fa8;
            case 0x2B4FACu: goto label_2b4fac;
            case 0x2B4FB0u: goto label_2b4fb0;
            case 0x2B4FB4u: goto label_2b4fb4;
            case 0x2B4FB8u: goto label_2b4fb8;
            case 0x2B4FBCu: goto label_2b4fbc;
            case 0x2B4FC0u: goto label_2b4fc0;
            case 0x2B4FC4u: goto label_2b4fc4;
            case 0x2B4FC8u: goto label_2b4fc8;
            case 0x2B4FCCu: goto label_2b4fcc;
            case 0x2B4FD0u: goto label_2b4fd0;
            case 0x2B4FD4u: goto label_2b4fd4;
            case 0x2B4FD8u: goto label_2b4fd8;
            case 0x2B4FDCu: goto label_2b4fdc;
            case 0x2B4FE0u: goto label_2b4fe0;
            case 0x2B4FE4u: goto label_2b4fe4;
            case 0x2B4FE8u: goto label_2b4fe8;
            case 0x2B4FECu: goto label_2b4fec;
            case 0x2B4FF0u: goto label_2b4ff0;
            case 0x2B4FF4u: goto label_2b4ff4;
            case 0x2B4FF8u: goto label_2b4ff8;
            case 0x2B4FFCu: goto label_2b4ffc;
            case 0x2B5000u: goto label_2b5000;
            case 0x2B5004u: goto label_2b5004;
            case 0x2B5008u: goto label_2b5008;
            case 0x2B500Cu: goto label_2b500c;
            case 0x2B5010u: goto label_2b5010;
            case 0x2B5014u: goto label_2b5014;
            case 0x2B5018u: goto label_2b5018;
            case 0x2B501Cu: goto label_2b501c;
            case 0x2B5020u: goto label_2b5020;
            case 0x2B5024u: goto label_2b5024;
            case 0x2B5028u: goto label_2b5028;
            case 0x2B502Cu: goto label_2b502c;
            case 0x2B5030u: goto label_2b5030;
            case 0x2B5034u: goto label_2b5034;
            case 0x2B5038u: goto label_2b5038;
            case 0x2B503Cu: goto label_2b503c;
            case 0x2B5040u: goto label_2b5040;
            case 0x2B5044u: goto label_2b5044;
            case 0x2B5048u: goto label_2b5048;
            case 0x2B504Cu: goto label_2b504c;
            case 0x2B5050u: goto label_2b5050;
            case 0x2B5054u: goto label_2b5054;
            case 0x2B5058u: goto label_2b5058;
            case 0x2B505Cu: goto label_2b505c;
            case 0x2B5060u: goto label_2b5060;
            case 0x2B5064u: goto label_2b5064;
            case 0x2B5068u: goto label_2b5068;
            case 0x2B506Cu: goto label_2b506c;
            case 0x2B5070u: goto label_2b5070;
            case 0x2B5074u: goto label_2b5074;
            case 0x2B5078u: goto label_2b5078;
            case 0x2B507Cu: goto label_2b507c;
            case 0x2B5080u: goto label_2b5080;
            case 0x2B5084u: goto label_2b5084;
            case 0x2B5088u: goto label_2b5088;
            case 0x2B508Cu: goto label_2b508c;
            case 0x2B5090u: goto label_2b5090;
            case 0x2B5094u: goto label_2b5094;
            case 0x2B5098u: goto label_2b5098;
            case 0x2B509Cu: goto label_2b509c;
            case 0x2B50A0u: goto label_2b50a0;
            case 0x2B50A4u: goto label_2b50a4;
            case 0x2B50A8u: goto label_2b50a8;
            case 0x2B50ACu: goto label_2b50ac;
            case 0x2B50B0u: goto label_2b50b0;
            case 0x2B50B4u: goto label_2b50b4;
            case 0x2B50B8u: goto label_2b50b8;
            case 0x2B50BCu: goto label_2b50bc;
            case 0x2B50C0u: goto label_2b50c0;
            case 0x2B50C4u: goto label_2b50c4;
            case 0x2B50C8u: goto label_2b50c8;
            case 0x2B50CCu: goto label_2b50cc;
            case 0x2B50D0u: goto label_2b50d0;
            case 0x2B50D4u: goto label_2b50d4;
            case 0x2B50D8u: goto label_2b50d8;
            case 0x2B50DCu: goto label_2b50dc;
            case 0x2B50E0u: goto label_2b50e0;
            case 0x2B50E4u: goto label_2b50e4;
            case 0x2B50E8u: goto label_2b50e8;
            case 0x2B50ECu: goto label_2b50ec;
            case 0x2B50F0u: goto label_2b50f0;
            case 0x2B50F4u: goto label_2b50f4;
            case 0x2B50F8u: goto label_2b50f8;
            case 0x2B50FCu: goto label_2b50fc;
            case 0x2B5100u: goto label_2b5100;
            case 0x2B5104u: goto label_2b5104;
            case 0x2B5108u: goto label_2b5108;
            case 0x2B510Cu: goto label_2b510c;
            case 0x2B5110u: goto label_2b5110;
            case 0x2B5114u: goto label_2b5114;
            case 0x2B5118u: goto label_2b5118;
            case 0x2B511Cu: goto label_2b511c;
            case 0x2B5120u: goto label_2b5120;
            case 0x2B5124u: goto label_2b5124;
            case 0x2B5128u: goto label_2b5128;
            case 0x2B512Cu: goto label_2b512c;
            case 0x2B5130u: goto label_2b5130;
            case 0x2B5134u: goto label_2b5134;
            case 0x2B5138u: goto label_2b5138;
            case 0x2B513Cu: goto label_2b513c;
            case 0x2B5140u: goto label_2b5140;
            case 0x2B5144u: goto label_2b5144;
            case 0x2B5148u: goto label_2b5148;
            case 0x2B514Cu: goto label_2b514c;
            case 0x2B5150u: goto label_2b5150;
            case 0x2B5154u: goto label_2b5154;
            case 0x2B5158u: goto label_2b5158;
            case 0x2B515Cu: goto label_2b515c;
            case 0x2B5160u: goto label_2b5160;
            case 0x2B5164u: goto label_2b5164;
            case 0x2B5168u: goto label_2b5168;
            case 0x2B516Cu: goto label_2b516c;
            case 0x2B5170u: goto label_2b5170;
            case 0x2B5174u: goto label_2b5174;
            case 0x2B5178u: goto label_2b5178;
            case 0x2B517Cu: goto label_2b517c;
            case 0x2B5180u: goto label_2b5180;
            case 0x2B5184u: goto label_2b5184;
            case 0x2B5188u: goto label_2b5188;
            case 0x2B518Cu: goto label_2b518c;
            case 0x2B5190u: goto label_2b5190;
            case 0x2B5194u: goto label_2b5194;
            case 0x2B5198u: goto label_2b5198;
            case 0x2B519Cu: goto label_2b519c;
            case 0x2B51A0u: goto label_2b51a0;
            case 0x2B51A4u: goto label_2b51a4;
            case 0x2B51A8u: goto label_2b51a8;
            case 0x2B51ACu: goto label_2b51ac;
            case 0x2B51B0u: goto label_2b51b0;
            case 0x2B51B4u: goto label_2b51b4;
            case 0x2B51B8u: goto label_2b51b8;
            case 0x2B51BCu: goto label_2b51bc;
            case 0x2B51C0u: goto label_2b51c0;
            case 0x2B51C4u: goto label_2b51c4;
            case 0x2B51C8u: goto label_2b51c8;
            case 0x2B51CCu: goto label_2b51cc;
            case 0x2B51D0u: goto label_2b51d0;
            case 0x2B51D4u: goto label_2b51d4;
            case 0x2B51D8u: goto label_2b51d8;
            case 0x2B51DCu: goto label_2b51dc;
            case 0x2B51E0u: goto label_2b51e0;
            case 0x2B51E4u: goto label_2b51e4;
            case 0x2B51E8u: goto label_2b51e8;
            case 0x2B51ECu: goto label_2b51ec;
            case 0x2B51F0u: goto label_2b51f0;
            case 0x2B51F4u: goto label_2b51f4;
            case 0x2B51F8u: goto label_2b51f8;
            case 0x2B51FCu: goto label_2b51fc;
            case 0x2B5200u: goto label_2b5200;
            case 0x2B5204u: goto label_2b5204;
            case 0x2B5208u: goto label_2b5208;
            case 0x2B520Cu: goto label_2b520c;
            case 0x2B5210u: goto label_2b5210;
            case 0x2B5214u: goto label_2b5214;
            case 0x2B5218u: goto label_2b5218;
            case 0x2B521Cu: goto label_2b521c;
            case 0x2B5220u: goto label_2b5220;
            case 0x2B5224u: goto label_2b5224;
            case 0x2B5228u: goto label_2b5228;
            case 0x2B522Cu: goto label_2b522c;
            case 0x2B5230u: goto label_2b5230;
            case 0x2B5234u: goto label_2b5234;
            case 0x2B5238u: goto label_2b5238;
            case 0x2B523Cu: goto label_2b523c;
            case 0x2B5240u: goto label_2b5240;
            case 0x2B5244u: goto label_2b5244;
            case 0x2B5248u: goto label_2b5248;
            case 0x2B524Cu: goto label_2b524c;
            case 0x2B5250u: goto label_2b5250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B4FDCu;
label_2b4fdc:
    // 0x2b4fdc: 0xc6000010
    ctx->pc = 0x2b4fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4fe0:
    // 0x2b4fe0: 0xc6210010
    ctx->pc = 0x2b4fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b4fe4:
    // 0x2b4fe4: 0x46010001
    ctx->pc = 0x2b4fe4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b4fe8:
    // 0x2b4fe8: 0x10000093
label_2b4fec:
    if (ctx->pc == 0x2B4FECu) {
        ctx->pc = 0x2B4FECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->pc = 0x2B4FF0u;
        goto label_2b4ff0;
    }
    ctx->pc = 0x2B4FE8u;
    {
        const bool branch_taken_0x2b4fe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B4FECu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        if (branch_taken_0x2b4fe8) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B4FF0u;
label_2b4ff0:
    // 0x2b4ff0: 0x8e020010
    ctx->pc = 0x2b4ff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b4ff4:
    // 0x2b4ff4: 0x8e230010
    ctx->pc = 0x2b4ff4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b4ff8:
    // 0x2b4ff8: 0x431023
    ctx->pc = 0x2b4ff8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b4ffc:
    // 0x2b4ffc: 0x1000008e
label_2b5000:
    if (ctx->pc == 0x2B5000u) {
        ctx->pc = 0x2B5000u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5004u;
        goto label_2b5004;
    }
    ctx->pc = 0x2B4FFCu;
    {
        const bool branch_taken_0x2b4ffc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5000u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b4ffc) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B5004u;
label_2b5004:
    // 0x2b5004: 0x2463fffc
    ctx->pc = 0x2b5004u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_2b5008:
    // 0x2b5008: 0x2c620010
    ctx->pc = 0x2b5008u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_2b500c:
    // 0x2b500c: 0x1040006e
label_2b5010:
    if (ctx->pc == 0x2B5010u) {
        ctx->pc = 0x2B5010u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B5014u;
        goto label_2b5014;
    }
    ctx->pc = 0x2B500Cu;
    {
        const bool branch_taken_0x2b500c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5010u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b500c) {
            ctx->pc = 0x2B51C8u;
            goto label_2b51c8;
        }
    }
    ctx->pc = 0x2B5014u;
label_2b5014:
    // 0x2b5014: 0x24424910
    ctx->pc = 0x2b5014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
label_2b5018:
    // 0x2b5018: 0x31880
    ctx->pc = 0x2b5018u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b501c:
    // 0x2b501c: 0x621821
    ctx->pc = 0x2b501cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b5020:
    // 0x2b5020: 0x8c620000
    ctx->pc = 0x2b5020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5024:
    // 0x2b5024: 0x400008
label_2b5028:
    if (ctx->pc == 0x2B5028u) {
        ctx->pc = 0x2B502Cu;
        goto label_2b502c;
    }
    ctx->pc = 0x2B5024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4D98u: goto label_2b4d98;
            case 0x2B4D9Cu: goto label_2b4d9c;
            case 0x2B4DA0u: goto label_2b4da0;
            case 0x2B4DA4u: goto label_2b4da4;
            case 0x2B4DA8u: goto label_2b4da8;
            case 0x2B4DACu: goto label_2b4dac;
            case 0x2B4DB0u: goto label_2b4db0;
            case 0x2B4DB4u: goto label_2b4db4;
            case 0x2B4DB8u: goto label_2b4db8;
            case 0x2B4DBCu: goto label_2b4dbc;
            case 0x2B4DC0u: goto label_2b4dc0;
            case 0x2B4DC4u: goto label_2b4dc4;
            case 0x2B4DC8u: goto label_2b4dc8;
            case 0x2B4DCCu: goto label_2b4dcc;
            case 0x2B4DD0u: goto label_2b4dd0;
            case 0x2B4DD4u: goto label_2b4dd4;
            case 0x2B4DD8u: goto label_2b4dd8;
            case 0x2B4DDCu: goto label_2b4ddc;
            case 0x2B4DE0u: goto label_2b4de0;
            case 0x2B4DE4u: goto label_2b4de4;
            case 0x2B4DE8u: goto label_2b4de8;
            case 0x2B4DECu: goto label_2b4dec;
            case 0x2B4DF0u: goto label_2b4df0;
            case 0x2B4DF4u: goto label_2b4df4;
            case 0x2B4DF8u: goto label_2b4df8;
            case 0x2B4DFCu: goto label_2b4dfc;
            case 0x2B4E00u: goto label_2b4e00;
            case 0x2B4E04u: goto label_2b4e04;
            case 0x2B4E08u: goto label_2b4e08;
            case 0x2B4E0Cu: goto label_2b4e0c;
            case 0x2B4E10u: goto label_2b4e10;
            case 0x2B4E14u: goto label_2b4e14;
            case 0x2B4E18u: goto label_2b4e18;
            case 0x2B4E1Cu: goto label_2b4e1c;
            case 0x2B4E20u: goto label_2b4e20;
            case 0x2B4E24u: goto label_2b4e24;
            case 0x2B4E28u: goto label_2b4e28;
            case 0x2B4E2Cu: goto label_2b4e2c;
            case 0x2B4E30u: goto label_2b4e30;
            case 0x2B4E34u: goto label_2b4e34;
            case 0x2B4E38u: goto label_2b4e38;
            case 0x2B4E3Cu: goto label_2b4e3c;
            case 0x2B4E40u: goto label_2b4e40;
            case 0x2B4E44u: goto label_2b4e44;
            case 0x2B4E48u: goto label_2b4e48;
            case 0x2B4E4Cu: goto label_2b4e4c;
            case 0x2B4E50u: goto label_2b4e50;
            case 0x2B4E54u: goto label_2b4e54;
            case 0x2B4E58u: goto label_2b4e58;
            case 0x2B4E5Cu: goto label_2b4e5c;
            case 0x2B4E60u: goto label_2b4e60;
            case 0x2B4E64u: goto label_2b4e64;
            case 0x2B4E68u: goto label_2b4e68;
            case 0x2B4E6Cu: goto label_2b4e6c;
            case 0x2B4E70u: goto label_2b4e70;
            case 0x2B4E74u: goto label_2b4e74;
            case 0x2B4E78u: goto label_2b4e78;
            case 0x2B4E7Cu: goto label_2b4e7c;
            case 0x2B4E80u: goto label_2b4e80;
            case 0x2B4E84u: goto label_2b4e84;
            case 0x2B4E88u: goto label_2b4e88;
            case 0x2B4E8Cu: goto label_2b4e8c;
            case 0x2B4E90u: goto label_2b4e90;
            case 0x2B4E94u: goto label_2b4e94;
            case 0x2B4E98u: goto label_2b4e98;
            case 0x2B4E9Cu: goto label_2b4e9c;
            case 0x2B4EA0u: goto label_2b4ea0;
            case 0x2B4EA4u: goto label_2b4ea4;
            case 0x2B4EA8u: goto label_2b4ea8;
            case 0x2B4EACu: goto label_2b4eac;
            case 0x2B4EB0u: goto label_2b4eb0;
            case 0x2B4EB4u: goto label_2b4eb4;
            case 0x2B4EB8u: goto label_2b4eb8;
            case 0x2B4EBCu: goto label_2b4ebc;
            case 0x2B4EC0u: goto label_2b4ec0;
            case 0x2B4EC4u: goto label_2b4ec4;
            case 0x2B4EC8u: goto label_2b4ec8;
            case 0x2B4ECCu: goto label_2b4ecc;
            case 0x2B4ED0u: goto label_2b4ed0;
            case 0x2B4ED4u: goto label_2b4ed4;
            case 0x2B4ED8u: goto label_2b4ed8;
            case 0x2B4EDCu: goto label_2b4edc;
            case 0x2B4EE0u: goto label_2b4ee0;
            case 0x2B4EE4u: goto label_2b4ee4;
            case 0x2B4EE8u: goto label_2b4ee8;
            case 0x2B4EECu: goto label_2b4eec;
            case 0x2B4EF0u: goto label_2b4ef0;
            case 0x2B4EF4u: goto label_2b4ef4;
            case 0x2B4EF8u: goto label_2b4ef8;
            case 0x2B4EFCu: goto label_2b4efc;
            case 0x2B4F00u: goto label_2b4f00;
            case 0x2B4F04u: goto label_2b4f04;
            case 0x2B4F08u: goto label_2b4f08;
            case 0x2B4F0Cu: goto label_2b4f0c;
            case 0x2B4F10u: goto label_2b4f10;
            case 0x2B4F14u: goto label_2b4f14;
            case 0x2B4F18u: goto label_2b4f18;
            case 0x2B4F1Cu: goto label_2b4f1c;
            case 0x2B4F20u: goto label_2b4f20;
            case 0x2B4F24u: goto label_2b4f24;
            case 0x2B4F28u: goto label_2b4f28;
            case 0x2B4F2Cu: goto label_2b4f2c;
            case 0x2B4F30u: goto label_2b4f30;
            case 0x2B4F34u: goto label_2b4f34;
            case 0x2B4F38u: goto label_2b4f38;
            case 0x2B4F3Cu: goto label_2b4f3c;
            case 0x2B4F40u: goto label_2b4f40;
            case 0x2B4F44u: goto label_2b4f44;
            case 0x2B4F48u: goto label_2b4f48;
            case 0x2B4F4Cu: goto label_2b4f4c;
            case 0x2B4F50u: goto label_2b4f50;
            case 0x2B4F54u: goto label_2b4f54;
            case 0x2B4F58u: goto label_2b4f58;
            case 0x2B4F5Cu: goto label_2b4f5c;
            case 0x2B4F60u: goto label_2b4f60;
            case 0x2B4F64u: goto label_2b4f64;
            case 0x2B4F68u: goto label_2b4f68;
            case 0x2B4F6Cu: goto label_2b4f6c;
            case 0x2B4F70u: goto label_2b4f70;
            case 0x2B4F74u: goto label_2b4f74;
            case 0x2B4F78u: goto label_2b4f78;
            case 0x2B4F7Cu: goto label_2b4f7c;
            case 0x2B4F80u: goto label_2b4f80;
            case 0x2B4F84u: goto label_2b4f84;
            case 0x2B4F88u: goto label_2b4f88;
            case 0x2B4F8Cu: goto label_2b4f8c;
            case 0x2B4F90u: goto label_2b4f90;
            case 0x2B4F94u: goto label_2b4f94;
            case 0x2B4F98u: goto label_2b4f98;
            case 0x2B4F9Cu: goto label_2b4f9c;
            case 0x2B4FA0u: goto label_2b4fa0;
            case 0x2B4FA4u: goto label_2b4fa4;
            case 0x2B4FA8u: goto label_2b4fa8;
            case 0x2B4FACu: goto label_2b4fac;
            case 0x2B4FB0u: goto label_2b4fb0;
            case 0x2B4FB4u: goto label_2b4fb4;
            case 0x2B4FB8u: goto label_2b4fb8;
            case 0x2B4FBCu: goto label_2b4fbc;
            case 0x2B4FC0u: goto label_2b4fc0;
            case 0x2B4FC4u: goto label_2b4fc4;
            case 0x2B4FC8u: goto label_2b4fc8;
            case 0x2B4FCCu: goto label_2b4fcc;
            case 0x2B4FD0u: goto label_2b4fd0;
            case 0x2B4FD4u: goto label_2b4fd4;
            case 0x2B4FD8u: goto label_2b4fd8;
            case 0x2B4FDCu: goto label_2b4fdc;
            case 0x2B4FE0u: goto label_2b4fe0;
            case 0x2B4FE4u: goto label_2b4fe4;
            case 0x2B4FE8u: goto label_2b4fe8;
            case 0x2B4FECu: goto label_2b4fec;
            case 0x2B4FF0u: goto label_2b4ff0;
            case 0x2B4FF4u: goto label_2b4ff4;
            case 0x2B4FF8u: goto label_2b4ff8;
            case 0x2B4FFCu: goto label_2b4ffc;
            case 0x2B5000u: goto label_2b5000;
            case 0x2B5004u: goto label_2b5004;
            case 0x2B5008u: goto label_2b5008;
            case 0x2B500Cu: goto label_2b500c;
            case 0x2B5010u: goto label_2b5010;
            case 0x2B5014u: goto label_2b5014;
            case 0x2B5018u: goto label_2b5018;
            case 0x2B501Cu: goto label_2b501c;
            case 0x2B5020u: goto label_2b5020;
            case 0x2B5024u: goto label_2b5024;
            case 0x2B5028u: goto label_2b5028;
            case 0x2B502Cu: goto label_2b502c;
            case 0x2B5030u: goto label_2b5030;
            case 0x2B5034u: goto label_2b5034;
            case 0x2B5038u: goto label_2b5038;
            case 0x2B503Cu: goto label_2b503c;
            case 0x2B5040u: goto label_2b5040;
            case 0x2B5044u: goto label_2b5044;
            case 0x2B5048u: goto label_2b5048;
            case 0x2B504Cu: goto label_2b504c;
            case 0x2B5050u: goto label_2b5050;
            case 0x2B5054u: goto label_2b5054;
            case 0x2B5058u: goto label_2b5058;
            case 0x2B505Cu: goto label_2b505c;
            case 0x2B5060u: goto label_2b5060;
            case 0x2B5064u: goto label_2b5064;
            case 0x2B5068u: goto label_2b5068;
            case 0x2B506Cu: goto label_2b506c;
            case 0x2B5070u: goto label_2b5070;
            case 0x2B5074u: goto label_2b5074;
            case 0x2B5078u: goto label_2b5078;
            case 0x2B507Cu: goto label_2b507c;
            case 0x2B5080u: goto label_2b5080;
            case 0x2B5084u: goto label_2b5084;
            case 0x2B5088u: goto label_2b5088;
            case 0x2B508Cu: goto label_2b508c;
            case 0x2B5090u: goto label_2b5090;
            case 0x2B5094u: goto label_2b5094;
            case 0x2B5098u: goto label_2b5098;
            case 0x2B509Cu: goto label_2b509c;
            case 0x2B50A0u: goto label_2b50a0;
            case 0x2B50A4u: goto label_2b50a4;
            case 0x2B50A8u: goto label_2b50a8;
            case 0x2B50ACu: goto label_2b50ac;
            case 0x2B50B0u: goto label_2b50b0;
            case 0x2B50B4u: goto label_2b50b4;
            case 0x2B50B8u: goto label_2b50b8;
            case 0x2B50BCu: goto label_2b50bc;
            case 0x2B50C0u: goto label_2b50c0;
            case 0x2B50C4u: goto label_2b50c4;
            case 0x2B50C8u: goto label_2b50c8;
            case 0x2B50CCu: goto label_2b50cc;
            case 0x2B50D0u: goto label_2b50d0;
            case 0x2B50D4u: goto label_2b50d4;
            case 0x2B50D8u: goto label_2b50d8;
            case 0x2B50DCu: goto label_2b50dc;
            case 0x2B50E0u: goto label_2b50e0;
            case 0x2B50E4u: goto label_2b50e4;
            case 0x2B50E8u: goto label_2b50e8;
            case 0x2B50ECu: goto label_2b50ec;
            case 0x2B50F0u: goto label_2b50f0;
            case 0x2B50F4u: goto label_2b50f4;
            case 0x2B50F8u: goto label_2b50f8;
            case 0x2B50FCu: goto label_2b50fc;
            case 0x2B5100u: goto label_2b5100;
            case 0x2B5104u: goto label_2b5104;
            case 0x2B5108u: goto label_2b5108;
            case 0x2B510Cu: goto label_2b510c;
            case 0x2B5110u: goto label_2b5110;
            case 0x2B5114u: goto label_2b5114;
            case 0x2B5118u: goto label_2b5118;
            case 0x2B511Cu: goto label_2b511c;
            case 0x2B5120u: goto label_2b5120;
            case 0x2B5124u: goto label_2b5124;
            case 0x2B5128u: goto label_2b5128;
            case 0x2B512Cu: goto label_2b512c;
            case 0x2B5130u: goto label_2b5130;
            case 0x2B5134u: goto label_2b5134;
            case 0x2B5138u: goto label_2b5138;
            case 0x2B513Cu: goto label_2b513c;
            case 0x2B5140u: goto label_2b5140;
            case 0x2B5144u: goto label_2b5144;
            case 0x2B5148u: goto label_2b5148;
            case 0x2B514Cu: goto label_2b514c;
            case 0x2B5150u: goto label_2b5150;
            case 0x2B5154u: goto label_2b5154;
            case 0x2B5158u: goto label_2b5158;
            case 0x2B515Cu: goto label_2b515c;
            case 0x2B5160u: goto label_2b5160;
            case 0x2B5164u: goto label_2b5164;
            case 0x2B5168u: goto label_2b5168;
            case 0x2B516Cu: goto label_2b516c;
            case 0x2B5170u: goto label_2b5170;
            case 0x2B5174u: goto label_2b5174;
            case 0x2B5178u: goto label_2b5178;
            case 0x2B517Cu: goto label_2b517c;
            case 0x2B5180u: goto label_2b5180;
            case 0x2B5184u: goto label_2b5184;
            case 0x2B5188u: goto label_2b5188;
            case 0x2B518Cu: goto label_2b518c;
            case 0x2B5190u: goto label_2b5190;
            case 0x2B5194u: goto label_2b5194;
            case 0x2B5198u: goto label_2b5198;
            case 0x2B519Cu: goto label_2b519c;
            case 0x2B51A0u: goto label_2b51a0;
            case 0x2B51A4u: goto label_2b51a4;
            case 0x2B51A8u: goto label_2b51a8;
            case 0x2B51ACu: goto label_2b51ac;
            case 0x2B51B0u: goto label_2b51b0;
            case 0x2B51B4u: goto label_2b51b4;
            case 0x2B51B8u: goto label_2b51b8;
            case 0x2B51BCu: goto label_2b51bc;
            case 0x2B51C0u: goto label_2b51c0;
            case 0x2B51C4u: goto label_2b51c4;
            case 0x2B51C8u: goto label_2b51c8;
            case 0x2B51CCu: goto label_2b51cc;
            case 0x2B51D0u: goto label_2b51d0;
            case 0x2B51D4u: goto label_2b51d4;
            case 0x2B51D8u: goto label_2b51d8;
            case 0x2B51DCu: goto label_2b51dc;
            case 0x2B51E0u: goto label_2b51e0;
            case 0x2B51E4u: goto label_2b51e4;
            case 0x2B51E8u: goto label_2b51e8;
            case 0x2B51ECu: goto label_2b51ec;
            case 0x2B51F0u: goto label_2b51f0;
            case 0x2B51F4u: goto label_2b51f4;
            case 0x2B51F8u: goto label_2b51f8;
            case 0x2B51FCu: goto label_2b51fc;
            case 0x2B5200u: goto label_2b5200;
            case 0x2B5204u: goto label_2b5204;
            case 0x2B5208u: goto label_2b5208;
            case 0x2B520Cu: goto label_2b520c;
            case 0x2B5210u: goto label_2b5210;
            case 0x2B5214u: goto label_2b5214;
            case 0x2B5218u: goto label_2b5218;
            case 0x2B521Cu: goto label_2b521c;
            case 0x2B5220u: goto label_2b5220;
            case 0x2B5224u: goto label_2b5224;
            case 0x2B5228u: goto label_2b5228;
            case 0x2B522Cu: goto label_2b522c;
            case 0x2B5230u: goto label_2b5230;
            case 0x2B5234u: goto label_2b5234;
            case 0x2B5238u: goto label_2b5238;
            case 0x2B523Cu: goto label_2b523c;
            case 0x2B5240u: goto label_2b5240;
            case 0x2B5244u: goto label_2b5244;
            case 0x2B5248u: goto label_2b5248;
            case 0x2B524Cu: goto label_2b524c;
            case 0x2B5250u: goto label_2b5250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B502Cu;
label_2b502c:
    // 0x2b502c: 0xc6000010
    ctx->pc = 0x2b502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5030:
    // 0x2b5030: 0xc6210010
    ctx->pc = 0x2b5030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5034:
    // 0x2b5034: 0x46010002
    ctx->pc = 0x2b5034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b5038:
    // 0x2b5038: 0x1000007f
label_2b503c:
    if (ctx->pc == 0x2B503Cu) {
        ctx->pc = 0x2B503Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->pc = 0x2B5040u;
        goto label_2b5040;
    }
    ctx->pc = 0x2B5038u;
    {
        const bool branch_taken_0x2b5038 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B503Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        if (branch_taken_0x2b5038) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B5040u;
label_2b5040:
    // 0x2b5040: 0x8e020010
    ctx->pc = 0x2b5040u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b5044:
    // 0x2b5044: 0x8e230010
    ctx->pc = 0x2b5044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b5048:
    // 0x2b5048: 0x431018
    ctx->pc = 0x2b5048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2b504c:
    // 0x2b504c: 0x1000007a
label_2b5050:
    if (ctx->pc == 0x2B5050u) {
        ctx->pc = 0x2B5050u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5054u;
        goto label_2b5054;
    }
    ctx->pc = 0x2B504Cu;
    {
        const bool branch_taken_0x2b504c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5050u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b504c) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B5054u;
label_2b5054:
    // 0x2b5054: 0x2463fffc
    ctx->pc = 0x2b5054u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_2b5058:
    // 0x2b5058: 0x2c620010
    ctx->pc = 0x2b5058u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 16));
label_2b505c:
    // 0x2b505c: 0x1040005a
label_2b5060:
    if (ctx->pc == 0x2B5060u) {
        ctx->pc = 0x2B5060u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x2B5064u;
        goto label_2b5064;
    }
    ctx->pc = 0x2B505Cu;
    {
        const bool branch_taken_0x2b505c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5060u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b505c) {
            ctx->pc = 0x2B51C8u;
            goto label_2b51c8;
        }
    }
    ctx->pc = 0x2B5064u;
label_2b5064:
    // 0x2b5064: 0x24424950
    ctx->pc = 0x2b5064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18768));
label_2b5068:
    // 0x2b5068: 0x31880
    ctx->pc = 0x2b5068u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2b506c:
    // 0x2b506c: 0x621821
    ctx->pc = 0x2b506cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b5070:
    // 0x2b5070: 0x8c620000
    ctx->pc = 0x2b5070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b5074:
    // 0x2b5074: 0x400008
label_2b5078:
    if (ctx->pc == 0x2B5078u) {
        ctx->pc = 0x2B507Cu;
        goto label_2b507c;
    }
    ctx->pc = 0x2B5074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4D98u: goto label_2b4d98;
            case 0x2B4D9Cu: goto label_2b4d9c;
            case 0x2B4DA0u: goto label_2b4da0;
            case 0x2B4DA4u: goto label_2b4da4;
            case 0x2B4DA8u: goto label_2b4da8;
            case 0x2B4DACu: goto label_2b4dac;
            case 0x2B4DB0u: goto label_2b4db0;
            case 0x2B4DB4u: goto label_2b4db4;
            case 0x2B4DB8u: goto label_2b4db8;
            case 0x2B4DBCu: goto label_2b4dbc;
            case 0x2B4DC0u: goto label_2b4dc0;
            case 0x2B4DC4u: goto label_2b4dc4;
            case 0x2B4DC8u: goto label_2b4dc8;
            case 0x2B4DCCu: goto label_2b4dcc;
            case 0x2B4DD0u: goto label_2b4dd0;
            case 0x2B4DD4u: goto label_2b4dd4;
            case 0x2B4DD8u: goto label_2b4dd8;
            case 0x2B4DDCu: goto label_2b4ddc;
            case 0x2B4DE0u: goto label_2b4de0;
            case 0x2B4DE4u: goto label_2b4de4;
            case 0x2B4DE8u: goto label_2b4de8;
            case 0x2B4DECu: goto label_2b4dec;
            case 0x2B4DF0u: goto label_2b4df0;
            case 0x2B4DF4u: goto label_2b4df4;
            case 0x2B4DF8u: goto label_2b4df8;
            case 0x2B4DFCu: goto label_2b4dfc;
            case 0x2B4E00u: goto label_2b4e00;
            case 0x2B4E04u: goto label_2b4e04;
            case 0x2B4E08u: goto label_2b4e08;
            case 0x2B4E0Cu: goto label_2b4e0c;
            case 0x2B4E10u: goto label_2b4e10;
            case 0x2B4E14u: goto label_2b4e14;
            case 0x2B4E18u: goto label_2b4e18;
            case 0x2B4E1Cu: goto label_2b4e1c;
            case 0x2B4E20u: goto label_2b4e20;
            case 0x2B4E24u: goto label_2b4e24;
            case 0x2B4E28u: goto label_2b4e28;
            case 0x2B4E2Cu: goto label_2b4e2c;
            case 0x2B4E30u: goto label_2b4e30;
            case 0x2B4E34u: goto label_2b4e34;
            case 0x2B4E38u: goto label_2b4e38;
            case 0x2B4E3Cu: goto label_2b4e3c;
            case 0x2B4E40u: goto label_2b4e40;
            case 0x2B4E44u: goto label_2b4e44;
            case 0x2B4E48u: goto label_2b4e48;
            case 0x2B4E4Cu: goto label_2b4e4c;
            case 0x2B4E50u: goto label_2b4e50;
            case 0x2B4E54u: goto label_2b4e54;
            case 0x2B4E58u: goto label_2b4e58;
            case 0x2B4E5Cu: goto label_2b4e5c;
            case 0x2B4E60u: goto label_2b4e60;
            case 0x2B4E64u: goto label_2b4e64;
            case 0x2B4E68u: goto label_2b4e68;
            case 0x2B4E6Cu: goto label_2b4e6c;
            case 0x2B4E70u: goto label_2b4e70;
            case 0x2B4E74u: goto label_2b4e74;
            case 0x2B4E78u: goto label_2b4e78;
            case 0x2B4E7Cu: goto label_2b4e7c;
            case 0x2B4E80u: goto label_2b4e80;
            case 0x2B4E84u: goto label_2b4e84;
            case 0x2B4E88u: goto label_2b4e88;
            case 0x2B4E8Cu: goto label_2b4e8c;
            case 0x2B4E90u: goto label_2b4e90;
            case 0x2B4E94u: goto label_2b4e94;
            case 0x2B4E98u: goto label_2b4e98;
            case 0x2B4E9Cu: goto label_2b4e9c;
            case 0x2B4EA0u: goto label_2b4ea0;
            case 0x2B4EA4u: goto label_2b4ea4;
            case 0x2B4EA8u: goto label_2b4ea8;
            case 0x2B4EACu: goto label_2b4eac;
            case 0x2B4EB0u: goto label_2b4eb0;
            case 0x2B4EB4u: goto label_2b4eb4;
            case 0x2B4EB8u: goto label_2b4eb8;
            case 0x2B4EBCu: goto label_2b4ebc;
            case 0x2B4EC0u: goto label_2b4ec0;
            case 0x2B4EC4u: goto label_2b4ec4;
            case 0x2B4EC8u: goto label_2b4ec8;
            case 0x2B4ECCu: goto label_2b4ecc;
            case 0x2B4ED0u: goto label_2b4ed0;
            case 0x2B4ED4u: goto label_2b4ed4;
            case 0x2B4ED8u: goto label_2b4ed8;
            case 0x2B4EDCu: goto label_2b4edc;
            case 0x2B4EE0u: goto label_2b4ee0;
            case 0x2B4EE4u: goto label_2b4ee4;
            case 0x2B4EE8u: goto label_2b4ee8;
            case 0x2B4EECu: goto label_2b4eec;
            case 0x2B4EF0u: goto label_2b4ef0;
            case 0x2B4EF4u: goto label_2b4ef4;
            case 0x2B4EF8u: goto label_2b4ef8;
            case 0x2B4EFCu: goto label_2b4efc;
            case 0x2B4F00u: goto label_2b4f00;
            case 0x2B4F04u: goto label_2b4f04;
            case 0x2B4F08u: goto label_2b4f08;
            case 0x2B4F0Cu: goto label_2b4f0c;
            case 0x2B4F10u: goto label_2b4f10;
            case 0x2B4F14u: goto label_2b4f14;
            case 0x2B4F18u: goto label_2b4f18;
            case 0x2B4F1Cu: goto label_2b4f1c;
            case 0x2B4F20u: goto label_2b4f20;
            case 0x2B4F24u: goto label_2b4f24;
            case 0x2B4F28u: goto label_2b4f28;
            case 0x2B4F2Cu: goto label_2b4f2c;
            case 0x2B4F30u: goto label_2b4f30;
            case 0x2B4F34u: goto label_2b4f34;
            case 0x2B4F38u: goto label_2b4f38;
            case 0x2B4F3Cu: goto label_2b4f3c;
            case 0x2B4F40u: goto label_2b4f40;
            case 0x2B4F44u: goto label_2b4f44;
            case 0x2B4F48u: goto label_2b4f48;
            case 0x2B4F4Cu: goto label_2b4f4c;
            case 0x2B4F50u: goto label_2b4f50;
            case 0x2B4F54u: goto label_2b4f54;
            case 0x2B4F58u: goto label_2b4f58;
            case 0x2B4F5Cu: goto label_2b4f5c;
            case 0x2B4F60u: goto label_2b4f60;
            case 0x2B4F64u: goto label_2b4f64;
            case 0x2B4F68u: goto label_2b4f68;
            case 0x2B4F6Cu: goto label_2b4f6c;
            case 0x2B4F70u: goto label_2b4f70;
            case 0x2B4F74u: goto label_2b4f74;
            case 0x2B4F78u: goto label_2b4f78;
            case 0x2B4F7Cu: goto label_2b4f7c;
            case 0x2B4F80u: goto label_2b4f80;
            case 0x2B4F84u: goto label_2b4f84;
            case 0x2B4F88u: goto label_2b4f88;
            case 0x2B4F8Cu: goto label_2b4f8c;
            case 0x2B4F90u: goto label_2b4f90;
            case 0x2B4F94u: goto label_2b4f94;
            case 0x2B4F98u: goto label_2b4f98;
            case 0x2B4F9Cu: goto label_2b4f9c;
            case 0x2B4FA0u: goto label_2b4fa0;
            case 0x2B4FA4u: goto label_2b4fa4;
            case 0x2B4FA8u: goto label_2b4fa8;
            case 0x2B4FACu: goto label_2b4fac;
            case 0x2B4FB0u: goto label_2b4fb0;
            case 0x2B4FB4u: goto label_2b4fb4;
            case 0x2B4FB8u: goto label_2b4fb8;
            case 0x2B4FBCu: goto label_2b4fbc;
            case 0x2B4FC0u: goto label_2b4fc0;
            case 0x2B4FC4u: goto label_2b4fc4;
            case 0x2B4FC8u: goto label_2b4fc8;
            case 0x2B4FCCu: goto label_2b4fcc;
            case 0x2B4FD0u: goto label_2b4fd0;
            case 0x2B4FD4u: goto label_2b4fd4;
            case 0x2B4FD8u: goto label_2b4fd8;
            case 0x2B4FDCu: goto label_2b4fdc;
            case 0x2B4FE0u: goto label_2b4fe0;
            case 0x2B4FE4u: goto label_2b4fe4;
            case 0x2B4FE8u: goto label_2b4fe8;
            case 0x2B4FECu: goto label_2b4fec;
            case 0x2B4FF0u: goto label_2b4ff0;
            case 0x2B4FF4u: goto label_2b4ff4;
            case 0x2B4FF8u: goto label_2b4ff8;
            case 0x2B4FFCu: goto label_2b4ffc;
            case 0x2B5000u: goto label_2b5000;
            case 0x2B5004u: goto label_2b5004;
            case 0x2B5008u: goto label_2b5008;
            case 0x2B500Cu: goto label_2b500c;
            case 0x2B5010u: goto label_2b5010;
            case 0x2B5014u: goto label_2b5014;
            case 0x2B5018u: goto label_2b5018;
            case 0x2B501Cu: goto label_2b501c;
            case 0x2B5020u: goto label_2b5020;
            case 0x2B5024u: goto label_2b5024;
            case 0x2B5028u: goto label_2b5028;
            case 0x2B502Cu: goto label_2b502c;
            case 0x2B5030u: goto label_2b5030;
            case 0x2B5034u: goto label_2b5034;
            case 0x2B5038u: goto label_2b5038;
            case 0x2B503Cu: goto label_2b503c;
            case 0x2B5040u: goto label_2b5040;
            case 0x2B5044u: goto label_2b5044;
            case 0x2B5048u: goto label_2b5048;
            case 0x2B504Cu: goto label_2b504c;
            case 0x2B5050u: goto label_2b5050;
            case 0x2B5054u: goto label_2b5054;
            case 0x2B5058u: goto label_2b5058;
            case 0x2B505Cu: goto label_2b505c;
            case 0x2B5060u: goto label_2b5060;
            case 0x2B5064u: goto label_2b5064;
            case 0x2B5068u: goto label_2b5068;
            case 0x2B506Cu: goto label_2b506c;
            case 0x2B5070u: goto label_2b5070;
            case 0x2B5074u: goto label_2b5074;
            case 0x2B5078u: goto label_2b5078;
            case 0x2B507Cu: goto label_2b507c;
            case 0x2B5080u: goto label_2b5080;
            case 0x2B5084u: goto label_2b5084;
            case 0x2B5088u: goto label_2b5088;
            case 0x2B508Cu: goto label_2b508c;
            case 0x2B5090u: goto label_2b5090;
            case 0x2B5094u: goto label_2b5094;
            case 0x2B5098u: goto label_2b5098;
            case 0x2B509Cu: goto label_2b509c;
            case 0x2B50A0u: goto label_2b50a0;
            case 0x2B50A4u: goto label_2b50a4;
            case 0x2B50A8u: goto label_2b50a8;
            case 0x2B50ACu: goto label_2b50ac;
            case 0x2B50B0u: goto label_2b50b0;
            case 0x2B50B4u: goto label_2b50b4;
            case 0x2B50B8u: goto label_2b50b8;
            case 0x2B50BCu: goto label_2b50bc;
            case 0x2B50C0u: goto label_2b50c0;
            case 0x2B50C4u: goto label_2b50c4;
            case 0x2B50C8u: goto label_2b50c8;
            case 0x2B50CCu: goto label_2b50cc;
            case 0x2B50D0u: goto label_2b50d0;
            case 0x2B50D4u: goto label_2b50d4;
            case 0x2B50D8u: goto label_2b50d8;
            case 0x2B50DCu: goto label_2b50dc;
            case 0x2B50E0u: goto label_2b50e0;
            case 0x2B50E4u: goto label_2b50e4;
            case 0x2B50E8u: goto label_2b50e8;
            case 0x2B50ECu: goto label_2b50ec;
            case 0x2B50F0u: goto label_2b50f0;
            case 0x2B50F4u: goto label_2b50f4;
            case 0x2B50F8u: goto label_2b50f8;
            case 0x2B50FCu: goto label_2b50fc;
            case 0x2B5100u: goto label_2b5100;
            case 0x2B5104u: goto label_2b5104;
            case 0x2B5108u: goto label_2b5108;
            case 0x2B510Cu: goto label_2b510c;
            case 0x2B5110u: goto label_2b5110;
            case 0x2B5114u: goto label_2b5114;
            case 0x2B5118u: goto label_2b5118;
            case 0x2B511Cu: goto label_2b511c;
            case 0x2B5120u: goto label_2b5120;
            case 0x2B5124u: goto label_2b5124;
            case 0x2B5128u: goto label_2b5128;
            case 0x2B512Cu: goto label_2b512c;
            case 0x2B5130u: goto label_2b5130;
            case 0x2B5134u: goto label_2b5134;
            case 0x2B5138u: goto label_2b5138;
            case 0x2B513Cu: goto label_2b513c;
            case 0x2B5140u: goto label_2b5140;
            case 0x2B5144u: goto label_2b5144;
            case 0x2B5148u: goto label_2b5148;
            case 0x2B514Cu: goto label_2b514c;
            case 0x2B5150u: goto label_2b5150;
            case 0x2B5154u: goto label_2b5154;
            case 0x2B5158u: goto label_2b5158;
            case 0x2B515Cu: goto label_2b515c;
            case 0x2B5160u: goto label_2b5160;
            case 0x2B5164u: goto label_2b5164;
            case 0x2B5168u: goto label_2b5168;
            case 0x2B516Cu: goto label_2b516c;
            case 0x2B5170u: goto label_2b5170;
            case 0x2B5174u: goto label_2b5174;
            case 0x2B5178u: goto label_2b5178;
            case 0x2B517Cu: goto label_2b517c;
            case 0x2B5180u: goto label_2b5180;
            case 0x2B5184u: goto label_2b5184;
            case 0x2B5188u: goto label_2b5188;
            case 0x2B518Cu: goto label_2b518c;
            case 0x2B5190u: goto label_2b5190;
            case 0x2B5194u: goto label_2b5194;
            case 0x2B5198u: goto label_2b5198;
            case 0x2B519Cu: goto label_2b519c;
            case 0x2B51A0u: goto label_2b51a0;
            case 0x2B51A4u: goto label_2b51a4;
            case 0x2B51A8u: goto label_2b51a8;
            case 0x2B51ACu: goto label_2b51ac;
            case 0x2B51B0u: goto label_2b51b0;
            case 0x2B51B4u: goto label_2b51b4;
            case 0x2B51B8u: goto label_2b51b8;
            case 0x2B51BCu: goto label_2b51bc;
            case 0x2B51C0u: goto label_2b51c0;
            case 0x2B51C4u: goto label_2b51c4;
            case 0x2B51C8u: goto label_2b51c8;
            case 0x2B51CCu: goto label_2b51cc;
            case 0x2B51D0u: goto label_2b51d0;
            case 0x2B51D4u: goto label_2b51d4;
            case 0x2B51D8u: goto label_2b51d8;
            case 0x2B51DCu: goto label_2b51dc;
            case 0x2B51E0u: goto label_2b51e0;
            case 0x2B51E4u: goto label_2b51e4;
            case 0x2B51E8u: goto label_2b51e8;
            case 0x2B51ECu: goto label_2b51ec;
            case 0x2B51F0u: goto label_2b51f0;
            case 0x2B51F4u: goto label_2b51f4;
            case 0x2B51F8u: goto label_2b51f8;
            case 0x2B51FCu: goto label_2b51fc;
            case 0x2B5200u: goto label_2b5200;
            case 0x2B5204u: goto label_2b5204;
            case 0x2B5208u: goto label_2b5208;
            case 0x2B520Cu: goto label_2b520c;
            case 0x2B5210u: goto label_2b5210;
            case 0x2B5214u: goto label_2b5214;
            case 0x2B5218u: goto label_2b5218;
            case 0x2B521Cu: goto label_2b521c;
            case 0x2B5220u: goto label_2b5220;
            case 0x2B5224u: goto label_2b5224;
            case 0x2B5228u: goto label_2b5228;
            case 0x2B522Cu: goto label_2b522c;
            case 0x2B5230u: goto label_2b5230;
            case 0x2B5234u: goto label_2b5234;
            case 0x2B5238u: goto label_2b5238;
            case 0x2B523Cu: goto label_2b523c;
            case 0x2B5240u: goto label_2b5240;
            case 0x2B5244u: goto label_2b5244;
            case 0x2B5248u: goto label_2b5248;
            case 0x2B524Cu: goto label_2b524c;
            case 0x2B5250u: goto label_2b5250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B507Cu;
label_2b507c:
    // 0x2b507c: 0xc6000010
    ctx->pc = 0x2b507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b5080:
    // 0x2b5080: 0xc6210010
    ctx->pc = 0x2b5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b5084:
    // 0x2b5084: 0x0
    ctx->pc = 0x2b5084u;
    // NOP
label_2b5088:
    // 0x2b5088: 0x0
    ctx->pc = 0x2b5088u;
    // NOP
label_2b508c:
    // 0x2b508c: 0x46010003
    ctx->pc = 0x2b508cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_2b5090:
    // 0x2b5090: 0x10000069
label_2b5094:
    if (ctx->pc == 0x2B5094u) {
        ctx->pc = 0x2B5094u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->pc = 0x2B5098u;
        goto label_2b5098;
    }
    ctx->pc = 0x2B5090u;
    {
        const bool branch_taken_0x2b5090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5094u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        if (branch_taken_0x2b5090) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B5098u;
label_2b5098:
    // 0x2b5098: 0x8e020010
    ctx->pc = 0x2b5098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b509c:
    // 0x2b509c: 0x8e230010
    ctx->pc = 0x2b509cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b50a0:
    // 0x2b50a0: 0x43001a
    ctx->pc = 0x2b50a0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2b50a4:
    // 0x2b50a4: 0x1012
    ctx->pc = 0x2b50a4u;
    SET_GPR_U32(ctx, 2, ctx->lo);
label_2b50a8:
    // 0x2b50a8: 0x50600001
label_2b50ac:
    if (ctx->pc == 0x2B50ACu) {
        ctx->pc = 0x2B50ACu;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2B50B0u;
        goto label_2b50b0;
    }
    ctx->pc = 0x2B50A8u;
    {
        const bool branch_taken_0x2b50a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b50a8) {
            ctx->pc = 0x2B50ACu;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2B50B0u;
            goto label_2b50b0;
        }
    }
    ctx->pc = 0x2B50B0u;
label_2b50b0:
    // 0x2b50b0: 0x10000061
label_2b50b4:
    if (ctx->pc == 0x2B50B4u) {
        ctx->pc = 0x2B50B4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B50B8u;
        goto label_2b50b8;
    }
    ctx->pc = 0x2B50B0u;
    {
        const bool branch_taken_0x2b50b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B50B4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b50b0) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B50B8u;
label_2b50b8:
    // 0x2b50b8: 0x24020009
    ctx->pc = 0x2b50b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2b50bc:
    // 0x2b50bc: 0x14620043
label_2b50c0:
    if (ctx->pc == 0x2B50C0u) {
        ctx->pc = 0x2B50C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2B50C4u;
        goto label_2b50c4;
    }
    ctx->pc = 0x2B50BCu;
    {
        const bool branch_taken_0x2b50bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B50C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b50bc) {
            ctx->pc = 0x2B51CCu;
            goto label_2b51cc;
        }
    }
    ctx->pc = 0x2B50C4u;
label_2b50c4:
    // 0x2b50c4: 0x8e030010
    ctx->pc = 0x2b50c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b50c8:
    // 0x2b50c8: 0x8e220010
    ctx->pc = 0x2b50c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b50cc:
    // 0x2b50cc: 0x62001a
    ctx->pc = 0x2b50ccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_2b50d0:
    // 0x2b50d0: 0x1810
    ctx->pc = 0x2b50d0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
label_2b50d4:
    // 0x2b50d4: 0x50400001
label_2b50d8:
    if (ctx->pc == 0x2B50D8u) {
        ctx->pc = 0x2B50D8u;
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2B50DCu;
        goto label_2b50dc;
    }
    ctx->pc = 0x2B50D4u;
    {
        const bool branch_taken_0x2b50d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b50d4) {
            ctx->pc = 0x2B50D8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2B50DCu;
            goto label_2b50dc;
        }
    }
    ctx->pc = 0x2B50DCu;
label_2b50dc:
    // 0x2b50dc: 0x10000056
label_2b50e0:
    if (ctx->pc == 0x2B50E0u) {
        ctx->pc = 0x2B50E0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x2B50E4u;
        goto label_2b50e4;
    }
    ctx->pc = 0x2B50DCu;
    {
        const bool branch_taken_0x2b50dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B50E0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x2b50dc) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B50E4u;
label_2b50e4:
    // 0x2b50e4: 0x24020009
    ctx->pc = 0x2b50e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2b50e8:
    // 0x2b50e8: 0x14620038
label_2b50ec:
    if (ctx->pc == 0x2B50ECu) {
        ctx->pc = 0x2B50ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2B50F0u;
        goto label_2b50f0;
    }
    ctx->pc = 0x2B50E8u;
    {
        const bool branch_taken_0x2b50e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B50ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b50e8) {
            ctx->pc = 0x2B51CCu;
            goto label_2b51cc;
        }
    }
    ctx->pc = 0x2B50F0u;
label_2b50f0:
    // 0x2b50f0: 0x8e020010
    ctx->pc = 0x2b50f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b50f4:
    // 0x2b50f4: 0x8e230010
    ctx->pc = 0x2b50f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b50f8:
    // 0x2b50f8: 0x431025
    ctx->pc = 0x2b50f8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b50fc:
    // 0x2b50fc: 0x1000004e
label_2b5100:
    if (ctx->pc == 0x2B5100u) {
        ctx->pc = 0x2B5100u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5104u;
        goto label_2b5104;
    }
    ctx->pc = 0x2B50FCu;
    {
        const bool branch_taken_0x2b50fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5100u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b50fc) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B5104u;
label_2b5104:
    // 0x2b5104: 0x24020009
    ctx->pc = 0x2b5104u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
label_2b5108:
    // 0x2b5108: 0x14620030
label_2b510c:
    if (ctx->pc == 0x2B510Cu) {
        ctx->pc = 0x2B510Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2B5110u;
        goto label_2b5110;
    }
    ctx->pc = 0x2B5108u;
    {
        const bool branch_taken_0x2b5108 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2B510Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x2b5108) {
            ctx->pc = 0x2B51CCu;
            goto label_2b51cc;
        }
    }
    ctx->pc = 0x2B5110u;
label_2b5110:
    // 0x2b5110: 0x8e020010
    ctx->pc = 0x2b5110u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2b5114:
    // 0x2b5114: 0x8e230010
    ctx->pc = 0x2b5114u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2b5118:
    // 0x2b5118: 0x431024
    ctx->pc = 0x2b5118u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b511c:
    // 0x2b511c: 0x10000046
label_2b5120:
    if (ctx->pc == 0x2B5120u) {
        ctx->pc = 0x2B5120u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2B5124u;
        goto label_2b5124;
    }
    ctx->pc = 0x2B511Cu;
    {
        const bool branch_taken_0x2b511c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5120u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b511c) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B5124u;
label_2b5124:
    // 0x2b5124: 0x220282d
    ctx->pc = 0x2b5124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5128:
    // 0x2b5128: 0x26220040
    ctx->pc = 0x2b5128u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 64));
label_2b512c:
    // 0x2b512c: 0xdca30000
    ctx->pc = 0x2b512cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b5130:
    // 0x2b5130: 0xdca60008
    ctx->pc = 0x2b5130u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_2b5134:
    // 0x2b5134: 0xdca70010
    ctx->pc = 0x2b5134u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_2b5138:
    // 0x2b5138: 0xdca80018
    ctx->pc = 0x2b5138u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_2b513c:
    // 0x2b513c: 0xfc830000
    ctx->pc = 0x2b513cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_2b5140:
    // 0x2b5140: 0xfc860008
    ctx->pc = 0x2b5140u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_2b5144:
    // 0x2b5144: 0xfc870010
    ctx->pc = 0x2b5144u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_2b5148:
    // 0x2b5148: 0xfc880018
    ctx->pc = 0x2b5148u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_2b514c:
    // 0x2b514c: 0x24a50020
    ctx->pc = 0x2b514cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
label_2b5150:
    // 0x2b5150: 0x24840020
    ctx->pc = 0x2b5150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
label_2b5154:
    // 0x2b5154: 0x0
    ctx->pc = 0x2b5154u;
    // NOP
label_2b5158:
    // 0x2b5158: 0x0
    ctx->pc = 0x2b5158u;
    // NOP
label_2b515c:
    // 0x2b515c: 0x14a2fff3
label_2b5160:
    if (ctx->pc == 0x2B5160u) {
        ctx->pc = 0x2B5164u;
        goto label_2b5164;
    }
    ctx->pc = 0x2B515Cu;
    {
        const bool branch_taken_0x2b515c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x2b515c) {
            ctx->pc = 0x2B512Cu;
            goto label_2b512c;
        }
    }
    ctx->pc = 0x2B5164u;
label_2b5164:
    // 0x2b5164: 0xdca20000
    ctx->pc = 0x2b5164u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2b5168:
    // 0x2b5168: 0xdca30008
    ctx->pc = 0x2b5168u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_2b516c:
    // 0x2b516c: 0xfc820000
    ctx->pc = 0x2b516cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_2b5170:
    // 0x2b5170: 0x10000031
label_2b5174:
    if (ctx->pc == 0x2B5174u) {
        ctx->pc = 0x2B5174u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        ctx->pc = 0x2B5178u;
        goto label_2b5178;
    }
    ctx->pc = 0x2B5170u;
    {
        const bool branch_taken_0x2b5170 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5174u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        if (branch_taken_0x2b5170) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B5178u;
label_2b5178:
    // 0x2b5178: 0x24050020
    ctx->pc = 0x2b5178u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b517c:
    // 0x2b517c: 0x3c06003b
    ctx->pc = 0x2b517cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b5180:
    // 0x2b5180: 0x24c60d80
    ctx->pc = 0x2b5180u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b5184:
    // 0x2b5184: 0xc0ad0d6
label_2b5188:
    if (ctx->pc == 0x2B5188u) {
        ctx->pc = 0x2B5188u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B518Cu;
        goto label_2b518c;
    }
    ctx->pc = 0x2B5184u;
    SET_GPR_U32(ctx, 31, 0x2B518Cu);
    ctx->pc = 0x2B5188u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B518Cu; }
    }
    if (ctx->pc != 0x2B518Cu) { return; }
    ctx->pc = 0x2B518Cu;
label_2b518c:
    // 0x2b518c: 0x3c04003b
    ctx->pc = 0x2b518cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b5190:
    // 0x2b5190: 0x24844850
    ctx->pc = 0x2b5190u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18512));
label_2b5194:
    // 0x2b5194: 0xc0b4a34
label_2b5198:
    if (ctx->pc == 0x2B5198u) {
        ctx->pc = 0x2B5198u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B519Cu;
        goto label_2b519c;
    }
    ctx->pc = 0x2B5194u;
    SET_GPR_U32(ctx, 31, 0x2B519Cu);
    ctx->pc = 0x2B5198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B519Cu; }
    }
    if (ctx->pc != 0x2B519Cu) { return; }
    ctx->pc = 0x2B519Cu;
label_2b519c:
    // 0x2b519c: 0x3c04003b
    ctx->pc = 0x2b519cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b51a0:
    // 0x2b51a0: 0xc0b4a34
label_2b51a4:
    if (ctx->pc == 0x2B51A4u) {
        ctx->pc = 0x2B51A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B51A8u;
        goto label_2b51a8;
    }
    ctx->pc = 0x2B51A0u;
    SET_GPR_U32(ctx, 31, 0x2B51A8u);
    ctx->pc = 0x2B51A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51A8u; }
    }
    if (ctx->pc != 0x2B51A8u) { return; }
    ctx->pc = 0x2B51A8u;
label_2b51a8:
    // 0x2b51a8: 0x3c020037
    ctx->pc = 0x2b51a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b51ac:
    // 0x2b51ac: 0x8c4320ac
    ctx->pc = 0x2b51acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b51b0:
    // 0x2b51b0: 0x8c620048
    ctx->pc = 0x2b51b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b51b4:
    // 0x2b51b4: 0x34420001
    ctx->pc = 0x2b51b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b51b8:
    // 0x2b51b8: 0xac620048
    ctx->pc = 0x2b51b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b51bc:
    // 0x2b51bc: 0x24020020
    ctx->pc = 0x2b51bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b51c0:
    // 0x2b51c0: 0x1000001d
label_2b51c4:
    if (ctx->pc == 0x2B51C4u) {
        ctx->pc = 0x2B51C4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B51C8u;
        goto label_2b51c8;
    }
    ctx->pc = 0x2B51C0u;
    {
        const bool branch_taken_0x2b51c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B51C4u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b51c0) {
            ctx->pc = 0x2B5238u;
            goto label_2b5238;
        }
    }
    ctx->pc = 0x2B51C8u;
label_2b51c8:
    // 0x2b51c8: 0x24020020
    ctx->pc = 0x2b51c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
label_2b51cc:
    // 0x2b51cc: 0xae420000
    ctx->pc = 0x2b51ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2b51d0:
    // 0x2b51d0: 0x3c04003b
    ctx->pc = 0x2b51d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b51d4:
    // 0x2b51d4: 0x24844650
    ctx->pc = 0x2b51d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18000));
label_2b51d8:
    // 0x2b51d8: 0x24050020
    ctx->pc = 0x2b51d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2b51dc:
    // 0x2b51dc: 0x3c06003b
    ctx->pc = 0x2b51dcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
label_2b51e0:
    // 0x2b51e0: 0x24c60d80
    ctx->pc = 0x2b51e0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 3456));
label_2b51e4:
    // 0x2b51e4: 0xc0ad0d6
label_2b51e8:
    if (ctx->pc == 0x2B51E8u) {
        ctx->pc = 0x2B51E8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B51ECu;
        goto label_2b51ec;
    }
    ctx->pc = 0x2B51E4u;
    SET_GPR_U32(ctx, 31, 0x2B51ECu);
    ctx->pc = 0x2B51E8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2B4358u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalDBLvlPrint_0x2b4358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51ECu; }
    }
    if (ctx->pc != 0x2B51ECu) { return; }
    ctx->pc = 0x2B51ECu;
label_2b51ec:
    // 0x2b51ec: 0xc0ad082
label_2b51f0:
    if (ctx->pc == 0x2B51F0u) {
        ctx->pc = 0x2B51F0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2B51F4u;
        goto label_2b51f4;
    }
    ctx->pc = 0x2B51ECu;
    SET_GPR_U32(ctx, 31, 0x2B51F4u);
    ctx->pc = 0x2B51F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B51F4u; }
    }
    if (ctx->pc != 0x2B51F4u) { return; }
    ctx->pc = 0x2B51F4u;
label_2b51f4:
    // 0x2b51f4: 0x40802d
    ctx->pc = 0x2b51f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b51f8:
    // 0x2b51f8: 0xc0ad082
label_2b51fc:
    if (ctx->pc == 0x2B51FCu) {
        ctx->pc = 0x2B51FCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2B5200u;
        goto label_2b5200;
    }
    ctx->pc = 0x2B51F8u;
    SET_GPR_U32(ctx, 31, 0x2B5200u);
    ctx->pc = 0x2B51FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x2B4208u;
    {
        const uint32_t __entryPc = ctx->pc;
        typeStr_0x2b4208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5200u; }
    }
    if (ctx->pc != 0x2B5200u) { return; }
    ctx->pc = 0x2B5200u;
label_2b5200:
    // 0x2b5200: 0x3c04003b
    ctx->pc = 0x2b5200u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b5204:
    // 0x2b5204: 0x24844860
    ctx->pc = 0x2b5204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18528));
label_2b5208:
    // 0x2b5208: 0x200282d
    ctx->pc = 0x2b5208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b520c:
    // 0x2b520c: 0x260302d
    ctx->pc = 0x2b520cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b5210:
    // 0x2b5210: 0xc0b4a34
label_2b5214:
    if (ctx->pc == 0x2B5214u) {
        ctx->pc = 0x2B5214u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B5218u;
        goto label_2b5218;
    }
    ctx->pc = 0x2B5210u;
    SET_GPR_U32(ctx, 31, 0x2B5218u);
    ctx->pc = 0x2B5214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5218u; }
    }
    if (ctx->pc != 0x2B5218u) { return; }
    ctx->pc = 0x2B5218u;
label_2b5218:
    // 0x2b5218: 0x3c04003b
    ctx->pc = 0x2b5218u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
label_2b521c:
    // 0x2b521c: 0xc0b4a34
label_2b5220:
    if (ctx->pc == 0x2B5220u) {
        ctx->pc = 0x2B5220u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
        ctx->pc = 0x2B5224u;
        goto label_2b5224;
    }
    ctx->pc = 0x2B521Cu;
    SET_GPR_U32(ctx, 31, 0x2B5224u);
    ctx->pc = 0x2B5220u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 18040));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5224u; }
    }
    if (ctx->pc != 0x2B5224u) { return; }
    ctx->pc = 0x2B5224u;
label_2b5224:
    // 0x2b5224: 0x3c020037
    ctx->pc = 0x2b5224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
label_2b5228:
    // 0x2b5228: 0x8c4320ac
    ctx->pc = 0x2b5228u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
label_2b522c:
    // 0x2b522c: 0x8c620048
    ctx->pc = 0x2b522cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2b5230:
    // 0x2b5230: 0x34420001
    ctx->pc = 0x2b5230u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_2b5234:
    // 0x2b5234: 0xac620048
    ctx->pc = 0x2b5234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_2b5238:
    // 0x2b5238: 0xdfbf0040
    ctx->pc = 0x2b5238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b523c:
    // 0x2b523c: 0xdfb30030
    ctx->pc = 0x2b523cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b5240:
    // 0x2b5240: 0xdfb20020
    ctx->pc = 0x2b5240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b5244:
    // 0x2b5244: 0xdfb10010
    ctx->pc = 0x2b5244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b5248:
    // 0x2b5248: 0xdfb00000
    ctx->pc = 0x2b5248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b524c:
    // 0x2b524c: 0x3e00008
label_2b5250:
    if (ctx->pc == 0x2B5250u) {
        ctx->pc = 0x2B5250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2B5254u;
        goto label_fallthrough_0x2b524c;
    }
    ctx->pc = 0x2B524Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5250u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B4D98u: goto label_2b4d98;
            case 0x2B4D9Cu: goto label_2b4d9c;
            case 0x2B4DA0u: goto label_2b4da0;
            case 0x2B4DA4u: goto label_2b4da4;
            case 0x2B4DA8u: goto label_2b4da8;
            case 0x2B4DACu: goto label_2b4dac;
            case 0x2B4DB0u: goto label_2b4db0;
            case 0x2B4DB4u: goto label_2b4db4;
            case 0x2B4DB8u: goto label_2b4db8;
            case 0x2B4DBCu: goto label_2b4dbc;
            case 0x2B4DC0u: goto label_2b4dc0;
            case 0x2B4DC4u: goto label_2b4dc4;
            case 0x2B4DC8u: goto label_2b4dc8;
            case 0x2B4DCCu: goto label_2b4dcc;
            case 0x2B4DD0u: goto label_2b4dd0;
            case 0x2B4DD4u: goto label_2b4dd4;
            case 0x2B4DD8u: goto label_2b4dd8;
            case 0x2B4DDCu: goto label_2b4ddc;
            case 0x2B4DE0u: goto label_2b4de0;
            case 0x2B4DE4u: goto label_2b4de4;
            case 0x2B4DE8u: goto label_2b4de8;
            case 0x2B4DECu: goto label_2b4dec;
            case 0x2B4DF0u: goto label_2b4df0;
            case 0x2B4DF4u: goto label_2b4df4;
            case 0x2B4DF8u: goto label_2b4df8;
            case 0x2B4DFCu: goto label_2b4dfc;
            case 0x2B4E00u: goto label_2b4e00;
            case 0x2B4E04u: goto label_2b4e04;
            case 0x2B4E08u: goto label_2b4e08;
            case 0x2B4E0Cu: goto label_2b4e0c;
            case 0x2B4E10u: goto label_2b4e10;
            case 0x2B4E14u: goto label_2b4e14;
            case 0x2B4E18u: goto label_2b4e18;
            case 0x2B4E1Cu: goto label_2b4e1c;
            case 0x2B4E20u: goto label_2b4e20;
            case 0x2B4E24u: goto label_2b4e24;
            case 0x2B4E28u: goto label_2b4e28;
            case 0x2B4E2Cu: goto label_2b4e2c;
            case 0x2B4E30u: goto label_2b4e30;
            case 0x2B4E34u: goto label_2b4e34;
            case 0x2B4E38u: goto label_2b4e38;
            case 0x2B4E3Cu: goto label_2b4e3c;
            case 0x2B4E40u: goto label_2b4e40;
            case 0x2B4E44u: goto label_2b4e44;
            case 0x2B4E48u: goto label_2b4e48;
            case 0x2B4E4Cu: goto label_2b4e4c;
            case 0x2B4E50u: goto label_2b4e50;
            case 0x2B4E54u: goto label_2b4e54;
            case 0x2B4E58u: goto label_2b4e58;
            case 0x2B4E5Cu: goto label_2b4e5c;
            case 0x2B4E60u: goto label_2b4e60;
            case 0x2B4E64u: goto label_2b4e64;
            case 0x2B4E68u: goto label_2b4e68;
            case 0x2B4E6Cu: goto label_2b4e6c;
            case 0x2B4E70u: goto label_2b4e70;
            case 0x2B4E74u: goto label_2b4e74;
            case 0x2B4E78u: goto label_2b4e78;
            case 0x2B4E7Cu: goto label_2b4e7c;
            case 0x2B4E80u: goto label_2b4e80;
            case 0x2B4E84u: goto label_2b4e84;
            case 0x2B4E88u: goto label_2b4e88;
            case 0x2B4E8Cu: goto label_2b4e8c;
            case 0x2B4E90u: goto label_2b4e90;
            case 0x2B4E94u: goto label_2b4e94;
            case 0x2B4E98u: goto label_2b4e98;
            case 0x2B4E9Cu: goto label_2b4e9c;
            case 0x2B4EA0u: goto label_2b4ea0;
            case 0x2B4EA4u: goto label_2b4ea4;
            case 0x2B4EA8u: goto label_2b4ea8;
            case 0x2B4EACu: goto label_2b4eac;
            case 0x2B4EB0u: goto label_2b4eb0;
            case 0x2B4EB4u: goto label_2b4eb4;
            case 0x2B4EB8u: goto label_2b4eb8;
            case 0x2B4EBCu: goto label_2b4ebc;
            case 0x2B4EC0u: goto label_2b4ec0;
            case 0x2B4EC4u: goto label_2b4ec4;
            case 0x2B4EC8u: goto label_2b4ec8;
            case 0x2B4ECCu: goto label_2b4ecc;
            case 0x2B4ED0u: goto label_2b4ed0;
            case 0x2B4ED4u: goto label_2b4ed4;
            case 0x2B4ED8u: goto label_2b4ed8;
            case 0x2B4EDCu: goto label_2b4edc;
            case 0x2B4EE0u: goto label_2b4ee0;
            case 0x2B4EE4u: goto label_2b4ee4;
            case 0x2B4EE8u: goto label_2b4ee8;
            case 0x2B4EECu: goto label_2b4eec;
            case 0x2B4EF0u: goto label_2b4ef0;
            case 0x2B4EF4u: goto label_2b4ef4;
            case 0x2B4EF8u: goto label_2b4ef8;
            case 0x2B4EFCu: goto label_2b4efc;
            case 0x2B4F00u: goto label_2b4f00;
            case 0x2B4F04u: goto label_2b4f04;
            case 0x2B4F08u: goto label_2b4f08;
            case 0x2B4F0Cu: goto label_2b4f0c;
            case 0x2B4F10u: goto label_2b4f10;
            case 0x2B4F14u: goto label_2b4f14;
            case 0x2B4F18u: goto label_2b4f18;
            case 0x2B4F1Cu: goto label_2b4f1c;
            case 0x2B4F20u: goto label_2b4f20;
            case 0x2B4F24u: goto label_2b4f24;
            case 0x2B4F28u: goto label_2b4f28;
            case 0x2B4F2Cu: goto label_2b4f2c;
            case 0x2B4F30u: goto label_2b4f30;
            case 0x2B4F34u: goto label_2b4f34;
            case 0x2B4F38u: goto label_2b4f38;
            case 0x2B4F3Cu: goto label_2b4f3c;
            case 0x2B4F40u: goto label_2b4f40;
            case 0x2B4F44u: goto label_2b4f44;
            case 0x2B4F48u: goto label_2b4f48;
            case 0x2B4F4Cu: goto label_2b4f4c;
            case 0x2B4F50u: goto label_2b4f50;
            case 0x2B4F54u: goto label_2b4f54;
            case 0x2B4F58u: goto label_2b4f58;
            case 0x2B4F5Cu: goto label_2b4f5c;
            case 0x2B4F60u: goto label_2b4f60;
            case 0x2B4F64u: goto label_2b4f64;
            case 0x2B4F68u: goto label_2b4f68;
            case 0x2B4F6Cu: goto label_2b4f6c;
            case 0x2B4F70u: goto label_2b4f70;
            case 0x2B4F74u: goto label_2b4f74;
            case 0x2B4F78u: goto label_2b4f78;
            case 0x2B4F7Cu: goto label_2b4f7c;
            case 0x2B4F80u: goto label_2b4f80;
            case 0x2B4F84u: goto label_2b4f84;
            case 0x2B4F88u: goto label_2b4f88;
            case 0x2B4F8Cu: goto label_2b4f8c;
            case 0x2B4F90u: goto label_2b4f90;
            case 0x2B4F94u: goto label_2b4f94;
            case 0x2B4F98u: goto label_2b4f98;
            case 0x2B4F9Cu: goto label_2b4f9c;
            case 0x2B4FA0u: goto label_2b4fa0;
            case 0x2B4FA4u: goto label_2b4fa4;
            case 0x2B4FA8u: goto label_2b4fa8;
            case 0x2B4FACu: goto label_2b4fac;
            case 0x2B4FB0u: goto label_2b4fb0;
            case 0x2B4FB4u: goto label_2b4fb4;
            case 0x2B4FB8u: goto label_2b4fb8;
            case 0x2B4FBCu: goto label_2b4fbc;
            case 0x2B4FC0u: goto label_2b4fc0;
            case 0x2B4FC4u: goto label_2b4fc4;
            case 0x2B4FC8u: goto label_2b4fc8;
            case 0x2B4FCCu: goto label_2b4fcc;
            case 0x2B4FD0u: goto label_2b4fd0;
            case 0x2B4FD4u: goto label_2b4fd4;
            case 0x2B4FD8u: goto label_2b4fd8;
            case 0x2B4FDCu: goto label_2b4fdc;
            case 0x2B4FE0u: goto label_2b4fe0;
            case 0x2B4FE4u: goto label_2b4fe4;
            case 0x2B4FE8u: goto label_2b4fe8;
            case 0x2B4FECu: goto label_2b4fec;
            case 0x2B4FF0u: goto label_2b4ff0;
            case 0x2B4FF4u: goto label_2b4ff4;
            case 0x2B4FF8u: goto label_2b4ff8;
            case 0x2B4FFCu: goto label_2b4ffc;
            case 0x2B5000u: goto label_2b5000;
            case 0x2B5004u: goto label_2b5004;
            case 0x2B5008u: goto label_2b5008;
            case 0x2B500Cu: goto label_2b500c;
            case 0x2B5010u: goto label_2b5010;
            case 0x2B5014u: goto label_2b5014;
            case 0x2B5018u: goto label_2b5018;
            case 0x2B501Cu: goto label_2b501c;
            case 0x2B5020u: goto label_2b5020;
            case 0x2B5024u: goto label_2b5024;
            case 0x2B5028u: goto label_2b5028;
            case 0x2B502Cu: goto label_2b502c;
            case 0x2B5030u: goto label_2b5030;
            case 0x2B5034u: goto label_2b5034;
            case 0x2B5038u: goto label_2b5038;
            case 0x2B503Cu: goto label_2b503c;
            case 0x2B5040u: goto label_2b5040;
            case 0x2B5044u: goto label_2b5044;
            case 0x2B5048u: goto label_2b5048;
            case 0x2B504Cu: goto label_2b504c;
            case 0x2B5050u: goto label_2b5050;
            case 0x2B5054u: goto label_2b5054;
            case 0x2B5058u: goto label_2b5058;
            case 0x2B505Cu: goto label_2b505c;
            case 0x2B5060u: goto label_2b5060;
            case 0x2B5064u: goto label_2b5064;
            case 0x2B5068u: goto label_2b5068;
            case 0x2B506Cu: goto label_2b506c;
            case 0x2B5070u: goto label_2b5070;
            case 0x2B5074u: goto label_2b5074;
            case 0x2B5078u: goto label_2b5078;
            case 0x2B507Cu: goto label_2b507c;
            case 0x2B5080u: goto label_2b5080;
            case 0x2B5084u: goto label_2b5084;
            case 0x2B5088u: goto label_2b5088;
            case 0x2B508Cu: goto label_2b508c;
            case 0x2B5090u: goto label_2b5090;
            case 0x2B5094u: goto label_2b5094;
            case 0x2B5098u: goto label_2b5098;
            case 0x2B509Cu: goto label_2b509c;
            case 0x2B50A0u: goto label_2b50a0;
            case 0x2B50A4u: goto label_2b50a4;
            case 0x2B50A8u: goto label_2b50a8;
            case 0x2B50ACu: goto label_2b50ac;
            case 0x2B50B0u: goto label_2b50b0;
            case 0x2B50B4u: goto label_2b50b4;
            case 0x2B50B8u: goto label_2b50b8;
            case 0x2B50BCu: goto label_2b50bc;
            case 0x2B50C0u: goto label_2b50c0;
            case 0x2B50C4u: goto label_2b50c4;
            case 0x2B50C8u: goto label_2b50c8;
            case 0x2B50CCu: goto label_2b50cc;
            case 0x2B50D0u: goto label_2b50d0;
            case 0x2B50D4u: goto label_2b50d4;
            case 0x2B50D8u: goto label_2b50d8;
            case 0x2B50DCu: goto label_2b50dc;
            case 0x2B50E0u: goto label_2b50e0;
            case 0x2B50E4u: goto label_2b50e4;
            case 0x2B50E8u: goto label_2b50e8;
            case 0x2B50ECu: goto label_2b50ec;
            case 0x2B50F0u: goto label_2b50f0;
            case 0x2B50F4u: goto label_2b50f4;
            case 0x2B50F8u: goto label_2b50f8;
            case 0x2B50FCu: goto label_2b50fc;
            case 0x2B5100u: goto label_2b5100;
            case 0x2B5104u: goto label_2b5104;
            case 0x2B5108u: goto label_2b5108;
            case 0x2B510Cu: goto label_2b510c;
            case 0x2B5110u: goto label_2b5110;
            case 0x2B5114u: goto label_2b5114;
            case 0x2B5118u: goto label_2b5118;
            case 0x2B511Cu: goto label_2b511c;
            case 0x2B5120u: goto label_2b5120;
            case 0x2B5124u: goto label_2b5124;
            case 0x2B5128u: goto label_2b5128;
            case 0x2B512Cu: goto label_2b512c;
            case 0x2B5130u: goto label_2b5130;
            case 0x2B5134u: goto label_2b5134;
            case 0x2B5138u: goto label_2b5138;
            case 0x2B513Cu: goto label_2b513c;
            case 0x2B5140u: goto label_2b5140;
            case 0x2B5144u: goto label_2b5144;
            case 0x2B5148u: goto label_2b5148;
            case 0x2B514Cu: goto label_2b514c;
            case 0x2B5150u: goto label_2b5150;
            case 0x2B5154u: goto label_2b5154;
            case 0x2B5158u: goto label_2b5158;
            case 0x2B515Cu: goto label_2b515c;
            case 0x2B5160u: goto label_2b5160;
            case 0x2B5164u: goto label_2b5164;
            case 0x2B5168u: goto label_2b5168;
            case 0x2B516Cu: goto label_2b516c;
            case 0x2B5170u: goto label_2b5170;
            case 0x2B5174u: goto label_2b5174;
            case 0x2B5178u: goto label_2b5178;
            case 0x2B517Cu: goto label_2b517c;
            case 0x2B5180u: goto label_2b5180;
            case 0x2B5184u: goto label_2b5184;
            case 0x2B5188u: goto label_2b5188;
            case 0x2B518Cu: goto label_2b518c;
            case 0x2B5190u: goto label_2b5190;
            case 0x2B5194u: goto label_2b5194;
            case 0x2B5198u: goto label_2b5198;
            case 0x2B519Cu: goto label_2b519c;
            case 0x2B51A0u: goto label_2b51a0;
            case 0x2B51A4u: goto label_2b51a4;
            case 0x2B51A8u: goto label_2b51a8;
            case 0x2B51ACu: goto label_2b51ac;
            case 0x2B51B0u: goto label_2b51b0;
            case 0x2B51B4u: goto label_2b51b4;
            case 0x2B51B8u: goto label_2b51b8;
            case 0x2B51BCu: goto label_2b51bc;
            case 0x2B51C0u: goto label_2b51c0;
            case 0x2B51C4u: goto label_2b51c4;
            case 0x2B51C8u: goto label_2b51c8;
            case 0x2B51CCu: goto label_2b51cc;
            case 0x2B51D0u: goto label_2b51d0;
            case 0x2B51D4u: goto label_2b51d4;
            case 0x2B51D8u: goto label_2b51d8;
            case 0x2B51DCu: goto label_2b51dc;
            case 0x2B51E0u: goto label_2b51e0;
            case 0x2B51E4u: goto label_2b51e4;
            case 0x2B51E8u: goto label_2b51e8;
            case 0x2B51ECu: goto label_2b51ec;
            case 0x2B51F0u: goto label_2b51f0;
            case 0x2B51F4u: goto label_2b51f4;
            case 0x2B51F8u: goto label_2b51f8;
            case 0x2B51FCu: goto label_2b51fc;
            case 0x2B5200u: goto label_2b5200;
            case 0x2B5204u: goto label_2b5204;
            case 0x2B5208u: goto label_2b5208;
            case 0x2B520Cu: goto label_2b520c;
            case 0x2B5210u: goto label_2b5210;
            case 0x2B5214u: goto label_2b5214;
            case 0x2B5218u: goto label_2b5218;
            case 0x2B521Cu: goto label_2b521c;
            case 0x2B5220u: goto label_2b5220;
            case 0x2B5224u: goto label_2b5224;
            case 0x2B5228u: goto label_2b5228;
            case 0x2B522Cu: goto label_2b522c;
            case 0x2B5230u: goto label_2b5230;
            case 0x2B5234u: goto label_2b5234;
            case 0x2B5238u: goto label_2b5238;
            case 0x2B523Cu: goto label_2b523c;
            case 0x2B5240u: goto label_2b5240;
            case 0x2B5244u: goto label_2b5244;
            case 0x2B5248u: goto label_2b5248;
            case 0x2B524Cu: goto label_2b524c;
            case 0x2B5250u: goto label_2b5250;
            default: break;
        }
        return;
    }
label_fallthrough_0x2b524c:
    ctx->pc = 0x2B5254u;
}
