#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawPolyInsts
// Address: 0x2ced68 - 0x2cee34
void MBDrawPolyInsts_0x2ced68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ced68u;

    // 0x2ced68: 0x27bdffc0
    ctx->pc = 0x2ced68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ced6c: 0xffbf0030
    ctx->pc = 0x2ced6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ced70: 0xffb20020
    ctx->pc = 0x2ced70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ced74: 0xffb10010
    ctx->pc = 0x2ced74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ced78: 0xffb00000
    ctx->pc = 0x2ced78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ced7c: 0x80882d
    ctx->pc = 0x2ced7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ced80: 0x8e320070
    ctx->pc = 0x2ced80u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2ced84: 0x8e420000
    ctx->pc = 0x2ced84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ced88: 0x10400024
    ctx->pc = 0x2CED88u;
    {
        const bool branch_taken_0x2ced88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CED8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ced88) {
            ctx->pc = 0x2CEE1Cu;
            goto label_2cee1c;
        }
    }
    ctx->pc = 0x2CED90u;
    // 0x2ced90: 0xc0b09ea
    ctx->pc = 0x2CED90u;
    SET_GPR_U32(ctx, 31, 0x2CED98u);
    ctx->pc = 0x2C27A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBStartBlits_0x2c27a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED98u; }
    }
    if (ctx->pc != 0x2CED98u) { return; }
    ctx->pc = 0x2CED98u;
    // 0x2ced98: 0x8e440004
    ctx->pc = 0x2ced98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2ced9c: 0xc0b3a78
    ctx->pc = 0x2CED9Cu;
    SET_GPR_U32(ctx, 31, 0x2CEDA4u);
    ctx->pc = 0x2CEDA0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->pc = 0x2CE9E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PolyXfrmVerts_0x2ce9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDA4u; }
    }
    if (ctx->pc != 0x2CEDA4u) { return; }
    ctx->pc = 0x2CEDA4u;
    // 0x2ceda4: 0x3c03003a
    ctx->pc = 0x2ceda4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ceda8: 0x96220068
    ctx->pc = 0x2ceda8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2cedac: 0xa462cc00
    ctx->pc = 0x2cedacu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294953984), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cedb0: 0x8e500000
    ctx->pc = 0x2cedb0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cedb4: 0x52000009
    ctx->pc = 0x2CEDB4u;
    {
        const bool branch_taken_0x2cedb4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cedb4) {
            ctx->pc = 0x2CEDB8u;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
            ctx->pc = 0x2CEDDCu;
            goto label_2ceddc;
        }
    }
    ctx->pc = 0x2CEDBCu;
    // 0x2cedbc: 0x200202d
    ctx->pc = 0x2cedbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cedc0:
    // 0x2cedc0: 0x82250052
    ctx->pc = 0x2cedc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2cedc4: 0xc0b3b36
    ctx->pc = 0x2CEDC4u;
    SET_GPR_U32(ctx, 31, 0x2CEDCCu);
    ctx->pc = 0x2CEDC8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CECD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPolyInst_0x2cecd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDCCu; }
    }
    if (ctx->pc != 0x2CEDCCu) { return; }
    ctx->pc = 0x2CEDCCu;
    // 0x2cedcc: 0x8e10001c
    ctx->pc = 0x2cedccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cedd0: 0x1600fffb
    ctx->pc = 0x2CEDD0u;
    {
        const bool branch_taken_0x2cedd0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CEDD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cedd0) {
            ctx->pc = 0x2CEDC0u;
            goto label_2cedc0;
        }
    }
    ctx->pc = 0x2CEDD8u;
    // 0x2cedd8: 0x82230052
    ctx->pc = 0x2cedd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_2ceddc:
    // 0x2ceddc: 0x2402000b
    ctx->pc = 0x2ceddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x2cede0: 0x1462000b
    ctx->pc = 0x2CEDE0u;
    {
        const bool branch_taken_0x2cede0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2cede0) {
            ctx->pc = 0x2CEE10u;
            goto label_2cee10;
        }
    }
    ctx->pc = 0x2CEDE8u;
    // 0x2cede8: 0x8e500000
    ctx->pc = 0x2cede8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cedec: 0x12000008
    ctx->pc = 0x2CEDECu;
    {
        const bool branch_taken_0x2cedec = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CEDF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cedec) {
            ctx->pc = 0x2CEE10u;
            goto label_2cee10;
        }
    }
    ctx->pc = 0x2CEDF4u;
    // 0x2cedf4: 0x0
    ctx->pc = 0x2cedf4u;
    // NOP
label_2cedf8:
    // 0x2cedf8: 0x82250052
    ctx->pc = 0x2cedf8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2cedfc: 0xc0b3b36
    ctx->pc = 0x2CEDFCu;
    SET_GPR_U32(ctx, 31, 0x2CEE04u);
    ctx->pc = 0x2CEE00u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CECD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPolyInst_0x2cecd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE04u; }
    }
    if (ctx->pc != 0x2CEE04u) { return; }
    ctx->pc = 0x2CEE04u;
    // 0x2cee04: 0x8e10001c
    ctx->pc = 0x2cee04u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2cee08: 0x1600fffb
    ctx->pc = 0x2CEE08u;
    {
        const bool branch_taken_0x2cee08 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CEE0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cee08) {
            ctx->pc = 0x2CEDF8u;
            goto label_2cedf8;
        }
    }
    ctx->pc = 0x2CEE10u;
label_2cee10:
    // 0x2cee10: 0xc0b09ec
    ctx->pc = 0x2CEE10u;
    SET_GPR_U32(ctx, 31, 0x2CEE18u);
    ctx->pc = 0x2C27B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBEndBlits_0x2c27b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE18u; }
    }
    if (ctx->pc != 0x2CEE18u) { return; }
    ctx->pc = 0x2CEE18u;
    // 0x2cee18: 0x102d
    ctx->pc = 0x2cee18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cee1c:
    // 0x2cee1c: 0xdfbf0030
    ctx->pc = 0x2cee1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cee20: 0xdfb20020
    ctx->pc = 0x2cee20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cee24: 0xdfb10010
    ctx->pc = 0x2cee24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cee28: 0xdfb00000
    ctx->pc = 0x2cee28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cee2c: 0x3e00008
    ctx->pc = 0x2CEE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEE30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CEDC0u: goto label_2cedc0;
            case 0x2CEDDCu: goto label_2ceddc;
            case 0x2CEDF8u: goto label_2cedf8;
            case 0x2CEE10u: goto label_2cee10;
            case 0x2CEE1Cu: goto label_2cee1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CEE34u;
}
