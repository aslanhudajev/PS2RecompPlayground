#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: frame_init
// Address: 0x14cbb8 - 0x14ccf4
void frame_init_0x14cbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("frame_init");


    ctx->pc = 0x14cbb8u;

    // 0x14cbb8: 0x27bdff80
    ctx->pc = 0x14cbb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14cbbc: 0xffb30050
    ctx->pc = 0x14cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x14cbc0: 0xffbf0070
    ctx->pc = 0x14cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14cbc4: 0x80982d
    ctx->pc = 0x14cbc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cbc8: 0xffb40060
    ctx->pc = 0x14cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x14cbcc: 0xffb20040
    ctx->pc = 0x14cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x14cbd0: 0xffb10030
    ctx->pc = 0x14cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x14cbd4: 0xffb00020
    ctx->pc = 0x14cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x14cbd8: 0x8e62000c
    ctx->pc = 0x14cbd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14cbdc: 0x1040000c
    ctx->pc = 0x14CBDCu;
    {
        const bool branch_taken_0x14cbdc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CBE0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14cbdc) {
            ctx->pc = 0x14CC10u;
            goto label_14cc10;
        }
    }
    ctx->pc = 0x14CBE4u;
    // 0x14cbe4: 0x8e020000
    ctx->pc = 0x14cbe4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cbe8: 0x1040000c
    ctx->pc = 0x14CBE8u;
    {
        const bool branch_taken_0x14cbe8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CBECu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14cbe8) {
            ctx->pc = 0x14CC1Cu;
            goto label_14cc1c;
        }
    }
    ctx->pc = 0x14CBF0u;
label_14cbf0:
    // 0x14cbf0: 0x8e040000
    ctx->pc = 0x14cbf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cbf4: 0xc0532ba
    ctx->pc = 0x14CBF4u;
    SET_GPR_U32(ctx, 31, 0x14CBFCu);
    ctx->pc = 0x14CBF8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x14CAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        count_fdes_0x14cae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CBFCu; }
        else if (ctx->pc != 0x14CBFCu) { ctx->pc = 0x14CBFCu; }
    }
    if (ctx->pc != 0x14CBFCu) { return; }
    ctx->pc = 0x14CBFCu;
    // 0x14cbfc: 0x8e030000
    ctx->pc = 0x14cbfcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cc00: 0x1460fffb
    ctx->pc = 0x14CC00u;
    {
        const bool branch_taken_0x14cc00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x14CC04u;
        SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        if (branch_taken_0x14cc00) {
            ctx->pc = 0x14CBF0u;
            goto label_14cbf0;
        }
    }
    ctx->pc = 0x14CC08u;
    // 0x14cc08: 0x10000005
    ctx->pc = 0x14CC08u;
    {
        const bool branch_taken_0x14cc08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CC0Cu;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 20), 2));
        if (branch_taken_0x14cc08) {
            ctx->pc = 0x14CC20u;
            goto label_14cc20;
        }
    }
    ctx->pc = 0x14CC10u;
label_14cc10:
    // 0x14cc10: 0xc0532ba
    ctx->pc = 0x14CC10u;
    SET_GPR_U32(ctx, 31, 0x14CC18u);
    ctx->pc = 0x14CC14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x14CAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        count_fdes_0x14cae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC18u; }
        else if (ctx->pc != 0x14CC18u) { ctx->pc = 0x14CC18u; }
    }
    if (ctx->pc != 0x14CC18u) { return; }
    ctx->pc = 0x14CC18u;
    // 0x14cc18: 0x40a02d
    ctx->pc = 0x14cc18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14cc1c:
    // 0x14cc1c: 0x148080
    ctx->pc = 0x14cc1cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 20), 2));
label_14cc20:
    // 0x14cc20: 0xae740010
    ctx->pc = 0x14cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x14cc24: 0xc0509a0
    ctx->pc = 0x14CC24u;
    SET_GPR_U32(ctx, 31, 0x14CC2Cu);
    ctx->pc = 0x14CC28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142680u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x142680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC2Cu; }
        else if (ctx->pc != 0x14CC2Cu) { ctx->pc = 0x14CC2Cu; }
    }
    if (ctx->pc != 0x14CC2Cu) { return; }
    ctx->pc = 0x14CC2Cu;
    // 0x14cc2c: 0xafa20000
    ctx->pc = 0x14cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14cc30: 0xc0509a0
    ctx->pc = 0x14CC30u;
    SET_GPR_U32(ctx, 31, 0x14CC38u);
    ctx->pc = 0x14CC34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x142680u;
    {
        const uint32_t __entryPc = ctx->pc;
        malloc_0x142680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC38u; }
        else if (ctx->pc != 0x14CC38u) { ctx->pc = 0x14CC38u; }
    }
    if (ctx->pc != 0x14CC38u) { return; }
    ctx->pc = 0x14CC38u;
    // 0x14cc38: 0x3c03ffff
    ctx->pc = 0x14cc38u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
    // 0x14cc3c: 0x8e64000c
    ctx->pc = 0x14cc3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x14cc40: 0x3463ffff
    ctx->pc = 0x14cc40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x14cc44: 0xafa20008
    ctx->pc = 0x14cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x14cc48: 0xafa30010
    ctx->pc = 0x14cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x14cc4c: 0xafa00004
    ctx->pc = 0x14cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14cc50: 0xafa0000c
    ctx->pc = 0x14cc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x14cc54: 0x10800012
    ctx->pc = 0x14CC54u;
    {
        const bool branch_taken_0x14cc54 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CC58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        if (branch_taken_0x14cc54) {
            ctx->pc = 0x14CCA0u;
            goto label_14cca0;
        }
    }
    ctx->pc = 0x14CC5Cu;
    // 0x14cc5c: 0x80802d
    ctx->pc = 0x14cc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc60: 0x8e020000
    ctx->pc = 0x14cc60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cc64: 0x10400013
    ctx->pc = 0x14CC64u;
    {
        const bool branch_taken_0x14cc64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CC68u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x14cc64) {
            ctx->pc = 0x14CCB4u;
            goto label_14ccb4;
        }
    }
    ctx->pc = 0x14CC6Cu;
    // 0x14cc6c: 0x27b10014
    ctx->pc = 0x14cc6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 20));
    // 0x14cc70: 0x8e040000
    ctx->pc = 0x14cc70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cc74: 0x0
    ctx->pc = 0x14cc74u;
    // NOP
label_14cc78:
    // 0x14cc78: 0x3a0282d
    ctx->pc = 0x14cc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc7c: 0x240302d
    ctx->pc = 0x14cc7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cc80: 0xc0532cc
    ctx->pc = 0x14CC80u;
    SET_GPR_U32(ctx, 31, 0x14CC88u);
    ctx->pc = 0x14CC84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14CB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_fdes_0x14cb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CC88u; }
        else if (ctx->pc != 0x14CC88u) { ctx->pc = 0x14CC88u; }
    }
    if (ctx->pc != 0x14CC88u) { return; }
    ctx->pc = 0x14CC88u;
    // 0x14cc88: 0x26100004
    ctx->pc = 0x14cc88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
    // 0x14cc8c: 0x8e020000
    ctx->pc = 0x14cc8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14cc90: 0x5440fff9
    ctx->pc = 0x14CC90u;
    {
        const bool branch_taken_0x14cc90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x14cc90) {
            ctx->pc = 0x14CC94u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x14CC78u;
            goto label_14cc78;
        }
    }
    ctx->pc = 0x14CC98u;
    // 0x14cc98: 0x10000007
    ctx->pc = 0x14CC98u;
    {
        const bool branch_taken_0x14cc98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x14CC9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x14cc98) {
            ctx->pc = 0x14CCB8u;
            goto label_14ccb8;
        }
    }
    ctx->pc = 0x14CCA0u;
label_14cca0:
    // 0x14cca0: 0x8e640008
    ctx->pc = 0x14cca0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14cca4: 0x3a0282d
    ctx->pc = 0x14cca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14cca8: 0x27a60010
    ctx->pc = 0x14cca8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x14ccac: 0xc0532cc
    ctx->pc = 0x14CCACu;
    SET_GPR_U32(ctx, 31, 0x14CCB4u);
    ctx->pc = 0x14CCB0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 20));
    ctx->pc = 0x14CB30u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_fdes_0x14cb30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCB4u; }
        else if (ctx->pc != 0x14CCB4u) { ctx->pc = 0x14CCB4u; }
    }
    if (ctx->pc != 0x14CCB4u) { return; }
    ctx->pc = 0x14CCB4u;
label_14ccb4:
    // 0x14ccb4: 0x280282d
    ctx->pc = 0x14ccb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14ccb8:
    // 0x14ccb8: 0xc053220
    ctx->pc = 0x14CCB8u;
    SET_GPR_U32(ctx, 31, 0x14CCC0u);
    ctx->pc = 0x14CCBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14C880u;
    {
        const uint32_t __entryPc = ctx->pc;
        end_fde_sort_0x14c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CCC0u; }
        else if (ctx->pc != 0x14CCC0u) { ctx->pc = 0x14CCC0u; }
    }
    if (ctx->pc != 0x14CCC0u) { return; }
    ctx->pc = 0x14CCC0u;
    // 0x14ccc0: 0x8fa40010
    ctx->pc = 0x14ccc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ccc4: 0x8fa30014
    ctx->pc = 0x14ccc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x14ccc8: 0xae62000c
    ctx->pc = 0x14ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x14cccc: 0xae630004
    ctx->pc = 0x14ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x14ccd0: 0xae640000
    ctx->pc = 0x14ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x14ccd4: 0xdfbf0070
    ctx->pc = 0x14ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14ccd8: 0xdfb40060
    ctx->pc = 0x14ccd8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ccdc: 0xdfb30050
    ctx->pc = 0x14ccdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14cce0: 0xdfb20040
    ctx->pc = 0x14cce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14cce4: 0xdfb10030
    ctx->pc = 0x14cce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14cce8: 0xdfb00020
    ctx->pc = 0x14cce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ccec: 0x3e00008
    ctx->pc = 0x14CCECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CCF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14CBF0u: goto label_14cbf0;
            case 0x14CC10u: goto label_14cc10;
            case 0x14CC1Cu: goto label_14cc1c;
            case 0x14CC20u: goto label_14cc20;
            case 0x14CC78u: goto label_14cc78;
            case 0x14CCA0u: goto label_14cca0;
            case 0x14CCB4u: goto label_14ccb4;
            case 0x14CCB8u: goto label_14ccb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14CCF4u;
}
