#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: loop__15McchkSelectTaskFv
// Address: 0x1f4bc0 - 0x1f4eb0
void loop__15McchkSelectTaskFv_0x1f4bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("loop__15McchkSelectTaskFv");


    ctx->pc = 0x1f4bc0u;

    // 0x1f4bc0: 0x27bdffd0
    ctx->pc = 0x1f4bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4bc4: 0x7fbf0020
    ctx->pc = 0x1f4bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1f4bc8: 0x7fb10010
    ctx->pc = 0x1f4bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f4bcc: 0x3c020050
    ctx->pc = 0x1f4bccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f4bd0: 0x7fb00000
    ctx->pc = 0x1f4bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4bd4: 0x2443db70
    ctx->pc = 0x1f4bd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x1f4bd8: 0x8c86000c
    ctx->pc = 0x1f4bd8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f4bdc: 0x8c820014
    ctx->pc = 0x1f4bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f4be0: 0x70808e28
    ctx->pc = 0x1f4be0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f4be4: 0x62880
    ctx->pc = 0x1f4be4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f4be8: 0xac820010
    ctx->pc = 0x1f4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1f4bec: 0xa63021
    ctx->pc = 0x1f4becu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1f4bf0: 0x62880
    ctx->pc = 0x1f4bf0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f4bf4: 0xc52821
    ctx->pc = 0x1f4bf4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f4bf8: 0x51080
    ctx->pc = 0x1f4bf8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f4bfc: 0x8c84000c
    ctx->pc = 0x1f4bfcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f4c00: 0xc07bf9c
    ctx->pc = 0x1F4C00u;
    SET_GPR_U32(ctx, 31, 0x1F4C08u);
    ctx->pc = 0x1F4C04u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C08u; }
        else if (ctx->pc != 0x1F4C08u) { ctx->pc = 0x1F4C08u; }
    }
    if (ctx->pc != 0x1F4C08u) { return; }
    ctx->pc = 0x1F4C08u;
    // 0x1f4c08: 0xae220014
    ctx->pc = 0x1f4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1f4c0c: 0x8e230010
    ctx->pc = 0x1f4c0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f4c10: 0x8e240014
    ctx->pc = 0x1f4c10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f4c14: 0x10640006
    ctx->pc = 0x1F4C14u;
    {
        const bool branch_taken_0x1f4c14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        if (branch_taken_0x1f4c14) {
            ctx->pc = 0x1F4C30u;
            goto label_1f4c30;
        }
    }
    ctx->pc = 0x1F4C1Cu;
    // 0x1f4c1c: 0x24030001
    ctx->pc = 0x1f4c1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4c20: 0x14830003
    ctx->pc = 0x1F4C20u;
    {
        const bool branch_taken_0x1f4c20 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1f4c20) {
            ctx->pc = 0x1F4C30u;
            goto label_1f4c30;
        }
    }
    ctx->pc = 0x1F4C28u;
    // 0x1f4c28: 0xa6000008
    ctx->pc = 0x1f4c28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f4c2c: 0xa600000a
    ctx->pc = 0x1f4c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
label_1f4c30:
    // 0x1f4c30: 0x8e240014
    ctx->pc = 0x1f4c30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f4c34: 0x24030003
    ctx->pc = 0x1f4c34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4c38: 0x10830017
    ctx->pc = 0x1F4C38u;
    {
        const bool branch_taken_0x1f4c38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f4c38) {
            ctx->pc = 0x1F4C98u;
            goto label_1f4c98;
        }
    }
    ctx->pc = 0x1F4C40u;
    // 0x1f4c40: 0x24030002
    ctx->pc = 0x1f4c40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4c44: 0x10830014
    ctx->pc = 0x1F4C44u;
    {
        const bool branch_taken_0x1f4c44 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f4c44) {
            ctx->pc = 0x1F4C98u;
            goto label_1f4c98;
        }
    }
    ctx->pc = 0x1F4C4Cu;
    // 0x1f4c4c: 0x24030001
    ctx->pc = 0x1f4c4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4c50: 0x10830006
    ctx->pc = 0x1F4C50u;
    {
        const bool branch_taken_0x1f4c50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f4c50) {
            ctx->pc = 0x1F4C6Cu;
            goto label_1f4c6c;
        }
    }
    ctx->pc = 0x1F4C58u;
    // 0x1f4c58: 0x24030140
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x1f4c5c: 0xae230004
    ctx->pc = 0x1f4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1f4c60: 0x240300e0
    ctx->pc = 0x1f4c60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f4c64: 0x10000016
    ctx->pc = 0x1F4C64u;
    {
        const bool branch_taken_0x1f4c64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4C68u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x1f4c64) {
            ctx->pc = 0x1F4CC0u;
            goto label_1f4cc0;
        }
    }
    ctx->pc = 0x1F4C6Cu;
label_1f4c6c:
    // 0x1f4c6c: 0x86030008
    ctx->pc = 0x1f4c6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f4c70: 0x240200e0
    ctx->pc = 0x1f4c70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f4c74: 0x72002628
    ctx->pc = 0x1f4c74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1f4c78: 0x24630140
    ctx->pc = 0x1f4c78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 320));
    // 0x1f4c7c: 0xae230004
    ctx->pc = 0x1f4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1f4c80: 0x8603000a
    ctx->pc = 0x1f4c80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1f4c84: 0x431023
    ctx->pc = 0x1f4c84u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f4c88: 0xc083e88
    ctx->pc = 0x1F4C88u;
    SET_GPR_U32(ctx, 31, 0x1F4C90u);
    ctx->pc = 0x1F4C8Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x20FA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispPlayerSight_NoGame__FP4_gun_0x20fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4C90u; }
        else if (ctx->pc != 0x1F4C90u) { ctx->pc = 0x1F4C90u; }
    }
    if (ctx->pc != 0x1F4C90u) { return; }
    ctx->pc = 0x1F4C90u;
    // 0x1f4c90: 0x1000000c
    ctx->pc = 0x1F4C90u;
    {
        const bool branch_taken_0x1f4c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4C94u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
        if (branch_taken_0x1f4c90) {
            ctx->pc = 0x1F4CC4u;
            goto label_1f4cc4;
        }
    }
    ctx->pc = 0x1F4C98u;
label_1f4c98:
    // 0x1f4c98: 0x8603000c
    ctx->pc = 0x1f4c98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f4c9c: 0x10600008
    ctx->pc = 0x1F4C9Cu;
    {
        const bool branch_taken_0x1f4c9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4c9c) {
            ctx->pc = 0x1F4CC0u;
            goto label_1f4cc0;
        }
    }
    ctx->pc = 0x1F4CA4u;
    // 0x1f4ca4: 0x86040008
    ctx->pc = 0x1f4ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f4ca8: 0x240300e0
    ctx->pc = 0x1f4ca8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f4cac: 0x24840140
    ctx->pc = 0x1f4cacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 320));
    // 0x1f4cb0: 0xae240004
    ctx->pc = 0x1f4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x1f4cb4: 0x8604000a
    ctx->pc = 0x1f4cb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1f4cb8: 0x641823
    ctx->pc = 0x1f4cb8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f4cbc: 0xae230008
    ctx->pc = 0x1f4cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1f4cc0:
    // 0x1f4cc0: 0x8f838e3c
    ctx->pc = 0x1f4cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938172)));
label_1f4cc4:
    // 0x1f4cc4: 0x10600075
    ctx->pc = 0x1F4CC4u;
    {
        const bool branch_taken_0x1f4cc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4cc4) {
            ctx->pc = 0x1F4E9Cu;
            goto label_1f4e9c;
        }
    }
    ctx->pc = 0x1F4CCCu;
    // 0x1f4ccc: 0xc07bf9c
    ctx->pc = 0x1F4CCCu;
    SET_GPR_U32(ctx, 31, 0x1F4CD4u);
    ctx->pc = 0x1F4CD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x1EFE70u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunDevice__Fi_0x1efe70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4CD4u; }
        else if (ctx->pc != 0x1F4CD4u) { ctx->pc = 0x1F4CD4u; }
    }
    if (ctx->pc != 0x1F4CD4u) { return; }
    ctx->pc = 0x1F4CD4u;
    // 0x1f4cd4: 0x24030003
    ctx->pc = 0x1f4cd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4cd8: 0x1043000e
    ctx->pc = 0x1F4CD8u;
    {
        const bool branch_taken_0x1f4cd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f4cd8) {
            ctx->pc = 0x1F4D14u;
            goto label_1f4d14;
        }
    }
    ctx->pc = 0x1F4CE0u;
    // 0x1f4ce0: 0x24030002
    ctx->pc = 0x1f4ce0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4ce4: 0x1043000b
    ctx->pc = 0x1F4CE4u;
    {
        const bool branch_taken_0x1f4ce4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f4ce4) {
            ctx->pc = 0x1F4D14u;
            goto label_1f4d14;
        }
    }
    ctx->pc = 0x1F4CECu;
    // 0x1f4cec: 0x24030001
    ctx->pc = 0x1f4cecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4cf0: 0x10430003
    ctx->pc = 0x1F4CF0u;
    {
        const bool branch_taken_0x1f4cf0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1f4cf0) {
            ctx->pc = 0x1F4D00u;
            goto label_1f4d00;
        }
    }
    ctx->pc = 0x1F4CF8u;
    // 0x1f4cf8: 0x10000012
    ctx->pc = 0x1F4CF8u;
    {
        const bool branch_taken_0x1f4cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4CFCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f4cf8) {
            ctx->pc = 0x1F4D44u;
            goto label_1f4d44;
        }
    }
    ctx->pc = 0x1F4D00u;
label_1f4d00:
    // 0x1f4d00: 0xc080a18
    ctx->pc = 0x1F4D00u;
    SET_GPR_U32(ctx, 31, 0x1F4D08u);
    ctx->pc = 0x1F4D04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x202860u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressDecide__Fi_0x202860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4D08u; }
        else if (ctx->pc != 0x1F4D08u) { ctx->pc = 0x1F4D08u; }
    }
    if (ctx->pc != 0x1F4D08u) { return; }
    ctx->pc = 0x1F4D08u;
    // 0x1f4d08: 0x24040001
    ctx->pc = 0x1f4d08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4d0c: 0x1000000d
    ctx->pc = 0x1F4D0Cu;
    {
        const bool branch_taken_0x1f4d0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4D10u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
        if (branch_taken_0x1f4d0c) {
            ctx->pc = 0x1F4D44u;
            goto label_1f4d44;
        }
    }
    ctx->pc = 0x1F4D14u;
label_1f4d14:
    // 0x1f4d14: 0x8203000e
    ctx->pc = 0x1f4d14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1f4d18: 0x1060000a
    ctx->pc = 0x1F4D18u;
    {
        const bool branch_taken_0x1f4d18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4D1Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f4d18) {
            ctx->pc = 0x1F4D44u;
            goto label_1f4d44;
        }
    }
    ctx->pc = 0x1F4D20u;
    // 0x1f4d20: 0x8603000c
    ctx->pc = 0x1f4d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f4d24: 0x14600004
    ctx->pc = 0x1F4D24u;
    {
        const bool branch_taken_0x1f4d24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4D28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f4d24) {
            ctx->pc = 0x1F4D38u;
            goto label_1f4d38;
        }
    }
    ctx->pc = 0x1F4D2Cu;
    // 0x1f4d2c: 0x10000004
    ctx->pc = 0x1F4D2Cu;
    {
        const bool branch_taken_0x1f4d2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4d2c) {
            ctx->pc = 0x1F4D40u;
            goto label_1f4d40;
        }
    }
    ctx->pc = 0x1F4D34u;
    // 0x1f4d34: 0x24040001
    ctx->pc = 0x1f4d34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1f4d38:
    // 0x1f4d38: 0x10000002
    ctx->pc = 0x1F4D38u;
    {
        const bool branch_taken_0x1f4d38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4d38) {
            ctx->pc = 0x1F4D44u;
            goto label_1f4d44;
        }
    }
    ctx->pc = 0x1F4D40u;
label_1f4d40:
    // 0x1f4d40: 0x70002628
    ctx->pc = 0x1f4d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f4d44:
    // 0x1f4d44: 0x3c060027
    ctx->pc = 0x1f4d44u;
    SET_GPR_U32(ctx, 6, ((uint32_t)39 << 16));
    // 0x1f4d48: 0x70001e28
    ctx->pc = 0x1f4d48u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4d4c: 0x70002e28
    ctx->pc = 0x1f4d4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4d50: 0x24c6cb30
    ctx->pc = 0x1f4d50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294953776));
label_1f4d54:
    // 0x1f4d54: 0x8e28000c
    ctx->pc = 0x1f4d54u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f4d58: 0x3c070052
    ctx->pc = 0x1f4d58u;
    SET_GPR_U32(ctx, 7, ((uint32_t)82 << 16));
    // 0x1f4d5c: 0x24e79410
    ctx->pc = 0x1f4d5cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294939664));
    // 0x1f4d60: 0x840c0
    ctx->pc = 0x1f4d60u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 3));
    // 0x1f4d64: 0xe83821
    ctx->pc = 0x1f4d64u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1f4d68: 0xa73821
    ctx->pc = 0x1f4d68u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1f4d6c: 0xace00000
    ctx->pc = 0x1f4d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1f4d70: 0xc6200004
    ctx->pc = 0x1f4d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f4d74: 0xc6210008
    ctx->pc = 0x1f4d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4d78: 0xc4c30008
    ctx->pc = 0x1f4d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f4d7c: 0xc4c2000c
    ctx->pc = 0x1f4d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f4d80: 0xc4c40010
    ctx->pc = 0x1f4d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f4d84: 0x46800020
    ctx->pc = 0x1f4d84u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1f4d88: 0x46800860
    ctx->pc = 0x1f4d88u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1f4d8c: 0x46001801
    ctx->pc = 0x1f4d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1f4d90: 0x4600001a
    ctx->pc = 0x1f4d90u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1f4d94: 0x46011041
    ctx->pc = 0x1f4d94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1f4d98: 0x46042002
    ctx->pc = 0x1f4d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1f4d9c: 0x4601085c
    ctx->pc = 0x1f4d9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1f4da0: 0x46000834
    ctx->pc = 0x1f4da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4da4: 0x0
    ctx->pc = 0x1f4da4u;
    // NOP
    // 0x1f4da8: 0x45020016
    ctx->pc = 0x1F4DA8u;
    {
        const bool branch_taken_0x1f4da8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f4da8) {
            ctx->pc = 0x1F4DACu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x1F4E04u;
            goto label_1f4e04;
        }
    }
    ctx->pc = 0x1F4DB0u;
    // 0x1f4db0: 0x1080000a
    ctx->pc = 0x1F4DB0u;
    {
        const bool branch_taken_0x1f4db0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4db0) {
            ctx->pc = 0x1F4DDCu;
            goto label_1f4ddc;
        }
    }
    ctx->pc = 0x1F4DB8u;
    // 0x1f4db8: 0x8e28000c
    ctx->pc = 0x1f4db8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f4dbc: 0x3c070052
    ctx->pc = 0x1f4dbcu;
    SET_GPR_U32(ctx, 7, ((uint32_t)82 << 16));
    // 0x1f4dc0: 0x24e79410
    ctx->pc = 0x1f4dc0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294939664));
    // 0x1f4dc4: 0x24090002
    ctx->pc = 0x1f4dc4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4dc8: 0x840c0
    ctx->pc = 0x1f4dc8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 3));
    // 0x1f4dcc: 0xe83821
    ctx->pc = 0x1f4dccu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1f4dd0: 0xa73821
    ctx->pc = 0x1f4dd0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1f4dd4: 0x1000000a
    ctx->pc = 0x1F4DD4u;
    {
        const bool branch_taken_0x1f4dd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F4DD8u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
        if (branch_taken_0x1f4dd4) {
            ctx->pc = 0x1F4E00u;
            goto label_1f4e00;
        }
    }
    ctx->pc = 0x1F4DDCu;
label_1f4ddc:
    // 0x1f4ddc: 0x8e28000c
    ctx->pc = 0x1f4ddcu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f4de0: 0x3c070052
    ctx->pc = 0x1f4de0u;
    SET_GPR_U32(ctx, 7, ((uint32_t)82 << 16));
    // 0x1f4de4: 0x24e79410
    ctx->pc = 0x1f4de4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294939664));
    // 0x1f4de8: 0x24090001
    ctx->pc = 0x1f4de8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4dec: 0x840c0
    ctx->pc = 0x1f4decu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 3));
    // 0x1f4df0: 0xe83821
    ctx->pc = 0x1f4df0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1f4df4: 0xa73821
    ctx->pc = 0x1f4df4u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1f4df8: 0xace90000
    ctx->pc = 0x1f4df8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 9));
    // 0x1f4dfc: 0x0
    ctx->pc = 0x1f4dfcu;
    // NOP
label_1f4e00:
    // 0x1f4e00: 0x24630001
    ctx->pc = 0x1f4e00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f4e04:
    // 0x1f4e04: 0x28670002
    ctx->pc = 0x1f4e04u;
    SET_GPR_U32(ctx, 7, SLT32(GPR_S32(ctx, 3), 2));
    // 0x1f4e08: 0x24a50004
    ctx->pc = 0x1f4e08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f4e0c: 0x14e0ffd1
    ctx->pc = 0x1F4E0Cu;
    {
        const bool branch_taken_0x1f4e0c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F4E10u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
        if (branch_taken_0x1f4e0c) {
            ctx->pc = 0x1F4D54u;
            goto label_1f4d54;
        }
    }
    ctx->pc = 0x1F4E14u;
    // 0x1f4e14: 0x10800021
    ctx->pc = 0x1F4E14u;
    {
        const bool branch_taken_0x1f4e14 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4e14) {
            ctx->pc = 0x1F4E9Cu;
            goto label_1f4e9c;
        }
    }
    ctx->pc = 0x1F4E1Cu;
    // 0x1f4e1c: 0x3c020051
    ctx->pc = 0x1f4e1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f4e20: 0x244434f0
    ctx->pc = 0x1f4e20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1f4e24: 0x3c020002
    ctx->pc = 0x1f4e24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1f4e28: 0x3445000c
    ctx->pc = 0x1f4e28u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x1f4e2c: 0x70003628
    ctx->pc = 0x1f4e2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4e30: 0x70003e28
    ctx->pc = 0x1f4e30u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1f4e34: 0xc086018
    ctx->pc = 0x1F4E34u;
    SET_GPR_U32(ctx, 31, 0x1F4E3Cu);
    ctx->pc = 0x1F4E38u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E3Cu; }
        else if (ctx->pc != 0x1F4E3Cu) { ctx->pc = 0x1F4E3Cu; }
    }
    if (ctx->pc != 0x1F4E3Cu) { return; }
    ctx->pc = 0x1F4E3Cu;
    // 0x1f4e3c: 0x8e280000
    ctx->pc = 0x1f4e3cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f4e40: 0x24040060
    ctx->pc = 0x1f4e40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 96));
    // 0x1f4e44: 0x8d060010
    ctx->pc = 0x1f4e44u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1f4e48: 0x8cc70014
    ctx->pc = 0x1f4e48u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1f4e4c: 0xc069040
    ctx->pc = 0x1F4E4Cu;
    SET_GPR_U32(ctx, 31, 0x1F4E54u);
    ctx->pc = 0x1F4E50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E54u; }
        else if (ctx->pc != 0x1F4E54u) { ctx->pc = 0x1F4E54u; }
    }
    if (ctx->pc != 0x1F4E54u) { return; }
    ctx->pc = 0x1F4E54u;
    // 0x1f4e54: 0x70402628
    ctx->pc = 0x1f4e54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f4e58: 0x10800010
    ctx->pc = 0x1F4E58u;
    {
        const bool branch_taken_0x1f4e58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f4e58) {
            ctx->pc = 0x1F4E9Cu;
            goto label_1f4e9c;
        }
    }
    ctx->pc = 0x1F4E60u;
    // 0x1f4e60: 0x86080008
    ctx->pc = 0x1f4e60u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f4e64: 0x8607000a
    ctx->pc = 0x1f4e64u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x1f4e68: 0x3c02bf80
    ctx->pc = 0x1f4e68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49024 << 16));
    // 0x1f4e6c: 0x44827000
    ctx->pc = 0x1f4e6cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1f4e70: 0x240300e0
    ctx->pc = 0x1f4e70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1f4e74: 0x8e26000c
    ctx->pc = 0x1f4e74u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f4e78: 0x25080140
    ctx->pc = 0x1f4e78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 320));
    // 0x1f4e7c: 0x671023
    ctx->pc = 0x1f4e7cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f4e80: 0x44880800
    ctx->pc = 0x1f4e80u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 8);
    // 0x1f4e84: 0x44820000
    ctx->pc = 0x1f4e84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1f4e88: 0x0
    ctx->pc = 0x1f4e88u;
    // NOP
    // 0x1f4e8c: 0x46800b20
    ctx->pc = 0x1f4e8cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1f4e90: 0x24050001
    ctx->pc = 0x1f4e90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4e94: 0xc080d88
    ctx->pc = 0x1F4E94u;
    SET_GPR_U32(ctx, 31, 0x1F4E9Cu);
    ctx->pc = 0x1F4E98u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    ctx->pc = 0x203620u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13NoGameHitTaskFfffi_0x203620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4E9Cu; }
        else if (ctx->pc != 0x1F4E9Cu) { ctx->pc = 0x1F4E9Cu; }
    }
    if (ctx->pc != 0x1F4E9Cu) { return; }
    ctx->pc = 0x1F4E9Cu;
label_1f4e9c:
    // 0x1f4e9c: 0x7bbf0020
    ctx->pc = 0x1f4e9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4ea0: 0x7bb10010
    ctx->pc = 0x1f4ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4ea4: 0x7bb00000
    ctx->pc = 0x1f4ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4ea8: 0x3e00008
    ctx->pc = 0x1F4EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4EACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F4C30u: goto label_1f4c30;
            case 0x1F4C6Cu: goto label_1f4c6c;
            case 0x1F4C98u: goto label_1f4c98;
            case 0x1F4CC0u: goto label_1f4cc0;
            case 0x1F4CC4u: goto label_1f4cc4;
            case 0x1F4D00u: goto label_1f4d00;
            case 0x1F4D14u: goto label_1f4d14;
            case 0x1F4D38u: goto label_1f4d38;
            case 0x1F4D40u: goto label_1f4d40;
            case 0x1F4D44u: goto label_1f4d44;
            case 0x1F4D54u: goto label_1f4d54;
            case 0x1F4DDCu: goto label_1f4ddc;
            case 0x1F4E00u: goto label_1f4e00;
            case 0x1F4E04u: goto label_1f4e04;
            case 0x1F4E9Cu: goto label_1f4e9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F4EB0u;
}
