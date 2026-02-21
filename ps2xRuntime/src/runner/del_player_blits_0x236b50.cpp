#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: del_player_blits
// Address: 0x236b50 - 0x236cc8
void del_player_blits_0x236b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236b50u;

    // 0x236b50: 0x27bdffb0
    ctx->pc = 0x236b50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x236b54: 0xffbf0040
    ctx->pc = 0x236b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x236b58: 0xffb30030
    ctx->pc = 0x236b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x236b5c: 0xffb20020
    ctx->pc = 0x236b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236b60: 0xffb10010
    ctx->pc = 0x236b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x236b64: 0xffb00000
    ctx->pc = 0x236b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236b68: 0x80902d
    ctx->pc = 0x236b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b6c: 0x802d
    ctx->pc = 0x236b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236b70: 0x3c020033
    ctx->pc = 0x236b70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236b74: 0x2453c908
    ctx->pc = 0x236b74u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953224));
    // 0x236b78: 0x24020018
    ctx->pc = 0x236b78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
    // 0x236b7c: 0x2428818
    ctx->pc = 0x236b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236b80: 0x101080
    ctx->pc = 0x236b80u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x236b84: 0x0
    ctx->pc = 0x236b84u;
    // NOP
label_236b88:
    // 0x236b88: 0x511021
    ctx->pc = 0x236b88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x236b8c: 0x531021
    ctx->pc = 0x236b8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x236b90: 0x8c440000
    ctx->pc = 0x236b90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236b94: 0xc0b0ce8
    ctx->pc = 0x236B94u;
    SET_GPR_U32(ctx, 31, 0x236B9Cu);
    ctx->pc = 0x236B98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236B9Cu; }
    }
    if (ctx->pc != 0x236B9Cu) { return; }
    ctx->pc = 0x236B9Cu;
    // 0x236b9c: 0x26100001
    ctx->pc = 0x236b9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x236ba0: 0x2a020006
    ctx->pc = 0x236ba0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 6));
    // 0x236ba4: 0x1440fff8
    ctx->pc = 0x236BA4u;
    {
        const bool branch_taken_0x236ba4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236BA8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x236ba4) {
            ctx->pc = 0x236B88u;
            goto label_236b88;
        }
    }
    ctx->pc = 0x236BACu;
    // 0x236bac: 0x802d
    ctx->pc = 0x236bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bb0: 0x3c020033
    ctx->pc = 0x236bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236bb4: 0x2453c968
    ctx->pc = 0x236bb4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953320));
    // 0x236bb8: 0x24020030
    ctx->pc = 0x236bb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x236bbc: 0x2428818
    ctx->pc = 0x236bbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236bc0: 0x101080
    ctx->pc = 0x236bc0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x236bc4: 0x0
    ctx->pc = 0x236bc4u;
    // NOP
label_236bc8:
    // 0x236bc8: 0x511021
    ctx->pc = 0x236bc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x236bcc: 0x531021
    ctx->pc = 0x236bccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x236bd0: 0x8c440000
    ctx->pc = 0x236bd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236bd4: 0xc0b0ce8
    ctx->pc = 0x236BD4u;
    SET_GPR_U32(ctx, 31, 0x236BDCu);
    ctx->pc = 0x236BD8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236BDCu; }
    }
    if (ctx->pc != 0x236BDCu) { return; }
    ctx->pc = 0x236BDCu;
    // 0x236bdc: 0x26100001
    ctx->pc = 0x236bdcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x236be0: 0x2a02000c
    ctx->pc = 0x236be0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 12));
    // 0x236be4: 0x1440fff8
    ctx->pc = 0x236BE4u;
    {
        const bool branch_taken_0x236be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236BE8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x236be4) {
            ctx->pc = 0x236BC8u;
            goto label_236bc8;
        }
    }
    ctx->pc = 0x236BECu;
    // 0x236bec: 0x802d
    ctx->pc = 0x236becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236bf0: 0x3c020033
    ctx->pc = 0x236bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236bf4: 0x2453ca28
    ctx->pc = 0x236bf4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953512));
    // 0x236bf8: 0x128940
    ctx->pc = 0x236bf8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 5));
    // 0x236bfc: 0x101080
    ctx->pc = 0x236bfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_236c00:
    // 0x236c00: 0x511021
    ctx->pc = 0x236c00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x236c04: 0x531021
    ctx->pc = 0x236c04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x236c08: 0x8c440000
    ctx->pc = 0x236c08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c0c: 0xc0b0ce8
    ctx->pc = 0x236C0Cu;
    SET_GPR_U32(ctx, 31, 0x236C14u);
    ctx->pc = 0x236C10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C14u; }
    }
    if (ctx->pc != 0x236C14u) { return; }
    ctx->pc = 0x236C14u;
    // 0x236c14: 0x26100001
    ctx->pc = 0x236c14u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x236c18: 0x2a020008
    ctx->pc = 0x236c18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x236c1c: 0x1440fff8
    ctx->pc = 0x236C1Cu;
    {
        const bool branch_taken_0x236c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236C20u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x236c1c) {
            ctx->pc = 0x236C00u;
            goto label_236c00;
        }
    }
    ctx->pc = 0x236C24u;
    // 0x236c24: 0x802d
    ctx->pc = 0x236c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236c28: 0x3c020033
    ctx->pc = 0x236c28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236c2c: 0x2453caa8
    ctx->pc = 0x236c2cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294953640));
    // 0x236c30: 0x128900
    ctx->pc = 0x236c30u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 4));
    // 0x236c34: 0x101080
    ctx->pc = 0x236c34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_236c38:
    // 0x236c38: 0x511021
    ctx->pc = 0x236c38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x236c3c: 0x531021
    ctx->pc = 0x236c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x236c40: 0x8c440000
    ctx->pc = 0x236c40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c44: 0xc0b0ce8
    ctx->pc = 0x236C44u;
    SET_GPR_U32(ctx, 31, 0x236C4Cu);
    ctx->pc = 0x236C48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C4Cu; }
    }
    if (ctx->pc != 0x236C4Cu) { return; }
    ctx->pc = 0x236C4Cu;
    // 0x236c4c: 0x26100001
    ctx->pc = 0x236c4cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x236c50: 0x2a020004
    ctx->pc = 0x236c50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x236c54: 0x1440fff8
    ctx->pc = 0x236C54u;
    {
        const bool branch_taken_0x236c54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236C58u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x236c54) {
            ctx->pc = 0x236C38u;
            goto label_236c38;
        }
    }
    ctx->pc = 0x236C5Cu;
    // 0x236c5c: 0x3c02003c
    ctx->pc = 0x236c5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x236c60: 0x24421b20
    ctx->pc = 0x236c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6944));
    // 0x236c64: 0x128080
    ctx->pc = 0x236c64u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
    // 0x236c68: 0x2021021
    ctx->pc = 0x236c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x236c6c: 0x8c440000
    ctx->pc = 0x236c6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c70: 0xc0b0ce8
    ctx->pc = 0x236C70u;
    SET_GPR_U32(ctx, 31, 0x236C78u);
    ctx->pc = 0x236C74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C78u; }
    }
    if (ctx->pc != 0x236C78u) { return; }
    ctx->pc = 0x236C78u;
    // 0x236c78: 0x3c02003c
    ctx->pc = 0x236c78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x236c7c: 0x24421b30
    ctx->pc = 0x236c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6960));
    // 0x236c80: 0x2021021
    ctx->pc = 0x236c80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x236c84: 0x8c440000
    ctx->pc = 0x236c84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x236c88: 0xc0b0ce8
    ctx->pc = 0x236C88u;
    SET_GPR_U32(ctx, 31, 0x236C90u);
    ctx->pc = 0x236C8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236C90u; }
    }
    if (ctx->pc != 0x236C90u) { return; }
    ctx->pc = 0x236C90u;
    // 0x236c90: 0x3c020033
    ctx->pc = 0x236c90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236c94: 0x2442cb58
    ctx->pc = 0x236c94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953816));
    // 0x236c98: 0x2028021
    ctx->pc = 0x236c98u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x236c9c: 0x8e040000
    ctx->pc = 0x236c9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x236ca0: 0xc0b0ce8
    ctx->pc = 0x236CA0u;
    SET_GPR_U32(ctx, 31, 0x236CA8u);
    ctx->pc = 0x236CA4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236CA8u; }
    }
    if (ctx->pc != 0x236CA8u) { return; }
    ctx->pc = 0x236CA8u;
    // 0x236ca8: 0x240202d
    ctx->pc = 0x236ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236cac: 0xdfbf0040
    ctx->pc = 0x236cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236cb0: 0xdfb30030
    ctx->pc = 0x236cb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236cb4: 0xdfb20020
    ctx->pc = 0x236cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236cb8: 0xdfb10010
    ctx->pc = 0x236cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236cbc: 0xdfb00000
    ctx->pc = 0x236cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236cc0: 0x808db32
    ctx->pc = 0x236CC0u;
    ctx->pc = 0x236CC4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x236CC8u;
    del_item_blits_0x236cc8(rdram, ctx, runtime); return;
    ctx->pc = 0x236CC8u;
}
