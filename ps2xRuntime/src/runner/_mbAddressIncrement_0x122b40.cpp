#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _mbAddressIncrement
// Address: 0x122b40 - 0x122c50
void _mbAddressIncrement_0x122b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x122b40u;

    // 0x122b40: 0x27bdff60
    ctx->pc = 0x122b40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x122b44: 0xffbe0080
    ctx->pc = 0x122b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x122b48: 0xffb70070
    ctx->pc = 0x122b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x122b4c: 0x241e0022
    ctx->pc = 0x122b4cu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 34));
    // 0x122b50: 0xffb60060
    ctx->pc = 0x122b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x122b54: 0x24170023
    ctx->pc = 0x122b54u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 35));
    // 0x122b58: 0xffb50050
    ctx->pc = 0x122b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x122b5c: 0x3c160017
    ctx->pc = 0x122b5cu;
    SET_GPR_S32(ctx, 22, ((uint32_t)23 << 16));
    // 0x122b60: 0xffb40040
    ctx->pc = 0x122b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x122b64: 0x24150001
    ctx->pc = 0x122b64u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122b68: 0xffb30030
    ctx->pc = 0x122b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x122b6c: 0x3c140017
    ctx->pc = 0x122b6cu;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x122b70: 0xffb20020
    ctx->pc = 0x122b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x122b74: 0x3c130017
    ctx->pc = 0x122b74u;
    SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
    // 0x122b78: 0xffb10010
    ctx->pc = 0x122b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x122b7c: 0x2412000f
    ctx->pc = 0x122b7cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 15));
    // 0x122b80: 0xffbf0090
    ctx->pc = 0x122b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x122b84: 0x882d
    ctx->pc = 0x122b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b88: 0xffb00000
    ctx->pc = 0x122b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122b8c: 0x0
    ctx->pc = 0x122b8cu;
    // NOP
label_122b90:
    // 0x122b90: 0xc048eda
    ctx->pc = 0x122B90u;
    SET_GPR_U32(ctx, 31, 0x122B98u);
    ctx->pc = 0x122B94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x123B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x123b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122B98u; }
    }
    if (ctx->pc != 0x122B98u) { return; }
    ctx->pc = 0x122B98u;
    // 0x122b98: 0x40802d
    ctx->pc = 0x122b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122b9c: 0x121e0016
    ctx->pc = 0x122B9Cu;
    {
        const bool branch_taken_0x122b9c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 30));
        ctx->pc = 0x122BA0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 35));
        if (branch_taken_0x122b9c) {
            ctx->pc = 0x122BF8u;
            goto label_122bf8;
        }
    }
    ctx->pc = 0x122BA4u;
    // 0x122ba4: 0x10400005
    ctx->pc = 0x122BA4u;
    {
        const bool branch_taken_0x122ba4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x122ba4) {
            ctx->pc = 0x122BBCu;
            goto label_122bbc;
        }
    }
    ctx->pc = 0x122BACu;
    // 0x122bac: 0x12000008
    ctx->pc = 0x122BACu;
    {
        const bool branch_taken_0x122bac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x122bac) {
            ctx->pc = 0x122BD0u;
            goto label_122bd0;
        }
    }
    ctx->pc = 0x122BB4u;
    // 0x122bb4: 0x10000017
    ctx->pc = 0x122BB4u;
    {
        const bool branch_taken_0x122bb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122BB8u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        if (branch_taken_0x122bb4) {
            ctx->pc = 0x122C14u;
            goto label_122c14;
        }
    }
    ctx->pc = 0x122BBCu;
label_122bbc:
    // 0x122bbc: 0x56170015
    ctx->pc = 0x122BBCu;
    {
        const bool branch_taken_0x122bbc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 23));
        if (branch_taken_0x122bbc) {
            ctx->pc = 0x122BC0u;
            SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->pc = 0x122C14u;
            goto label_122c14;
        }
    }
    ctx->pc = 0x122BC4u;
    // 0x122bc4: 0x24020001
    ctx->pc = 0x122bc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x122bc8: 0x10000013
    ctx->pc = 0x122BC8u;
    {
        const bool branch_taken_0x122bc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122BCCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 33));
        if (branch_taken_0x122bc8) {
            ctx->pc = 0x122C18u;
            goto label_122c18;
        }
    }
    ctx->pc = 0x122BD0u;
label_122bd0:
    // 0x122bd0: 0xc048f48
    ctx->pc = 0x122BD0u;
    SET_GPR_U32(ctx, 31, 0x122BD8u);
    ctx->pc = 0x122BD4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x123D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x123d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BD8u; }
    }
    if (ctx->pc != 0x122BD8u) { return; }
    ctx->pc = 0x122BD8u;
    // 0x122bd8: 0x40182d
    ctx->pc = 0x122bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122bdc: 0x8e8220b0
    ctx->pc = 0x122bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 8368)));
    // 0x122be0: 0x10400007
    ctx->pc = 0x122BE0u;
    {
        const bool branch_taken_0x122be0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x122BE4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 20160));
        if (branch_taken_0x122be0) {
            ctx->pc = 0x122C00u;
            goto label_122c00;
        }
    }
    ctx->pc = 0x122BE8u;
    // 0x122be8: 0x14720005
    ctx->pc = 0x122BE8u;
    {
        const bool branch_taken_0x122be8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 18));
        if (branch_taken_0x122be8) {
            ctx->pc = 0x122C00u;
            goto label_122c00;
        }
    }
    ctx->pc = 0x122BF0u;
    // 0x122bf0: 0xc048f96
    ctx->pc = 0x122BF0u;
    SET_GPR_U32(ctx, 31, 0x122BF8u);
    ctx->pc = 0x122BF4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 11));
    ctx->pc = 0x123E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x123e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122BF8u; }
    }
    if (ctx->pc != 0x122BF8u) { return; }
    ctx->pc = 0x122BF8u;
label_122bf8:
    // 0x122bf8: 0x10000007
    ctx->pc = 0x122BF8u;
    {
        const bool branch_taken_0x122bf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122BFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122bf8) {
            ctx->pc = 0x122C18u;
            goto label_122c18;
        }
    }
    ctx->pc = 0x122C00u;
label_122c00:
    // 0x122c00: 0xc047ffa
    ctx->pc = 0x122C00u;
    SET_GPR_U32(ctx, 31, 0x122C08u);
    ctx->pc = 0x122C04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11FFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error1_0x11ffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x122C08u; }
    }
    if (ctx->pc != 0x122C08u) { return; }
    ctx->pc = 0x122C08u;
    // 0x122c08: 0xaed51908
    ctx->pc = 0x122c08u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 6408), GPR_U32(ctx, 21));
    // 0x122c0c: 0x10000004
    ctx->pc = 0x122C0Cu;
    {
        const bool branch_taken_0x122c0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x122C10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x122c0c) {
            ctx->pc = 0x122C20u;
            goto label_122c20;
        }
    }
    ctx->pc = 0x122C14u;
label_122c14:
    // 0x122c14: 0x102d
    ctx->pc = 0x122c14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122c18:
    // 0x122c18: 0x1440ffdd
    ctx->pc = 0x122C18u;
    {
        const bool branch_taken_0x122c18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x122C1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x122c18) {
            ctx->pc = 0x122B90u;
            goto label_122b90;
        }
    }
    ctx->pc = 0x122C20u;
label_122c20:
    // 0x122c20: 0xdfbf0090
    ctx->pc = 0x122c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x122c24: 0xdfbe0080
    ctx->pc = 0x122c24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x122c28: 0xdfb70070
    ctx->pc = 0x122c28u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x122c2c: 0xdfb60060
    ctx->pc = 0x122c2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122c30: 0xdfb50050
    ctx->pc = 0x122c30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x122c34: 0xdfb40040
    ctx->pc = 0x122c34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122c38: 0xdfb30030
    ctx->pc = 0x122c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122c3c: 0xdfb20020
    ctx->pc = 0x122c3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122c40: 0xdfb10010
    ctx->pc = 0x122c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122c44: 0xdfb00000
    ctx->pc = 0x122c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122c48: 0x3e00008
    ctx->pc = 0x122C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122C4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x122B90u: goto label_122b90;
            case 0x122BBCu: goto label_122bbc;
            case 0x122BD0u: goto label_122bd0;
            case 0x122BF8u: goto label_122bf8;
            case 0x122C00u: goto label_122c00;
            case 0x122C14u: goto label_122c14;
            case 0x122C18u: goto label_122c18;
            case 0x122C20u: goto label_122c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122C50u;
}
