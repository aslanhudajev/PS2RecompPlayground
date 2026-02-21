#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _nextHeader
// Address: 0x2f2b08 - 0x2f2c2c
void _nextHeader_0x2f2b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f2b08u;

    // 0x2f2b08: 0x27bdff40
    ctx->pc = 0x2f2b08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f2b0c: 0xffbe00a0
    ctx->pc = 0x2f2b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2f2b10: 0xffb70090
    ctx->pc = 0x2f2b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2f2b14: 0x3c1e003a
    ctx->pc = 0x2f2b14u;
    SET_GPR_U32(ctx, 30, ((uint32_t)58 << 16));
    // 0x2f2b18: 0xffb60080
    ctx->pc = 0x2f2b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2f2b1c: 0x3c17003a
    ctx->pc = 0x2f2b1cu;
    SET_GPR_U32(ctx, 23, ((uint32_t)58 << 16));
    // 0x2f2b20: 0xffb50070
    ctx->pc = 0x2f2b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2f2b24: 0x241601b3
    ctx->pc = 0x2f2b24u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 435));
    // 0x2f2b28: 0xffb40060
    ctx->pc = 0x2f2b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f2b2c: 0x24150005
    ctx->pc = 0x2f2b2cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f2b30: 0xffb30050
    ctx->pc = 0x2f2b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f2b34: 0x24140100
    ctx->pc = 0x2f2b34u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f2b38: 0xffb20040
    ctx->pc = 0x2f2b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f2b3c: 0x241301b7
    ctx->pc = 0x2f2b3cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 439));
    // 0x2f2b40: 0xffb10030
    ctx->pc = 0x2f2b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f2b44: 0x241201b8
    ctx->pc = 0x2f2b44u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 440));
    // 0x2f2b48: 0xffb00020
    ctx->pc = 0x2f2b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f2b4c: 0x3c11003a
    ctx->pc = 0x2f2b4cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f2b50: 0xffbf00b0
    ctx->pc = 0x2f2b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f2b54: 0x2410ffff
    ctx->pc = 0x2f2b54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f2b58:
    // 0x2f2b58: 0xc0bca8c
    ctx->pc = 0x2F2B58u;
    SET_GPR_U32(ctx, 31, 0x2F2B60u);
    ctx->pc = 0x2F2A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextStartCode_0x2f2a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2B60u; }
    }
    if (ctx->pc != 0x2F2B60u) { return; }
    ctx->pc = 0x2F2B60u;
    // 0x2f2b60: 0xc0bca32
    ctx->pc = 0x2F2B60u;
    SET_GPR_U32(ctx, 31, 0x2F2B68u);
    ctx->pc = 0x2F2B64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2B68u; }
    }
    if (ctx->pc != 0x2F2B68u) { return; }
    ctx->pc = 0x2F2B68u;
    // 0x2f2b68: 0x40182d
    ctx->pc = 0x2f2b68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b6c: 0x1076000d
    ctx->pc = 0x2F2B6Cu;
    {
        const bool branch_taken_0x2f2b6c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 22));
        ctx->pc = 0x2F2B70u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 436));
        if (branch_taken_0x2f2b6c) {
            ctx->pc = 0x2F2BA4u;
            goto label_2f2ba4;
        }
    }
    ctx->pc = 0x2F2B74u;
    // 0x2f2b74: 0x10400005
    ctx->pc = 0x2F2B74u;
    {
        const bool branch_taken_0x2f2b74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2b74) {
            ctx->pc = 0x2F2B8Cu;
            goto label_2f2b8c;
        }
    }
    ctx->pc = 0x2F2B7Cu;
    // 0x2f2b7c: 0x10740011
    ctx->pc = 0x2F2B7Cu;
    {
        const bool branch_taken_0x2f2b7c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 20));
        if (branch_taken_0x2f2b7c) {
            ctx->pc = 0x2F2BC4u;
            goto label_2f2bc4;
        }
    }
    ctx->pc = 0x2F2B84u;
    // 0x2f2b84: 0x1000fff4
    ctx->pc = 0x2F2B84u;
    {
        const bool branch_taken_0x2f2b84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2b84) {
            ctx->pc = 0x2F2B58u;
            goto label_2f2b58;
        }
    }
    ctx->pc = 0x2F2B8Cu;
label_2f2b8c:
    // 0x2f2b8c: 0x1073001b
    ctx->pc = 0x2F2B8Cu;
    {
        const bool branch_taken_0x2f2b8c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 19));
        ctx->pc = 0x2F2B90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f2b8c) {
            ctx->pc = 0x2F2BFCu;
            goto label_2f2bfc;
        }
    }
    ctx->pc = 0x2F2B94u;
    // 0x2f2b94: 0x10720007
    ctx->pc = 0x2F2B94u;
    {
        const bool branch_taken_0x2f2b94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        if (branch_taken_0x2f2b94) {
            ctx->pc = 0x2F2BB4u;
            goto label_2f2bb4;
        }
    }
    ctx->pc = 0x2F2B9Cu;
    // 0x2f2b9c: 0x1000ffee
    ctx->pc = 0x2F2B9Cu;
    {
        const bool branch_taken_0x2f2b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2b9c) {
            ctx->pc = 0x2F2B58u;
            goto label_2f2b58;
        }
    }
    ctx->pc = 0x2F2BA4u;
label_2f2ba4:
    // 0x2f2ba4: 0xc0bbaaa
    ctx->pc = 0x2F2BA4u;
    SET_GPR_U32(ctx, 31, 0x2F2BACu);
    ctx->pc = 0x2EEAA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sequenceHeader_0x2eeaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2BACu; }
    }
    if (ctx->pc != 0x2F2BACu) { return; }
    ctx->pc = 0x2F2BACu;
    // 0x2f2bac: 0x1000ffea
    ctx->pc = 0x2F2BACu;
    {
        const bool branch_taken_0x2f2bac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2bac) {
            ctx->pc = 0x2F2B58u;
            goto label_2f2b58;
        }
    }
    ctx->pc = 0x2F2BB4u;
label_2f2bb4:
    // 0x2f2bb4: 0xc0bcc3e
    ctx->pc = 0x2F2BB4u;
    SET_GPR_U32(ctx, 31, 0x2F2BBCu);
    ctx->pc = 0x2F30F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _groupOfPicturesHeader_0x2f30f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2BBCu; }
    }
    if (ctx->pc != 0x2F2BBCu) { return; }
    ctx->pc = 0x2F2BBCu;
    // 0x2f2bbc: 0x1000ffe6
    ctx->pc = 0x2F2BBCu;
    {
        const bool branch_taken_0x2f2bbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f2bbc) {
            ctx->pc = 0x2F2B58u;
            goto label_2f2b58;
        }
    }
    ctx->pc = 0x2F2BC4u;
label_2f2bc4:
    // 0x2f2bc4: 0xc0bcb0c
    ctx->pc = 0x2F2BC4u;
    SET_GPR_U32(ctx, 31, 0x2F2BCCu);
    ctx->pc = 0x2F2C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pictureHeader_0x2f2c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2BCCu; }
    }
    if (ctx->pc != 0x2F2BCCu) { return; }
    ctx->pc = 0x2F2BCCu;
    // 0x2f2bcc: 0x8e243024
    ctx->pc = 0x2f2bccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12324)));
    // 0x2f2bd0: 0x3a0282d
    ctx->pc = 0x2f2bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2bd4: 0xafb50000
    ctx->pc = 0x2f2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x2f2bd8: 0xffb00010
    ctx->pc = 0x2f2bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f2bdc: 0xc0bb834
    ctx->pc = 0x2F2BDCu;
    SET_GPR_U32(ctx, 31, 0x2F2BE4u);
    ctx->pc = 0x2F2BE0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->pc = 0x2EE0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x2ee0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F2BE4u; }
    }
    if (ctx->pc != 0x2F2BE4u) { return; }
    ctx->pc = 0x2F2BE4u;
    // 0x2f2be4: 0xdfa30008
    ctx->pc = 0x2f2be4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f2be8: 0xdfa20010
    ctx->pc = 0x2f2be8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2bec: 0xfee338c8
    ctx->pc = 0x2f2becu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 14536), GPR_U64(ctx, 3));
    // 0x2f2bf0: 0xffc238d0
    ctx->pc = 0x2f2bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 14544), GPR_U64(ctx, 2));
    // 0x2f2bf4: 0x3c03003a
    ctx->pc = 0x2f2bf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f2bf8: 0x8c6231bc
    ctx->pc = 0x2f2bf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12732)));
label_2f2bfc:
    // 0x2f2bfc: 0xdfbf00b0
    ctx->pc = 0x2f2bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f2c00: 0xdfbe00a0
    ctx->pc = 0x2f2c00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2c04: 0xdfb70090
    ctx->pc = 0x2f2c04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2c08: 0xdfb60080
    ctx->pc = 0x2f2c08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2c0c: 0xdfb50070
    ctx->pc = 0x2f2c0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f2c10: 0xdfb40060
    ctx->pc = 0x2f2c10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2c14: 0xdfb30050
    ctx->pc = 0x2f2c14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2c18: 0xdfb20040
    ctx->pc = 0x2f2c18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f2c1c: 0xdfb10030
    ctx->pc = 0x2f2c1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2c20: 0xdfb00020
    ctx->pc = 0x2f2c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2c24: 0x3e00008
    ctx->pc = 0x2F2C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2C28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F2B58u: goto label_2f2b58;
            case 0x2F2B8Cu: goto label_2f2b8c;
            case 0x2F2BA4u: goto label_2f2ba4;
            case 0x2F2BB4u: goto label_2f2bb4;
            case 0x2F2BC4u: goto label_2f2bc4;
            case 0x2F2BFCu: goto label_2f2bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F2C2Cu;
}
