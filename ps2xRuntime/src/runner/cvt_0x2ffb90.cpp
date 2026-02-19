#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: cvt
// Address: 0x2ffb90 - 0x2ffd40
void cvt_0x2ffb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ffb90u;

    // 0x2ffb90: 0x27bdff50
    ctx->pc = 0x2ffb90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ffb94: 0x24020066
    ctx->pc = 0x2ffb94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
    // 0x2ffb98: 0xffbe0090
    ctx->pc = 0x2ffb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2ffb9c: 0xffb70080
    ctx->pc = 0x2ffb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2ffba0: 0x160f02d
    ctx->pc = 0x2ffba0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffba4: 0xffb60070
    ctx->pc = 0x2ffba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2ffba8: 0xe0b82d
    ctx->pc = 0x2ffba8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbac: 0xffb50060
    ctx->pc = 0x2ffbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ffbb0: 0x80b02d
    ctx->pc = 0x2ffbb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbb4: 0xffb40050
    ctx->pc = 0x2ffbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ffbb8: 0x120a82d
    ctx->pc = 0x2ffbb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbbc: 0xffb20030
    ctx->pc = 0x2ffbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ffbc0: 0xc0a02d
    ctx->pc = 0x2ffbc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbc4: 0xffb10020
    ctx->pc = 0x2ffbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ffbc8: 0xa0902d
    ctx->pc = 0x2ffbc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbcc: 0xffb00010
    ctx->pc = 0x2ffbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ffbd0: 0x140882d
    ctx->pc = 0x2ffbd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbd4: 0xffbf00a0
    ctx->pc = 0x2ffbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ffbd8: 0x100802d
    ctx->pc = 0x2ffbd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbdc: 0x16220003
    ctx->pc = 0x2FFBDCu;
    {
        const bool branch_taken_0x2ffbdc = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FFBE0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
        if (branch_taken_0x2ffbdc) {
            ctx->pc = 0x2FFBECu;
            goto label_2ffbec;
        }
    }
    ctx->pc = 0x2FFBE4u;
    // 0x2ffbe4: 0x10000008
    ctx->pc = 0x2FFBE4u;
    {
        const bool branch_taken_0x2ffbe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFBE8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2ffbe4) {
            ctx->pc = 0x2FFC08u;
            goto label_2ffc08;
        }
    }
    ctx->pc = 0x2FFBECu;
label_2ffbec:
    // 0x2ffbec: 0x24020065
    ctx->pc = 0x2ffbecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 101));
    // 0x2ffbf0: 0x12220003
    ctx->pc = 0x2FFBF0u;
    {
        const bool branch_taken_0x2ffbf0 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2FFBF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 69));
        if (branch_taken_0x2ffbf0) {
            ctx->pc = 0x2FFC00u;
            goto label_2ffc00;
        }
    }
    ctx->pc = 0x2FFBF8u;
    // 0x2ffbf8: 0x16220003
    ctx->pc = 0x2FFBF8u;
    {
        const bool branch_taken_0x2ffbf8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FFBFCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2ffbf8) {
            ctx->pc = 0x2FFC08u;
            goto label_2ffc08;
        }
    }
    ctx->pc = 0x2FFC00u;
label_2ffc00:
    // 0x2ffc00: 0x26940001
    ctx->pc = 0x2ffc00u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    // 0x2ffc04: 0x24130002
    ctx->pc = 0x2ffc04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 2));
label_2ffc08:
    // 0x2ffc08: 0x240102d
    ctx->pc = 0x2ffc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc0c: 0x2103f
    ctx->pc = 0x2ffc0cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ffc10: 0x4430007
    ctx->pc = 0x2FFC10u;
    {
        const bool branch_taken_0x2ffc10 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2ffc10) {
            ctx->pc = 0x2FFC14u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x2FFC30u;
            goto label_2ffc30;
        }
    }
    ctx->pc = 0x2FFC18u;
    // 0x2ffc18: 0x240282d
    ctx->pc = 0x2ffc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc1c: 0xc0be356
    ctx->pc = 0x2FFC1Cu;
    SET_GPR_U32(ctx, 31, 0x2FFC24u);
    ctx->pc = 0x2FFC20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC24u; }
    }
    if (ctx->pc != 0x2FFC24u) { return; }
    ctx->pc = 0x2FFC24u;
    // 0x2ffc24: 0x2403002d
    ctx->pc = 0x2ffc24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 45));
    // 0x2ffc28: 0x40902d
    ctx->pc = 0x2ffc28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc2c: 0xa2030000
    ctx->pc = 0x2ffc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2ffc30:
    // 0x2ffc30: 0x260302d
    ctx->pc = 0x2ffc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc34: 0x2c0202d
    ctx->pc = 0x2ffc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc38: 0x240282d
    ctx->pc = 0x2ffc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc3c: 0x280382d
    ctx->pc = 0x2ffc3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc40: 0x2a0402d
    ctx->pc = 0x2ffc40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc44: 0x3a0482d
    ctx->pc = 0x2ffc44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc48: 0xc0c0080
    ctx->pc = 0x2FFC48u;
    SET_GPR_U32(ctx, 31, 0x2FFC50u);
    ctx->pc = 0x2FFC4Cu;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x300200u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dtoa_r_0x300200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC50u; }
    }
    if (ctx->pc != 0x2FFC50u) { return; }
    ctx->pc = 0x2FFC50u;
    // 0x2ffc50: 0x40982d
    ctx->pc = 0x2ffc50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc54: 0x24020067
    ctx->pc = 0x2ffc54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 103));
    // 0x2ffc58: 0x12220003
    ctx->pc = 0x2FFC58u;
    {
        const bool branch_taken_0x2ffc58 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        ctx->pc = 0x2FFC5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 71));
        if (branch_taken_0x2ffc58) {
            ctx->pc = 0x2FFC68u;
            goto label_2ffc68;
        }
    }
    ctx->pc = 0x2FFC60u;
    // 0x2ffc60: 0x16220004
    ctx->pc = 0x2FFC60u;
    {
        const bool branch_taken_0x2ffc60 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FFC64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x2ffc60) {
            ctx->pc = 0x2FFC74u;
            goto label_2ffc74;
        }
    }
    ctx->pc = 0x2FFC68u;
label_2ffc68:
    // 0x2ffc68: 0x32e20001
    ctx->pc = 0x2ffc68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 23), 1));
    // 0x2ffc6c: 0x10400024
    ctx->pc = 0x2FFC6Cu;
    {
        const bool branch_taken_0x2ffc6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFC70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 102));
        if (branch_taken_0x2ffc6c) {
            ctx->pc = 0x2FFD00u;
            goto label_2ffd00;
        }
    }
    ctx->pc = 0x2FFC74u;
label_2ffc74:
    // 0x2ffc74: 0x1622000e
    ctx->pc = 0x2FFC74u;
    {
        const bool branch_taken_0x2ffc74 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FFC78u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        if (branch_taken_0x2ffc74) {
            ctx->pc = 0x2FFCB0u;
            goto label_2ffcb0;
        }
    }
    ctx->pc = 0x2FFC7Cu;
    // 0x2ffc7c: 0x82630000
    ctx->pc = 0x2ffc7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ffc80: 0x24020030
    ctx->pc = 0x2ffc80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2ffc84: 0x54620009
    ctx->pc = 0x2FFC84u;
    {
        const bool branch_taken_0x2ffc84 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ffc84) {
            ctx->pc = 0x2FFC88u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->pc = 0x2FFCACu;
            goto label_2ffcac;
        }
    }
    ctx->pc = 0x2FFC8Cu;
    // 0x2ffc8c: 0x240202d
    ctx->pc = 0x2ffc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffc90: 0xc0be4ba
    ctx->pc = 0x2FFC90u;
    SET_GPR_U32(ctx, 31, 0x2FFC98u);
    ctx->pc = 0x2FFC94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFC98u; }
    }
    if (ctx->pc != 0x2FFC98u) { return; }
    ctx->pc = 0x2FFC98u;
    // 0x2ffc98: 0x10400003
    ctx->pc = 0x2FFC98u;
    {
        const bool branch_taken_0x2ffc98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFC9Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x2ffc98) {
            ctx->pc = 0x2FFCA8u;
            goto label_2ffca8;
        }
    }
    ctx->pc = 0x2FFCA0u;
    // 0x2ffca0: 0x24420001
    ctx->pc = 0x2ffca0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ffca4: 0xaea20000
    ctx->pc = 0x2ffca4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2ffca8:
    // 0x2ffca8: 0x8ea20000
    ctx->pc = 0x2ffca8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2ffcac:
    // 0x2ffcac: 0x2028021
    ctx->pc = 0x2ffcacu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2ffcb0:
    // 0x2ffcb0: 0x240202d
    ctx->pc = 0x2ffcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcb4: 0xc0be4ba
    ctx->pc = 0x2FFCB4u;
    SET_GPR_U32(ctx, 31, 0x2FFCBCu);
    ctx->pc = 0x2FFCB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFCBCu; }
    }
    if (ctx->pc != 0x2FFCBCu) { return; }
    ctx->pc = 0x2FFCBCu;
    // 0x2ffcbc: 0x50400001
    ctx->pc = 0x2FFCBCu;
    {
        const bool branch_taken_0x2ffcbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ffcbc) {
            ctx->pc = 0x2FFCC0u;
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
            ctx->pc = 0x2FFCC4u;
            goto label_2ffcc4;
        }
    }
    ctx->pc = 0x2FFCC4u;
label_2ffcc4:
    // 0x2ffcc4: 0x8fa30004
    ctx->pc = 0x2ffcc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ffcc8: 0x70102b
    ctx->pc = 0x2ffcc8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ffccc: 0x1040000d
    ctx->pc = 0x2FFCCCu;
    {
        const bool branch_taken_0x2ffccc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFCD0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ffccc) {
            ctx->pc = 0x2FFD04u;
            goto label_2ffd04;
        }
    }
    ctx->pc = 0x2FFCD4u;
    // 0x2ffcd4: 0x24050030
    ctx->pc = 0x2ffcd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
label_2ffcd8:
    // 0x2ffcd8: 0x24820001
    ctx->pc = 0x2ffcd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ffcdc: 0xa0850000
    ctx->pc = 0x2ffcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ffce0: 0x40182d
    ctx->pc = 0x2ffce0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffce4: 0xafa20004
    ctx->pc = 0x2ffce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2ffce8: 0x60202d
    ctx->pc = 0x2ffce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffcec: 0x70102b
    ctx->pc = 0x2ffcecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2ffcf0: 0x1440fff9
    ctx->pc = 0x2FFCF0u;
    {
        const bool branch_taken_0x2ffcf0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ffcf0) {
            ctx->pc = 0x2FFCD8u;
            goto label_2ffcd8;
        }
    }
    ctx->pc = 0x2FFCF8u;
    // 0x2ffcf8: 0x10000003
    ctx->pc = 0x2FFCF8u;
    {
        const bool branch_taken_0x2ffcf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2FFCFCu;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x2ffcf8) {
            ctx->pc = 0x2FFD08u;
            goto label_2ffd08;
        }
    }
    ctx->pc = 0x2FFD00u;
label_2ffd00:
    // 0x2ffd00: 0x8fa30004
    ctx->pc = 0x2ffd00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ffd04:
    // 0x2ffd04: 0x731823
    ctx->pc = 0x2ffd04u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2ffd08:
    // 0x2ffd08: 0x260102d
    ctx->pc = 0x2ffd08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd0c: 0xafc30000
    ctx->pc = 0x2ffd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x2ffd10: 0xdfbf00a0
    ctx->pc = 0x2ffd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ffd14: 0xdfbe0090
    ctx->pc = 0x2ffd14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ffd18: 0xdfb70080
    ctx->pc = 0x2ffd18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ffd1c: 0xdfb60070
    ctx->pc = 0x2ffd1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ffd20: 0xdfb50060
    ctx->pc = 0x2ffd20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ffd24: 0xdfb40050
    ctx->pc = 0x2ffd24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ffd28: 0xdfb30040
    ctx->pc = 0x2ffd28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ffd2c: 0xdfb20030
    ctx->pc = 0x2ffd2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ffd30: 0xdfb10020
    ctx->pc = 0x2ffd30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffd34: 0xdfb00010
    ctx->pc = 0x2ffd34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffd38: 0x3e00008
    ctx->pc = 0x2FFD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFD3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFBECu: goto label_2ffbec;
            case 0x2FFC00u: goto label_2ffc00;
            case 0x2FFC08u: goto label_2ffc08;
            case 0x2FFC30u: goto label_2ffc30;
            case 0x2FFC68u: goto label_2ffc68;
            case 0x2FFC74u: goto label_2ffc74;
            case 0x2FFCA8u: goto label_2ffca8;
            case 0x2FFCACu: goto label_2ffcac;
            case 0x2FFCB0u: goto label_2ffcb0;
            case 0x2FFCC4u: goto label_2ffcc4;
            case 0x2FFCD8u: goto label_2ffcd8;
            case 0x2FFD00u: goto label_2ffd00;
            case 0x2FFD04u: goto label_2ffd04;
            case 0x2FFD08u: goto label_2ffd08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FFD40u;
}
