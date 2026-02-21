#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: showText
// Address: 0x2bbc30 - 0x2bbcf8
void showText_0x2bbc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bbc30u;

    // 0x2bbc30: 0x27bdffa0
    ctx->pc = 0x2bbc30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bbc34: 0xffbf0050
    ctx->pc = 0x2bbc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2bbc38: 0xffb40040
    ctx->pc = 0x2bbc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bbc3c: 0xffb30030
    ctx->pc = 0x2bbc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bbc40: 0xffb20020
    ctx->pc = 0x2bbc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bbc44: 0xffb10010
    ctx->pc = 0x2bbc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbc48: 0xffb00000
    ctx->pc = 0x2bbc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbc4c: 0xa0882d
    ctx->pc = 0x2bbc4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc50: 0x16200003
    ctx->pc = 0x2BBC50u;
    {
        const bool branch_taken_0x2bbc50 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x2BBC54u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc50) {
            ctx->pc = 0x2BBC60u;
            goto label_2bbc60;
        }
    }
    ctx->pc = 0x2BBC58u;
    // 0x2bbc58: 0x1000001f
    ctx->pc = 0x2BBC58u;
    {
        const bool branch_taken_0x2bbc58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBC5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc58) {
            ctx->pc = 0x2BBCD8u;
            goto label_2bbcd8;
        }
    }
    ctx->pc = 0x2BBC60u;
label_2bbc60:
    // 0x2bbc60: 0x220202d
    ctx->pc = 0x2bbc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc64: 0xc0ad05e
    ctx->pc = 0x2BBC64u;
    SET_GPR_U32(ctx, 31, 0x2BBC6Cu);
    ctx->pc = 0x2BBC68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC6Cu; }
    }
    if (ctx->pc != 0x2BBC6Cu) { return; }
    ctx->pc = 0x2BBC6Cu;
    // 0x2bbc6c: 0x40802d
    ctx->pc = 0x2bbc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc70: 0x12000011
    ctx->pc = 0x2BBC70u;
    {
        const bool branch_taken_0x2bbc70 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBC74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 37));
        if (branch_taken_0x2bbc70) {
            ctx->pc = 0x2BBCB8u;
            goto label_2bbcb8;
        }
    }
    ctx->pc = 0x2BBC78u;
    // 0x2bbc78: 0x82030001
    ctx->pc = 0x2bbc78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2bbc7c: 0x1462000a
    ctx->pc = 0x2BBC7Cu;
    {
        const bool branch_taken_0x2bbc7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2BBC80u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2bbc7c) {
            ctx->pc = 0x2BBCA8u;
            goto label_2bbca8;
        }
    }
    ctx->pc = 0x2BBC84u;
    // 0x2bbc84: 0x24120025
    ctx->pc = 0x2bbc84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 37));
label_2bbc88:
    // 0x2bbc88: 0xc0ad05e
    ctx->pc = 0x2BBC88u;
    SET_GPR_U32(ctx, 31, 0x2BBC90u);
    ctx->pc = 0x2BBC8Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 37));
    ctx->pc = 0x2B4178u;
    {
        const uint32_t __entryPc = ctx->pc;
        mystrchr_0x2b4178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBC90u; }
    }
    if (ctx->pc != 0x2BBC90u) { return; }
    ctx->pc = 0x2BBC90u;
    // 0x2bbc90: 0x40802d
    ctx->pc = 0x2bbc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbc94: 0x12000009
    ctx->pc = 0x2BBC94u;
    {
        const bool branch_taken_0x2bbc94 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBC98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbc94) {
            ctx->pc = 0x2BBCBCu;
            goto label_2bbcbc;
        }
    }
    ctx->pc = 0x2BBC9Cu;
    // 0x2bbc9c: 0x82020001
    ctx->pc = 0x2bbc9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2bbca0: 0x1052fff9
    ctx->pc = 0x2BBCA0u;
    {
        const bool branch_taken_0x2bbca0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x2BBCA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x2bbca0) {
            ctx->pc = 0x2BBC88u;
            goto label_2bbc88;
        }
    }
    ctx->pc = 0x2BBCA8u;
label_2bbca8:
    // 0x2bbca8: 0x12000004
    ctx->pc = 0x2BBCA8u;
    {
        const bool branch_taken_0x2bbca8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2BBCACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2bbca8) {
            ctx->pc = 0x2BBCBCu;
            goto label_2bbcbc;
        }
    }
    ctx->pc = 0x2BBCB0u;
    // 0x2bbcb0: 0x82140000
    ctx->pc = 0x2bbcb0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bbcb4: 0xa2000000
    ctx->pc = 0x2bbcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2bbcb8:
    // 0x2bbcb8: 0x260202d
    ctx->pc = 0x2bbcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2bbcbc:
    // 0x2bbcbc: 0x3c05003b
    ctx->pc = 0x2bbcbcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bbcc0: 0x24a54648
    ctx->pc = 0x2bbcc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17992));
    // 0x2bbcc4: 0xc0aeed2
    ctx->pc = 0x2BBCC4u;
    SET_GPR_U32(ctx, 31, 0x2BBCCCu);
    ctx->pc = 0x2BBCC8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBCCCu; }
    }
    if (ctx->pc != 0x2BBCCCu) { return; }
    ctx->pc = 0x2BBCCCu;
    // 0x2bbccc: 0x56000001
    ctx->pc = 0x2BBCCCu;
    {
        const bool branch_taken_0x2bbccc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2bbccc) {
            ctx->pc = 0x2BBCD0u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 20));
            ctx->pc = 0x2BBCD4u;
            goto label_2bbcd4;
        }
    }
    ctx->pc = 0x2BBCD4u;
label_2bbcd4:
    // 0x2bbcd4: 0x200102d
    ctx->pc = 0x2bbcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bbcd8:
    // 0x2bbcd8: 0xdfbf0050
    ctx->pc = 0x2bbcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bbcdc: 0xdfb40040
    ctx->pc = 0x2bbcdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbce0: 0xdfb30030
    ctx->pc = 0x2bbce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbce4: 0xdfb20020
    ctx->pc = 0x2bbce4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbce8: 0xdfb10010
    ctx->pc = 0x2bbce8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbcec: 0xdfb00000
    ctx->pc = 0x2bbcecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbcf0: 0x3e00008
    ctx->pc = 0x2BBCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBCF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BBC60u: goto label_2bbc60;
            case 0x2BBC88u: goto label_2bbc88;
            case 0x2BBCA8u: goto label_2bbca8;
            case 0x2BBCB8u: goto label_2bbcb8;
            case 0x2BBCBCu: goto label_2bbcbc;
            case 0x2BBCD4u: goto label_2bbcd4;
            case 0x2BBCD8u: goto label_2bbcd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BBCF8u;
}
