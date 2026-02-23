#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: main
// Address: 0x1f2ce0 - 0x1f3128
void ps2_main_0x1f2ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ps2_main");


    ctx->pc = 0x1f2ce0u;

label_1f2ce0:
    // 0x1f2ce0: 0x27bdffa0
    ctx->pc = 0x1f2ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_1f2ce4:
    // 0x1f2ce4: 0x7fbf0050
    ctx->pc = 0x1f2ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_1f2ce8:
    // 0x1f2ce8: 0x7fb40040
    ctx->pc = 0x1f2ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f2cec:
    // 0x1f2cec: 0x7fb30030
    ctx->pc = 0x1f2cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f2cf0:
    // 0x1f2cf0: 0x7fb20020
    ctx->pc = 0x1f2cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f2cf4:
    // 0x1f2cf4: 0x7fb10010
    ctx->pc = 0x1f2cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f2cf8:
    // 0x1f2cf8: 0x3c02002d
    ctx->pc = 0x1f2cf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_1f2cfc:
    // 0x1f2cfc: 0x24516780
    ctx->pc = 0x1f2cfcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 26496));
label_1f2d00:
    // 0x1f2d00: 0x7fb00000
    ctx->pc = 0x1f2d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f2d04:
    // 0x1f2d04: 0x3c02002d
    ctx->pc = 0x1f2d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_1f2d08:
    // 0x1f2d08: 0x24506710
    ctx->pc = 0x1f2d08u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 26384));
label_1f2d0c:
    // 0x1f2d0c: 0x230a023
    ctx->pc = 0x1f2d0cu;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1f2d10:
    // 0x1f2d10: 0x70809e28
    ctx->pc = 0x1f2d10u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_1f2d14:
    // 0x1f2d14: 0x12800006
label_1f2d18:
    if (ctx->pc == 0x1F2D18u) {
        ctx->pc = 0x1F2D18u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F2D1Cu;
        goto label_1f2d1c;
    }
    ctx->pc = 0x1F2D14u;
    {
        const bool branch_taken_0x1f2d14 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2D18u;
        SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f2d14) {
            ctx->pc = 0x1F2D30u;
            goto label_1f2d30;
        }
    }
    ctx->pc = 0x1F2D1Cu;
label_1f2d1c:
    // 0x1f2d1c: 0x3c02002d
    ctx->pc = 0x1f2d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
label_1f2d20:
    // 0x1f2d20: 0x24446710
    ctx->pc = 0x1f2d20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 26384));
label_1f2d24:
    // 0x1f2d24: 0x70002e28
    ctx->pc = 0x1f2d24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f2d28:
    // 0x1f2d28: 0xc050cfe
label_1f2d2c:
    if (ctx->pc == 0x1F2D2Cu) {
        ctx->pc = 0x1F2D2Cu;
        SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F2D30u;
        goto label_1f2d30;
    }
    ctx->pc = 0x1F2D28u;
    SET_GPR_U32(ctx, 31, 0x1F2D30u);
    ctx->pc = 0x1F2D2Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D30u; }
        else if (ctx->pc != 0x1F2D30u) { ctx->pc = 0x1F2D30u; }
    }
    if (ctx->pc != 0x1F2D30u) { return; }
    ctx->pc = 0x1F2D30u;
label_1f2d30:
    // 0x1f2d30: 0x12800009
label_1f2d34:
    if (ctx->pc == 0x1F2D34u) {
        ctx->pc = 0x1F2D34u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F2D38u;
        goto label_1f2d38;
    }
    ctx->pc = 0x1F2D30u;
    {
        const bool branch_taken_0x1f2d30 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2D34u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f2d30) {
            ctx->pc = 0x1F2D58u;
            goto label_1f2d58;
        }
    }
    ctx->pc = 0x1F2D38u;
label_1f2d38:
    // 0x1f2d38: 0x3c020065
    ctx->pc = 0x1f2d38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)101 << 16));
label_1f2d3c:
    // 0x1f2d3c: 0x244219f0
    ctx->pc = 0x1f2d3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6640));
label_1f2d40:
    // 0x1f2d40: 0x26240144
    ctx->pc = 0x1f2d40u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 324));
label_1f2d44:
    // 0x1f2d44: 0x2021021
    ctx->pc = 0x1f2d44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1f2d48:
    // 0x1f2d48: 0x443023
    ctx->pc = 0x1f2d48u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f2d4c:
    // 0x1f2d4c: 0xc050cfe
label_1f2d50:
    if (ctx->pc == 0x1F2D50u) {
        ctx->pc = 0x1F2D50u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F2D54u;
        goto label_1f2d54;
    }
    ctx->pc = 0x1F2D4Cu;
    SET_GPR_U32(ctx, 31, 0x1F2D54u);
    ctx->pc = 0x1F2D50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D54u; }
        else if (ctx->pc != 0x1F2D54u) { ctx->pc = 0x1F2D54u; }
    }
    if (ctx->pc != 0x1F2D54u) { return; }
    ctx->pc = 0x1F2D54u;
label_1f2d54:
    // 0x1f2d54: 0x72602628
    ctx->pc = 0x1f2d54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1f2d58:
    // 0x1f2d58: 0x72402e28
    ctx->pc = 0x1f2d58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1f2d5c:
    // 0x1f2d5c: 0x27868e08
    ctx->pc = 0x1f2d5cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 28), 4294938120));
label_1f2d60:
    // 0x1f2d60: 0x27878e0c
    ctx->pc = 0x1f2d60u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 28), 4294938124));
label_1f2d64:
    // 0x1f2d64: 0x27888e10
    ctx->pc = 0x1f2d64u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 28), 4294938128));
label_1f2d68:
    // 0x1f2d68: 0x27898e14
    ctx->pc = 0x1f2d68u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 28), 4294938132));
label_1f2d6c:
    // 0x1f2d6c: 0xc071b06
label_1f2d70:
    if (ctx->pc == 0x1F2D70u) {
        ctx->pc = 0x1F2D70u;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 28), 4294938136));
        ctx->pc = 0x1F2D74u;
        goto label_1f2d74;
    }
    ctx->pc = 0x1F2D6Cu;
    SET_GPR_U32(ctx, 31, 0x1F2D74u);
    ctx->pc = 0x1F2D70u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 28), 4294938136));
    ctx->pc = 0x1C6C18u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeDemoStart_0x1c6c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D74u; }
        else if (ctx->pc != 0x1F2D74u) { ctx->pc = 0x1F2D74u; }
    }
    if (ctx->pc != 0x1F2D74u) { return; }
    ctx->pc = 0x1F2D74u;
label_1f2d74:
    // 0x1f2d74: 0x97858e10
    ctx->pc = 0x1f2d74u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938128)));
label_1f2d78:
    // 0x1f2d78: 0x3c020027
    ctx->pc = 0x1f2d78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
label_1f2d7c:
    // 0x1f2d7c: 0xc05114a
label_1f2d80:
    if (ctx->pc == 0x1F2D80u) {
        ctx->pc = 0x1F2D80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953048));
        ctx->pc = 0x1F2D84u;
        goto label_1f2d84;
    }
    ctx->pc = 0x1F2D7Cu;
    SET_GPR_U32(ctx, 31, 0x1F2D84u);
    ctx->pc = 0x1F2D80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294953048));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D84u; }
        else if (ctx->pc != 0x1F2D84u) { ctx->pc = 0x1F2D84u; }
    }
    if (ctx->pc != 0x1F2D84u) { return; }
    ctx->pc = 0x1F2D84u;
label_1f2d84:
    // 0x1f2d84: 0x24022328
    ctx->pc = 0x1f2d84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9000));
label_1f2d88:
    // 0x1f2d88: 0xaf828e1c
    ctx->pc = 0x1f2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938140), GPR_U32(ctx, 2));
label_1f2d8c:
    // 0x1f2d8c: 0x3402afc8
    ctx->pc = 0x1f2d8cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 45000));
label_1f2d90:
    // 0x1f2d90: 0xc071b44
label_1f2d94:
    if (ctx->pc == 0x1F2D94u) {
        ctx->pc = 0x1F2D94u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), GPR_U32(ctx, 2));
        ctx->pc = 0x1F2D98u;
        goto label_1f2d98;
    }
    ctx->pc = 0x1F2D90u;
    SET_GPR_U32(ctx, 31, 0x1F2D98u);
    ctx->pc = 0x1F2D94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938144), GPR_U32(ctx, 2));
    ctx->pc = 0x1C6D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwInit_0x1c6d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D98u; }
        else if (ctx->pc != 0x1F2D98u) { ctx->pc = 0x1F2D98u; }
    }
    if (ctx->pc != 0x1F2D98u) { return; }
    ctx->pc = 0x1F2D98u;
label_1f2d98:
    // 0x1f2d98: 0xc078890
label_1f2d9c:
    if (ctx->pc == 0x1F2D9Cu) {
        ctx->pc = 0x1F2DA0u;
        goto label_1f2da0;
    }
    ctx->pc = 0x1F2D98u;
    SET_GPR_U32(ctx, 31, 0x1F2DA0u);
    ctx->pc = 0x1E2240u;
    {
        const uint32_t __entryPc = ctx->pc;
        PowerOnInit__Fv_0x1e2240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DA0u; }
        else if (ctx->pc != 0x1F2DA0u) { ctx->pc = 0x1F2DA0u; }
    }
    if (ctx->pc != 0x1F2DA0u) { return; }
    ctx->pc = 0x1F2DA0u;
label_1f2da0:
    // 0x1f2da0: 0xc07cae0
label_1f2da4:
    if (ctx->pc == 0x1F2DA4u) {
        ctx->pc = 0x1F2DA8u;
        goto label_1f2da8;
    }
    ctx->pc = 0x1F2DA0u;
    SET_GPR_U32(ctx, 31, 0x1F2DA8u);
    ctx->pc = 0x1F2B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        UrawazaInit__Fv_0x1f2b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DA8u; }
        else if (ctx->pc != 0x1F2DA8u) { ctx->pc = 0x1F2DA8u; }
    }
    if (ctx->pc != 0x1F2DA8u) { return; }
    ctx->pc = 0x1F2DA8u;
label_1f2da8:
    // 0x1f2da8: 0x3c021000
    ctx->pc = 0x1f2da8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_1f2dac:
    // 0x1f2dac: 0xaf808e24
    ctx->pc = 0x1f2dacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938148), GPR_U32(ctx, 0));
label_1f2db0:
    // 0x1f2db0: 0xaf808e28
    ctx->pc = 0x1f2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938152), GPR_U32(ctx, 0));
label_1f2db4:
    // 0x1f2db4: 0xaf808bdc
    ctx->pc = 0x1f2db4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937564), GPR_U32(ctx, 0));
label_1f2db8:
    // 0x1f2db8: 0x34420800
    ctx->pc = 0x1f2db8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2048));
label_1f2dbc:
    // 0x1f2dbc: 0x94420000
    ctx->pc = 0x1f2dbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1f2dc0:
    // 0x1f2dc0: 0xa7828bf0
    ctx->pc = 0x1f2dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937584), (uint16_t)GPR_U32(ctx, 2));
label_1f2dc4:
    // 0x1f2dc4: 0xc0694bc
label_1f2dc8:
    if (ctx->pc == 0x1F2DC8u) {
        ctx->pc = 0x1F2DCCu;
        goto label_1f2dcc;
    }
    ctx->pc = 0x1F2DC4u;
    SET_GPR_U32(ctx, 31, 0x1F2DCCu);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DCCu; }
        else if (ctx->pc != 0x1F2DCCu) { ctx->pc = 0x1F2DCCu; }
    }
    if (ctx->pc != 0x1F2DCCu) { return; }
    ctx->pc = 0x1F2DCCu;
label_1f2dcc:
    // 0x1f2dcc: 0x70002628
    ctx->pc = 0x1f2dccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f2dd0:
    // 0x1f2dd0: 0xc06bcc4
label_1f2dd4:
    if (ctx->pc == 0x1F2DD4u) {
        ctx->pc = 0x1F2DD4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F2DD8u;
        goto label_1f2dd8;
    }
    ctx->pc = 0x1F2DD0u;
    SET_GPR_U32(ctx, 31, 0x1F2DD8u);
    ctx->pc = 0x1F2DD4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AF310u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSysBeginScene_0x1af310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DD8u; }
        else if (ctx->pc != 0x1F2DD8u) { ctx->pc = 0x1F2DD8u; }
    }
    if (ctx->pc != 0x1F2DD8u) { return; }
    ctx->pc = 0x1F2DD8u;
label_1f2dd8:
    // 0x1f2dd8: 0xc06a1ac
label_1f2ddc:
    if (ctx->pc == 0x1F2DDCu) {
        ctx->pc = 0x1F2DE0u;
        goto label_1f2de0;
    }
    ctx->pc = 0x1F2DD8u;
    SET_GPR_U32(ctx, 31, 0x1F2DE0u);
    ctx->pc = 0x1A86B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutBeginEntry_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DE0u; }
        else if (ctx->pc != 0x1F2DE0u) { ctx->pc = 0x1F2DE0u; }
    }
    if (ctx->pc != 0x1F2DE0u) { return; }
    ctx->pc = 0x1F2DE0u;
label_1f2de0:
    // 0x1f2de0: 0xc0852e4
label_1f2de4:
    if (ctx->pc == 0x1F2DE4u) {
        ctx->pc = 0x1F2DE4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F2DE8u;
        goto label_1f2de8;
    }
    ctx->pc = 0x1F2DE0u;
    SET_GPR_U32(ctx, 31, 0x1F2DE8u);
    ctx->pc = 0x1F2DE4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x214B90u;
    {
        const uint32_t __entryPc = ctx->pc;
        BeginScreen__Fi_0x214b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DE8u; }
        else if (ctx->pc != 0x1F2DE8u) { ctx->pc = 0x1F2DE8u; }
    }
    if (ctx->pc != 0x1F2DE8u) { return; }
    ctx->pc = 0x1F2DE8u;
label_1f2de8:
    // 0x1f2de8: 0xc07caec
label_1f2dec:
    if (ctx->pc == 0x1F2DECu) {
        ctx->pc = 0x1F2DF0u;
        goto label_1f2df0;
    }
    ctx->pc = 0x1F2DE8u;
    SET_GPR_U32(ctx, 31, 0x1F2DF0u);
    ctx->pc = 0x1F2BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        UrawazaSet__Fv_0x1f2bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DF0u; }
        else if (ctx->pc != 0x1F2DF0u) { ctx->pc = 0x1F2DF0u; }
    }
    if (ctx->pc != 0x1F2DF0u) { return; }
    ctx->pc = 0x1F2DF0u;
label_1f2df0:
    // 0x1f2df0: 0x3c010050
    ctx->pc = 0x1f2df0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f2df4:
    // 0x1f2df4: 0x8422e504
    ctx->pc = 0x1f2df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_1f2df8:
    // 0x1f2df8: 0x2c410016
    ctx->pc = 0x1f2df8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 22));
label_1f2dfc:
    // 0x1f2dfc: 0x10200008
label_1f2e00:
    if (ctx->pc == 0x1F2E00u) {
        ctx->pc = 0x1F2E00u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        ctx->pc = 0x1F2E04u;
        goto label_1f2e04;
    }
    ctx->pc = 0x1F2DFCu;
    {
        const bool branch_taken_0x1f2dfc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F2E00u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x1f2dfc) {
            ctx->pc = 0x1F2E20u;
            goto label_1f2e20;
        }
    }
    ctx->pc = 0x1F2E04u;
label_1f2e04:
    // 0x1f2e04: 0x21080
    ctx->pc = 0x1f2e04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_1f2e08:
    // 0x1f2e08: 0x2463f960
    ctx->pc = 0x1f2e08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965600));
label_1f2e0c:
    // 0x1f2e0c: 0x431021
    ctx->pc = 0x1f2e0cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f2e10:
    // 0x1f2e10: 0x8c420000
    ctx->pc = 0x1f2e10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f2e14:
    // 0x1f2e14: 0x400008
label_1f2e18:
    if (ctx->pc == 0x1F2E18u) {
        ctx->pc = 0x1F2E1Cu;
        goto label_1f2e1c;
    }
    ctx->pc = 0x1F2E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F2CE0u: goto label_1f2ce0;
            case 0x1F2CE4u: goto label_1f2ce4;
            case 0x1F2CE8u: goto label_1f2ce8;
            case 0x1F2CECu: goto label_1f2cec;
            case 0x1F2CF0u: goto label_1f2cf0;
            case 0x1F2CF4u: goto label_1f2cf4;
            case 0x1F2CF8u: goto label_1f2cf8;
            case 0x1F2CFCu: goto label_1f2cfc;
            case 0x1F2D00u: goto label_1f2d00;
            case 0x1F2D04u: goto label_1f2d04;
            case 0x1F2D08u: goto label_1f2d08;
            case 0x1F2D0Cu: goto label_1f2d0c;
            case 0x1F2D10u: goto label_1f2d10;
            case 0x1F2D14u: goto label_1f2d14;
            case 0x1F2D18u: goto label_1f2d18;
            case 0x1F2D1Cu: goto label_1f2d1c;
            case 0x1F2D20u: goto label_1f2d20;
            case 0x1F2D24u: goto label_1f2d24;
            case 0x1F2D28u: goto label_1f2d28;
            case 0x1F2D2Cu: goto label_1f2d2c;
            case 0x1F2D30u: goto label_1f2d30;
            case 0x1F2D34u: goto label_1f2d34;
            case 0x1F2D38u: goto label_1f2d38;
            case 0x1F2D3Cu: goto label_1f2d3c;
            case 0x1F2D40u: goto label_1f2d40;
            case 0x1F2D44u: goto label_1f2d44;
            case 0x1F2D48u: goto label_1f2d48;
            case 0x1F2D4Cu: goto label_1f2d4c;
            case 0x1F2D50u: goto label_1f2d50;
            case 0x1F2D54u: goto label_1f2d54;
            case 0x1F2D58u: goto label_1f2d58;
            case 0x1F2D5Cu: goto label_1f2d5c;
            case 0x1F2D60u: goto label_1f2d60;
            case 0x1F2D64u: goto label_1f2d64;
            case 0x1F2D68u: goto label_1f2d68;
            case 0x1F2D6Cu: goto label_1f2d6c;
            case 0x1F2D70u: goto label_1f2d70;
            case 0x1F2D74u: goto label_1f2d74;
            case 0x1F2D78u: goto label_1f2d78;
            case 0x1F2D7Cu: goto label_1f2d7c;
            case 0x1F2D80u: goto label_1f2d80;
            case 0x1F2D84u: goto label_1f2d84;
            case 0x1F2D88u: goto label_1f2d88;
            case 0x1F2D8Cu: goto label_1f2d8c;
            case 0x1F2D90u: goto label_1f2d90;
            case 0x1F2D94u: goto label_1f2d94;
            case 0x1F2D98u: goto label_1f2d98;
            case 0x1F2D9Cu: goto label_1f2d9c;
            case 0x1F2DA0u: goto label_1f2da0;
            case 0x1F2DA4u: goto label_1f2da4;
            case 0x1F2DA8u: goto label_1f2da8;
            case 0x1F2DACu: goto label_1f2dac;
            case 0x1F2DB0u: goto label_1f2db0;
            case 0x1F2DB4u: goto label_1f2db4;
            case 0x1F2DB8u: goto label_1f2db8;
            case 0x1F2DBCu: goto label_1f2dbc;
            case 0x1F2DC0u: goto label_1f2dc0;
            case 0x1F2DC4u: goto label_1f2dc4;
            case 0x1F2DC8u: goto label_1f2dc8;
            case 0x1F2DCCu: goto label_1f2dcc;
            case 0x1F2DD0u: goto label_1f2dd0;
            case 0x1F2DD4u: goto label_1f2dd4;
            case 0x1F2DD8u: goto label_1f2dd8;
            case 0x1F2DDCu: goto label_1f2ddc;
            case 0x1F2DE0u: goto label_1f2de0;
            case 0x1F2DE4u: goto label_1f2de4;
            case 0x1F2DE8u: goto label_1f2de8;
            case 0x1F2DECu: goto label_1f2dec;
            case 0x1F2DF0u: goto label_1f2df0;
            case 0x1F2DF4u: goto label_1f2df4;
            case 0x1F2DF8u: goto label_1f2df8;
            case 0x1F2DFCu: goto label_1f2dfc;
            case 0x1F2E00u: goto label_1f2e00;
            case 0x1F2E04u: goto label_1f2e04;
            case 0x1F2E08u: goto label_1f2e08;
            case 0x1F2E0Cu: goto label_1f2e0c;
            case 0x1F2E10u: goto label_1f2e10;
            case 0x1F2E14u: goto label_1f2e14;
            case 0x1F2E18u: goto label_1f2e18;
            case 0x1F2E1Cu: goto label_1f2e1c;
            case 0x1F2E20u: goto label_1f2e20;
            case 0x1F2E24u: goto label_1f2e24;
            case 0x1F2E28u: goto label_1f2e28;
            case 0x1F2E2Cu: goto label_1f2e2c;
            case 0x1F2E30u: goto label_1f2e30;
            case 0x1F2E34u: goto label_1f2e34;
            case 0x1F2E38u: goto label_1f2e38;
            case 0x1F2E3Cu: goto label_1f2e3c;
            case 0x1F2E40u: goto label_1f2e40;
            case 0x1F2E44u: goto label_1f2e44;
            case 0x1F2E48u: goto label_1f2e48;
            case 0x1F2E4Cu: goto label_1f2e4c;
            case 0x1F2E50u: goto label_1f2e50;
            case 0x1F2E54u: goto label_1f2e54;
            case 0x1F2E58u: goto label_1f2e58;
            case 0x1F2E5Cu: goto label_1f2e5c;
            case 0x1F2E60u: goto label_1f2e60;
            case 0x1F2E64u: goto label_1f2e64;
            case 0x1F2E68u: goto label_1f2e68;
            case 0x1F2E6Cu: goto label_1f2e6c;
            case 0x1F2E70u: goto label_1f2e70;
            case 0x1F2E74u: goto label_1f2e74;
            case 0x1F2E78u: goto label_1f2e78;
            case 0x1F2E7Cu: goto label_1f2e7c;
            case 0x1F2E80u: goto label_1f2e80;
            case 0x1F2E84u: goto label_1f2e84;
            case 0x1F2E88u: goto label_1f2e88;
            case 0x1F2E8Cu: goto label_1f2e8c;
            case 0x1F2E90u: goto label_1f2e90;
            case 0x1F2E94u: goto label_1f2e94;
            case 0x1F2E98u: goto label_1f2e98;
            case 0x1F2E9Cu: goto label_1f2e9c;
            case 0x1F2EA0u: goto label_1f2ea0;
            case 0x1F2EA4u: goto label_1f2ea4;
            case 0x1F2EA8u: goto label_1f2ea8;
            case 0x1F2EACu: goto label_1f2eac;
            case 0x1F2EB0u: goto label_1f2eb0;
            case 0x1F2EB4u: goto label_1f2eb4;
            case 0x1F2EB8u: goto label_1f2eb8;
            case 0x1F2EBCu: goto label_1f2ebc;
            case 0x1F2EC0u: goto label_1f2ec0;
            case 0x1F2EC4u: goto label_1f2ec4;
            case 0x1F2EC8u: goto label_1f2ec8;
            case 0x1F2ECCu: goto label_1f2ecc;
            case 0x1F2ED0u: goto label_1f2ed0;
            case 0x1F2ED4u: goto label_1f2ed4;
            case 0x1F2ED8u: goto label_1f2ed8;
            case 0x1F2EDCu: goto label_1f2edc;
            case 0x1F2EE0u: goto label_1f2ee0;
            case 0x1F2EE4u: goto label_1f2ee4;
            case 0x1F2EE8u: goto label_1f2ee8;
            case 0x1F2EECu: goto label_1f2eec;
            case 0x1F2EF0u: goto label_1f2ef0;
            case 0x1F2EF4u: goto label_1f2ef4;
            case 0x1F2EF8u: goto label_1f2ef8;
            case 0x1F2EFCu: goto label_1f2efc;
            case 0x1F2F00u: goto label_1f2f00;
            case 0x1F2F04u: goto label_1f2f04;
            case 0x1F2F08u: goto label_1f2f08;
            case 0x1F2F0Cu: goto label_1f2f0c;
            case 0x1F2F10u: goto label_1f2f10;
            case 0x1F2F14u: goto label_1f2f14;
            case 0x1F2F18u: goto label_1f2f18;
            case 0x1F2F1Cu: goto label_1f2f1c;
            case 0x1F2F20u: goto label_1f2f20;
            case 0x1F2F24u: goto label_1f2f24;
            case 0x1F2F28u: goto label_1f2f28;
            case 0x1F2F2Cu: goto label_1f2f2c;
            case 0x1F2F30u: goto label_1f2f30;
            case 0x1F2F34u: goto label_1f2f34;
            case 0x1F2F38u: goto label_1f2f38;
            case 0x1F2F3Cu: goto label_1f2f3c;
            case 0x1F2F40u: goto label_1f2f40;
            case 0x1F2F44u: goto label_1f2f44;
            case 0x1F2F48u: goto label_1f2f48;
            case 0x1F2F4Cu: goto label_1f2f4c;
            case 0x1F2F50u: goto label_1f2f50;
            case 0x1F2F54u: goto label_1f2f54;
            case 0x1F2F58u: goto label_1f2f58;
            case 0x1F2F5Cu: goto label_1f2f5c;
            case 0x1F2F60u: goto label_1f2f60;
            case 0x1F2F64u: goto label_1f2f64;
            case 0x1F2F68u: goto label_1f2f68;
            case 0x1F2F6Cu: goto label_1f2f6c;
            case 0x1F2F70u: goto label_1f2f70;
            case 0x1F2F74u: goto label_1f2f74;
            case 0x1F2F78u: goto label_1f2f78;
            case 0x1F2F7Cu: goto label_1f2f7c;
            case 0x1F2F80u: goto label_1f2f80;
            case 0x1F2F84u: goto label_1f2f84;
            case 0x1F2F88u: goto label_1f2f88;
            case 0x1F2F8Cu: goto label_1f2f8c;
            case 0x1F2F90u: goto label_1f2f90;
            case 0x1F2F94u: goto label_1f2f94;
            case 0x1F2F98u: goto label_1f2f98;
            case 0x1F2F9Cu: goto label_1f2f9c;
            case 0x1F2FA0u: goto label_1f2fa0;
            case 0x1F2FA4u: goto label_1f2fa4;
            case 0x1F2FA8u: goto label_1f2fa8;
            case 0x1F2FACu: goto label_1f2fac;
            case 0x1F2FB0u: goto label_1f2fb0;
            case 0x1F2FB4u: goto label_1f2fb4;
            case 0x1F2FB8u: goto label_1f2fb8;
            case 0x1F2FBCu: goto label_1f2fbc;
            case 0x1F2FC0u: goto label_1f2fc0;
            case 0x1F2FC4u: goto label_1f2fc4;
            case 0x1F2FC8u: goto label_1f2fc8;
            case 0x1F2FCCu: goto label_1f2fcc;
            case 0x1F2FD0u: goto label_1f2fd0;
            case 0x1F2FD4u: goto label_1f2fd4;
            case 0x1F2FD8u: goto label_1f2fd8;
            case 0x1F2FDCu: goto label_1f2fdc;
            case 0x1F2FE0u: goto label_1f2fe0;
            case 0x1F2FE4u: goto label_1f2fe4;
            case 0x1F2FE8u: goto label_1f2fe8;
            case 0x1F2FECu: goto label_1f2fec;
            case 0x1F2FF0u: goto label_1f2ff0;
            case 0x1F2FF4u: goto label_1f2ff4;
            case 0x1F2FF8u: goto label_1f2ff8;
            case 0x1F2FFCu: goto label_1f2ffc;
            case 0x1F3000u: goto label_1f3000;
            case 0x1F3004u: goto label_1f3004;
            case 0x1F3008u: goto label_1f3008;
            case 0x1F300Cu: goto label_1f300c;
            case 0x1F3010u: goto label_1f3010;
            case 0x1F3014u: goto label_1f3014;
            case 0x1F3018u: goto label_1f3018;
            case 0x1F301Cu: goto label_1f301c;
            case 0x1F3020u: goto label_1f3020;
            case 0x1F3024u: goto label_1f3024;
            case 0x1F3028u: goto label_1f3028;
            case 0x1F302Cu: goto label_1f302c;
            case 0x1F3030u: goto label_1f3030;
            case 0x1F3034u: goto label_1f3034;
            case 0x1F3038u: goto label_1f3038;
            case 0x1F303Cu: goto label_1f303c;
            case 0x1F3040u: goto label_1f3040;
            case 0x1F3044u: goto label_1f3044;
            case 0x1F3048u: goto label_1f3048;
            case 0x1F304Cu: goto label_1f304c;
            case 0x1F3050u: goto label_1f3050;
            case 0x1F3054u: goto label_1f3054;
            case 0x1F3058u: goto label_1f3058;
            case 0x1F305Cu: goto label_1f305c;
            case 0x1F3060u: goto label_1f3060;
            case 0x1F3064u: goto label_1f3064;
            case 0x1F3068u: goto label_1f3068;
            case 0x1F306Cu: goto label_1f306c;
            case 0x1F3070u: goto label_1f3070;
            case 0x1F3074u: goto label_1f3074;
            case 0x1F3078u: goto label_1f3078;
            case 0x1F307Cu: goto label_1f307c;
            case 0x1F3080u: goto label_1f3080;
            case 0x1F3084u: goto label_1f3084;
            case 0x1F3088u: goto label_1f3088;
            case 0x1F308Cu: goto label_1f308c;
            case 0x1F3090u: goto label_1f3090;
            case 0x1F3094u: goto label_1f3094;
            case 0x1F3098u: goto label_1f3098;
            case 0x1F309Cu: goto label_1f309c;
            case 0x1F30A0u: goto label_1f30a0;
            case 0x1F30A4u: goto label_1f30a4;
            case 0x1F30A8u: goto label_1f30a8;
            case 0x1F30ACu: goto label_1f30ac;
            case 0x1F30B0u: goto label_1f30b0;
            case 0x1F30B4u: goto label_1f30b4;
            case 0x1F30B8u: goto label_1f30b8;
            case 0x1F30BCu: goto label_1f30bc;
            case 0x1F30C0u: goto label_1f30c0;
            case 0x1F30C4u: goto label_1f30c4;
            case 0x1F30C8u: goto label_1f30c8;
            case 0x1F30CCu: goto label_1f30cc;
            case 0x1F30D0u: goto label_1f30d0;
            case 0x1F30D4u: goto label_1f30d4;
            case 0x1F30D8u: goto label_1f30d8;
            case 0x1F30DCu: goto label_1f30dc;
            case 0x1F30E0u: goto label_1f30e0;
            case 0x1F30E4u: goto label_1f30e4;
            case 0x1F30E8u: goto label_1f30e8;
            case 0x1F30ECu: goto label_1f30ec;
            case 0x1F30F0u: goto label_1f30f0;
            case 0x1F30F4u: goto label_1f30f4;
            case 0x1F30F8u: goto label_1f30f8;
            case 0x1F30FCu: goto label_1f30fc;
            case 0x1F3100u: goto label_1f3100;
            case 0x1F3104u: goto label_1f3104;
            case 0x1F3108u: goto label_1f3108;
            case 0x1F310Cu: goto label_1f310c;
            case 0x1F3110u: goto label_1f3110;
            case 0x1F3114u: goto label_1f3114;
            case 0x1F3118u: goto label_1f3118;
            case 0x1F311Cu: goto label_1f311c;
            case 0x1F3120u: goto label_1f3120;
            case 0x1F3124u: goto label_1f3124;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F2E1Cu;
label_1f2e1c:
    // 0x1f2e1c: 0x0
    ctx->pc = 0x1f2e1cu;
    // NOP
label_1f2e20:
    // 0x1f2e20: 0xc24a220
label_1f2e24:
    if (ctx->pc == 0x1F2E24u) {
        ctx->pc = 0x1F2E28u;
        goto label_1f2e28;
    }
    ctx->pc = 0x1F2E20u;
    SET_GPR_U32(ctx, 31, 0x1F2E28u);
    ctx->pc = 0x928880u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_ColliCtrlTask__Fv_0x928880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E28u; }
        else if (ctx->pc != 0x1F2E28u) { ctx->pc = 0x1F2E28u; }
    }
    if (ctx->pc != 0x1F2E28u) { return; }
    ctx->pc = 0x1F2E28u;
label_1f2e28:
    // 0x1f2e28: 0x1000003f
label_1f2e2c:
    if (ctx->pc == 0x1F2E2Cu) {
        ctx->pc = 0x1F2E30u;
        goto label_1f2e30;
    }
    ctx->pc = 0x1F2E28u;
    {
        const bool branch_taken_0x1f2e28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2e28) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2E30u;
label_1f2e30:
    // 0x1f2e30: 0xc284b14
label_1f2e34:
    if (ctx->pc == 0x1F2E34u) {
        ctx->pc = 0x1F2E38u;
        goto label_1f2e38;
    }
    ctx->pc = 0x1F2E30u;
    SET_GPR_U32(ctx, 31, 0x1F2E38u);
    ctx->pc = 0xA12C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        Title__Fv_0xa12c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E38u; }
        else if (ctx->pc != 0x1F2E38u) { ctx->pc = 0x1F2E38u; }
    }
    if (ctx->pc != 0x1F2E38u) { return; }
    ctx->pc = 0x1F2E38u;
label_1f2e38:
    // 0x1f2e38: 0x1000003b
label_1f2e3c:
    if (ctx->pc == 0x1F2E3Cu) {
        ctx->pc = 0x1F2E40u;
        goto label_1f2e40;
    }
    ctx->pc = 0x1F2E38u;
    {
        const bool branch_taken_0x1f2e38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2e38) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2E40u;
label_1f2e40:
    // 0x1f2e40: 0xc285184
label_1f2e44:
    if (ctx->pc == 0x1F2E44u) {
        ctx->pc = 0x1F2E48u;
        goto label_1f2e48;
    }
    ctx->pc = 0x1F2E40u;
    SET_GPR_U32(ctx, 31, 0x1F2E48u);
    ctx->pc = 0xA14610u;
    {
        const uint32_t __entryPc = ctx->pc;
        Title2__Fv_0xa14610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E48u; }
        else if (ctx->pc != 0x1F2E48u) { ctx->pc = 0x1F2E48u; }
    }
    if (ctx->pc != 0x1F2E48u) { return; }
    ctx->pc = 0x1F2E48u;
label_1f2e48:
    // 0x1f2e48: 0x10000037
label_1f2e4c:
    if (ctx->pc == 0x1F2E4Cu) {
        ctx->pc = 0x1F2E50u;
        goto label_1f2e50;
    }
    ctx->pc = 0x1F2E48u;
    {
        const bool branch_taken_0x1f2e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2e48) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2E50u;
label_1f2e50:
    // 0x1f2e50: 0xc24a848
label_1f2e54:
    if (ctx->pc == 0x1F2E54u) {
        ctx->pc = 0x1F2E58u;
        goto label_1f2e58;
    }
    ctx->pc = 0x1F2E50u;
    SET_GPR_U32(ctx, 31, 0x1F2E58u);
    ctx->pc = 0x92A120u;
    {
        const uint32_t __entryPc = ctx->pc;
        CsOption__Fv_0x92a120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E58u; }
        else if (ctx->pc != 0x1F2E58u) { ctx->pc = 0x1F2E58u; }
    }
    if (ctx->pc != 0x1F2E58u) { return; }
    ctx->pc = 0x1F2E58u;
label_1f2e58:
    // 0x1f2e58: 0x10000033
label_1f2e5c:
    if (ctx->pc == 0x1F2E5Cu) {
        ctx->pc = 0x1F2E60u;
        goto label_1f2e60;
    }
    ctx->pc = 0x1F2E58u;
    {
        const bool branch_taken_0x1f2e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2e58) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2E60u;
label_1f2e60:
    // 0x1f2e60: 0xc270b54
label_1f2e64:
    if (ctx->pc == 0x1F2E64u) {
        ctx->pc = 0x1F2E68u;
        goto label_1f2e68;
    }
    ctx->pc = 0x1F2E60u;
    SET_GPR_U32(ctx, 31, 0x1F2E68u);
    ctx->pc = 0x9C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        HuntFile__Fv_0x9c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E68u; }
        else if (ctx->pc != 0x1F2E68u) { ctx->pc = 0x1F2E68u; }
    }
    if (ctx->pc != 0x1F2E68u) { return; }
    ctx->pc = 0x1F2E68u;
label_1f2e68:
    // 0x1f2e68: 0x1000002f
label_1f2e6c:
    if (ctx->pc == 0x1F2E6Cu) {
        ctx->pc = 0x1F2E70u;
        goto label_1f2e70;
    }
    ctx->pc = 0x1F2E68u;
    {
        const bool branch_taken_0x1f2e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2e68) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2E70u;
label_1f2e70:
    // 0x1f2e70: 0xc2838e8
label_1f2e74:
    if (ctx->pc == 0x1F2E74u) {
        ctx->pc = 0x1F2E78u;
        goto label_1f2e78;
    }
    ctx->pc = 0x1F2E70u;
    SET_GPR_U32(ctx, 31, 0x1F2E78u);
    ctx->pc = 0xA0E3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Demo__Fv_0xa0e3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E78u; }
        else if (ctx->pc != 0x1F2E78u) { ctx->pc = 0x1F2E78u; }
    }
    if (ctx->pc != 0x1F2E78u) { return; }
    ctx->pc = 0x1F2E78u;
label_1f2e78:
    // 0x1f2e78: 0x1000002b
label_1f2e7c:
    if (ctx->pc == 0x1F2E7Cu) {
        ctx->pc = 0x1F2E80u;
        goto label_1f2e80;
    }
    ctx->pc = 0x1F2E78u;
    {
        const bool branch_taken_0x1f2e78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2e78) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2E80u;
label_1f2e80:
    // 0x1f2e80: 0xc25a6a4
label_1f2e84:
    if (ctx->pc == 0x1F2E84u) {
        ctx->pc = 0x1F2E88u;
        goto label_1f2e88;
    }
    ctx->pc = 0x1F2E80u;
    SET_GPR_U32(ctx, 31, 0x1F2E88u);
    ctx->pc = 0x969A90u;
    {
        const uint32_t __entryPc = ctx->pc;
        Game__Fv_0x969a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E88u; }
        else if (ctx->pc != 0x1F2E88u) { ctx->pc = 0x1F2E88u; }
    }
    if (ctx->pc != 0x1F2E88u) { return; }
    ctx->pc = 0x1F2E88u;
label_1f2e88:
    // 0x1f2e88: 0x10000027
label_1f2e8c:
    if (ctx->pc == 0x1F2E8Cu) {
        ctx->pc = 0x1F2E90u;
        goto label_1f2e90;
    }
    ctx->pc = 0x1F2E88u;
    {
        const bool branch_taken_0x1f2e88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2e88) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2E90u;
label_1f2e90:
    // 0x1f2e90: 0xc25aa88
label_1f2e94:
    if (ctx->pc == 0x1F2E94u) {
        ctx->pc = 0x1F2E98u;
        goto label_1f2e98;
    }
    ctx->pc = 0x1F2E90u;
    SET_GPR_U32(ctx, 31, 0x1F2E98u);
    ctx->pc = 0x96AA20u;
    {
        const uint32_t __entryPc = ctx->pc;
        GameOver__Fv_0x96aa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E98u; }
        else if (ctx->pc != 0x1F2E98u) { ctx->pc = 0x1F2E98u; }
    }
    if (ctx->pc != 0x1F2E98u) { return; }
    ctx->pc = 0x1F2E98u;
label_1f2e98:
    // 0x1f2e98: 0x10000023
label_1f2e9c:
    if (ctx->pc == 0x1F2E9Cu) {
        ctx->pc = 0x1F2EA0u;
        goto label_1f2ea0;
    }
    ctx->pc = 0x1F2E98u;
    {
        const bool branch_taken_0x1f2e98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2e98) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2EA0u;
label_1f2ea0:
    // 0x1f2ea0: 0xc285a1c
label_1f2ea4:
    if (ctx->pc == 0x1F2EA4u) {
        ctx->pc = 0x1F2EA8u;
        goto label_1f2ea8;
    }
    ctx->pc = 0x1F2EA0u;
    SET_GPR_U32(ctx, 31, 0x1F2EA8u);
    ctx->pc = 0xA16870u;
    {
        const uint32_t __entryPc = ctx->pc;
        Tutorial__Fv_0xa16870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EA8u; }
        else if (ctx->pc != 0x1F2EA8u) { ctx->pc = 0x1F2EA8u; }
    }
    if (ctx->pc != 0x1F2EA8u) { return; }
    ctx->pc = 0x1F2EA8u;
label_1f2ea8:
    // 0x1f2ea8: 0x1000001f
label_1f2eac:
    if (ctx->pc == 0x1F2EACu) {
        ctx->pc = 0x1F2EB0u;
        goto label_1f2eb0;
    }
    ctx->pc = 0x1F2EA8u;
    {
        const bool branch_taken_0x1f2ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2ea8) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2EB0u;
label_1f2eb0:
    // 0x1f2eb0: 0xc283a78
label_1f2eb4:
    if (ctx->pc == 0x1F2EB4u) {
        ctx->pc = 0x1F2EB8u;
        goto label_1f2eb8;
    }
    ctx->pc = 0x1F2EB0u;
    SET_GPR_U32(ctx, 31, 0x1F2EB8u);
    ctx->pc = 0xA0E9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Ranking__Fv_0xa0e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EB8u; }
        else if (ctx->pc != 0x1F2EB8u) { ctx->pc = 0x1F2EB8u; }
    }
    if (ctx->pc != 0x1F2EB8u) { return; }
    ctx->pc = 0x1F2EB8u;
label_1f2eb8:
    // 0x1f2eb8: 0x1000001b
label_1f2ebc:
    if (ctx->pc == 0x1F2EBCu) {
        ctx->pc = 0x1F2EC0u;
        goto label_1f2ec0;
    }
    ctx->pc = 0x1F2EB8u;
    {
        const bool branch_taken_0x1f2eb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2eb8) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2EC0u;
label_1f2ec0:
    // 0x1f2ec0: 0xc283a78
label_1f2ec4:
    if (ctx->pc == 0x1F2EC4u) {
        ctx->pc = 0x1F2EC8u;
        goto label_1f2ec8;
    }
    ctx->pc = 0x1F2EC0u;
    SET_GPR_U32(ctx, 31, 0x1F2EC8u);
    ctx->pc = 0xA0E9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        Ranking__Fv_0xa0e9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EC8u; }
        else if (ctx->pc != 0x1F2EC8u) { ctx->pc = 0x1F2EC8u; }
    }
    if (ctx->pc != 0x1F2EC8u) { return; }
    ctx->pc = 0x1F2EC8u;
label_1f2ec8:
    // 0x1f2ec8: 0x10000017
label_1f2ecc:
    if (ctx->pc == 0x1F2ECCu) {
        ctx->pc = 0x1F2ED0u;
        goto label_1f2ed0;
    }
    ctx->pc = 0x1F2EC8u;
    {
        const bool branch_taken_0x1f2ec8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2ec8) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2ED0u;
label_1f2ed0:
    // 0x1f2ed0: 0xc283620
label_1f2ed4:
    if (ctx->pc == 0x1F2ED4u) {
        ctx->pc = 0x1F2ED8u;
        goto label_1f2ed8;
    }
    ctx->pc = 0x1F2ED0u;
    SET_GPR_U32(ctx, 31, 0x1F2ED8u);
    ctx->pc = 0xA0D880u;
    {
        const uint32_t __entryPc = ctx->pc;
        ctrl__6McTaskFv_0xa0d880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2ED8u; }
        else if (ctx->pc != 0x1F2ED8u) { ctx->pc = 0x1F2ED8u; }
    }
    if (ctx->pc != 0x1F2ED8u) { return; }
    ctx->pc = 0x1F2ED8u;
label_1f2ed8:
    // 0x1f2ed8: 0x10000013
label_1f2edc:
    if (ctx->pc == 0x1F2EDCu) {
        ctx->pc = 0x1F2EE0u;
        goto label_1f2ee0;
    }
    ctx->pc = 0x1F2ED8u;
    {
        const bool branch_taken_0x1f2ed8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2ed8) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2EE0u;
label_1f2ee0:
    // 0x1f2ee0: 0xc2836c0
label_1f2ee4:
    if (ctx->pc == 0x1F2EE4u) {
        ctx->pc = 0x1F2EE8u;
        goto label_1f2ee8;
    }
    ctx->pc = 0x1F2EE0u;
    SET_GPR_U32(ctx, 31, 0x1F2EE8u);
    ctx->pc = 0xA0DB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        Adver2__Fv_0xa0db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EE8u; }
        else if (ctx->pc != 0x1F2EE8u) { ctx->pc = 0x1F2EE8u; }
    }
    if (ctx->pc != 0x1F2EE8u) { return; }
    ctx->pc = 0x1F2EE8u;
label_1f2ee8:
    // 0x1f2ee8: 0x1000000f
label_1f2eec:
    if (ctx->pc == 0x1F2EECu) {
        ctx->pc = 0x1F2EF0u;
        goto label_1f2ef0;
    }
    ctx->pc = 0x1F2EE8u;
    {
        const bool branch_taken_0x1f2ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2ee8) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2EF0u;
label_1f2ef0:
    // 0x1f2ef0: 0xc284d64
label_1f2ef4:
    if (ctx->pc == 0x1F2EF4u) {
        ctx->pc = 0x1F2EF8u;
        goto label_1f2ef8;
    }
    ctx->pc = 0x1F2EF0u;
    SET_GPR_U32(ctx, 31, 0x1F2EF8u);
    ctx->pc = 0xA13590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Logo__Fv_0xa13590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2EF8u; }
        else if (ctx->pc != 0x1F2EF8u) { ctx->pc = 0x1F2EF8u; }
    }
    if (ctx->pc != 0x1F2EF8u) { return; }
    ctx->pc = 0x1F2EF8u;
label_1f2ef8:
    // 0x1f2ef8: 0x1000000b
label_1f2efc:
    if (ctx->pc == 0x1F2EFCu) {
        ctx->pc = 0x1F2F00u;
        goto label_1f2f00;
    }
    ctx->pc = 0x1F2EF8u;
    {
        const bool branch_taken_0x1f2ef8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2ef8) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2F00u;
label_1f2f00:
    // 0x1f2f00: 0xc284d64
label_1f2f04:
    if (ctx->pc == 0x1F2F04u) {
        ctx->pc = 0x1F2F08u;
        goto label_1f2f08;
    }
    ctx->pc = 0x1F2F00u;
    SET_GPR_U32(ctx, 31, 0x1F2F08u);
    ctx->pc = 0xA13590u;
    {
        const uint32_t __entryPc = ctx->pc;
        Logo__Fv_0xa13590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F08u; }
        else if (ctx->pc != 0x1F2F08u) { ctx->pc = 0x1F2F08u; }
    }
    if (ctx->pc != 0x1F2F08u) { return; }
    ctx->pc = 0x1F2F08u;
label_1f2f08:
    // 0x1f2f08: 0x10000007
label_1f2f0c:
    if (ctx->pc == 0x1F2F0Cu) {
        ctx->pc = 0x1F2F10u;
        goto label_1f2f10;
    }
    ctx->pc = 0x1F2F08u;
    {
        const bool branch_taken_0x1f2f08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2f08) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2F10u;
label_1f2f10:
    // 0x1f2f10: 0xc07b470
label_1f2f14:
    if (ctx->pc == 0x1F2F14u) {
        ctx->pc = 0x1F2F18u;
        goto label_1f2f18;
    }
    ctx->pc = 0x1F2F10u;
    SET_GPR_U32(ctx, 31, 0x1F2F18u);
    ctx->pc = 0x1ED1C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GunAdjustMode__Fv_0x1ed1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F18u; }
        else if (ctx->pc != 0x1F2F18u) { ctx->pc = 0x1F2F18u; }
    }
    if (ctx->pc != 0x1F2F18u) { return; }
    ctx->pc = 0x1F2F18u;
label_1f2f18:
    // 0x1f2f18: 0x10000003
label_1f2f1c:
    if (ctx->pc == 0x1F2F1Cu) {
        ctx->pc = 0x1F2F20u;
        goto label_1f2f20;
    }
    ctx->pc = 0x1F2F18u;
    {
        const bool branch_taken_0x1f2f18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2f18) {
            ctx->pc = 0x1F2F28u;
            goto label_1f2f28;
        }
    }
    ctx->pc = 0x1F2F20u;
label_1f2f20:
    // 0x1f2f20: 0xc07d054
label_1f2f24:
    if (ctx->pc == 0x1F2F24u) {
        ctx->pc = 0x1F2F28u;
        goto label_1f2f28;
    }
    ctx->pc = 0x1F2F20u;
    SET_GPR_U32(ctx, 31, 0x1F2F28u);
    ctx->pc = 0x1F4150u;
    {
        const uint32_t __entryPc = ctx->pc;
        Mcchk__Fv_0x1f4150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F28u; }
        else if (ctx->pc != 0x1F2F28u) { ctx->pc = 0x1F2F28u; }
    }
    if (ctx->pc != 0x1F2F28u) { return; }
    ctx->pc = 0x1F2F28u;
label_1f2f28:
    // 0x1f2f28: 0xc06c490
label_1f2f2c:
    if (ctx->pc == 0x1F2F2Cu) {
        ctx->pc = 0x1F2F30u;
        goto label_1f2f30;
    }
    ctx->pc = 0x1F2F28u;
    SET_GPR_U32(ctx, 31, 0x1F2F30u);
    ctx->pc = 0x1B1240u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGetDefaultRendEnv_0x1b1240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F30u; }
        else if (ctx->pc != 0x1F2F30u) { ctx->pc = 0x1F2F30u; }
    }
    if (ctx->pc != 0x1F2F30u) { return; }
    ctx->pc = 0x1F2F30u;
label_1f2f30:
    // 0x1f2f30: 0x3c010050
    ctx->pc = 0x1f2f30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
label_1f2f34:
    // 0x1f2f34: 0x8423e504
    ctx->pc = 0x1f2f34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
label_1f2f38:
    // 0x1f2f38: 0x24500080
    ctx->pc = 0x1f2f38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 128));
label_1f2f3c:
    // 0x1f2f3c: 0x2402000f
    ctx->pc = 0x1f2f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
label_1f2f40:
    // 0x1f2f40: 0x14620003
label_1f2f44:
    if (ctx->pc == 0x1F2F44u) {
        ctx->pc = 0x1F2F44u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F2F48u;
        goto label_1f2f48;
    }
    ctx->pc = 0x1F2F40u;
    {
        const bool branch_taken_0x1f2f40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F2F44u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1f2f40) {
            ctx->pc = 0x1F2F50u;
            goto label_1f2f50;
        }
    }
    ctx->pc = 0x1F2F48u;
label_1f2f48:
    // 0x1f2f48: 0x70008e28
    ctx->pc = 0x1f2f48u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f2f4c:
    // 0x1f2f4c: 0x0
    ctx->pc = 0x1f2f4cu;
    // NOP
label_1f2f50:
    // 0x1f2f50: 0x1620000f
label_1f2f54:
    if (ctx->pc == 0x1F2F54u) {
        ctx->pc = 0x1F2F58u;
        goto label_1f2f58;
    }
    ctx->pc = 0x1F2F50u;
    {
        const bool branch_taken_0x1f2f50 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f2f50) {
            ctx->pc = 0x1F2F90u;
            goto label_1f2f90;
        }
    }
    ctx->pc = 0x1F2F58u;
label_1f2f58:
    // 0x1f2f58: 0x96030000
    ctx->pc = 0x1f2f58u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1f2f5c:
    // 0x1f2f5c: 0x92020003
    ctx->pc = 0x1f2f5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1f2f60:
    // 0x1f2f60: 0x70002628
    ctx->pc = 0x1f2f60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f2f64:
    // 0x1f2f64: 0x24070001
    ctx->pc = 0x1f2f64u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_1f2f68:
    // 0x1f2f68: 0x306501ff
    ctx->pc = 0x1f2f68u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
label_1f2f6c:
    // 0x1f2f6c: 0xc06c59c
label_1f2f70:
    if (ctx->pc == 0x1F2F70u) {
        ctx->pc = 0x1F2F70u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
        ctx->pc = 0x1F2F74u;
        goto label_1f2f74;
    }
    ctx->pc = 0x1F2F6Cu;
    SET_GPR_U32(ctx, 31, 0x1F2F74u);
    ctx->pc = 0x1F2F70u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F74u; }
        else if (ctx->pc != 0x1F2F74u) { ctx->pc = 0x1F2F74u; }
    }
    if (ctx->pc != 0x1F2F74u) { return; }
    ctx->pc = 0x1F2F74u;
label_1f2f74:
    // 0x1f2f74: 0x96030000
    ctx->pc = 0x1f2f74u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1f2f78:
    // 0x1f2f78: 0x92020003
    ctx->pc = 0x1f2f78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1f2f7c:
    // 0x1f2f7c: 0x24040200
    ctx->pc = 0x1f2f7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
label_1f2f80:
    // 0x1f2f80: 0x24070001
    ctx->pc = 0x1f2f80u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
label_1f2f84:
    // 0x1f2f84: 0x306501ff
    ctx->pc = 0x1f2f84u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
label_1f2f88:
    // 0x1f2f88: 0xc06c59c
label_1f2f8c:
    if (ctx->pc == 0x1F2F8Cu) {
        ctx->pc = 0x1F2F8Cu;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
        ctx->pc = 0x1F2F90u;
        goto label_1f2f90;
    }
    ctx->pc = 0x1F2F88u;
    SET_GPR_U32(ctx, 31, 0x1F2F90u);
    ctx->pc = 0x1F2F8Cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F90u; }
        else if (ctx->pc != 0x1F2F90u) { ctx->pc = 0x1F2F90u; }
    }
    if (ctx->pc != 0x1F2F90u) { return; }
    ctx->pc = 0x1F2F90u;
label_1f2f90:
    // 0x1f2f90: 0xc06a524
label_1f2f94:
    if (ctx->pc == 0x1F2F94u) {
        ctx->pc = 0x1F2F98u;
        goto label_1f2f98;
    }
    ctx->pc = 0x1F2F90u;
    SET_GPR_U32(ctx, 31, 0x1F2F98u);
    ctx->pc = 0x1A9490u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutSortEntry_0x1a9490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2F98u; }
        else if (ctx->pc != 0x1F2F98u) { ctx->pc = 0x1F2F98u; }
    }
    if (ctx->pc != 0x1F2F98u) { return; }
    ctx->pc = 0x1F2F98u;
label_1f2f98:
    // 0x1f2f98: 0xc06a568
label_1f2f9c:
    if (ctx->pc == 0x1F2F9Cu) {
        ctx->pc = 0x1F2F9Cu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F2FA0u;
        goto label_1f2fa0;
    }
    ctx->pc = 0x1F2F98u;
    SET_GPR_U32(ctx, 31, 0x1F2FA0u);
    ctx->pc = 0x1F2F9Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A95A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPutAllEntry_0x1a95a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FA0u; }
        else if (ctx->pc != 0x1F2FA0u) { ctx->pc = 0x1F2FA0u; }
    }
    if (ctx->pc != 0x1F2FA0u) { return; }
    ctx->pc = 0x1F2FA0u;
label_1f2fa0:
    // 0x1f2fa0: 0x16200010
label_1f2fa4:
    if (ctx->pc == 0x1F2FA4u) {
        ctx->pc = 0x1F2FA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937988));
        ctx->pc = 0x1F2FA8u;
        goto label_1f2fa8;
    }
    ctx->pc = 0x1F2FA0u;
    {
        const bool branch_taken_0x1f2fa0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F2FA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937988));
        if (branch_taken_0x1f2fa0) {
            ctx->pc = 0x1F2FE4u;
            goto label_1f2fe4;
        }
    }
    ctx->pc = 0x1F2FA8u;
label_1f2fa8:
    // 0x1f2fa8: 0x96030000
    ctx->pc = 0x1f2fa8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1f2fac:
    // 0x1f2fac: 0x92020003
    ctx->pc = 0x1f2facu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1f2fb0:
    // 0x1f2fb0: 0x70002628
    ctx->pc = 0x1f2fb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f2fb4:
    // 0x1f2fb4: 0x70003e28
    ctx->pc = 0x1f2fb4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f2fb8:
    // 0x1f2fb8: 0x306501ff
    ctx->pc = 0x1f2fb8u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
label_1f2fbc:
    // 0x1f2fbc: 0xc06c59c
label_1f2fc0:
    if (ctx->pc == 0x1F2FC0u) {
        ctx->pc = 0x1F2FC0u;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
        ctx->pc = 0x1F2FC4u;
        goto label_1f2fc4;
    }
    ctx->pc = 0x1F2FBCu;
    SET_GPR_U32(ctx, 31, 0x1F2FC4u);
    ctx->pc = 0x1F2FC0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FC4u; }
        else if (ctx->pc != 0x1F2FC4u) { ctx->pc = 0x1F2FC4u; }
    }
    if (ctx->pc != 0x1F2FC4u) { return; }
    ctx->pc = 0x1F2FC4u;
label_1f2fc4:
    // 0x1f2fc4: 0x96030000
    ctx->pc = 0x1f2fc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1f2fc8:
    // 0x1f2fc8: 0x92020003
    ctx->pc = 0x1f2fc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_1f2fcc:
    // 0x1f2fcc: 0x24040200
    ctx->pc = 0x1f2fccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 512));
label_1f2fd0:
    // 0x1f2fd0: 0x70003e28
    ctx->pc = 0x1f2fd0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f2fd4:
    // 0x1f2fd4: 0x306501ff
    ctx->pc = 0x1f2fd4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 3), 511));
label_1f2fd8:
    // 0x1f2fd8: 0xc06c59c
label_1f2fdc:
    if (ctx->pc == 0x1F2FDCu) {
        ctx->pc = 0x1F2FDCu;
        SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
        ctx->pc = 0x1F2FE0u;
        goto label_1f2fe0;
    }
    ctx->pc = 0x1F2FD8u;
    SET_GPR_U32(ctx, 31, 0x1F2FE0u);
    ctx->pc = 0x1F2FDCu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 15));
    ctx->pc = 0x1B1670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphSetZBUF_0x1b1670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FE0u; }
        else if (ctx->pc != 0x1F2FE0u) { ctx->pc = 0x1F2FE0u; }
    }
    if (ctx->pc != 0x1F2FE0u) { return; }
    ctx->pc = 0x1F2FE0u;
label_1f2fe0:
    // 0x1f2fe0: 0x27848d84
    ctx->pc = 0x1f2fe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937988));
label_1f2fe4:
    // 0x1f2fe4: 0xc085574
label_1f2fe8:
    if (ctx->pc == 0x1F2FE8u) {
        ctx->pc = 0x1F2FECu;
        goto label_1f2fec;
    }
    ctx->pc = 0x1F2FE4u;
    SET_GPR_U32(ctx, 31, 0x1F2FECu);
    ctx->pc = 0x2155D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        loop__16PostMainMgrClassFv_0x2155d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FECu; }
        else if (ctx->pc != 0x1F2FECu) { ctx->pc = 0x1F2FECu; }
    }
    if (ctx->pc != 0x1F2FECu) { return; }
    ctx->pc = 0x1F2FECu;
label_1f2fec:
    // 0x1f2fec: 0x8f848cd8
    ctx->pc = 0x1f2fecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937816)));
label_1f2ff0:
    // 0x1f2ff0: 0x10800003
label_1f2ff4:
    if (ctx->pc == 0x1F2FF4u) {
        ctx->pc = 0x1F2FF8u;
        goto label_1f2ff8;
    }
    ctx->pc = 0x1F2FF0u;
    {
        const bool branch_taken_0x1f2ff0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f2ff0) {
            ctx->pc = 0x1F3000u;
            goto label_1f3000;
        }
    }
    ctx->pc = 0x1F2FF8u;
label_1f2ff8:
    // 0x1f2ff8: 0xc075384
label_1f2ffc:
    if (ctx->pc == 0x1F2FFCu) {
        ctx->pc = 0x1F3000u;
        goto label_1f3000;
    }
    ctx->pc = 0x1F2FF8u;
    SET_GPR_U32(ctx, 31, 0x1F3000u);
    ctx->pc = 0x1D4E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        exec__11DofCtrlTaskFv_0x1d4e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3000u; }
        else if (ctx->pc != 0x1F3000u) { ctx->pc = 0x1F3000u; }
    }
    if (ctx->pc != 0x1F3000u) { return; }
    ctx->pc = 0x1F3000u;
label_1f3000:
    // 0x1f3000: 0xc0853a8
label_1f3004:
    if (ctx->pc == 0x1F3004u) {
        ctx->pc = 0x1F3008u;
        goto label_1f3008;
    }
    ctx->pc = 0x1F3000u;
    SET_GPR_U32(ctx, 31, 0x1F3008u);
    ctx->pc = 0x214EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndScreen__Fv_0x214ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3008u; }
        else if (ctx->pc != 0x1F3008u) { ctx->pc = 0x1F3008u; }
    }
    if (ctx->pc != 0x1F3008u) { return; }
    ctx->pc = 0x1F3008u;
label_1f3008:
    // 0x1f3008: 0x3c020051
    ctx->pc = 0x1f3008u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f300c:
    // 0x1f300c: 0xc0855a0
label_1f3010:
    if (ctx->pc == 0x1F3010u) {
        ctx->pc = 0x1F3010u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13504));
        ctx->pc = 0x1F3014u;
        goto label_1f3014;
    }
    ctx->pc = 0x1F300Cu;
    SET_GPR_U32(ctx, 31, 0x1F3014u);
    ctx->pc = 0x1F3010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13504));
    ctx->pc = 0x215680u;
    {
        const uint32_t __entryPc = ctx->pc;
        loop0__16PostRendMgrClassFv_0x215680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3014u; }
        else if (ctx->pc != 0x1F3014u) { ctx->pc = 0x1F3014u; }
    }
    if (ctx->pc != 0x1F3014u) { return; }
    ctx->pc = 0x1F3014u;
label_1f3014:
    // 0x1f3014: 0xc06a568
label_1f3018:
    if (ctx->pc == 0x1F3018u) {
        ctx->pc = 0x1F3018u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1F301Cu;
        goto label_1f301c;
    }
    ctx->pc = 0x1F3014u;
    SET_GPR_U32(ctx, 31, 0x1F301Cu);
    ctx->pc = 0x1F3018u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x1A95A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutPutAllEntry_0x1a95a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F301Cu; }
        else if (ctx->pc != 0x1F301Cu) { ctx->pc = 0x1F301Cu; }
    }
    if (ctx->pc != 0x1F301Cu) { return; }
    ctx->pc = 0x1F301Cu;
label_1f301c:
    // 0x1f301c: 0xc084eb0
label_1f3020:
    if (ctx->pc == 0x1F3020u) {
        ctx->pc = 0x1F3024u;
        goto label_1f3024;
    }
    ctx->pc = 0x1F301Cu;
    SET_GPR_U32(ctx, 31, 0x1F3024u);
    ctx->pc = 0x213AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DispPlayerEntry__Fv_0x213ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3024u; }
        else if (ctx->pc != 0x1F3024u) { ctx->pc = 0x1F3024u; }
    }
    if (ctx->pc != 0x1F3024u) { return; }
    ctx->pc = 0x1F3024u;
label_1f3024:
    // 0x1f3024: 0xc06a5d8
label_1f3028:
    if (ctx->pc == 0x1F3028u) {
        ctx->pc = 0x1F302Cu;
        goto label_1f302c;
    }
    ctx->pc = 0x1F3024u;
    SET_GPR_U32(ctx, 31, 0x1F302Cu);
    ctx->pc = 0x1A9760u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutFinishEntry_0x1a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F302Cu; }
        else if (ctx->pc != 0x1F302Cu) { ctx->pc = 0x1F302Cu; }
    }
    if (ctx->pc != 0x1F302Cu) { return; }
    ctx->pc = 0x1F302Cu;
label_1f302c:
    // 0x1f302c: 0xc06a1ac
label_1f3030:
    if (ctx->pc == 0x1F3030u) {
        ctx->pc = 0x1F3034u;
        goto label_1f3034;
    }
    ctx->pc = 0x1F302Cu;
    SET_GPR_U32(ctx, 31, 0x1F3034u);
    ctx->pc = 0x1A86B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutBeginEntry_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3034u; }
        else if (ctx->pc != 0x1F3034u) { ctx->pc = 0x1F3034u; }
    }
    if (ctx->pc != 0x1F3034u) { return; }
    ctx->pc = 0x1F3034u;
label_1f3034:
    // 0x1f3034: 0x3c020050
    ctx->pc = 0x1f3034u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f3038:
    // 0x1f3038: 0xc0750dc
label_1f303c:
    if (ctx->pc == 0x1F303Cu) {
        ctx->pc = 0x1F303Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
        ctx->pc = 0x1F3040u;
        goto label_1f3040;
    }
    ctx->pc = 0x1F3038u;
    SET_GPR_U32(ctx, 31, 0x1F3040u);
    ctx->pc = 0x1F303Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D4370u;
    {
        const uint32_t __entryPc = ctx->pc;
        disp__11CreditClassFv_0x1d4370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3040u; }
        else if (ctx->pc != 0x1F3040u) { ctx->pc = 0x1F3040u; }
    }
    if (ctx->pc != 0x1F3040u) { return; }
    ctx->pc = 0x1F3040u;
label_1f3040:
    // 0x1f3040: 0xc06a518
label_1f3044:
    if (ctx->pc == 0x1F3044u) {
        ctx->pc = 0x1F3048u;
        goto label_1f3048;
    }
    ctx->pc = 0x1F3040u;
    SET_GPR_U32(ctx, 31, 0x1F3048u);
    ctx->pc = 0x1A9460u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutEndEntry_0x1a9460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3048u; }
        else if (ctx->pc != 0x1F3048u) { ctx->pc = 0x1F3048u; }
    }
    if (ctx->pc != 0x1F3048u) { return; }
    ctx->pc = 0x1F3048u;
label_1f3048:
    // 0x1f3048: 0xc07ba54
label_1f304c:
    if (ctx->pc == 0x1F304Cu) {
        ctx->pc = 0x1F3050u;
        goto label_1f3050;
    }
    ctx->pc = 0x1F3048u;
    SET_GPR_U32(ctx, 31, 0x1F3050u);
    ctx->pc = 0x1EE950u;
    {
        const uint32_t __entryPc = ctx->pc;
        CtrlGunFlash__Fv_0x1ee950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3050u; }
        else if (ctx->pc != 0x1F3050u) { ctx->pc = 0x1F3050u; }
    }
    if (ctx->pc != 0x1F3050u) { return; }
    ctx->pc = 0x1F3050u;
label_1f3050:
    // 0x1f3050: 0xc07b520
label_1f3054:
    if (ctx->pc == 0x1F3054u) {
        ctx->pc = 0x1F3058u;
        goto label_1f3058;
    }
    ctx->pc = 0x1F3050u;
    SET_GPR_U32(ctx, 31, 0x1F3058u);
    ctx->pc = 0x1ED480u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_guncon2_port__Fv_0x1ed480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3058u; }
        else if (ctx->pc != 0x1F3058u) { ctx->pc = 0x1F3058u; }
    }
    if (ctx->pc != 0x1F3058u) { return; }
    ctx->pc = 0x1F3058u;
label_1f3058:
    // 0x1f3058: 0xc07a720
label_1f305c:
    if (ctx->pc == 0x1F305Cu) {
        ctx->pc = 0x1F3060u;
        goto label_1f3060;
    }
    ctx->pc = 0x1F3058u;
    SET_GPR_U32(ctx, 31, 0x1F3060u);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3060u; }
        else if (ctx->pc != 0x1F3060u) { ctx->pc = 0x1F3060u; }
    }
    if (ctx->pc != 0x1F3060u) { return; }
    ctx->pc = 0x1F3060u;
label_1f3060:
    // 0x1f3060: 0x3c02001f
    ctx->pc = 0x1f3060u;
    SET_GPR_U32(ctx, 2, ((uint32_t)31 << 16));
label_1f3064:
    // 0x1f3064: 0x24442cc0
    ctx->pc = 0x1f3064u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 11456));
label_1f3068:
    // 0x1f3068: 0xc0694e8
label_1f306c:
    if (ctx->pc == 0x1F306Cu) {
        ctx->pc = 0x1F306Cu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F3070u;
        goto label_1f3070;
    }
    ctx->pc = 0x1F3068u;
    SET_GPR_U32(ctx, 31, 0x1F3070u);
    ctx->pc = 0x1F306Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3070u; }
        else if (ctx->pc != 0x1F3070u) { ctx->pc = 0x1F3070u; }
    }
    if (ctx->pc != 0x1F3070u) { return; }
    ctx->pc = 0x1F3070u;
label_1f3070:
    // 0x1f3070: 0x3c020051
    ctx->pc = 0x1f3070u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f3074:
    // 0x1f3074: 0xc0855ac
label_1f3078:
    if (ctx->pc == 0x1F3078u) {
        ctx->pc = 0x1F3078u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13504));
        ctx->pc = 0x1F307Cu;
        goto label_1f307c;
    }
    ctx->pc = 0x1F3074u;
    SET_GPR_U32(ctx, 31, 0x1F307Cu);
    ctx->pc = 0x1F3078u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13504));
    ctx->pc = 0x2156B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        loop1__16PostRendMgrClassFv_0x2156b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F307Cu; }
        else if (ctx->pc != 0x1F307Cu) { ctx->pc = 0x1F307Cu; }
    }
    if (ctx->pc != 0x1F307Cu) { return; }
    ctx->pc = 0x1F307Cu;
label_1f307c:
    // 0x1f307c: 0x83828b98
    ctx->pc = 0x1f307cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937496)));
label_1f3080:
    // 0x1f3080: 0x10400005
label_1f3084:
    if (ctx->pc == 0x1F3084u) {
        ctx->pc = 0x1F3088u;
        goto label_1f3088;
    }
    ctx->pc = 0x1F3080u;
    {
        const bool branch_taken_0x1f3080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3080) {
            ctx->pc = 0x1F3098u;
            goto label_1f3098;
        }
    }
    ctx->pc = 0x1F3088u;
label_1f3088:
    // 0x1f3088: 0xc0789dc
label_1f308c:
    if (ctx->pc == 0x1F308Cu) {
        ctx->pc = 0x1F308Cu;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937496), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1F3090u;
        goto label_1f3090;
    }
    ctx->pc = 0x1F3088u;
    SET_GPR_U32(ctx, 31, 0x1F3090u);
    ctx->pc = 0x1F308Cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937496), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1E2770u;
    {
        const uint32_t __entryPc = ctx->pc;
        PowerOnInit2__Fv_0x1e2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3090u; }
        else if (ctx->pc != 0x1F3090u) { ctx->pc = 0x1F3090u; }
    }
    if (ctx->pc != 0x1F3090u) { return; }
    ctx->pc = 0x1F3090u;
label_1f3090:
    // 0x1f3090: 0x10000005
label_1f3094:
    if (ctx->pc == 0x1F3094u) {
        ctx->pc = 0x1F3098u;
        goto label_1f3098;
    }
    ctx->pc = 0x1F3090u;
    {
        const bool branch_taken_0x1f3090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3090) {
            ctx->pc = 0x1F30A8u;
            goto label_1f30a8;
        }
    }
    ctx->pc = 0x1F3098u;
label_1f3098:
    // 0x1f3098: 0x3c020050
    ctx->pc = 0x1f3098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f309c:
    // 0x1f309c: 0xc07ccbc
label_1f30a0:
    if (ctx->pc == 0x1F30A0u) {
        ctx->pc = 0x1F30A0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960384));
        ctx->pc = 0x1F30A4u;
        goto label_1f30a4;
    }
    ctx->pc = 0x1F309Cu;
    SET_GPR_U32(ctx, 31, 0x1F30A4u);
    ctx->pc = 0x1F30A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960384));
    ctx->pc = 0x1F32F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__16MainModeMgrClassFv_0x1f32f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30A4u; }
        else if (ctx->pc != 0x1F30A4u) { ctx->pc = 0x1F30A4u; }
    }
    if (ctx->pc != 0x1F30A4u) { return; }
    ctx->pc = 0x1F30A4u;
label_1f30a4:
    // 0x1f30a4: 0x0
    ctx->pc = 0x1f30a4u;
    // NOP
label_1f30a8:
    // 0x1f30a8: 0x3c020050
    ctx->pc = 0x1f30a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f30ac:
    // 0x1f30ac: 0xc07ceb0
label_1f30b0:
    if (ctx->pc == 0x1F30B0u) {
        ctx->pc = 0x1F30B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x1F30B4u;
        goto label_1f30b4;
    }
    ctx->pc = 0x1F30ACu;
    SET_GPR_U32(ctx, 31, 0x1F30B4u);
    ctx->pc = 0x1F30B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__13PauseMgrClassFv_0x1f3ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30B4u; }
        else if (ctx->pc != 0x1F30B4u) { ctx->pc = 0x1F30B4u; }
    }
    if (ctx->pc != 0x1F30B4u) { return; }
    ctx->pc = 0x1F30B4u;
label_1f30b4:
    // 0x1f30b4: 0x3c020050
    ctx->pc = 0x1f30b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f30b8:
    // 0x1f30b8: 0xc075284
label_1f30bc:
    if (ctx->pc == 0x1F30BCu) {
        ctx->pc = 0x1F30BCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
        ctx->pc = 0x1F30C0u;
        goto label_1f30c0;
    }
    ctx->pc = 0x1F30B8u;
    SET_GPR_U32(ctx, 31, 0x1F30C0u);
    ctx->pc = 0x1F30BCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D4A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__11CreditClassFv_0x1d4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30C0u; }
        else if (ctx->pc != 0x1F30C0u) { ctx->pc = 0x1F30C0u; }
    }
    if (ctx->pc != 0x1F30C0u) { return; }
    ctx->pc = 0x1F30C0u;
label_1f30c0:
    // 0x1f30c0: 0x3c020051
    ctx->pc = 0x1f30c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_1f30c4:
    // 0x1f30c4: 0xc0861b8
label_1f30c8:
    if (ctx->pc == 0x1F30C8u) {
        ctx->pc = 0x1F30C8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
        ctx->pc = 0x1F30CCu;
        goto label_1f30cc;
    }
    ctx->pc = 0x1F30C4u;
    SET_GPR_U32(ctx, 31, 0x1F30CCu);
    ctx->pc = 0x1F30C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2186E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__13SoundMgrClassFv_0x2186e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30CCu; }
        else if (ctx->pc != 0x1F30CCu) { ctx->pc = 0x1F30CCu; }
    }
    if (ctx->pc != 0x1F30CCu) { return; }
    ctx->pc = 0x1F30CCu;
label_1f30cc:
    // 0x1f30cc: 0x3c020050
    ctx->pc = 0x1f30ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
label_1f30d0:
    // 0x1f30d0: 0xc07ce18
label_1f30d4:
    if (ctx->pc == 0x1F30D4u) {
        ctx->pc = 0x1F30D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
        ctx->pc = 0x1F30D8u;
        goto label_1f30d8;
    }
    ctx->pc = 0x1F30D0u;
    SET_GPR_U32(ctx, 31, 0x1F30D8u);
    ctx->pc = 0x1F30D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30D8u; }
        else if (ctx->pc != 0x1F30D8u) { ctx->pc = 0x1F30D8u; }
    }
    if (ctx->pc != 0x1F30D8u) { return; }
    ctx->pc = 0x1F30D8u;
label_1f30d8:
    // 0x1f30d8: 0x28410005
    ctx->pc = 0x1f30d8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
label_1f30dc:
    // 0x1f30dc: 0x1020000a
label_1f30e0:
    if (ctx->pc == 0x1F30E0u) {
        ctx->pc = 0x1F30E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
        ctx->pc = 0x1F30E4u;
        goto label_1f30e4;
    }
    ctx->pc = 0x1F30DCu;
    {
        const bool branch_taken_0x1f30dc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F30E0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)4096 << 16));
        if (branch_taken_0x1f30dc) {
            ctx->pc = 0x1F3108u;
            goto label_1f3108;
        }
    }
    ctx->pc = 0x1F30E4u;
label_1f30e4:
    // 0x1f30e4: 0x8f848be4
    ctx->pc = 0x1f30e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937572)));
label_1f30e8:
    // 0x1f30e8: 0x8f838ba0
    ctx->pc = 0x1f30e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937504)));
label_1f30ec:
    // 0x1f30ec: 0x8f828ba4
    ctx->pc = 0x1f30ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937508)));
label_1f30f0:
    // 0x1f30f0: 0x24840001
    ctx->pc = 0x1f30f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_1f30f4:
    // 0x1f30f4: 0x24630001
    ctx->pc = 0x1f30f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_1f30f8:
    // 0x1f30f8: 0x24420001
    ctx->pc = 0x1f30f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_1f30fc:
    // 0x1f30fc: 0xaf848be4
    ctx->pc = 0x1f30fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 4));
label_1f3100:
    // 0x1f3100: 0xaf838ba0
    ctx->pc = 0x1f3100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937504), GPR_U32(ctx, 3));
label_1f3104:
    // 0x1f3104: 0xaf828ba4
    ctx->pc = 0x1f3104u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937508), GPR_U32(ctx, 2));
label_1f3108:
    // 0x1f3108: 0x94230800
    ctx->pc = 0x1f3108u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 2048)));
label_1f310c:
    // 0x1f310c: 0x97828bf0
    ctx->pc = 0x1f310cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937584)));
label_1f3110:
    // 0x1f3110: 0x621023
    ctx->pc = 0x1f3110u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f3114:
    // 0x1f3114: 0x3042ffff
    ctx->pc = 0x1f3114u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
label_1f3118:
    // 0x1f3118: 0xc07cc58
label_1f311c:
    if (ctx->pc == 0x1F311Cu) {
        ctx->pc = 0x1F311Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937600), GPR_U32(ctx, 2));
        ctx->pc = 0x1F3120u;
        goto label_1f3120;
    }
    ctx->pc = 0x1F3118u;
    SET_GPR_U32(ctx, 31, 0x1F3120u);
    ctx->pc = 0x1F311Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937600), GPR_U32(ctx, 2));
    ctx->pc = 0x1F3160u;
    {
        const uint32_t __entryPc = ctx->pc;
        Synch__Fv_0x1f3160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3120u; }
        else if (ctx->pc != 0x1F3120u) { ctx->pc = 0x1F3120u; }
    }
    if (ctx->pc != 0x1F3120u) { return; }
    ctx->pc = 0x1F3120u;
label_1f3120:
    // 0x1f3120: 0x1000ff28
label_1f3124:
    if (ctx->pc == 0x1F3124u) {
        ctx->pc = 0x1F3128u;
        goto label_fallthrough_0x1f3120;
    }
    ctx->pc = 0x1F3120u;
    {
        const bool branch_taken_0x1f3120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f3120) {
            ctx->pc = 0x1F2DC4u;
            goto label_1f2dc4;
        }
    }
label_fallthrough_0x1f3120:
    ctx->pc = 0x1F3128u;
}
