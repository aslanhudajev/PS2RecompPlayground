#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncIVertNum
// Address: 0x2b6bc0 - 0x2b6e98
void efuncIVertNum_0x2b6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b6bc0u;

    // 0x2b6bc0: 0x27bdfe90
    ctx->pc = 0x2b6bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2b6bc4: 0xffbf0160
    ctx->pc = 0x2b6bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x2b6bc8: 0xffb60150
    ctx->pc = 0x2b6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 22));
    // 0x2b6bcc: 0xffb50140
    ctx->pc = 0x2b6bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 21));
    // 0x2b6bd0: 0xffb40130
    ctx->pc = 0x2b6bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x2b6bd4: 0xffb30120
    ctx->pc = 0x2b6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 19));
    // 0x2b6bd8: 0xffb20110
    ctx->pc = 0x2b6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2b6bdc: 0xffb10100
    ctx->pc = 0x2b6bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 17));
    // 0x2b6be0: 0xffb000f0
    ctx->pc = 0x2b6be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x2b6be4: 0x80b02d
    ctx->pc = 0x2b6be4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6be8: 0x8ed10000
    ctx->pc = 0x2b6be8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2b6bec: 0xc0ad1a2
    ctx->pc = 0x2B6BECu;
    SET_GPR_U32(ctx, 31, 0x2B6BF4u);
    ctx->pc = 0x2B6BF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 16)));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6BF4u; }
    }
    if (ctx->pc != 0x2B6BF4u) { return; }
    ctx->pc = 0x2B6BF4u;
    // 0x2b6bf4: 0x40a02d
    ctx->pc = 0x2b6bf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bf8: 0x220202d
    ctx->pc = 0x2b6bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6bfc: 0x8ec50008
    ctx->pc = 0x2b6bfcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2b6c00: 0x3c06003b
    ctx->pc = 0x2b6c00u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b6c04: 0xc0adf5e
    ctx->pc = 0x2B6C04u;
    SET_GPR_U32(ctx, 31, 0x2B6C0Cu);
    ctx->pc = 0x2B6C08u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 7448));
    ctx->pc = 0x2B7D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalGetAddr_0x2b7d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C0Cu; }
    }
    if (ctx->pc != 0x2B6C0Cu) { return; }
    ctx->pc = 0x2B6C0Cu;
    // 0x2b6c0c: 0xc0ad1a2
    ctx->pc = 0x2B6C0Cu;
    SET_GPR_U32(ctx, 31, 0x2B6C14u);
    ctx->pc = 0x2B6C10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C14u; }
    }
    if (ctx->pc != 0x2B6C14u) { return; }
    ctx->pc = 0x2B6C14u;
    // 0x2b6c14: 0x40902d
    ctx->pc = 0x2b6c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c18: 0x220202d
    ctx->pc = 0x2b6c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c1c: 0x8ec50008
    ctx->pc = 0x2b6c1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2b6c20: 0x3c06003b
    ctx->pc = 0x2b6c20u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b6c24: 0xc0adf5e
    ctx->pc = 0x2B6C24u;
    SET_GPR_U32(ctx, 31, 0x2B6C2Cu);
    ctx->pc = 0x2B6C28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 20144));
    ctx->pc = 0x2B7D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalGetAddr_0x2b7d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C2Cu; }
    }
    if (ctx->pc != 0x2B6C2Cu) { return; }
    ctx->pc = 0x2B6C2Cu;
    // 0x2b6c2c: 0xc0ad1a2
    ctx->pc = 0x2B6C2Cu;
    SET_GPR_U32(ctx, 31, 0x2B6C34u);
    ctx->pc = 0x2B6C30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C34u; }
    }
    if (ctx->pc != 0x2B6C34u) { return; }
    ctx->pc = 0x2B6C34u;
    // 0x2b6c34: 0x40982d
    ctx->pc = 0x2b6c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c38: 0x220202d
    ctx->pc = 0x2b6c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c3c: 0x8ec50008
    ctx->pc = 0x2b6c3cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x2b6c40: 0x3c06003b
    ctx->pc = 0x2b6c40u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2b6c44: 0xc0adf5e
    ctx->pc = 0x2B6C44u;
    SET_GPR_U32(ctx, 31, 0x2B6C4Cu);
    ctx->pc = 0x2B6C48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 20160));
    ctx->pc = 0x2B7D78u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalGetAddr_0x2b7d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C4Cu; }
    }
    if (ctx->pc != 0x2B6C4Cu) { return; }
    ctx->pc = 0x2B6C4Cu;
    // 0x2b6c4c: 0xc0ad1a2
    ctx->pc = 0x2B6C4Cu;
    SET_GPR_U32(ctx, 31, 0x2B6C54u);
    ctx->pc = 0x2B6C50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4688u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalInt_0x2b4688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6C54u; }
    }
    if (ctx->pc != 0x2B6C54u) { return; }
    ctx->pc = 0x2B6C54u;
    // 0x2b6c54: 0x40282d
    ctx->pc = 0x2b6c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c58: 0x3c02003b
    ctx->pc = 0x2b6c58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2b6c5c: 0x24444ed0
    ctx->pc = 0x2b6c5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 20176));
    // 0x2b6c60: 0x280802d
    ctx->pc = 0x2b6c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6c64: 0x212102a
    ctx->pc = 0x2b6c64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 18)));
    // 0x2b6c68: 0x14400005
    ctx->pc = 0x2B6C68u;
    {
        const bool branch_taken_0x2b6c68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B6C6Cu;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c68) {
            ctx->pc = 0x2B6C80u;
            goto label_2b6c80;
        }
    }
    ctx->pc = 0x2B6C70u;
    // 0x2b6c70: 0x3c02003b
    ctx->pc = 0x2b6c70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2b6c74: 0x24444ed8
    ctx->pc = 0x2b6c74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 20184));
    // 0x2b6c78: 0x2128023
    ctx->pc = 0x2b6c78u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2b6c7c: 0x240a82d
    ctx->pc = 0x2b6c7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b6c80:
    // 0x2b6c80: 0x293102a
    ctx->pc = 0x2b6c80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 19)));
    // 0x2b6c84: 0x14400009
    ctx->pc = 0x2B6C84u;
    {
        const bool branch_taken_0x2b6c84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B6C88u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 5)));
        if (branch_taken_0x2b6c84) {
            ctx->pc = 0x2B6CACu;
            goto label_2b6cac;
        }
    }
    ctx->pc = 0x2B6C8Cu;
    // 0x2b6c8c: 0x2931823
    ctx->pc = 0x2b6c8cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x2b6c90: 0x70102a
    ctx->pc = 0x2b6c90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x2b6c94: 0x10400004
    ctx->pc = 0x2B6C94u;
    {
        const bool branch_taken_0x2b6c94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6C98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b6c94) {
            ctx->pc = 0x2B6CA8u;
            goto label_2b6ca8;
        }
    }
    ctx->pc = 0x2B6C9Cu;
    // 0x2b6c9c: 0x24444ee0
    ctx->pc = 0x2b6c9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 20192));
    // 0x2b6ca0: 0x60802d
    ctx->pc = 0x2b6ca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ca4: 0x260a82d
    ctx->pc = 0x2b6ca4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b6ca8:
    // 0x2b6ca8: 0x285102a
    ctx->pc = 0x2b6ca8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 5)));
label_2b6cac:
    // 0x2b6cac: 0x14400009
    ctx->pc = 0x2B6CACu;
    {
        const bool branch_taken_0x2b6cac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B6CB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x2b6cac) {
            ctx->pc = 0x2B6CD4u;
            goto label_2b6cd4;
        }
    }
    ctx->pc = 0x2B6CB4u;
    // 0x2b6cb4: 0x2851823
    ctx->pc = 0x2b6cb4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2b6cb8: 0x70102a
    ctx->pc = 0x2b6cb8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
    // 0x2b6cbc: 0x10400004
    ctx->pc = 0x2B6CBCu;
    {
        const bool branch_taken_0x2b6cbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6CC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x2b6cbc) {
            ctx->pc = 0x2B6CD0u;
            goto label_2b6cd0;
        }
    }
    ctx->pc = 0x2B6CC4u;
    // 0x2b6cc4: 0x24444ef0
    ctx->pc = 0x2b6cc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 20208));
    // 0x2b6cc8: 0x60802d
    ctx->pc = 0x2b6cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ccc: 0xa0a82d
    ctx->pc = 0x2b6cccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b6cd0:
    // 0x2b6cd0: 0x24020040
    ctx->pc = 0x2b6cd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
label_2b6cd4:
    // 0x2b6cd4: 0xafa20000
    ctx->pc = 0x2b6cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2b6cd8: 0xc0bf306
    ctx->pc = 0x2B6CD8u;
    SET_GPR_U32(ctx, 31, 0x2B6CE0u);
    ctx->pc = 0x2B6CDCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    ctx->pc = 0x2FCC18u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x2fcc18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6CE0u; }
    }
    if (ctx->pc != 0x2B6CE0u) { return; }
    ctx->pc = 0x2B6CE0u;
    // 0x2b6ce0: 0xafa20014
    ctx->pc = 0x2b6ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2b6ce4: 0x24020001
    ctx->pc = 0x2b6ce4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6ce8: 0xafa20050
    ctx->pc = 0x2b6ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2b6cec: 0xafb50060
    ctx->pc = 0x2b6cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 21));
    // 0x2b6cf0: 0xafa200a0
    ctx->pc = 0x2b6cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x2b6cf4: 0x101183
    ctx->pc = 0x2b6cf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 6));
    // 0x2b6cf8: 0xafa200b0
    ctx->pc = 0x2b6cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2b6cfc: 0x3c04003b
    ctx->pc = 0x2b6cfcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6d00: 0x24844f00
    ctx->pc = 0x2b6d00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20224));
    // 0x2b6d04: 0xc0ad2fc
    ctx->pc = 0x2B6D04u;
    SET_GPR_U32(ctx, 31, 0x2B6D0Cu);
    ctx->pc = 0x2B6D08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2B4BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAssign_0x2b4bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D0Cu; }
    }
    if (ctx->pc != 0x2B6D0Cu) { return; }
    ctx->pc = 0x2B6D0Cu;
    // 0x2b6d0c: 0x3c04003b
    ctx->pc = 0x2b6d0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6d10: 0x24844f10
    ctx->pc = 0x2b6d10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20240));
    // 0x2b6d14: 0xc0ad2fc
    ctx->pc = 0x2B6D14u;
    SET_GPR_U32(ctx, 31, 0x2B6D1Cu);
    ctx->pc = 0x2B6D18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B4BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAssign_0x2b4bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D1Cu; }
    }
    if (ctx->pc != 0x2B6D1Cu) { return; }
    ctx->pc = 0x2B6D1Cu;
    // 0x2b6d1c: 0x3c04003b
    ctx->pc = 0x2b6d1cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2b6d20: 0x24844f20
    ctx->pc = 0x2b6d20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 20256));
    // 0x2b6d24: 0xc0ad2fc
    ctx->pc = 0x2B6D24u;
    SET_GPR_U32(ctx, 31, 0x2B6D2Cu);
    ctx->pc = 0x2B6D28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x2B4BF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        evalAssign_0x2b4bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6D2Cu; }
    }
    if (ctx->pc != 0x2B6D2Cu) { return; }
    ctx->pc = 0x2B6D2Cu;
    // 0x2b6d2c: 0x8ec20004
    ctx->pc = 0x2b6d2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x2b6d30: 0x80440006
    ctx->pc = 0x2b6d30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b6d34: 0x24020069
    ctx->pc = 0x2b6d34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 105));
    // 0x2b6d38: 0x1082000c
    ctx->pc = 0x2B6D38u;
    {
        const bool branch_taken_0x2b6d38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6D3Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 106));
        if (branch_taken_0x2b6d38) {
            ctx->pc = 0x2B6D6Cu;
            goto label_2b6d6c;
        }
    }
    ctx->pc = 0x2B6D40u;
    // 0x2b6d40: 0x10400005
    ctx->pc = 0x2B6D40u;
    {
        const bool branch_taken_0x2b6d40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6D44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 98));
        if (branch_taken_0x2b6d40) {
            ctx->pc = 0x2B6D58u;
            goto label_2b6d58;
        }
    }
    ctx->pc = 0x2B6D48u;
    // 0x2b6d48: 0x10820034
    ctx->pc = 0x2B6D48u;
    {
        const bool branch_taken_0x2b6d48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6D4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        if (branch_taken_0x2b6d48) {
            ctx->pc = 0x2B6E1Cu;
            goto label_2b6e1c;
        }
    }
    ctx->pc = 0x2B6D50u;
    // 0x2b6d50: 0x10000049
    ctx->pc = 0x2B6D50u;
    {
        const bool branch_taken_0x2b6d50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6D54u;
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        if (branch_taken_0x2b6d50) {
            ctx->pc = 0x2B6E78u;
            goto label_2b6e78;
        }
    }
    ctx->pc = 0x2B6D58u;
label_2b6d58:
    // 0x2b6d58: 0x2402006e
    ctx->pc = 0x2b6d58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 110));
    // 0x2b6d5c: 0x10820019
    ctx->pc = 0x2B6D5Cu;
    {
        const bool branch_taken_0x2b6d5c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6D60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
        if (branch_taken_0x2b6d5c) {
            ctx->pc = 0x2B6DC4u;
            goto label_2b6dc4;
        }
    }
    ctx->pc = 0x2B6D64u;
    // 0x2b6d64: 0x10000044
    ctx->pc = 0x2B6D64u;
    {
        const bool branch_taken_0x2b6d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6D68u;
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        if (branch_taken_0x2b6d64) {
            ctx->pc = 0x2B6E78u;
            goto label_2b6e78;
        }
    }
    ctx->pc = 0x2B6D6Cu;
label_2b6d6c:
    // 0x2b6d6c: 0x220202d
    ctx->pc = 0x2b6d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6d70: 0x27a200a0
    ctx->pc = 0x2b6d70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 160));
    // 0x2b6d74: 0x27a300e0
    ctx->pc = 0x2b6d74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 224));
label_2b6d78:
    // 0x2b6d78: 0xdc450000
    ctx->pc = 0x2b6d78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6d7c: 0xdc460008
    ctx->pc = 0x2b6d7cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6d80: 0xdc470010
    ctx->pc = 0x2b6d80u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6d84: 0xdc480018
    ctx->pc = 0x2b6d84u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b6d88: 0xfc850000
    ctx->pc = 0x2b6d88u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x2b6d8c: 0xfc860008
    ctx->pc = 0x2b6d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x2b6d90: 0xfc870010
    ctx->pc = 0x2b6d90u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x2b6d94: 0xfc880018
    ctx->pc = 0x2b6d94u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x2b6d98: 0x24420020
    ctx->pc = 0x2b6d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b6d9c: 0x24840020
    ctx->pc = 0x2b6d9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b6da0: 0x0
    ctx->pc = 0x2b6da0u;
    // NOP
    // 0x2b6da4: 0x0
    ctx->pc = 0x2b6da4u;
    // NOP
    // 0x2b6da8: 0x1443fff3
    ctx->pc = 0x2B6DA8u;
    {
        const bool branch_taken_0x2b6da8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b6da8) {
            ctx->pc = 0x2B6D78u;
            goto label_2b6d78;
        }
    }
    ctx->pc = 0x2B6DB0u;
    // 0x2b6db0: 0xdc430000
    ctx->pc = 0x2b6db0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6db4: 0xdc450008
    ctx->pc = 0x2b6db4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6db8: 0xfc830000
    ctx->pc = 0x2b6db8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x2b6dbc: 0x1000002c
    ctx->pc = 0x2B6DBCu;
    {
        const bool branch_taken_0x2b6dbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6DC0u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
        if (branch_taken_0x2b6dbc) {
            ctx->pc = 0x2B6E70u;
            goto label_2b6e70;
        }
    }
    ctx->pc = 0x2B6DC4u;
label_2b6dc4:
    // 0x2b6dc4: 0x220202d
    ctx->pc = 0x2b6dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6dc8: 0x3a0102d
    ctx->pc = 0x2b6dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6dcc: 0x27a30040
    ctx->pc = 0x2b6dccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 64));
label_2b6dd0:
    // 0x2b6dd0: 0xdc480000
    ctx->pc = 0x2b6dd0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6dd4: 0xdc450008
    ctx->pc = 0x2b6dd4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6dd8: 0xdc460010
    ctx->pc = 0x2b6dd8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6ddc: 0xdc470018
    ctx->pc = 0x2b6ddcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b6de0: 0xfc880000
    ctx->pc = 0x2b6de0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x2b6de4: 0xfc850008
    ctx->pc = 0x2b6de4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x2b6de8: 0xfc860010
    ctx->pc = 0x2b6de8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x2b6dec: 0xfc870018
    ctx->pc = 0x2b6decu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x2b6df0: 0x24420020
    ctx->pc = 0x2b6df0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b6df4: 0x24840020
    ctx->pc = 0x2b6df4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b6df8: 0x0
    ctx->pc = 0x2b6df8u;
    // NOP
    // 0x2b6dfc: 0x0
    ctx->pc = 0x2b6dfcu;
    // NOP
    // 0x2b6e00: 0x1443fff3
    ctx->pc = 0x2B6E00u;
    {
        const bool branch_taken_0x2b6e00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b6e00) {
            ctx->pc = 0x2B6DD0u;
            goto label_2b6dd0;
        }
    }
    ctx->pc = 0x2B6E08u;
    // 0x2b6e08: 0xdc480000
    ctx->pc = 0x2b6e08u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6e0c: 0xdc430008
    ctx->pc = 0x2b6e0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6e10: 0xfc880000
    ctx->pc = 0x2b6e10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
    // 0x2b6e14: 0x10000016
    ctx->pc = 0x2B6E14u;
    {
        const bool branch_taken_0x2b6e14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6E18u;
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        if (branch_taken_0x2b6e14) {
            ctx->pc = 0x2B6E70u;
            goto label_2b6e70;
        }
    }
    ctx->pc = 0x2B6E1Cu;
label_2b6e1c:
    // 0x2b6e1c: 0x220202d
    ctx->pc = 0x2b6e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e20: 0x27a20050
    ctx->pc = 0x2b6e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b6e24: 0x27a30090
    ctx->pc = 0x2b6e24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 144));
label_2b6e28:
    // 0x2b6e28: 0xdc470000
    ctx->pc = 0x2b6e28u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6e2c: 0xdc480008
    ctx->pc = 0x2b6e2cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6e30: 0xdc450010
    ctx->pc = 0x2b6e30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6e34: 0xdc460018
    ctx->pc = 0x2b6e34u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b6e38: 0xfc870000
    ctx->pc = 0x2b6e38u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x2b6e3c: 0xfc880008
    ctx->pc = 0x2b6e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
    // 0x2b6e40: 0xfc850010
    ctx->pc = 0x2b6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x2b6e44: 0xfc860018
    ctx->pc = 0x2b6e44u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x2b6e48: 0x24420020
    ctx->pc = 0x2b6e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x2b6e4c: 0x24840020
    ctx->pc = 0x2b6e4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x2b6e50: 0x0
    ctx->pc = 0x2b6e50u;
    // NOP
    // 0x2b6e54: 0x0
    ctx->pc = 0x2b6e54u;
    // NOP
    // 0x2b6e58: 0x1443fff3
    ctx->pc = 0x2B6E58u;
    {
        const bool branch_taken_0x2b6e58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2b6e58) {
            ctx->pc = 0x2B6E28u;
            goto label_2b6e28;
        }
    }
    ctx->pc = 0x2B6E60u;
    // 0x2b6e60: 0xdc470000
    ctx->pc = 0x2b6e60u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6e64: 0xdc480008
    ctx->pc = 0x2b6e64u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b6e68: 0xfc870000
    ctx->pc = 0x2b6e68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
    // 0x2b6e6c: 0xfc880008
    ctx->pc = 0x2b6e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 8));
label_2b6e70:
    // 0x2b6e70: 0xdfbf0160
    ctx->pc = 0x2b6e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2b6e74: 0xdfb60150
    ctx->pc = 0x2b6e74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2b6e78:
    // 0x2b6e78: 0xdfb50140
    ctx->pc = 0x2b6e78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2b6e7c: 0xdfb40130
    ctx->pc = 0x2b6e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2b6e80: 0xdfb30120
    ctx->pc = 0x2b6e80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2b6e84: 0xdfb20110
    ctx->pc = 0x2b6e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b6e88: 0xdfb10100
    ctx->pc = 0x2b6e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2b6e8c: 0xdfb000f0
    ctx->pc = 0x2b6e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2b6e90: 0x3e00008
    ctx->pc = 0x2B6E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6E94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6C80u: goto label_2b6c80;
            case 0x2B6CA8u: goto label_2b6ca8;
            case 0x2B6CACu: goto label_2b6cac;
            case 0x2B6CD0u: goto label_2b6cd0;
            case 0x2B6CD4u: goto label_2b6cd4;
            case 0x2B6D58u: goto label_2b6d58;
            case 0x2B6D6Cu: goto label_2b6d6c;
            case 0x2B6D78u: goto label_2b6d78;
            case 0x2B6DC4u: goto label_2b6dc4;
            case 0x2B6DD0u: goto label_2b6dd0;
            case 0x2B6E1Cu: goto label_2b6e1c;
            case 0x2B6E28u: goto label_2b6e28;
            case 0x2B6E70u: goto label_2b6e70;
            case 0x2B6E78u: goto label_2b6e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B6E98u;
}
