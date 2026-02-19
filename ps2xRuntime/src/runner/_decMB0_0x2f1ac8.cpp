#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decMB0
// Address: 0x2f1ac8 - 0x2f1fec
void _decMB0_0x2f1ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f1ac8u;

    // 0x2f1ac8: 0x27bdff40
    ctx->pc = 0x2f1ac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f1acc: 0x3c02003a
    ctx->pc = 0x2f1accu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f1ad0: 0xffb60080
    ctx->pc = 0x2f1ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2f1ad4: 0x3c0b1000
    ctx->pc = 0x2f1ad4u;
    SET_GPR_U32(ctx, 11, ((uint32_t)4096 << 16));
    // 0x2f1ad8: 0xffb50070
    ctx->pc = 0x2f1ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2f1adc: 0x356b2010
    ctx->pc = 0x2f1adcu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), 8208));
    // 0x2f1ae0: 0xffb20040
    ctx->pc = 0x2f1ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f1ae4: 0xa0a82d
    ctx->pc = 0x2f1ae4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1ae8: 0xffb10030
    ctx->pc = 0x2f1ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f1aec: 0x80902d
    ctx->pc = 0x2f1aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1af0: 0xffbf00b0
    ctx->pc = 0x2f1af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f1af4: 0xe0882d
    ctx->pc = 0x2f1af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1af8: 0xffbe00a0
    ctx->pc = 0x2f1af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2f1afc: 0x120b02d
    ctx->pc = 0x2f1afcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b00: 0xffb70090
    ctx->pc = 0x2f1b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2f1b04: 0x24040001
    ctx->pc = 0x2f1b04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1b08: 0xffb40060
    ctx->pc = 0x2f1b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f1b0c: 0xffb30050
    ctx->pc = 0x2f1b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f1b10: 0xffb00020
    ctx->pc = 0x2f1b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f1b14: 0x8c4a31bc
    ctx->pc = 0x2f1b14u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 12732)));
    // 0x2f1b18: 0x8d630000
    ctx->pc = 0x2f1b18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2f1b1c: 0x3c02f8ff
    ctx->pc = 0x2f1b1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)63743 << 16));
    // 0x2f1b20: 0x3442ffff
    ctx->pc = 0x2f1b20u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2f1b24: 0xa5600
    ctx->pc = 0x2f1b24u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 10), 24));
    // 0x2f1b28: 0x621824
    ctx->pc = 0x2f1b28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f1b2c: 0x6a1825
    ctx->pc = 0x2f1b2cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2f1b30: 0xad630000
    ctx->pc = 0x2f1b30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x2f1b34: 0xafa60010
    ctx->pc = 0x2f1b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x2f1b38: 0xc0bc930
    ctx->pc = 0x2F1B38u;
    SET_GPR_U32(ctx, 31, 0x2F1B40u);
    ctx->pc = 0x2F1B3Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    ctx->pc = 0x2F24C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _ipuVdec_0x2f24c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B40u; }
    }
    if (ctx->pc != 0x2F1B40u) { return; }
    ctx->pc = 0x2F1B40u;
    // 0x2f1b40: 0x40182d
    ctx->pc = 0x2f1b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1b44: 0x14600009
    ctx->pc = 0x2F1B44u;
    {
        const bool branch_taken_0x2f1b44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1B48u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x2f1b44) {
            ctx->pc = 0x2F1B6Cu;
            goto label_2f1b6c;
        }
    }
    ctx->pc = 0x2F1B4Cu;
    // 0x2f1b4c: 0x3c04003c
    ctx->pc = 0x2f1b4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2f1b50: 0xc0bba56
    ctx->pc = 0x2F1B50u;
    SET_GPR_U32(ctx, 31, 0x2F1B58u);
    ctx->pc = 0x2F1B54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294942864));
    ctx->pc = 0x2EE958u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x2ee958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B58u; }
    }
    if (ctx->pc != 0x2F1B58u) { return; }
    ctx->pc = 0x2F1B58u;
    // 0x2f1b58: 0x24020001
    ctx->pc = 0x2f1b58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1b5c: 0x3c03003a
    ctx->pc = 0x2f1b5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f1b60: 0xac623148
    ctx->pc = 0x2f1b60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12616), GPR_U32(ctx, 2));
label_2f1b64:
    // 0x2f1b64: 0x10000115
    ctx->pc = 0x2F1B64u;
    {
        const bool branch_taken_0x2f1b64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1B68u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1b64) {
            ctx->pc = 0x2F1FBCu;
            goto label_2f1fbc;
        }
    }
    ctx->pc = 0x2F1B6Cu;
label_2f1b6c:
    // 0x2f1b6c: 0x3062000c
    ctx->pc = 0x2f1b6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 12));
    // 0x2f1b70: 0x1040000c
    ctx->pc = 0x2F1B70u;
    {
        const bool branch_taken_0x2f1b70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1B74u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1b70) {
            ctx->pc = 0x2F1BA4u;
            goto label_2f1ba4;
        }
    }
    ctx->pc = 0x2F1B78u;
    // 0x2f1b78: 0x24030003
    ctx->pc = 0x2f1b78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1b7c: 0x8c8231ec
    ctx->pc = 0x2f1b7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12780)));
    // 0x2f1b80: 0x14430004
    ctx->pc = 0x2F1B80u;
    {
        const bool branch_taken_0x2f1b80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2F1B84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1b80) {
            ctx->pc = 0x2F1B94u;
            goto label_2f1b94;
        }
    }
    ctx->pc = 0x2F1B88u;
    // 0x2f1b88: 0x8c4331f4
    ctx->pc = 0x2f1b88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12788)));
    // 0x2f1b8c: 0x14600010
    ctx->pc = 0x2F1B8Cu;
    {
        const bool branch_taken_0x2f1b8c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1B90u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x2f1b8c) {
            ctx->pc = 0x2F1BD0u;
            goto label_2f1bd0;
        }
    }
    ctx->pc = 0x2F1B94u;
label_2f1b94:
    // 0x2f1b94: 0xc0bca32
    ctx->pc = 0x2F1B94u;
    SET_GPR_U32(ctx, 31, 0x2F1B9Cu);
    ctx->pc = 0x2F1B98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1B9Cu; }
    }
    if (ctx->pc != 0x2F1B9Cu) { return; }
    ctx->pc = 0x2F1B9Cu;
    // 0x2f1b9c: 0x1000000d
    ctx->pc = 0x2F1B9Cu;
    {
        const bool branch_taken_0x2f1b9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1BA0u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2f1b9c) {
            ctx->pc = 0x2F1BD4u;
            goto label_2f1bd4;
        }
    }
    ctx->pc = 0x2F1BA4u;
label_2f1ba4:
    // 0x2f1ba4: 0x30620001
    ctx->pc = 0x2f1ba4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2f1ba8: 0x1040000a
    ctx->pc = 0x2F1BA8u;
    {
        const bool branch_taken_0x2f1ba8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1BACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1ba8) {
            ctx->pc = 0x2F1BD4u;
            goto label_2f1bd4;
        }
    }
    ctx->pc = 0x2F1BB0u;
    // 0x2f1bb0: 0x8c4331f8
    ctx->pc = 0x2f1bb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12792)));
    // 0x2f1bb4: 0x10600007
    ctx->pc = 0x2F1BB4u;
    {
        const bool branch_taken_0x2f1bb4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1BB8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1bb4) {
            ctx->pc = 0x2F1BD4u;
            goto label_2f1bd4;
        }
    }
    ctx->pc = 0x2F1BBCu;
    // 0x2f1bbc: 0x24020001
    ctx->pc = 0x2f1bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1bc0: 0x8ca331ec
    ctx->pc = 0x2f1bc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12780)));
    // 0x2f1bc4: 0x24040002
    ctx->pc = 0x2f1bc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1bc8: 0x38630003
    ctx->pc = 0x2f1bc8u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 3));
    // 0x2f1bcc: 0x83100a
    ctx->pc = 0x2f1bccu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_2f1bd0:
    // 0x2f1bd0: 0xaea20000
    ctx->pc = 0x2f1bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2f1bd4:
    // 0x2f1bd4: 0x3c06003a
    ctx->pc = 0x2f1bd4u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f1bd8: 0x24020003
    ctx->pc = 0x2f1bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1bdc: 0x8cc331ec
    ctx->pc = 0x2f1bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 12780)));
    // 0x2f1be0: 0x14620008
    ctx->pc = 0x2F1BE0u;
    {
        const bool branch_taken_0x2f1be0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F1BE4u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x2f1be0) {
            ctx->pc = 0x2F1C04u;
            goto label_2f1c04;
        }
    }
    ctx->pc = 0x2F1BE8u;
    // 0x2f1be8: 0x24130001
    ctx->pc = 0x2f1be8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1bec: 0x24020002
    ctx->pc = 0x2f1becu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1bf0: 0x38a30001
    ctx->pc = 0x2f1bf0u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 5), 1));
    // 0x2f1bf4: 0x38a40002
    ctx->pc = 0x2f1bf4u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 5), 2));
    // 0x2f1bf8: 0x43980a
    ctx->pc = 0x2f1bf8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 2));
    // 0x2f1bfc: 0x10000006
    ctx->pc = 0x2F1BFCu;
    {
        const bool branch_taken_0x2f1bfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1C00u;
        SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2f1bfc) {
            ctx->pc = 0x2F1C18u;
            goto label_2f1c18;
        }
    }
    ctx->pc = 0x2F1C04u;
label_2f1c04:
    // 0x2f1c04: 0x24030002
    ctx->pc = 0x2f1c04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1c08: 0x24130001
    ctx->pc = 0x2f1c08u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1c0c: 0xa02d
    ctx->pc = 0x2f1c0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c10: 0x38a20002
    ctx->pc = 0x2f1c10u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 2));
    // 0x2f1c14: 0x62980a
    ctx->pc = 0x2f1c14u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_2f1c18:
    // 0x2f1c18: 0x38a20003
    ctx->pc = 0x2f1c18u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), 3));
    // 0x2f1c1c: 0xb82d
    ctx->pc = 0x2f1c1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1c20: 0x16800005
    ctx->pc = 0x2F1C20u;
    {
        const bool branch_taken_0x2f1c20 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1C24u;
        SET_GPR_U32(ctx, 30, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x2f1c20) {
            ctx->pc = 0x2F1C38u;
            goto label_2f1c38;
        }
    }
    ctx->pc = 0x2F1C28u;
    // 0x2f1c28: 0x3c07003a
    ctx->pc = 0x2f1c28u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2f1c2c: 0x8ce231ec
    ctx->pc = 0x2f1c2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12780)));
    // 0x2f1c30: 0x38420003
    ctx->pc = 0x2f1c30u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 3));
    // 0x2f1c34: 0x2c570001
    ctx->pc = 0x2f1c34u;
    SET_GPR_U32(ctx, 23, SLTU32(GPR_U32(ctx, 2), 1));
label_2f1c38:
    // 0x2f1c38: 0x3c02003a
    ctx->pc = 0x2f1c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f1c3c: 0x8c4331ec
    ctx->pc = 0x2f1c3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12780)));
    // 0x2f1c40: 0x24020003
    ctx->pc = 0x2f1c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1c44: 0x1462000d
    ctx->pc = 0x2F1C44u;
    {
        const bool branch_taken_0x2f1c44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F1C48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1c44) {
            ctx->pc = 0x2F1C7Cu;
            goto label_2f1c7c;
        }
    }
    ctx->pc = 0x2F1C4Cu;
    // 0x2f1c4c: 0x3c02003a
    ctx->pc = 0x2f1c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f1c50: 0x8c4331f4
    ctx->pc = 0x2f1c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12788)));
    // 0x2f1c54: 0x14600009
    ctx->pc = 0x2F1C54u;
    {
        const bool branch_taken_0x2f1c54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1C58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1c54) {
            ctx->pc = 0x2F1C7Cu;
            goto label_2f1c7c;
        }
    }
    ctx->pc = 0x2F1C5Cu;
    // 0x2f1c5c: 0x8e420000
    ctx->pc = 0x2f1c5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1c60: 0x30420003
    ctx->pc = 0x2f1c60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x2f1c64: 0x10400005
    ctx->pc = 0x2F1C64u;
    {
        const bool branch_taken_0x2f1c64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1C68u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1c64) {
            ctx->pc = 0x2F1C7Cu;
            goto label_2f1c7c;
        }
    }
    ctx->pc = 0x2F1C6Cu;
    // 0x2f1c6c: 0xc0bca32
    ctx->pc = 0x2F1C6Cu;
    SET_GPR_U32(ctx, 31, 0x2F1C74u);
    ctx->pc = 0x2F1C70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1C74u; }
    }
    if (ctx->pc != 0x2F1C74u) { return; }
    ctx->pc = 0x2F1C74u;
    // 0x2f1c74: 0x10000002
    ctx->pc = 0x2F1C74u;
    {
        const bool branch_taken_0x2f1c74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1C78u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2f1c74) {
            ctx->pc = 0x2F1C80u;
            goto label_2f1c80;
        }
    }
    ctx->pc = 0x2F1C7Cu;
label_2f1c7c:
    // 0x2f1c7c: 0x8fa30010
    ctx->pc = 0x2f1c7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f1c80:
    // 0x2f1c80: 0xac620000
    ctx->pc = 0x2f1c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2f1c84: 0x8e440000
    ctx->pc = 0x2f1c84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1c88: 0x30820010
    ctx->pc = 0x2f1c88u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 16));
    // 0x2f1c8c: 0x10400007
    ctx->pc = 0x2F1C8Cu;
    {
        const bool branch_taken_0x2f1c8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1C90u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
        if (branch_taken_0x2f1c8c) {
            ctx->pc = 0x2F1CACu;
            goto label_2f1cac;
        }
    }
    ctx->pc = 0x2F1C94u;
    // 0x2f1c94: 0x24040005
    ctx->pc = 0x2f1c94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f1c98: 0xc0bca32
    ctx->pc = 0x2F1C98u;
    SET_GPR_U32(ctx, 31, 0x2F1CA0u);
    ctx->pc = 0x2F1C9Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    ctx->pc = 0x2F28C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x2f28c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1CA0u; }
    }
    if (ctx->pc != 0x2F1CA0u) { return; }
    ctx->pc = 0x2F1CA0u;
    // 0x2f1ca0: 0xae023280
    ctx->pc = 0x2f1ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12928), GPR_U32(ctx, 2));
    // 0x2f1ca4: 0x8e440000
    ctx->pc = 0x2f1ca4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1ca8: 0x30820008
    ctx->pc = 0x2f1ca8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 8));
label_2f1cac:
    // 0x2f1cac: 0x14400007
    ctx->pc = 0x2F1CACu;
    {
        const bool branch_taken_0x2f1cac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1CB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1cac) {
            ctx->pc = 0x2F1CCCu;
            goto label_2f1ccc;
        }
    }
    ctx->pc = 0x2F1CB4u;
    // 0x2f1cb4: 0x30820001
    ctx->pc = 0x2f1cb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x2f1cb8: 0x10400022
    ctx->pc = 0x2F1CB8u;
    {
        const bool branch_taken_0x2f1cb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1CBCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1cb8) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1CC0u;
    // 0x2f1cc0: 0x8c4331f8
    ctx->pc = 0x2f1cc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12792)));
    // 0x2f1cc4: 0x1060001f
    ctx->pc = 0x2F1CC4u;
    {
        const bool branch_taken_0x2f1cc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1CC8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1cc4) {
            ctx->pc = 0x2F1D44u;
            goto label_2f1d44;
        }
    }
    ctx->pc = 0x2F1CCCu;
label_2f1ccc:
    // 0x2f1ccc: 0x8c4338f0
    ctx->pc = 0x2f1cccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14576)));
    // 0x2f1cd0: 0x10600011
    ctx->pc = 0x2F1CD0u;
    {
        const bool branch_taken_0x2f1cd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1CD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1cd0) {
            ctx->pc = 0x2F1D18u;
            goto label_2f1d18;
        }
    }
    ctx->pc = 0x2F1CD8u;
    // 0x2f1cd8: 0xafbe0000
    ctx->pc = 0x2f1cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x2f1cdc: 0x244331d8
    ctx->pc = 0x2f1cdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 12760));
    // 0x2f1ce0: 0x8c4a31d8
    ctx->pc = 0x2f1ce0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 12760)));
    // 0x2f1ce4: 0x8c6b0004
    ctx->pc = 0x2f1ce4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f1ce8: 0x220202d
    ctx->pc = 0x2f1ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1cec: 0x8fa60014
    ctx->pc = 0x2f1cecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f1cf0: 0x254affff
    ctx->pc = 0x2f1cf0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2f1cf4: 0xafb70008
    ctx->pc = 0x2f1cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x2f1cf8: 0x256bffff
    ctx->pc = 0x2f1cf8u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2f1cfc: 0x2c0282d
    ctx->pc = 0x2f1cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d00: 0x382d
    ctx->pc = 0x2f1d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d04: 0x260402d
    ctx->pc = 0x2f1d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d08: 0xc0bc81e
    ctx->pc = 0x2F1D08u;
    SET_GPR_U32(ctx, 31, 0x2F1D10u);
    ctx->pc = 0x2F1D0Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F2078u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x2f2078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D10u; }
    }
    if (ctx->pc != 0x2F1D10u) { return; }
    ctx->pc = 0x2F1D10u;
    // 0x2f1d10: 0x1000000d
    ctx->pc = 0x2F1D10u;
    {
        const bool branch_taken_0x2f1d10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1D14u;
        SET_GPR_U32(ctx, 30, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1d10) {
            ctx->pc = 0x2F1D48u;
            goto label_2f1d48;
        }
    }
    ctx->pc = 0x2F1D18u;
label_2f1d18:
    // 0x2f1d18: 0x3c02003a
    ctx->pc = 0x2f1d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f1d1c: 0x3c03003a
    ctx->pc = 0x2f1d1cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f1d20: 0x8c4631c8
    ctx->pc = 0x2f1d20u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12744)));
    // 0x2f1d24: 0x220202d
    ctx->pc = 0x2f1d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d28: 0x8c6a31c4
    ctx->pc = 0x2f1d28u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 12740)));
    // 0x2f1d2c: 0x2c0282d
    ctx->pc = 0x2f1d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d30: 0x24c6ffff
    ctx->pc = 0x2f1d30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f1d34: 0x402d
    ctx->pc = 0x2f1d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d38: 0x482d
    ctx->pc = 0x2f1d38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d3c: 0xc0bc87e
    ctx->pc = 0x2F1D3Cu;
    SET_GPR_U32(ctx, 31, 0x2F1D44u);
    ctx->pc = 0x2F1D40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F21F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x2f21f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1D44u; }
    }
    if (ctx->pc != 0x2F1D44u) { return; }
    ctx->pc = 0x2F1D44u;
label_2f1d44:
    // 0x2f1d44: 0x3c1e003a
    ctx->pc = 0x2f1d44u;
    SET_GPR_U32(ctx, 30, ((uint32_t)58 << 16));
label_2f1d48:
    // 0x2f1d48: 0x8fc23148
    ctx->pc = 0x2f1d48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12616)));
    // 0x2f1d4c: 0x1440009b
    ctx->pc = 0x2F1D4Cu;
    {
        const bool branch_taken_0x2f1d4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1D50u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1d4c) {
            ctx->pc = 0x2F1FBCu;
            goto label_2f1fbc;
        }
    }
    ctx->pc = 0x2F1D54u;
    // 0x2f1d54: 0x8e420000
    ctx->pc = 0x2f1d54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1d58: 0x30420004
    ctx->pc = 0x2f1d58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2f1d5c: 0x1040001f
    ctx->pc = 0x2F1D5Cu;
    {
        const bool branch_taken_0x2f1d5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1D60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1d5c) {
            ctx->pc = 0x2F1DDCu;
            goto label_2f1ddc;
        }
    }
    ctx->pc = 0x2F1D64u;
    // 0x2f1d64: 0x8c4338f0
    ctx->pc = 0x2f1d64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 14576)));
    // 0x2f1d68: 0x10600011
    ctx->pc = 0x2F1D68u;
    {
        const bool branch_taken_0x2f1d68 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1D6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1d68) {
            ctx->pc = 0x2F1DB0u;
            goto label_2f1db0;
        }
    }
    ctx->pc = 0x2F1D70u;
    // 0x2f1d70: 0xafb70008
    ctx->pc = 0x2f1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 23));
    // 0x2f1d74: 0x244231d8
    ctx->pc = 0x2f1d74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12760));
    // 0x2f1d78: 0x8fa60014
    ctx->pc = 0x2f1d78u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f1d7c: 0x8c4b000c
    ctx->pc = 0x2f1d7cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f1d80: 0x2c0282d
    ctx->pc = 0x2f1d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d84: 0x8c4a0008
    ctx->pc = 0x2f1d84u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f1d88: 0x260402d
    ctx->pc = 0x2f1d88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d8c: 0x280482d
    ctx->pc = 0x2f1d8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d90: 0x256bffff
    ctx->pc = 0x2f1d90u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x2f1d94: 0xafa00000
    ctx->pc = 0x2f1d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f1d98: 0x254affff
    ctx->pc = 0x2f1d98u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2f1d9c: 0x220202d
    ctx->pc = 0x2f1d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1da0: 0xc0bc81e
    ctx->pc = 0x2F1DA0u;
    SET_GPR_U32(ctx, 31, 0x2F1DA8u);
    ctx->pc = 0x2F1DA4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F2078u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVectors_0x2f2078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1DA8u; }
    }
    if (ctx->pc != 0x2F1DA8u) { return; }
    ctx->pc = 0x2F1DA8u;
    // 0x2f1da8: 0x1000000d
    ctx->pc = 0x2F1DA8u;
    {
        const bool branch_taken_0x2f1da8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1DACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12616)));
        if (branch_taken_0x2f1da8) {
            ctx->pc = 0x2F1DE0u;
            goto label_2f1de0;
        }
    }
    ctx->pc = 0x2F1DB0u;
label_2f1db0:
    // 0x2f1db0: 0x3c02003a
    ctx->pc = 0x2f1db0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f1db4: 0x3c03003a
    ctx->pc = 0x2f1db4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f1db8: 0x8c4631d0
    ctx->pc = 0x2f1db8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 12752)));
    // 0x2f1dbc: 0x2c0282d
    ctx->pc = 0x2f1dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1dc0: 0x8c6a31cc
    ctx->pc = 0x2f1dc0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 12748)));
    // 0x2f1dc4: 0x26240008
    ctx->pc = 0x2f1dc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 8));
    // 0x2f1dc8: 0x24c6ffff
    ctx->pc = 0x2f1dc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2f1dcc: 0x402d
    ctx->pc = 0x2f1dccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1dd0: 0x482d
    ctx->pc = 0x2f1dd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1dd4: 0xc0bc87e
    ctx->pc = 0x2F1DD4u;
    SET_GPR_U32(ctx, 31, 0x2F1DDCu);
    ctx->pc = 0x2F1DD8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F21F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x2f21f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1DDCu; }
    }
    if (ctx->pc != 0x2F1DDCu) { return; }
    ctx->pc = 0x2F1DDCu;
label_2f1ddc:
    // 0x2f1ddc: 0x8fc23148
    ctx->pc = 0x2f1ddcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12616)));
label_2f1de0:
    // 0x2f1de0: 0x14400076
    ctx->pc = 0x2F1DE0u;
    {
        const bool branch_taken_0x2f1de0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1DE4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f1de0) {
            ctx->pc = 0x2F1FBCu;
            goto label_2f1fbc;
        }
    }
    ctx->pc = 0x2F1DE8u;
    // 0x2f1de8: 0x8e440000
    ctx->pc = 0x2f1de8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1dec: 0x30820001
    ctx->pc = 0x2f1decu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 1));
    // 0x2f1df0: 0x10400007
    ctx->pc = 0x2F1DF0u;
    {
        const bool branch_taken_0x2f1df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1DF4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1df0) {
            ctx->pc = 0x2F1E10u;
            goto label_2f1e10;
        }
    }
    ctx->pc = 0x2F1DF8u;
    // 0x2f1df8: 0x8c4331f8
    ctx->pc = 0x2f1df8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12792)));
    // 0x2f1dfc: 0x10600005
    ctx->pc = 0x2F1DFCu;
    {
        const bool branch_taken_0x2f1dfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1E00u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3));
        if (branch_taken_0x2f1dfc) {
            ctx->pc = 0x2F1E14u;
            goto label_2f1e14;
        }
    }
    ctx->pc = 0x2F1E04u;
    // 0x2f1e04: 0xc0bc9ec
    ctx->pc = 0x2F1E04u;
    SET_GPR_U32(ctx, 31, 0x2F1E0Cu);
    ctx->pc = 0x2F1E08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2F27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x2f27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1E0Cu; }
    }
    if (ctx->pc != 0x2F1E0Cu) { return; }
    ctx->pc = 0x2F1E0Cu;
    // 0x2f1e0c: 0x8e440000
    ctx->pc = 0x2f1e0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f1e10:
    // 0x2f1e10: 0x30820003
    ctx->pc = 0x2f1e10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 3));
label_2f1e14:
    // 0x2f1e14: 0x1040002c
    ctx->pc = 0x2F1E14u;
    {
        const bool branch_taken_0x2f1e14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1E18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1e14) {
            ctx->pc = 0x2F1EC8u;
            goto label_2f1ec8;
        }
    }
    ctx->pc = 0x2F1E1Cu;
    // 0x2f1e1c: 0x24030140
    ctx->pc = 0x2f1e1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2f1e20: 0x24423638
    ctx->pc = 0x2f1e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 13880));
    // 0x2f1e24: 0x3c070fff
    ctx->pc = 0x2f1e24u;
    SET_GPR_U32(ctx, 7, ((uint32_t)4095 << 16));
    // 0x2f1e28: 0x8c450280
    ctx->pc = 0x2f1e28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 640)));
    // 0x2f1e2c: 0x34e7ffff
    ctx->pc = 0x2f1e2cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x2f1e30: 0x3c0a8000
    ctx->pc = 0x2f1e30u;
    SET_GPR_U32(ctx, 10, ((uint32_t)32768 << 16));
    // 0x2f1e34: 0x3c061000
    ctx->pc = 0x2f1e34u;
    SET_GPR_U32(ctx, 6, ((uint32_t)4096 << 16));
    // 0x2f1e38: 0xa32018
    ctx->pc = 0x2f1e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f1e3c: 0x34c6b010
    ctx->pc = 0x2f1e3cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 45072));
    // 0x2f1e40: 0x24090030
    ctx->pc = 0x2f1e40u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2f1e44: 0x3c031000
    ctx->pc = 0x2f1e44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2f1e48: 0x3463b000
    ctx->pc = 0x2f1e48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 45056));
    // 0x2f1e4c: 0x24080100
    ctx->pc = 0x2f1e4cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f1e50: 0x3c10003a
    ctx->pc = 0x2f1e50u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f1e54: 0x822821
    ctx->pc = 0x2f1e54u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f1e58: 0x8ca20004
    ctx->pc = 0x2f1e58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f1e5c: 0x3c041000
    ctx->pc = 0x2f1e5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)4096 << 16));
    // 0x2f1e60: 0x3484b020
    ctx->pc = 0x2f1e60u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 45088));
    // 0x2f1e64: 0x471024
    ctx->pc = 0x2f1e64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2f1e68: 0x4a1025
    ctx->pc = 0x2f1e68u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2f1e6c: 0xacc20000
    ctx->pc = 0x2f1e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2f1e70: 0xac890000
    ctx->pc = 0x2f1e70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x2f1e74: 0xc0bc8da
    ctx->pc = 0x2F1E74u;
    SET_GPR_U32(ctx, 31, 0x2F1E7Cu);
    ctx->pc = 0x2F1E78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x2F2368u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x2f2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1E7Cu; }
    }
    if (ctx->pc != 0x2F1E7Cu) { return; }
    ctx->pc = 0x2F1E7Cu;
    // 0x2f1e7c: 0x3c02003a
    ctx->pc = 0x2f1e7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f1e80: 0x8e440000
    ctx->pc = 0x2f1e80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1e84: 0x8c453280
    ctx->pc = 0x2f1e84u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 12928)));
    // 0x2f1e88: 0x3c062000
    ctx->pc = 0x2f1e88u;
    SET_GPR_U32(ctx, 6, ((uint32_t)8192 << 16));
    // 0x2f1e8c: 0x8e03327c
    ctx->pc = 0x2f1e8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12924)));
    // 0x2f1e90: 0x30840001
    ctx->pc = 0x2f1e90u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 1));
    // 0x2f1e94: 0x8fa70010
    ctx->pc = 0x2f1e94u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1e98: 0x426c0
    ctx->pc = 0x2f1e98u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 27));
    // 0x2f1e9c: 0x52c00
    ctx->pc = 0x2f1e9cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 16));
    // 0x2f1ea0: 0x31e80
    ctx->pc = 0x2f1ea0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 26));
    // 0x2f1ea4: 0x8ce20000
    ctx->pc = 0x2f1ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2f1ea8: 0x852025
    ctx->pc = 0x2f1ea8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2f1eac: 0x661825
    ctx->pc = 0x2f1eacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f1eb0: 0x832025
    ctx->pc = 0x2f1eb0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2f1eb4: 0x21640
    ctx->pc = 0x2f1eb4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 25));
    // 0x2f1eb8: 0xc0bc8ce
    ctx->pc = 0x2F1EB8u;
    SET_GPR_U32(ctx, 31, 0x2F1EC0u);
    ctx->pc = 0x2F1EBCu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x2F2338u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x2f2338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F1EC0u; }
    }
    if (ctx->pc != 0x2F1EC0u) { return; }
    ctx->pc = 0x2F1EC0u;
    // 0x2f1ec0: 0x1000000b
    ctx->pc = 0x2F1EC0u;
    {
        const bool branch_taken_0x2f1ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1EC4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12616)));
        if (branch_taken_0x2f1ec0) {
            ctx->pc = 0x2F1EF0u;
            goto label_2f1ef0;
        }
    }
    ctx->pc = 0x2F1EC8u;
label_2f1ec8:
    // 0x2f1ec8: 0x3c03003a
    ctx->pc = 0x2f1ec8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f1ecc: 0x24050140
    ctx->pc = 0x2f1eccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2f1ed0: 0x24633638
    ctx->pc = 0x2f1ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 13880));
    // 0x2f1ed4: 0x24040001
    ctx->pc = 0x2f1ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1ed8: 0x8c620280
    ctx->pc = 0x2f1ed8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 640)));
    // 0x2f1edc: 0x3c10003a
    ctx->pc = 0x2f1edcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f1ee0: 0x453018
    ctx->pc = 0x2f1ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2f1ee4: 0xc31021
    ctx->pc = 0x2f1ee4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2f1ee8: 0xac44013c
    ctx->pc = 0x2f1ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
    // 0x2f1eec: 0x8fc23148
    ctx->pc = 0x2f1eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12616)));
label_2f1ef0:
    // 0x2f1ef0: 0x1440ff1c
    ctx->pc = 0x2F1EF0u;
    {
        const bool branch_taken_0x2f1ef0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1EF4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 12924), GPR_U32(ctx, 0));
        if (branch_taken_0x2f1ef0) {
            ctx->pc = 0x2F1B64u;
            goto label_2f1b64;
        }
    }
    ctx->pc = 0x2F1EF8u;
    // 0x2f1ef8: 0x8e420000
    ctx->pc = 0x2f1ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1efc: 0x30420001
    ctx->pc = 0x2f1efcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2f1f00: 0x14400007
    ctx->pc = 0x2F1F00u;
    {
        const bool branch_taken_0x2f1f00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1F04u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1f00) {
            ctx->pc = 0x2F1F20u;
            goto label_2f1f20;
        }
    }
    ctx->pc = 0x2F1F08u;
    // 0x2f1f08: 0x24030001
    ctx->pc = 0x2f1f08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1f0c: 0xae03327c
    ctx->pc = 0x2f1f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12924), GPR_U32(ctx, 3));
    // 0x2f1f10: 0x8e420000
    ctx->pc = 0x2f1f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1f14: 0x30420001
    ctx->pc = 0x2f1f14u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2f1f18: 0x1040000c
    ctx->pc = 0x2F1F18u;
    {
        const bool branch_taken_0x2f1f18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1F1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1f18) {
            ctx->pc = 0x2F1F4Cu;
            goto label_2f1f4c;
        }
    }
    ctx->pc = 0x2F1F20u;
label_2f1f20:
    // 0x2f1f20: 0x8c4331f8
    ctx->pc = 0x2f1f20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12792)));
    // 0x2f1f24: 0x1460000a
    ctx->pc = 0x2F1F24u;
    {
        const bool branch_taken_0x2f1f24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1F28u;
        SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
        if (branch_taken_0x2f1f24) {
            ctx->pc = 0x2F1F50u;
            goto label_2f1f50;
        }
    }
    ctx->pc = 0x2F1F2Cu;
    // 0x2f1f2c: 0xae200014
    ctx->pc = 0x2f1f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2f1f30: 0xae200010
    ctx->pc = 0x2f1f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2f1f34: 0xae200004
    ctx->pc = 0x2f1f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2f1f38: 0xae200000
    ctx->pc = 0x2f1f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f1f3c: 0xae20001c
    ctx->pc = 0x2f1f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2f1f40: 0xae200018
    ctx->pc = 0x2f1f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2f1f44: 0xae20000c
    ctx->pc = 0x2f1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2f1f48: 0xae200008
    ctx->pc = 0x2f1f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2f1f4c:
    // 0x2f1f4c: 0x3c07003a
    ctx->pc = 0x2f1f4cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
label_2f1f50:
    // 0x2f1f50: 0x24020002
    ctx->pc = 0x2f1f50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1f54: 0x8ce431bc
    ctx->pc = 0x2f1f54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 12732)));
    // 0x2f1f58: 0x14820018
    ctx->pc = 0x2F1F58u;
    {
        const bool branch_taken_0x2f1f58 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F1F5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f1f58) {
            ctx->pc = 0x2F1FBCu;
            goto label_2f1fbc;
        }
    }
    ctx->pc = 0x2F1F60u;
    // 0x2f1f60: 0x8e420000
    ctx->pc = 0x2f1f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f1f64: 0x30420009
    ctx->pc = 0x2f1f64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 9));
    // 0x2f1f68: 0x14400014
    ctx->pc = 0x2F1F68u;
    {
        const bool branch_taken_0x2f1f68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1F6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f1f68) {
            ctx->pc = 0x2F1FBCu;
            goto label_2f1fbc;
        }
    }
    ctx->pc = 0x2F1F70u;
    // 0x2f1f70: 0xae200000
    ctx->pc = 0x2f1f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2f1f74: 0x3c05003a
    ctx->pc = 0x2f1f74u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f1f78: 0xae200010
    ctx->pc = 0x2f1f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2f1f7c: 0x24030003
    ctx->pc = 0x2f1f7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f1f80: 0xae200014
    ctx->pc = 0x2f1f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2f1f84: 0x8ca231ec
    ctx->pc = 0x2f1f84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12780)));
    // 0x2f1f88: 0x14430003
    ctx->pc = 0x2F1F88u;
    {
        const bool branch_taken_0x2f1f88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2F1F8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x2f1f88) {
            ctx->pc = 0x2F1F98u;
            goto label_2f1f98;
        }
    }
    ctx->pc = 0x2F1F90u;
    // 0x2f1f90: 0x10000009
    ctx->pc = 0x2F1F90u;
    {
        const bool branch_taken_0x2f1f90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F1F94u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x2f1f90) {
            ctx->pc = 0x2F1FB8u;
            goto label_2f1fb8;
        }
    }
    ctx->pc = 0x2F1F98u;
label_2f1f98:
    // 0x2f1f98: 0x24030001
    ctx->pc = 0x2f1f98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f1f9c: 0x3c06003a
    ctx->pc = 0x2f1f9cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f1fa0: 0xaea30000
    ctx->pc = 0x2f1fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2f1fa4: 0x8cc231ec
    ctx->pc = 0x2f1fa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12780)));
    // 0x2f1fa8: 0x8fa70014
    ctx->pc = 0x2f1fa8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2f1fac: 0x38420002
    ctx->pc = 0x2f1facu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 2));
    // 0x2f1fb0: 0x2c420001
    ctx->pc = 0x2f1fb0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2f1fb4: 0xace20000
    ctx->pc = 0x2f1fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2f1fb8:
    // 0x2f1fb8: 0x24020001
    ctx->pc = 0x2f1fb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2f1fbc:
    // 0x2f1fbc: 0xdfbf00b0
    ctx->pc = 0x2f1fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f1fc0: 0xdfbe00a0
    ctx->pc = 0x2f1fc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f1fc4: 0xdfb70090
    ctx->pc = 0x2f1fc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f1fc8: 0xdfb60080
    ctx->pc = 0x2f1fc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f1fcc: 0xdfb50070
    ctx->pc = 0x2f1fccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f1fd0: 0xdfb40060
    ctx->pc = 0x2f1fd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f1fd4: 0xdfb30050
    ctx->pc = 0x2f1fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f1fd8: 0xdfb20040
    ctx->pc = 0x2f1fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f1fdc: 0xdfb10030
    ctx->pc = 0x2f1fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f1fe0: 0xdfb00020
    ctx->pc = 0x2f1fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f1fe4: 0x3e00008
    ctx->pc = 0x2F1FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1FE8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1B64u: goto label_2f1b64;
            case 0x2F1B6Cu: goto label_2f1b6c;
            case 0x2F1B94u: goto label_2f1b94;
            case 0x2F1BA4u: goto label_2f1ba4;
            case 0x2F1BD0u: goto label_2f1bd0;
            case 0x2F1BD4u: goto label_2f1bd4;
            case 0x2F1C04u: goto label_2f1c04;
            case 0x2F1C18u: goto label_2f1c18;
            case 0x2F1C38u: goto label_2f1c38;
            case 0x2F1C7Cu: goto label_2f1c7c;
            case 0x2F1C80u: goto label_2f1c80;
            case 0x2F1CACu: goto label_2f1cac;
            case 0x2F1CCCu: goto label_2f1ccc;
            case 0x2F1D18u: goto label_2f1d18;
            case 0x2F1D44u: goto label_2f1d44;
            case 0x2F1D48u: goto label_2f1d48;
            case 0x2F1DB0u: goto label_2f1db0;
            case 0x2F1DDCu: goto label_2f1ddc;
            case 0x2F1DE0u: goto label_2f1de0;
            case 0x2F1E10u: goto label_2f1e10;
            case 0x2F1E14u: goto label_2f1e14;
            case 0x2F1EC8u: goto label_2f1ec8;
            case 0x2F1EF0u: goto label_2f1ef0;
            case 0x2F1F20u: goto label_2f1f20;
            case 0x2F1F4Cu: goto label_2f1f4c;
            case 0x2F1F50u: goto label_2f1f50;
            case 0x2F1F98u: goto label_2f1f98;
            case 0x2F1FB8u: goto label_2f1fb8;
            case 0x2F1FBCu: goto label_2f1fbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F1FECu;
}
