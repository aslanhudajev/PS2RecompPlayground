#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setup_player_display
// Address: 0x234e08 - 0x2352f0
void setup_player_display_0x234e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x234e08u;

label_234e08:
    // 0x234e08: 0x27bdff40
    ctx->pc = 0x234e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
label_234e0c:
    // 0x234e0c: 0xffbf00b0
    ctx->pc = 0x234e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_234e10:
    // 0x234e10: 0xffbe00a0
    ctx->pc = 0x234e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_234e14:
    // 0x234e14: 0xffb70090
    ctx->pc = 0x234e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_234e18:
    // 0x234e18: 0xffb60080
    ctx->pc = 0x234e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_234e1c:
    // 0x234e1c: 0xffb50070
    ctx->pc = 0x234e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_234e20:
    // 0x234e20: 0xffb40060
    ctx->pc = 0x234e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_234e24:
    // 0x234e24: 0xffb30050
    ctx->pc = 0x234e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_234e28:
    // 0x234e28: 0xffb20040
    ctx->pc = 0x234e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_234e2c:
    // 0x234e2c: 0xffb10030
    ctx->pc = 0x234e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_234e30:
    // 0x234e30: 0xffb00020
    ctx->pc = 0x234e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_234e34:
    // 0x234e34: 0x80a02d
    ctx->pc = 0x234e34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_234e38:
    // 0x234e38: 0x24032b00
    ctx->pc = 0x234e38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
label_234e3c:
    // 0x234e3c: 0x2831818
    ctx->pc = 0x234e3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_234e40:
    // 0x234e40: 0x3c020032
    ctx->pc = 0x234e40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234e44:
    // 0x234e44: 0x24421bc0
    ctx->pc = 0x234e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
label_234e48:
    // 0x234e48: 0x62a821
    ctx->pc = 0x234e48u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_234e4c:
    // 0x234e4c: 0x3c030032
    ctx->pc = 0x234e4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_234e50:
    // 0x234e50: 0x246315d0
    ctx->pc = 0x234e50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5584));
label_234e54:
    // 0x234e54: 0x141040
    ctx->pc = 0x234e54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 1));
label_234e58:
    // 0x234e58: 0x431021
    ctx->pc = 0x234e58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234e5c:
    // 0x234e5c: 0xc08d350
label_234e60:
    if (ctx->pc == 0x234E60u) {
        ctx->pc = 0x234E60u;
        SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x234E64u;
        goto label_234e64;
    }
    ctx->pc = 0x234E5Cu;
    SET_GPR_U32(ctx, 31, 0x234E64u);
    ctx->pc = 0x234E60u;
    SET_GPR_U32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x234D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_display_mode_0x234d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E64u; }
    }
    if (ctx->pc != 0x234E64u) { return; }
    ctx->pc = 0x234E64u;
label_234e64:
    // 0x234e64: 0x40b02d
    ctx->pc = 0x234e64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234e68:
    // 0x234e68: 0x8eb30004
    ctx->pc = 0x234e68u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_234e6c:
    // 0x234e6c: 0xc08dad4
label_234e70:
    if (ctx->pc == 0x234E70u) {
        ctx->pc = 0x234E70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234E74u;
        goto label_234e74;
    }
    ctx->pc = 0x234E6Cu;
    SET_GPR_U32(ctx, 31, 0x234E74u);
    ctx->pc = 0x234E70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_player_blits_0x236b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E74u; }
    }
    if (ctx->pc != 0x234E74u) { return; }
    ctx->pc = 0x234E74u;
label_234e74:
    // 0x234e74: 0x8ebe000c
    ctx->pc = 0x234e74u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_234e78:
    // 0x234e78: 0xaeb6097c
    ctx->pc = 0x234e78u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2428), GPR_U32(ctx, 22));
label_234e7c:
    // 0x234e7c: 0x3c04003a
    ctx->pc = 0x234e7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_234e80:
    // 0x234e80: 0x24847210
    ctx->pc = 0x234e80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29200));
label_234e84:
    // 0x234e84: 0x282d
    ctx->pc = 0x234e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234e88:
    // 0x234e88: 0xc0b1ba8
label_234e8c:
    if (ctx->pc == 0x234E8Cu) {
        ctx->pc = 0x234E8Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234E90u;
        goto label_234e90;
    }
    ctx->pc = 0x234E88u;
    SET_GPR_U32(ctx, 31, 0x234E90u);
    ctx->pc = 0x234E8Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234E90u; }
    }
    if (ctx->pc != 0x234E90u) { return; }
    ctx->pc = 0x234E90u;
label_234e90:
    // 0x234e90: 0x3c100033
    ctx->pc = 0x234e90u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_234e94:
    // 0x234e94: 0x2610c908
    ctx->pc = 0x234e94u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953224));
label_234e98:
    // 0x234e98: 0x24110018
    ctx->pc = 0x234e98u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 24));
label_234e9c:
    // 0x234e9c: 0x2918818
    ctx->pc = 0x234e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_234ea0:
    // 0x234ea0: 0x2309021
    ctx->pc = 0x234ea0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_234ea4:
    // 0x234ea4: 0x8e440000
    ctx->pc = 0x234ea4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_234ea8:
    // 0x234ea8: 0x40282d
    ctx->pc = 0x234ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234eac:
    // 0x234eac: 0xc0b0ed6
label_234eb0:
    if (ctx->pc == 0x234EB0u) {
        ctx->pc = 0x234EB0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234EB4u;
        goto label_234eb4;
    }
    ctx->pc = 0x234EACu;
    SET_GPR_U32(ctx, 31, 0x234EB4u);
    ctx->pc = 0x234EB0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EB4u; }
    }
    if (ctx->pc != 0x234EB4u) { return; }
    ctx->pc = 0x234EB4u;
label_234eb4:
    // 0x234eb4: 0x8e440000
    ctx->pc = 0x234eb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_234eb8:
    // 0x234eb8: 0xc0b0ce8
label_234ebc:
    if (ctx->pc == 0x234EBCu) {
        ctx->pc = 0x234EBCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234EC0u;
        goto label_234ec0;
    }
    ctx->pc = 0x234EB8u;
    SET_GPR_U32(ctx, 31, 0x234EC0u);
    ctx->pc = 0x234EBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EC0u; }
    }
    if (ctx->pc != 0x234EC0u) { return; }
    ctx->pc = 0x234EC0u;
label_234ec0:
    // 0x234ec0: 0x3c04003a
    ctx->pc = 0x234ec0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_234ec4:
    // 0x234ec4: 0x24847910
    ctx->pc = 0x234ec4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 30992));
label_234ec8:
    // 0x234ec8: 0x282d
    ctx->pc = 0x234ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234ecc:
    // 0x234ecc: 0xc0b1ba8
label_234ed0:
    if (ctx->pc == 0x234ED0u) {
        ctx->pc = 0x234ED0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234ED4u;
        goto label_234ed4;
    }
    ctx->pc = 0x234ECCu;
    SET_GPR_U32(ctx, 31, 0x234ED4u);
    ctx->pc = 0x234ED0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234ED4u; }
    }
    if (ctx->pc != 0x234ED4u) { return; }
    ctx->pc = 0x234ED4u;
label_234ed4:
    // 0x234ed4: 0x26100004
    ctx->pc = 0x234ed4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_234ed8:
    // 0x234ed8: 0x2308821
    ctx->pc = 0x234ed8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_234edc:
    // 0x234edc: 0x8e240000
    ctx->pc = 0x234edcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234ee0:
    // 0x234ee0: 0x40282d
    ctx->pc = 0x234ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234ee4:
    // 0x234ee4: 0xc0b0ed6
label_234ee8:
    if (ctx->pc == 0x234EE8u) {
        ctx->pc = 0x234EE8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234EECu;
        goto label_234eec;
    }
    ctx->pc = 0x234EE4u;
    SET_GPR_U32(ctx, 31, 0x234EECu);
    ctx->pc = 0x234EE8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EECu; }
    }
    if (ctx->pc != 0x234EECu) { return; }
    ctx->pc = 0x234EECu;
label_234eec:
    // 0x234eec: 0x8e240000
    ctx->pc = 0x234eecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234ef0:
    // 0x234ef0: 0xc0b0ce8
label_234ef4:
    if (ctx->pc == 0x234EF4u) {
        ctx->pc = 0x234EF4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234EF8u;
        goto label_234ef8;
    }
    ctx->pc = 0x234EF0u;
    SET_GPR_U32(ctx, 31, 0x234EF8u);
    ctx->pc = 0x234EF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234EF8u; }
    }
    if (ctx->pc != 0x234EF8u) { return; }
    ctx->pc = 0x234EF8u;
label_234ef8:
    // 0x234ef8: 0x8ea200fc
    ctx->pc = 0x234ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 252)));
label_234efc:
    // 0x234efc: 0x1440000a
label_234f00:
    if (ctx->pc == 0x234F00u) {
        ctx->pc = 0x234F00u;
        SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
        ctx->pc = 0x234F04u;
        goto label_234f04;
    }
    ctx->pc = 0x234EFCu;
    {
        const bool branch_taken_0x234efc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x234F00u;
        SET_GPR_U32(ctx, 4, ((uint32_t)51 << 16));
        if (branch_taken_0x234efc) {
            ctx->pc = 0x234F28u;
            goto label_234f28;
        }
    }
    ctx->pc = 0x234F04u;
label_234f04:
    // 0x234f04: 0x3c020032
    ctx->pc = 0x234f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234f08:
    // 0x234f08: 0x24421570
    ctx->pc = 0x234f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5488));
label_234f0c:
    // 0x234f0c: 0x131880
    ctx->pc = 0x234f0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_234f10:
    // 0x234f10: 0x621821
    ctx->pc = 0x234f10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_234f14:
    // 0x234f14: 0x8e240000
    ctx->pc = 0x234f14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234f18:
    // 0x234f18: 0xc0b0f40
label_234f1c:
    if (ctx->pc == 0x234F1Cu) {
        ctx->pc = 0x234F1Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x234F20u;
        goto label_234f20;
    }
    ctx->pc = 0x234F18u;
    SET_GPR_U32(ctx, 31, 0x234F20u);
    ctx->pc = 0x234F1Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F20u; }
    }
    if (ctx->pc != 0x234F20u) { return; }
    ctx->pc = 0x234F20u;
label_234f20:
    // 0x234f20: 0x1000000d
label_234f24:
    if (ctx->pc == 0x234F24u) {
        ctx->pc = 0x234F24u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        ctx->pc = 0x234F28u;
        goto label_234f28;
    }
    ctx->pc = 0x234F20u;
    {
        const bool branch_taken_0x234f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234F24u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x234f20) {
            ctx->pc = 0x234F58u;
            goto label_234f58;
        }
    }
    ctx->pc = 0x234F28u;
label_234f28:
    // 0x234f28: 0x2484c908
    ctx->pc = 0x234f28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294953224));
label_234f2c:
    // 0x234f2c: 0x24020018
    ctx->pc = 0x234f2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_234f30:
    // 0x234f30: 0x2821018
    ctx->pc = 0x234f30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_234f34:
    // 0x234f34: 0x822021
    ctx->pc = 0x234f34u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_234f38:
    // 0x234f38: 0x3c020032
    ctx->pc = 0x234f38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234f3c:
    // 0x234f3c: 0x24421560
    ctx->pc = 0x234f3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 5472));
label_234f40:
    // 0x234f40: 0x131880
    ctx->pc = 0x234f40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 2));
label_234f44:
    // 0x234f44: 0x621821
    ctx->pc = 0x234f44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_234f48:
    // 0x234f48: 0x8c840004
    ctx->pc = 0x234f48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_234f4c:
    // 0x234f4c: 0xc0b0f40
label_234f50:
    if (ctx->pc == 0x234F50u) {
        ctx->pc = 0x234F50u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x234F54u;
        goto label_234f54;
    }
    ctx->pc = 0x234F4Cu;
    SET_GPR_U32(ctx, 31, 0x234F54u);
    ctx->pc = 0x234F50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2C3D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetColor_0x2c3d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F54u; }
    }
    if (ctx->pc != 0x234F54u) { return; }
    ctx->pc = 0x234F54u;
label_234f54:
    // 0x234f54: 0x3c04003a
    ctx->pc = 0x234f54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_234f58:
    // 0x234f58: 0x24847918
    ctx->pc = 0x234f58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31000));
label_234f5c:
    // 0x234f5c: 0x282d
    ctx->pc = 0x234f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234f60:
    // 0x234f60: 0xc0b1ba8
label_234f64:
    if (ctx->pc == 0x234F64u) {
        ctx->pc = 0x234F64u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234F68u;
        goto label_234f68;
    }
    ctx->pc = 0x234F60u;
    SET_GPR_U32(ctx, 31, 0x234F68u);
    ctx->pc = 0x234F64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F68u; }
    }
    if (ctx->pc != 0x234F68u) { return; }
    ctx->pc = 0x234F68u;
label_234f68:
    // 0x234f68: 0x3c120033
    ctx->pc = 0x234f68u;
    SET_GPR_U32(ctx, 18, ((uint32_t)51 << 16));
label_234f6c:
    // 0x234f6c: 0x2652c908
    ctx->pc = 0x234f6cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294953224));
label_234f70:
    // 0x234f70: 0x24110018
    ctx->pc = 0x234f70u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 24));
label_234f74:
    // 0x234f74: 0x2918818
    ctx->pc = 0x234f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_234f78:
    // 0x234f78: 0x26500008
    ctx->pc = 0x234f78u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 8));
label_234f7c:
    // 0x234f7c: 0x2308021
    ctx->pc = 0x234f7cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_234f80:
    // 0x234f80: 0x8e040000
    ctx->pc = 0x234f80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234f84:
    // 0x234f84: 0x40282d
    ctx->pc = 0x234f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234f88:
    // 0x234f88: 0xc0b0ed6
label_234f8c:
    if (ctx->pc == 0x234F8Cu) {
        ctx->pc = 0x234F8Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234F90u;
        goto label_234f90;
    }
    ctx->pc = 0x234F88u;
    SET_GPR_U32(ctx, 31, 0x234F90u);
    ctx->pc = 0x234F8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F90u; }
    }
    if (ctx->pc != 0x234F90u) { return; }
    ctx->pc = 0x234F90u;
label_234f90:
    // 0x234f90: 0x8e040000
    ctx->pc = 0x234f90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234f94:
    // 0x234f94: 0xc0b0ce8
label_234f98:
    if (ctx->pc == 0x234F98u) {
        ctx->pc = 0x234F98u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234F9Cu;
        goto label_234f9c;
    }
    ctx->pc = 0x234F94u;
    SET_GPR_U32(ctx, 31, 0x234F9Cu);
    ctx->pc = 0x234F98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234F9Cu; }
    }
    if (ctx->pc != 0x234F9Cu) { return; }
    ctx->pc = 0x234F9Cu;
label_234f9c:
    // 0x234f9c: 0x3c04003a
    ctx->pc = 0x234f9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_234fa0:
    // 0x234fa0: 0x24847928
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31016));
label_234fa4:
    // 0x234fa4: 0x282d
    ctx->pc = 0x234fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234fa8:
    // 0x234fa8: 0xc0b1ba8
label_234fac:
    if (ctx->pc == 0x234FACu) {
        ctx->pc = 0x234FACu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x234FB0u;
        goto label_234fb0;
    }
    ctx->pc = 0x234FA8u;
    SET_GPR_U32(ctx, 31, 0x234FB0u);
    ctx->pc = 0x234FACu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FB0u; }
    }
    if (ctx->pc != 0x234FB0u) { return; }
    ctx->pc = 0x234FB0u;
label_234fb0:
    // 0x234fb0: 0x26500010
    ctx->pc = 0x234fb0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 18), 16));
label_234fb4:
    // 0x234fb4: 0x2308021
    ctx->pc = 0x234fb4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_234fb8:
    // 0x234fb8: 0x8e040000
    ctx->pc = 0x234fb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234fbc:
    // 0x234fbc: 0x40282d
    ctx->pc = 0x234fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234fc0:
    // 0x234fc0: 0xc0b0ed6
label_234fc4:
    if (ctx->pc == 0x234FC4u) {
        ctx->pc = 0x234FC4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234FC8u;
        goto label_234fc8;
    }
    ctx->pc = 0x234FC0u;
    SET_GPR_U32(ctx, 31, 0x234FC8u);
    ctx->pc = 0x234FC4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FC8u; }
    }
    if (ctx->pc != 0x234FC8u) { return; }
    ctx->pc = 0x234FC8u;
label_234fc8:
    // 0x234fc8: 0x8e040000
    ctx->pc = 0x234fc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234fcc:
    // 0x234fcc: 0xc0b0ce8
label_234fd0:
    if (ctx->pc == 0x234FD0u) {
        ctx->pc = 0x234FD0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234FD4u;
        goto label_234fd4;
    }
    ctx->pc = 0x234FCCu;
    SET_GPR_U32(ctx, 31, 0x234FD4u);
    ctx->pc = 0x234FD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FD4u; }
    }
    if (ctx->pc != 0x234FD4u) { return; }
    ctx->pc = 0x234FD4u;
label_234fd4:
    // 0x234fd4: 0x24130165
    ctx->pc = 0x234fd4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 357));
label_234fd8:
    // 0x234fd8: 0x8e040000
    ctx->pc = 0x234fd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_234fdc:
    // 0x234fdc: 0x26e50006
    ctx->pc = 0x234fdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 6));
label_234fe0:
    // 0x234fe0: 0x3c014779
    ctx->pc = 0x234fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
label_234fe4:
    // 0x234fe4: 0x3421f600
    ctx->pc = 0x234fe4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62976));
label_234fe8:
    // 0x234fe8: 0x44816000
    ctx->pc = 0x234fe8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_234fec:
    // 0x234fec: 0xc0b0df2
label_234ff0:
    if (ctx->pc == 0x234FF0u) {
        ctx->pc = 0x234FF0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234FF4u;
        goto label_234ff4;
    }
    ctx->pc = 0x234FECu;
    SET_GPR_U32(ctx, 31, 0x234FF4u);
    ctx->pc = 0x234FF0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234FF4u; }
    }
    if (ctx->pc != 0x234FF4u) { return; }
    ctx->pc = 0x234FF4u;
label_234ff4:
    // 0x234ff4: 0x3c04003a
    ctx->pc = 0x234ff4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_234ff8:
    // 0x234ff8: 0x24847930
    ctx->pc = 0x234ff8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31024));
label_234ffc:
    // 0x234ffc: 0x282d
    ctx->pc = 0x234ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235000:
    // 0x235000: 0xc0b1ba8
label_235004:
    if (ctx->pc == 0x235004u) {
        ctx->pc = 0x235004u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x235008u;
        goto label_235008;
    }
    ctx->pc = 0x235000u;
    SET_GPR_U32(ctx, 31, 0x235008u);
    ctx->pc = 0x235004u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235008u; }
    }
    if (ctx->pc != 0x235008u) { return; }
    ctx->pc = 0x235008u;
label_235008:
    // 0x235008: 0x26520014
    ctx->pc = 0x235008u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 20));
label_23500c:
    // 0x23500c: 0x2328821
    ctx->pc = 0x23500cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_235010:
    // 0x235010: 0x8e240000
    ctx->pc = 0x235010u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_235014:
    // 0x235014: 0x40282d
    ctx->pc = 0x235014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235018:
    // 0x235018: 0xc0b0ed6
label_23501c:
    if (ctx->pc == 0x23501Cu) {
        ctx->pc = 0x23501Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235020u;
        goto label_235020;
    }
    ctx->pc = 0x235018u;
    SET_GPR_U32(ctx, 31, 0x235020u);
    ctx->pc = 0x23501Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235020u; }
    }
    if (ctx->pc != 0x235020u) { return; }
    ctx->pc = 0x235020u;
label_235020:
    // 0x235020: 0x8e240000
    ctx->pc = 0x235020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_235024:
    // 0x235024: 0xc0b0ce8
label_235028:
    if (ctx->pc == 0x235028u) {
        ctx->pc = 0x235028u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23502Cu;
        goto label_23502c;
    }
    ctx->pc = 0x235024u;
    SET_GPR_U32(ctx, 31, 0x23502Cu);
    ctx->pc = 0x235028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23502Cu; }
    }
    if (ctx->pc != 0x23502Cu) { return; }
    ctx->pc = 0x23502Cu;
label_23502c:
    // 0x23502c: 0x8e240000
    ctx->pc = 0x23502cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_235030:
    // 0x235030: 0x26e5003d
    ctx->pc = 0x235030u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 61));
label_235034:
    // 0x235034: 0x3c014779
    ctx->pc = 0x235034u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18297 << 16));
label_235038:
    // 0x235038: 0x3421f600
    ctx->pc = 0x235038u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 62976));
label_23503c:
    // 0x23503c: 0x44816000
    ctx->pc = 0x23503cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_235040:
    // 0x235040: 0xc0b0df2
label_235044:
    if (ctx->pc == 0x235044u) {
        ctx->pc = 0x235044u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235048u;
        goto label_235048;
    }
    ctx->pc = 0x235040u;
    SET_GPR_U32(ctx, 31, 0x235048u);
    ctx->pc = 0x235044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235048u; }
    }
    if (ctx->pc != 0x235048u) { return; }
    ctx->pc = 0x235048u;
label_235048:
    // 0x235048: 0x2ec20007
    ctx->pc = 0x235048u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 22), 7));
label_23504c:
    // 0x23504c: 0x10400074
label_235050:
    if (ctx->pc == 0x235050u) {
        ctx->pc = 0x235050u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x235054u;
        goto label_235054;
    }
    ctx->pc = 0x23504Cu;
    {
        const bool branch_taken_0x23504c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x235050u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x23504c) {
            ctx->pc = 0x235220u;
            goto label_235220;
        }
    }
    ctx->pc = 0x235054u;
label_235054:
    // 0x235054: 0x24427970
    ctx->pc = 0x235054u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 31088));
label_235058:
    // 0x235058: 0x161880
    ctx->pc = 0x235058u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 22), 2));
label_23505c:
    // 0x23505c: 0x621821
    ctx->pc = 0x23505cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235060:
    // 0x235060: 0x8c620000
    ctx->pc = 0x235060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_235064:
    // 0x235064: 0x400008
label_235068:
    if (ctx->pc == 0x235068u) {
        ctx->pc = 0x23506Cu;
        goto label_23506c;
    }
    ctx->pc = 0x235064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234E08u: goto label_234e08;
            case 0x234E0Cu: goto label_234e0c;
            case 0x234E10u: goto label_234e10;
            case 0x234E14u: goto label_234e14;
            case 0x234E18u: goto label_234e18;
            case 0x234E1Cu: goto label_234e1c;
            case 0x234E20u: goto label_234e20;
            case 0x234E24u: goto label_234e24;
            case 0x234E28u: goto label_234e28;
            case 0x234E2Cu: goto label_234e2c;
            case 0x234E30u: goto label_234e30;
            case 0x234E34u: goto label_234e34;
            case 0x234E38u: goto label_234e38;
            case 0x234E3Cu: goto label_234e3c;
            case 0x234E40u: goto label_234e40;
            case 0x234E44u: goto label_234e44;
            case 0x234E48u: goto label_234e48;
            case 0x234E4Cu: goto label_234e4c;
            case 0x234E50u: goto label_234e50;
            case 0x234E54u: goto label_234e54;
            case 0x234E58u: goto label_234e58;
            case 0x234E5Cu: goto label_234e5c;
            case 0x234E60u: goto label_234e60;
            case 0x234E64u: goto label_234e64;
            case 0x234E68u: goto label_234e68;
            case 0x234E6Cu: goto label_234e6c;
            case 0x234E70u: goto label_234e70;
            case 0x234E74u: goto label_234e74;
            case 0x234E78u: goto label_234e78;
            case 0x234E7Cu: goto label_234e7c;
            case 0x234E80u: goto label_234e80;
            case 0x234E84u: goto label_234e84;
            case 0x234E88u: goto label_234e88;
            case 0x234E8Cu: goto label_234e8c;
            case 0x234E90u: goto label_234e90;
            case 0x234E94u: goto label_234e94;
            case 0x234E98u: goto label_234e98;
            case 0x234E9Cu: goto label_234e9c;
            case 0x234EA0u: goto label_234ea0;
            case 0x234EA4u: goto label_234ea4;
            case 0x234EA8u: goto label_234ea8;
            case 0x234EACu: goto label_234eac;
            case 0x234EB0u: goto label_234eb0;
            case 0x234EB4u: goto label_234eb4;
            case 0x234EB8u: goto label_234eb8;
            case 0x234EBCu: goto label_234ebc;
            case 0x234EC0u: goto label_234ec0;
            case 0x234EC4u: goto label_234ec4;
            case 0x234EC8u: goto label_234ec8;
            case 0x234ECCu: goto label_234ecc;
            case 0x234ED0u: goto label_234ed0;
            case 0x234ED4u: goto label_234ed4;
            case 0x234ED8u: goto label_234ed8;
            case 0x234EDCu: goto label_234edc;
            case 0x234EE0u: goto label_234ee0;
            case 0x234EE4u: goto label_234ee4;
            case 0x234EE8u: goto label_234ee8;
            case 0x234EECu: goto label_234eec;
            case 0x234EF0u: goto label_234ef0;
            case 0x234EF4u: goto label_234ef4;
            case 0x234EF8u: goto label_234ef8;
            case 0x234EFCu: goto label_234efc;
            case 0x234F00u: goto label_234f00;
            case 0x234F04u: goto label_234f04;
            case 0x234F08u: goto label_234f08;
            case 0x234F0Cu: goto label_234f0c;
            case 0x234F10u: goto label_234f10;
            case 0x234F14u: goto label_234f14;
            case 0x234F18u: goto label_234f18;
            case 0x234F1Cu: goto label_234f1c;
            case 0x234F20u: goto label_234f20;
            case 0x234F24u: goto label_234f24;
            case 0x234F28u: goto label_234f28;
            case 0x234F2Cu: goto label_234f2c;
            case 0x234F30u: goto label_234f30;
            case 0x234F34u: goto label_234f34;
            case 0x234F38u: goto label_234f38;
            case 0x234F3Cu: goto label_234f3c;
            case 0x234F40u: goto label_234f40;
            case 0x234F44u: goto label_234f44;
            case 0x234F48u: goto label_234f48;
            case 0x234F4Cu: goto label_234f4c;
            case 0x234F50u: goto label_234f50;
            case 0x234F54u: goto label_234f54;
            case 0x234F58u: goto label_234f58;
            case 0x234F5Cu: goto label_234f5c;
            case 0x234F60u: goto label_234f60;
            case 0x234F64u: goto label_234f64;
            case 0x234F68u: goto label_234f68;
            case 0x234F6Cu: goto label_234f6c;
            case 0x234F70u: goto label_234f70;
            case 0x234F74u: goto label_234f74;
            case 0x234F78u: goto label_234f78;
            case 0x234F7Cu: goto label_234f7c;
            case 0x234F80u: goto label_234f80;
            case 0x234F84u: goto label_234f84;
            case 0x234F88u: goto label_234f88;
            case 0x234F8Cu: goto label_234f8c;
            case 0x234F90u: goto label_234f90;
            case 0x234F94u: goto label_234f94;
            case 0x234F98u: goto label_234f98;
            case 0x234F9Cu: goto label_234f9c;
            case 0x234FA0u: goto label_234fa0;
            case 0x234FA4u: goto label_234fa4;
            case 0x234FA8u: goto label_234fa8;
            case 0x234FACu: goto label_234fac;
            case 0x234FB0u: goto label_234fb0;
            case 0x234FB4u: goto label_234fb4;
            case 0x234FB8u: goto label_234fb8;
            case 0x234FBCu: goto label_234fbc;
            case 0x234FC0u: goto label_234fc0;
            case 0x234FC4u: goto label_234fc4;
            case 0x234FC8u: goto label_234fc8;
            case 0x234FCCu: goto label_234fcc;
            case 0x234FD0u: goto label_234fd0;
            case 0x234FD4u: goto label_234fd4;
            case 0x234FD8u: goto label_234fd8;
            case 0x234FDCu: goto label_234fdc;
            case 0x234FE0u: goto label_234fe0;
            case 0x234FE4u: goto label_234fe4;
            case 0x234FE8u: goto label_234fe8;
            case 0x234FECu: goto label_234fec;
            case 0x234FF0u: goto label_234ff0;
            case 0x234FF4u: goto label_234ff4;
            case 0x234FF8u: goto label_234ff8;
            case 0x234FFCu: goto label_234ffc;
            case 0x235000u: goto label_235000;
            case 0x235004u: goto label_235004;
            case 0x235008u: goto label_235008;
            case 0x23500Cu: goto label_23500c;
            case 0x235010u: goto label_235010;
            case 0x235014u: goto label_235014;
            case 0x235018u: goto label_235018;
            case 0x23501Cu: goto label_23501c;
            case 0x235020u: goto label_235020;
            case 0x235024u: goto label_235024;
            case 0x235028u: goto label_235028;
            case 0x23502Cu: goto label_23502c;
            case 0x235030u: goto label_235030;
            case 0x235034u: goto label_235034;
            case 0x235038u: goto label_235038;
            case 0x23503Cu: goto label_23503c;
            case 0x235040u: goto label_235040;
            case 0x235044u: goto label_235044;
            case 0x235048u: goto label_235048;
            case 0x23504Cu: goto label_23504c;
            case 0x235050u: goto label_235050;
            case 0x235054u: goto label_235054;
            case 0x235058u: goto label_235058;
            case 0x23505Cu: goto label_23505c;
            case 0x235060u: goto label_235060;
            case 0x235064u: goto label_235064;
            case 0x235068u: goto label_235068;
            case 0x23506Cu: goto label_23506c;
            case 0x235070u: goto label_235070;
            case 0x235074u: goto label_235074;
            case 0x235078u: goto label_235078;
            case 0x23507Cu: goto label_23507c;
            case 0x235080u: goto label_235080;
            case 0x235084u: goto label_235084;
            case 0x235088u: goto label_235088;
            case 0x23508Cu: goto label_23508c;
            case 0x235090u: goto label_235090;
            case 0x235094u: goto label_235094;
            case 0x235098u: goto label_235098;
            case 0x23509Cu: goto label_23509c;
            case 0x2350A0u: goto label_2350a0;
            case 0x2350A4u: goto label_2350a4;
            case 0x2350A8u: goto label_2350a8;
            case 0x2350ACu: goto label_2350ac;
            case 0x2350B0u: goto label_2350b0;
            case 0x2350B4u: goto label_2350b4;
            case 0x2350B8u: goto label_2350b8;
            case 0x2350BCu: goto label_2350bc;
            case 0x2350C0u: goto label_2350c0;
            case 0x2350C4u: goto label_2350c4;
            case 0x2350C8u: goto label_2350c8;
            case 0x2350CCu: goto label_2350cc;
            case 0x2350D0u: goto label_2350d0;
            case 0x2350D4u: goto label_2350d4;
            case 0x2350D8u: goto label_2350d8;
            case 0x2350DCu: goto label_2350dc;
            case 0x2350E0u: goto label_2350e0;
            case 0x2350E4u: goto label_2350e4;
            case 0x2350E8u: goto label_2350e8;
            case 0x2350ECu: goto label_2350ec;
            case 0x2350F0u: goto label_2350f0;
            case 0x2350F4u: goto label_2350f4;
            case 0x2350F8u: goto label_2350f8;
            case 0x2350FCu: goto label_2350fc;
            case 0x235100u: goto label_235100;
            case 0x235104u: goto label_235104;
            case 0x235108u: goto label_235108;
            case 0x23510Cu: goto label_23510c;
            case 0x235110u: goto label_235110;
            case 0x235114u: goto label_235114;
            case 0x235118u: goto label_235118;
            case 0x23511Cu: goto label_23511c;
            case 0x235120u: goto label_235120;
            case 0x235124u: goto label_235124;
            case 0x235128u: goto label_235128;
            case 0x23512Cu: goto label_23512c;
            case 0x235130u: goto label_235130;
            case 0x235134u: goto label_235134;
            case 0x235138u: goto label_235138;
            case 0x23513Cu: goto label_23513c;
            case 0x235140u: goto label_235140;
            case 0x235144u: goto label_235144;
            case 0x235148u: goto label_235148;
            case 0x23514Cu: goto label_23514c;
            case 0x235150u: goto label_235150;
            case 0x235154u: goto label_235154;
            case 0x235158u: goto label_235158;
            case 0x23515Cu: goto label_23515c;
            case 0x235160u: goto label_235160;
            case 0x235164u: goto label_235164;
            case 0x235168u: goto label_235168;
            case 0x23516Cu: goto label_23516c;
            case 0x235170u: goto label_235170;
            case 0x235174u: goto label_235174;
            case 0x235178u: goto label_235178;
            case 0x23517Cu: goto label_23517c;
            case 0x235180u: goto label_235180;
            case 0x235184u: goto label_235184;
            case 0x235188u: goto label_235188;
            case 0x23518Cu: goto label_23518c;
            case 0x235190u: goto label_235190;
            case 0x235194u: goto label_235194;
            case 0x235198u: goto label_235198;
            case 0x23519Cu: goto label_23519c;
            case 0x2351A0u: goto label_2351a0;
            case 0x2351A4u: goto label_2351a4;
            case 0x2351A8u: goto label_2351a8;
            case 0x2351ACu: goto label_2351ac;
            case 0x2351B0u: goto label_2351b0;
            case 0x2351B4u: goto label_2351b4;
            case 0x2351B8u: goto label_2351b8;
            case 0x2351BCu: goto label_2351bc;
            case 0x2351C0u: goto label_2351c0;
            case 0x2351C4u: goto label_2351c4;
            case 0x2351C8u: goto label_2351c8;
            case 0x2351CCu: goto label_2351cc;
            case 0x2351D0u: goto label_2351d0;
            case 0x2351D4u: goto label_2351d4;
            case 0x2351D8u: goto label_2351d8;
            case 0x2351DCu: goto label_2351dc;
            case 0x2351E0u: goto label_2351e0;
            case 0x2351E4u: goto label_2351e4;
            case 0x2351E8u: goto label_2351e8;
            case 0x2351ECu: goto label_2351ec;
            case 0x2351F0u: goto label_2351f0;
            case 0x2351F4u: goto label_2351f4;
            case 0x2351F8u: goto label_2351f8;
            case 0x2351FCu: goto label_2351fc;
            case 0x235200u: goto label_235200;
            case 0x235204u: goto label_235204;
            case 0x235208u: goto label_235208;
            case 0x23520Cu: goto label_23520c;
            case 0x235210u: goto label_235210;
            case 0x235214u: goto label_235214;
            case 0x235218u: goto label_235218;
            case 0x23521Cu: goto label_23521c;
            case 0x235220u: goto label_235220;
            case 0x235224u: goto label_235224;
            case 0x235228u: goto label_235228;
            case 0x23522Cu: goto label_23522c;
            case 0x235230u: goto label_235230;
            case 0x235234u: goto label_235234;
            case 0x235238u: goto label_235238;
            case 0x23523Cu: goto label_23523c;
            case 0x235240u: goto label_235240;
            case 0x235244u: goto label_235244;
            case 0x235248u: goto label_235248;
            case 0x23524Cu: goto label_23524c;
            case 0x235250u: goto label_235250;
            case 0x235254u: goto label_235254;
            case 0x235258u: goto label_235258;
            case 0x23525Cu: goto label_23525c;
            case 0x235260u: goto label_235260;
            case 0x235264u: goto label_235264;
            case 0x235268u: goto label_235268;
            case 0x23526Cu: goto label_23526c;
            case 0x235270u: goto label_235270;
            case 0x235274u: goto label_235274;
            case 0x235278u: goto label_235278;
            case 0x23527Cu: goto label_23527c;
            case 0x235280u: goto label_235280;
            case 0x235284u: goto label_235284;
            case 0x235288u: goto label_235288;
            case 0x23528Cu: goto label_23528c;
            case 0x235290u: goto label_235290;
            case 0x235294u: goto label_235294;
            case 0x235298u: goto label_235298;
            case 0x23529Cu: goto label_23529c;
            case 0x2352A0u: goto label_2352a0;
            case 0x2352A4u: goto label_2352a4;
            case 0x2352A8u: goto label_2352a8;
            case 0x2352ACu: goto label_2352ac;
            case 0x2352B0u: goto label_2352b0;
            case 0x2352B4u: goto label_2352b4;
            case 0x2352B8u: goto label_2352b8;
            case 0x2352BCu: goto label_2352bc;
            case 0x2352C0u: goto label_2352c0;
            case 0x2352C4u: goto label_2352c4;
            case 0x2352C8u: goto label_2352c8;
            case 0x2352CCu: goto label_2352cc;
            case 0x2352D0u: goto label_2352d0;
            case 0x2352D4u: goto label_2352d4;
            case 0x2352D8u: goto label_2352d8;
            case 0x2352DCu: goto label_2352dc;
            case 0x2352E0u: goto label_2352e0;
            case 0x2352E4u: goto label_2352e4;
            case 0x2352E8u: goto label_2352e8;
            case 0x2352ECu: goto label_2352ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23506Cu;
label_23506c:
    // 0x23506c: 0x3c110033
    ctx->pc = 0x23506cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
label_235070:
    // 0x235070: 0x2631c908
    ctx->pc = 0x235070u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294953224));
label_235074:
    // 0x235074: 0x24100018
    ctx->pc = 0x235074u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 24));
label_235078:
    // 0x235078: 0x2908018
    ctx->pc = 0x235078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_23507c:
    // 0x23507c: 0x2301021
    ctx->pc = 0x23507cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_235080:
    // 0x235080: 0x8c440010
    ctx->pc = 0x235080u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_235084:
    // 0x235084: 0xc0b0ce8
label_235088:
    if (ctx->pc == 0x235088u) {
        ctx->pc = 0x235088u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23508Cu;
        goto label_23508c;
    }
    ctx->pc = 0x235084u;
    SET_GPR_U32(ctx, 31, 0x23508Cu);
    ctx->pc = 0x235088u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23508Cu; }
    }
    if (ctx->pc != 0x23508Cu) { return; }
    ctx->pc = 0x23508Cu;
label_23508c:
    // 0x23508c: 0x2308821
    ctx->pc = 0x23508cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_235090:
    // 0x235090: 0x8e240014
    ctx->pc = 0x235090u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_235094:
    // 0x235094: 0xc0b0ce8
label_235098:
    if (ctx->pc == 0x235098u) {
        ctx->pc = 0x235098u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23509Cu;
        goto label_23509c;
    }
    ctx->pc = 0x235094u;
    SET_GPR_U32(ctx, 31, 0x23509Cu);
    ctx->pc = 0x235098u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23509Cu; }
    }
    if (ctx->pc != 0x23509Cu) { return; }
    ctx->pc = 0x23509Cu;
label_23509c:
    // 0x23509c: 0x10000061
label_2350a0:
    if (ctx->pc == 0x2350A0u) {
        ctx->pc = 0x2350A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2350A4u;
        goto label_2350a4;
    }
    ctx->pc = 0x23509Cu;
    {
        const bool branch_taken_0x23509c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2350A0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23509c) {
            ctx->pc = 0x235224u;
            goto label_235224;
        }
    }
    ctx->pc = 0x2350A4u;
label_2350a4:
    // 0x2350a4: 0x8ebe0010
    ctx->pc = 0x2350a4u;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2350a8:
    // 0x2350a8: 0x3c100033
    ctx->pc = 0x2350a8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)51 << 16));
label_2350ac:
    // 0x2350ac: 0x2610c908
    ctx->pc = 0x2350acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294953224));
label_2350b0:
    // 0x2350b0: 0x24110018
    ctx->pc = 0x2350b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 24));
label_2350b4:
    // 0x2350b4: 0x2918818
    ctx->pc = 0x2350b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2350b8:
    // 0x2350b8: 0x2111021
    ctx->pc = 0x2350b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2350bc:
    // 0x2350bc: 0x8c440010
    ctx->pc = 0x2350bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2350c0:
    // 0x2350c0: 0xc0b0ce8
label_2350c4:
    if (ctx->pc == 0x2350C4u) {
        ctx->pc = 0x2350C4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2350C8u;
        goto label_2350c8;
    }
    ctx->pc = 0x2350C0u;
    SET_GPR_U32(ctx, 31, 0x2350C8u);
    ctx->pc = 0x2350C4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350C8u; }
    }
    if (ctx->pc != 0x2350C8u) { return; }
    ctx->pc = 0x2350C8u;
label_2350c8:
    // 0x2350c8: 0x2111021
    ctx->pc = 0x2350c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_2350cc:
    // 0x2350cc: 0x8c440014
    ctx->pc = 0x2350ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2350d0:
    // 0x2350d0: 0xc0b0ce8
label_2350d4:
    if (ctx->pc == 0x2350D4u) {
        ctx->pc = 0x2350D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2350D8u;
        goto label_2350d8;
    }
    ctx->pc = 0x2350D0u;
    SET_GPR_U32(ctx, 31, 0x2350D8u);
    ctx->pc = 0x2350D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350D8u; }
    }
    if (ctx->pc != 0x2350D8u) { return; }
    ctx->pc = 0x2350D8u;
label_2350d8:
    // 0x2350d8: 0x3a0202d
    ctx->pc = 0x2350d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2350dc:
    // 0x2350dc: 0x3c05003a
    ctx->pc = 0x2350dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_2350e0:
    // 0x2350e0: 0xc0b6252
label_2350e4:
    if (ctx->pc == 0x2350E4u) {
        ctx->pc = 0x2350E4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31032));
        ctx->pc = 0x2350E8u;
        goto label_2350e8;
    }
    ctx->pc = 0x2350E0u;
    SET_GPR_U32(ctx, 31, 0x2350E8u);
    ctx->pc = 0x2350E4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31032));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2350E8u; }
    }
    if (ctx->pc != 0x2350E8u) { return; }
    ctx->pc = 0x2350E8u;
label_2350e8:
    // 0x2350e8: 0x3a0202d
    ctx->pc = 0x2350e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2350ec:
    // 0x2350ec: 0x282d
    ctx->pc = 0x2350ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2350f0:
    // 0x2350f0: 0x302d
    ctx->pc = 0x2350f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2350f4:
    // 0x2350f4: 0x382d
    ctx->pc = 0x2350f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2350f8:
    // 0x2350f8: 0xc0b1b56
label_2350fc:
    if (ctx->pc == 0x2350FCu) {
        ctx->pc = 0x2350FCu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x235100u;
        goto label_235100;
    }
    ctx->pc = 0x2350F8u;
    SET_GPR_U32(ctx, 31, 0x235100u);
    ctx->pc = 0x2350FCu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Sub_0x2c6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235100u; }
    }
    if (ctx->pc != 0x235100u) { return; }
    ctx->pc = 0x235100u;
label_235100:
    // 0x235100: 0x2301821
    ctx->pc = 0x235100u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_235104:
    // 0x235104: 0x8c640000
    ctx->pc = 0x235104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_235108:
    // 0x235108: 0x40282d
    ctx->pc = 0x235108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23510c:
    // 0x23510c: 0xc0b0ed6
label_235110:
    if (ctx->pc == 0x235110u) {
        ctx->pc = 0x235110u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235114u;
        goto label_235114;
    }
    ctx->pc = 0x23510Cu;
    SET_GPR_U32(ctx, 31, 0x235114u);
    ctx->pc = 0x235110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235114u; }
    }
    if (ctx->pc != 0x235114u) { return; }
    ctx->pc = 0x235114u;
label_235114:
    // 0x235114: 0x1e1080
    ctx->pc = 0x235114u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 30), 2));
label_235118:
    // 0x235118: 0x3c060032
    ctx->pc = 0x235118u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
label_23511c:
    // 0x23511c: 0x24c61428
    ctx->pc = 0x23511cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 5160));
label_235120:
    // 0x235120: 0x3a0202d
    ctx->pc = 0x235120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235124:
    // 0x235124: 0x3c05003a
    ctx->pc = 0x235124u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_235128:
    // 0x235128: 0x24a57950
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31056));
label_23512c:
    // 0x23512c: 0xc0b6252
label_235130:
    if (ctx->pc == 0x235130u) {
        ctx->pc = 0x235130u;
        SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->pc = 0x235134u;
        goto label_235134;
    }
    ctx->pc = 0x23512Cu;
    SET_GPR_U32(ctx, 31, 0x235134u);
    ctx->pc = 0x235130u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235134u; }
    }
    if (ctx->pc != 0x235134u) { return; }
    ctx->pc = 0x235134u;
label_235134:
    // 0x235134: 0x3a0202d
    ctx->pc = 0x235134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235138:
    // 0x235138: 0x282d
    ctx->pc = 0x235138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23513c:
    // 0x23513c: 0xc0b1ba8
label_235140:
    if (ctx->pc == 0x235140u) {
        ctx->pc = 0x235140u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x235144u;
        goto label_235144;
    }
    ctx->pc = 0x23513Cu;
    SET_GPR_U32(ctx, 31, 0x235144u);
    ctx->pc = 0x235140u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235144u; }
    }
    if (ctx->pc != 0x235144u) { return; }
    ctx->pc = 0x235144u;
label_235144:
    // 0x235144: 0x2118021
    ctx->pc = 0x235144u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_235148:
    // 0x235148: 0x8e040004
    ctx->pc = 0x235148u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23514c:
    // 0x23514c: 0x40282d
    ctx->pc = 0x23514cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235150:
    // 0x235150: 0xc0b0ed6
label_235154:
    if (ctx->pc == 0x235154u) {
        ctx->pc = 0x235154u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235158u;
        goto label_235158;
    }
    ctx->pc = 0x235150u;
    SET_GPR_U32(ctx, 31, 0x235158u);
    ctx->pc = 0x235154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235158u; }
    }
    if (ctx->pc != 0x235158u) { return; }
    ctx->pc = 0x235158u;
label_235158:
    // 0x235158: 0x3c020031
    ctx->pc = 0x235158u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_23515c:
    // 0x23515c: 0x8c420018
    ctx->pc = 0x23515cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_235160:
    // 0x235160: 0x30428000
    ctx->pc = 0x235160u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
label_235164:
    // 0x235164: 0x14400015
label_235168:
    if (ctx->pc == 0x235168u) {
        ctx->pc = 0x235168u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x23516Cu;
        goto label_23516c;
    }
    ctx->pc = 0x235164u;
    {
        const bool branch_taken_0x235164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x235168u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x235164) {
            ctx->pc = 0x2351BCu;
            goto label_2351bc;
        }
    }
    ctx->pc = 0x23516Cu;
label_23516c:
    // 0x23516c: 0x802d
    ctx->pc = 0x23516cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235170:
    // 0x235170: 0x3c020033
    ctx->pc = 0x235170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
label_235174:
    // 0x235174: 0x2452c968
    ctx->pc = 0x235174u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294953320));
label_235178:
    // 0x235178: 0x24020030
    ctx->pc = 0x235178u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
label_23517c:
    // 0x23517c: 0x2828818
    ctx->pc = 0x23517cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_235180:
    // 0x235180: 0x96a51a26
    ctx->pc = 0x235180u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6694)));
label_235184:
    // 0x235184: 0x0
    ctx->pc = 0x235184u;
    // NOP
label_235188:
    // 0x235188: 0x2052807
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 16) & 0x1F));
label_23518c:
    // 0x23518c: 0x38a50001
    ctx->pc = 0x23518cu;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 5), 1));
label_235190:
    // 0x235190: 0x101080
    ctx->pc = 0x235190u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_235194:
    // 0x235194: 0x511021
    ctx->pc = 0x235194u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_235198:
    // 0x235198: 0x521021
    ctx->pc = 0x235198u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_23519c:
    // 0x23519c: 0x8c440000
    ctx->pc = 0x23519cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2351a0:
    // 0x2351a0: 0xc0b0ce8
label_2351a4:
    if (ctx->pc == 0x2351A4u) {
        ctx->pc = 0x2351A4u;
        SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x2351A8u;
        goto label_2351a8;
    }
    ctx->pc = 0x2351A0u;
    SET_GPR_U32(ctx, 31, 0x2351A8u);
    ctx->pc = 0x2351A4u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2351A8u; }
    }
    if (ctx->pc != 0x2351A8u) { return; }
    ctx->pc = 0x2351A8u;
label_2351a8:
    // 0x2351a8: 0x26100001
    ctx->pc = 0x2351a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_2351ac:
    // 0x2351ac: 0x2a02000c
    ctx->pc = 0x2351acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 12));
label_2351b0:
    // 0x2351b0: 0x5440fff5
label_2351b4:
    if (ctx->pc == 0x2351B4u) {
        ctx->pc = 0x2351B4u;
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6694)));
        ctx->pc = 0x2351B8u;
        goto label_2351b8;
    }
    ctx->pc = 0x2351B0u;
    {
        const bool branch_taken_0x2351b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2351b0) {
            ctx->pc = 0x2351B4u;
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6694)));
            ctx->pc = 0x235188u;
            goto label_235188;
        }
    }
    ctx->pc = 0x2351B8u;
label_2351b8:
    // 0x2351b8: 0x3c020032
    ctx->pc = 0x2351b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2351bc:
    // 0x2351bc: 0x24030001
    ctx->pc = 0x2351bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2351c0:
    // 0x2351c0: 0x2831804
    ctx->pc = 0x2351c0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_2351c4:
    // 0x2351c4: 0x8c4207b4
    ctx->pc = 0x2351c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
label_2351c8:
    // 0x2351c8: 0x621824
    ctx->pc = 0x2351c8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2351cc:
    // 0x2351cc: 0x10600007
label_2351d0:
    if (ctx->pc == 0x2351D0u) {
        ctx->pc = 0x2351D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        ctx->pc = 0x2351D4u;
        goto label_2351d4;
    }
    ctx->pc = 0x2351CCu;
    {
        const bool branch_taken_0x2351cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2351D0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x2351cc) {
            ctx->pc = 0x2351ECu;
            goto label_2351ec;
        }
    }
    ctx->pc = 0x2351D4u;
label_2351d4:
    // 0x2351d4: 0x2463cb58
    ctx->pc = 0x2351d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953816));
label_2351d8:
    // 0x2351d8: 0x141080
    ctx->pc = 0x2351d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 20), 2));
label_2351dc:
    // 0x2351dc: 0x431021
    ctx->pc = 0x2351dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2351e0:
    // 0x2351e0: 0x8c440000
    ctx->pc = 0x2351e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2351e4:
    // 0x2351e4: 0xc0b0ce8
label_2351e8:
    if (ctx->pc == 0x2351E8u) {
        ctx->pc = 0x2351E8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2351ECu;
        goto label_2351ec;
    }
    ctx->pc = 0x2351E4u;
    SET_GPR_U32(ctx, 31, 0x2351ECu);
    ctx->pc = 0x2351E8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2351ECu; }
    }
    if (ctx->pc != 0x2351ECu) { return; }
    ctx->pc = 0x2351ECu;
label_2351ec:
    // 0x2351ec: 0x3c04003a
    ctx->pc = 0x2351ecu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2351f0:
    // 0x2351f0: 0x24847960
    ctx->pc = 0x2351f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 31072));
label_2351f4:
    // 0x2351f4: 0x282d
    ctx->pc = 0x2351f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2351f8:
    // 0x2351f8: 0xc0b1ba8
label_2351fc:
    if (ctx->pc == 0x2351FCu) {
        ctx->pc = 0x2351FCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235200u;
        goto label_235200;
    }
    ctx->pc = 0x2351F8u;
    SET_GPR_U32(ctx, 31, 0x235200u);
    ctx->pc = 0x2351FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235200u; }
    }
    if (ctx->pc != 0x235200u) { return; }
    ctx->pc = 0x235200u;
label_235200:
    // 0x235200: 0x3c04003c
    ctx->pc = 0x235200u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_235204:
    // 0x235204: 0x24841b30
    ctx->pc = 0x235204u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6960));
label_235208:
    // 0x235208: 0x141880
    ctx->pc = 0x235208u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 20), 2));
label_23520c:
    // 0x23520c: 0x641821
    ctx->pc = 0x23520cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_235210:
    // 0x235210: 0x8c640000
    ctx->pc = 0x235210u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_235214:
    // 0x235214: 0x40282d
    ctx->pc = 0x235214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235218:
    // 0x235218: 0xc0b0ed6
label_23521c:
    if (ctx->pc == 0x23521Cu) {
        ctx->pc = 0x23521Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235220u;
        goto label_235220;
    }
    ctx->pc = 0x235218u;
    SET_GPR_U32(ctx, 31, 0x235220u);
    ctx->pc = 0x23521Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3B58u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetTex_0x2c3b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235220u; }
    }
    if (ctx->pc != 0x235220u) { return; }
    ctx->pc = 0x235220u;
label_235220:
    // 0x235220: 0x3c020031
    ctx->pc = 0x235220u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_235224:
    // 0x235224: 0x8c430018
    ctx->pc = 0x235224u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_235228:
    // 0x235228: 0x2402400b
    ctx->pc = 0x235228u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
label_23522c:
    // 0x23522c: 0x10620003
label_235230:
    if (ctx->pc == 0x235230u) {
        ctx->pc = 0x235230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        ctx->pc = 0x235234u;
        goto label_235234;
    }
    ctx->pc = 0x23522Cu;
    {
        const bool branch_taken_0x23522c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x235230u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        if (branch_taken_0x23522c) {
            ctx->pc = 0x23523Cu;
            goto label_23523c;
        }
    }
    ctx->pc = 0x235234u;
label_235234:
    // 0x235234: 0x14620013
label_235238:
    if (ctx->pc == 0x235238u) {
        ctx->pc = 0x235238u;
        SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
        ctx->pc = 0x23523Cu;
        goto label_23523c;
    }
    ctx->pc = 0x235234u;
    {
        const bool branch_taken_0x235234 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x235238u;
        SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
        if (branch_taken_0x235234) {
            ctx->pc = 0x235284u;
            goto label_235284;
        }
    }
    ctx->pc = 0x23523Cu;
label_23523c:
    // 0x23523c: 0x3c110033
    ctx->pc = 0x23523cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)51 << 16));
label_235240:
    // 0x235240: 0x2631c908
    ctx->pc = 0x235240u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294953224));
label_235244:
    // 0x235244: 0x24100018
    ctx->pc = 0x235244u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 24));
label_235248:
    // 0x235248: 0x2908018
    ctx->pc = 0x235248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_23524c:
    // 0x23524c: 0x2111021
    ctx->pc = 0x23524cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_235250:
    // 0x235250: 0x8c440000
    ctx->pc = 0x235250u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_235254:
    // 0x235254: 0x3c05ffff
    ctx->pc = 0x235254u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_235258:
    // 0x235258: 0x34a5ffff
    ctx->pc = 0x235258u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
label_23525c:
    // 0x23525c: 0xc0b0caa
label_235260:
    if (ctx->pc == 0x235260u) {
        ctx->pc = 0x235260u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16400));
        ctx->pc = 0x235264u;
        goto label_235264;
    }
    ctx->pc = 0x23525Cu;
    SET_GPR_U32(ctx, 31, 0x235264u);
    ctx->pc = 0x235260u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16400));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235264u; }
    }
    if (ctx->pc != 0x235264u) { return; }
    ctx->pc = 0x235264u;
label_235264:
    // 0x235264: 0x2308821
    ctx->pc = 0x235264u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_235268:
    // 0x235268: 0x8e240008
    ctx->pc = 0x235268u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23526c:
    // 0x23526c: 0x3c05ffff
    ctx->pc = 0x23526cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_235270:
    // 0x235270: 0x34a5ffff
    ctx->pc = 0x235270u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
label_235274:
    // 0x235274: 0xc0b0caa
label_235278:
    if (ctx->pc == 0x235278u) {
        ctx->pc = 0x235278u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16400));
        ctx->pc = 0x23527Cu;
        goto label_23527c;
    }
    ctx->pc = 0x235274u;
    SET_GPR_U32(ctx, 31, 0x23527Cu);
    ctx->pc = 0x235278u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16400));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23527Cu; }
    }
    if (ctx->pc != 0x23527Cu) { return; }
    ctx->pc = 0x23527Cu;
label_23527c:
    // 0x23527c: 0x10000011
label_235280:
    if (ctx->pc == 0x235280u) {
        ctx->pc = 0x235280u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x235284u;
        goto label_235284;
    }
    ctx->pc = 0x23527Cu;
    {
        const bool branch_taken_0x23527c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x235280u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        if (branch_taken_0x23527c) {
            ctx->pc = 0x2352C4u;
            goto label_2352c4;
        }
    }
    ctx->pc = 0x235284u;
label_235284:
    // 0x235284: 0x2631c908
    ctx->pc = 0x235284u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294953224));
label_235288:
    // 0x235288: 0x24100018
    ctx->pc = 0x235288u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 24));
label_23528c:
    // 0x23528c: 0x2908018
    ctx->pc = 0x23528cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_235290:
    // 0x235290: 0x2111021
    ctx->pc = 0x235290u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_235294:
    // 0x235294: 0x8c440000
    ctx->pc = 0x235294u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_235298:
    // 0x235298: 0x3c05ffff
    ctx->pc = 0x235298u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_23529c:
    // 0x23529c: 0x34a5bfef
    ctx->pc = 0x23529cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 49135));
label_2352a0:
    // 0x2352a0: 0xc0b0caa
label_2352a4:
    if (ctx->pc == 0x2352A4u) {
        ctx->pc = 0x2352A4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2352A8u;
        goto label_2352a8;
    }
    ctx->pc = 0x2352A0u;
    SET_GPR_U32(ctx, 31, 0x2352A8u);
    ctx->pc = 0x2352A4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2352A8u; }
    }
    if (ctx->pc != 0x2352A8u) { return; }
    ctx->pc = 0x2352A8u;
label_2352a8:
    // 0x2352a8: 0x2308821
    ctx->pc = 0x2352a8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2352ac:
    // 0x2352ac: 0x8e240008
    ctx->pc = 0x2352acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2352b0:
    // 0x2352b0: 0x3c05ffff
    ctx->pc = 0x2352b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_2352b4:
    // 0x2352b4: 0x34a5bfef
    ctx->pc = 0x2352b4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 49135));
label_2352b8:
    // 0x2352b8: 0xc0b0caa
label_2352bc:
    if (ctx->pc == 0x2352BCu) {
        ctx->pc = 0x2352BCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2352C0u;
        goto label_2352c0;
    }
    ctx->pc = 0x2352B8u;
    SET_GPR_U32(ctx, 31, 0x2352C0u);
    ctx->pc = 0x2352BCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C32A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetFlags_0x2c32a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2352C0u; }
    }
    if (ctx->pc != 0x2352C0u) { return; }
    ctx->pc = 0x2352C0u;
label_2352c0:
    // 0x2352c0: 0xdfbf00b0
    ctx->pc = 0x2352c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2352c4:
    // 0x2352c4: 0xdfbe00a0
    ctx->pc = 0x2352c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2352c8:
    // 0x2352c8: 0xdfb70090
    ctx->pc = 0x2352c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2352cc:
    // 0x2352cc: 0xdfb60080
    ctx->pc = 0x2352ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2352d0:
    // 0x2352d0: 0xdfb50070
    ctx->pc = 0x2352d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2352d4:
    // 0x2352d4: 0xdfb40060
    ctx->pc = 0x2352d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2352d8:
    // 0x2352d8: 0xdfb30050
    ctx->pc = 0x2352d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2352dc:
    // 0x2352dc: 0xdfb20040
    ctx->pc = 0x2352dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2352e0:
    // 0x2352e0: 0xdfb10030
    ctx->pc = 0x2352e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2352e4:
    // 0x2352e4: 0xdfb00020
    ctx->pc = 0x2352e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2352e8:
    // 0x2352e8: 0x3e00008
label_2352ec:
    if (ctx->pc == 0x2352ECu) {
        ctx->pc = 0x2352ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2352F0u;
        goto label_fallthrough_0x2352e8;
    }
    ctx->pc = 0x2352E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2352ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234E08u: goto label_234e08;
            case 0x234E0Cu: goto label_234e0c;
            case 0x234E10u: goto label_234e10;
            case 0x234E14u: goto label_234e14;
            case 0x234E18u: goto label_234e18;
            case 0x234E1Cu: goto label_234e1c;
            case 0x234E20u: goto label_234e20;
            case 0x234E24u: goto label_234e24;
            case 0x234E28u: goto label_234e28;
            case 0x234E2Cu: goto label_234e2c;
            case 0x234E30u: goto label_234e30;
            case 0x234E34u: goto label_234e34;
            case 0x234E38u: goto label_234e38;
            case 0x234E3Cu: goto label_234e3c;
            case 0x234E40u: goto label_234e40;
            case 0x234E44u: goto label_234e44;
            case 0x234E48u: goto label_234e48;
            case 0x234E4Cu: goto label_234e4c;
            case 0x234E50u: goto label_234e50;
            case 0x234E54u: goto label_234e54;
            case 0x234E58u: goto label_234e58;
            case 0x234E5Cu: goto label_234e5c;
            case 0x234E60u: goto label_234e60;
            case 0x234E64u: goto label_234e64;
            case 0x234E68u: goto label_234e68;
            case 0x234E6Cu: goto label_234e6c;
            case 0x234E70u: goto label_234e70;
            case 0x234E74u: goto label_234e74;
            case 0x234E78u: goto label_234e78;
            case 0x234E7Cu: goto label_234e7c;
            case 0x234E80u: goto label_234e80;
            case 0x234E84u: goto label_234e84;
            case 0x234E88u: goto label_234e88;
            case 0x234E8Cu: goto label_234e8c;
            case 0x234E90u: goto label_234e90;
            case 0x234E94u: goto label_234e94;
            case 0x234E98u: goto label_234e98;
            case 0x234E9Cu: goto label_234e9c;
            case 0x234EA0u: goto label_234ea0;
            case 0x234EA4u: goto label_234ea4;
            case 0x234EA8u: goto label_234ea8;
            case 0x234EACu: goto label_234eac;
            case 0x234EB0u: goto label_234eb0;
            case 0x234EB4u: goto label_234eb4;
            case 0x234EB8u: goto label_234eb8;
            case 0x234EBCu: goto label_234ebc;
            case 0x234EC0u: goto label_234ec0;
            case 0x234EC4u: goto label_234ec4;
            case 0x234EC8u: goto label_234ec8;
            case 0x234ECCu: goto label_234ecc;
            case 0x234ED0u: goto label_234ed0;
            case 0x234ED4u: goto label_234ed4;
            case 0x234ED8u: goto label_234ed8;
            case 0x234EDCu: goto label_234edc;
            case 0x234EE0u: goto label_234ee0;
            case 0x234EE4u: goto label_234ee4;
            case 0x234EE8u: goto label_234ee8;
            case 0x234EECu: goto label_234eec;
            case 0x234EF0u: goto label_234ef0;
            case 0x234EF4u: goto label_234ef4;
            case 0x234EF8u: goto label_234ef8;
            case 0x234EFCu: goto label_234efc;
            case 0x234F00u: goto label_234f00;
            case 0x234F04u: goto label_234f04;
            case 0x234F08u: goto label_234f08;
            case 0x234F0Cu: goto label_234f0c;
            case 0x234F10u: goto label_234f10;
            case 0x234F14u: goto label_234f14;
            case 0x234F18u: goto label_234f18;
            case 0x234F1Cu: goto label_234f1c;
            case 0x234F20u: goto label_234f20;
            case 0x234F24u: goto label_234f24;
            case 0x234F28u: goto label_234f28;
            case 0x234F2Cu: goto label_234f2c;
            case 0x234F30u: goto label_234f30;
            case 0x234F34u: goto label_234f34;
            case 0x234F38u: goto label_234f38;
            case 0x234F3Cu: goto label_234f3c;
            case 0x234F40u: goto label_234f40;
            case 0x234F44u: goto label_234f44;
            case 0x234F48u: goto label_234f48;
            case 0x234F4Cu: goto label_234f4c;
            case 0x234F50u: goto label_234f50;
            case 0x234F54u: goto label_234f54;
            case 0x234F58u: goto label_234f58;
            case 0x234F5Cu: goto label_234f5c;
            case 0x234F60u: goto label_234f60;
            case 0x234F64u: goto label_234f64;
            case 0x234F68u: goto label_234f68;
            case 0x234F6Cu: goto label_234f6c;
            case 0x234F70u: goto label_234f70;
            case 0x234F74u: goto label_234f74;
            case 0x234F78u: goto label_234f78;
            case 0x234F7Cu: goto label_234f7c;
            case 0x234F80u: goto label_234f80;
            case 0x234F84u: goto label_234f84;
            case 0x234F88u: goto label_234f88;
            case 0x234F8Cu: goto label_234f8c;
            case 0x234F90u: goto label_234f90;
            case 0x234F94u: goto label_234f94;
            case 0x234F98u: goto label_234f98;
            case 0x234F9Cu: goto label_234f9c;
            case 0x234FA0u: goto label_234fa0;
            case 0x234FA4u: goto label_234fa4;
            case 0x234FA8u: goto label_234fa8;
            case 0x234FACu: goto label_234fac;
            case 0x234FB0u: goto label_234fb0;
            case 0x234FB4u: goto label_234fb4;
            case 0x234FB8u: goto label_234fb8;
            case 0x234FBCu: goto label_234fbc;
            case 0x234FC0u: goto label_234fc0;
            case 0x234FC4u: goto label_234fc4;
            case 0x234FC8u: goto label_234fc8;
            case 0x234FCCu: goto label_234fcc;
            case 0x234FD0u: goto label_234fd0;
            case 0x234FD4u: goto label_234fd4;
            case 0x234FD8u: goto label_234fd8;
            case 0x234FDCu: goto label_234fdc;
            case 0x234FE0u: goto label_234fe0;
            case 0x234FE4u: goto label_234fe4;
            case 0x234FE8u: goto label_234fe8;
            case 0x234FECu: goto label_234fec;
            case 0x234FF0u: goto label_234ff0;
            case 0x234FF4u: goto label_234ff4;
            case 0x234FF8u: goto label_234ff8;
            case 0x234FFCu: goto label_234ffc;
            case 0x235000u: goto label_235000;
            case 0x235004u: goto label_235004;
            case 0x235008u: goto label_235008;
            case 0x23500Cu: goto label_23500c;
            case 0x235010u: goto label_235010;
            case 0x235014u: goto label_235014;
            case 0x235018u: goto label_235018;
            case 0x23501Cu: goto label_23501c;
            case 0x235020u: goto label_235020;
            case 0x235024u: goto label_235024;
            case 0x235028u: goto label_235028;
            case 0x23502Cu: goto label_23502c;
            case 0x235030u: goto label_235030;
            case 0x235034u: goto label_235034;
            case 0x235038u: goto label_235038;
            case 0x23503Cu: goto label_23503c;
            case 0x235040u: goto label_235040;
            case 0x235044u: goto label_235044;
            case 0x235048u: goto label_235048;
            case 0x23504Cu: goto label_23504c;
            case 0x235050u: goto label_235050;
            case 0x235054u: goto label_235054;
            case 0x235058u: goto label_235058;
            case 0x23505Cu: goto label_23505c;
            case 0x235060u: goto label_235060;
            case 0x235064u: goto label_235064;
            case 0x235068u: goto label_235068;
            case 0x23506Cu: goto label_23506c;
            case 0x235070u: goto label_235070;
            case 0x235074u: goto label_235074;
            case 0x235078u: goto label_235078;
            case 0x23507Cu: goto label_23507c;
            case 0x235080u: goto label_235080;
            case 0x235084u: goto label_235084;
            case 0x235088u: goto label_235088;
            case 0x23508Cu: goto label_23508c;
            case 0x235090u: goto label_235090;
            case 0x235094u: goto label_235094;
            case 0x235098u: goto label_235098;
            case 0x23509Cu: goto label_23509c;
            case 0x2350A0u: goto label_2350a0;
            case 0x2350A4u: goto label_2350a4;
            case 0x2350A8u: goto label_2350a8;
            case 0x2350ACu: goto label_2350ac;
            case 0x2350B0u: goto label_2350b0;
            case 0x2350B4u: goto label_2350b4;
            case 0x2350B8u: goto label_2350b8;
            case 0x2350BCu: goto label_2350bc;
            case 0x2350C0u: goto label_2350c0;
            case 0x2350C4u: goto label_2350c4;
            case 0x2350C8u: goto label_2350c8;
            case 0x2350CCu: goto label_2350cc;
            case 0x2350D0u: goto label_2350d0;
            case 0x2350D4u: goto label_2350d4;
            case 0x2350D8u: goto label_2350d8;
            case 0x2350DCu: goto label_2350dc;
            case 0x2350E0u: goto label_2350e0;
            case 0x2350E4u: goto label_2350e4;
            case 0x2350E8u: goto label_2350e8;
            case 0x2350ECu: goto label_2350ec;
            case 0x2350F0u: goto label_2350f0;
            case 0x2350F4u: goto label_2350f4;
            case 0x2350F8u: goto label_2350f8;
            case 0x2350FCu: goto label_2350fc;
            case 0x235100u: goto label_235100;
            case 0x235104u: goto label_235104;
            case 0x235108u: goto label_235108;
            case 0x23510Cu: goto label_23510c;
            case 0x235110u: goto label_235110;
            case 0x235114u: goto label_235114;
            case 0x235118u: goto label_235118;
            case 0x23511Cu: goto label_23511c;
            case 0x235120u: goto label_235120;
            case 0x235124u: goto label_235124;
            case 0x235128u: goto label_235128;
            case 0x23512Cu: goto label_23512c;
            case 0x235130u: goto label_235130;
            case 0x235134u: goto label_235134;
            case 0x235138u: goto label_235138;
            case 0x23513Cu: goto label_23513c;
            case 0x235140u: goto label_235140;
            case 0x235144u: goto label_235144;
            case 0x235148u: goto label_235148;
            case 0x23514Cu: goto label_23514c;
            case 0x235150u: goto label_235150;
            case 0x235154u: goto label_235154;
            case 0x235158u: goto label_235158;
            case 0x23515Cu: goto label_23515c;
            case 0x235160u: goto label_235160;
            case 0x235164u: goto label_235164;
            case 0x235168u: goto label_235168;
            case 0x23516Cu: goto label_23516c;
            case 0x235170u: goto label_235170;
            case 0x235174u: goto label_235174;
            case 0x235178u: goto label_235178;
            case 0x23517Cu: goto label_23517c;
            case 0x235180u: goto label_235180;
            case 0x235184u: goto label_235184;
            case 0x235188u: goto label_235188;
            case 0x23518Cu: goto label_23518c;
            case 0x235190u: goto label_235190;
            case 0x235194u: goto label_235194;
            case 0x235198u: goto label_235198;
            case 0x23519Cu: goto label_23519c;
            case 0x2351A0u: goto label_2351a0;
            case 0x2351A4u: goto label_2351a4;
            case 0x2351A8u: goto label_2351a8;
            case 0x2351ACu: goto label_2351ac;
            case 0x2351B0u: goto label_2351b0;
            case 0x2351B4u: goto label_2351b4;
            case 0x2351B8u: goto label_2351b8;
            case 0x2351BCu: goto label_2351bc;
            case 0x2351C0u: goto label_2351c0;
            case 0x2351C4u: goto label_2351c4;
            case 0x2351C8u: goto label_2351c8;
            case 0x2351CCu: goto label_2351cc;
            case 0x2351D0u: goto label_2351d0;
            case 0x2351D4u: goto label_2351d4;
            case 0x2351D8u: goto label_2351d8;
            case 0x2351DCu: goto label_2351dc;
            case 0x2351E0u: goto label_2351e0;
            case 0x2351E4u: goto label_2351e4;
            case 0x2351E8u: goto label_2351e8;
            case 0x2351ECu: goto label_2351ec;
            case 0x2351F0u: goto label_2351f0;
            case 0x2351F4u: goto label_2351f4;
            case 0x2351F8u: goto label_2351f8;
            case 0x2351FCu: goto label_2351fc;
            case 0x235200u: goto label_235200;
            case 0x235204u: goto label_235204;
            case 0x235208u: goto label_235208;
            case 0x23520Cu: goto label_23520c;
            case 0x235210u: goto label_235210;
            case 0x235214u: goto label_235214;
            case 0x235218u: goto label_235218;
            case 0x23521Cu: goto label_23521c;
            case 0x235220u: goto label_235220;
            case 0x235224u: goto label_235224;
            case 0x235228u: goto label_235228;
            case 0x23522Cu: goto label_23522c;
            case 0x235230u: goto label_235230;
            case 0x235234u: goto label_235234;
            case 0x235238u: goto label_235238;
            case 0x23523Cu: goto label_23523c;
            case 0x235240u: goto label_235240;
            case 0x235244u: goto label_235244;
            case 0x235248u: goto label_235248;
            case 0x23524Cu: goto label_23524c;
            case 0x235250u: goto label_235250;
            case 0x235254u: goto label_235254;
            case 0x235258u: goto label_235258;
            case 0x23525Cu: goto label_23525c;
            case 0x235260u: goto label_235260;
            case 0x235264u: goto label_235264;
            case 0x235268u: goto label_235268;
            case 0x23526Cu: goto label_23526c;
            case 0x235270u: goto label_235270;
            case 0x235274u: goto label_235274;
            case 0x235278u: goto label_235278;
            case 0x23527Cu: goto label_23527c;
            case 0x235280u: goto label_235280;
            case 0x235284u: goto label_235284;
            case 0x235288u: goto label_235288;
            case 0x23528Cu: goto label_23528c;
            case 0x235290u: goto label_235290;
            case 0x235294u: goto label_235294;
            case 0x235298u: goto label_235298;
            case 0x23529Cu: goto label_23529c;
            case 0x2352A0u: goto label_2352a0;
            case 0x2352A4u: goto label_2352a4;
            case 0x2352A8u: goto label_2352a8;
            case 0x2352ACu: goto label_2352ac;
            case 0x2352B0u: goto label_2352b0;
            case 0x2352B4u: goto label_2352b4;
            case 0x2352B8u: goto label_2352b8;
            case 0x2352BCu: goto label_2352bc;
            case 0x2352C0u: goto label_2352c0;
            case 0x2352C4u: goto label_2352c4;
            case 0x2352C8u: goto label_2352c8;
            case 0x2352CCu: goto label_2352cc;
            case 0x2352D0u: goto label_2352d0;
            case 0x2352D4u: goto label_2352d4;
            case 0x2352D8u: goto label_2352d8;
            case 0x2352DCu: goto label_2352dc;
            case 0x2352E0u: goto label_2352e0;
            case 0x2352E4u: goto label_2352e4;
            case 0x2352E8u: goto label_2352e8;
            case 0x2352ECu: goto label_2352ec;
            default: break;
        }
        return;
    }
label_fallthrough_0x2352e8:
    ctx->pc = 0x2352F0u;
}
