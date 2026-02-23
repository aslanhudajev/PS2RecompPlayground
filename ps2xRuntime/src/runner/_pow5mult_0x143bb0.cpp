#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _pow5mult
// Address: 0x143bb0 - 0x143cb0
void _pow5mult_0x143bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_pow5mult");


    ctx->pc = 0x143bb0u;

    // 0x143bb0: 0x27bdffb0
    ctx->pc = 0x143bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x143bb4: 0xffb10010
    ctx->pc = 0x143bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x143bb8: 0xffb30030
    ctx->pc = 0x143bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x143bbc: 0xc0882d
    ctx->pc = 0x143bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bc0: 0xffb20020
    ctx->pc = 0x143bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x143bc4: 0x80982d
    ctx->pc = 0x143bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bc8: 0xffbf0040
    ctx->pc = 0x143bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x143bcc: 0x32230003
    ctx->pc = 0x143bccu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), 3));
    // 0x143bd0: 0xffb00000
    ctx->pc = 0x143bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143bd4: 0x1060000a
    ctx->pc = 0x143BD4u;
    {
        const bool branch_taken_0x143bd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x143BD8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143bd4) {
            ctx->pc = 0x143C00u;
            goto label_143c00;
        }
    }
    ctx->pc = 0x143BDCu;
    // 0x143bdc: 0x2463ffff
    ctx->pc = 0x143bdcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x143be0: 0x3c02002b
    ctx->pc = 0x143be0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x143be4: 0x24426f68
    ctx->pc = 0x143be4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28520));
    // 0x143be8: 0x31880
    ctx->pc = 0x143be8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x143bec: 0x621821
    ctx->pc = 0x143becu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143bf0: 0x8c660000
    ctx->pc = 0x143bf0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143bf4: 0xc050d68
    ctx->pc = 0x143BF4u;
    SET_GPR_U32(ctx, 31, 0x143BFCu);
    ctx->pc = 0x143BF8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1435A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x1435a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BFCu; }
        else if (ctx->pc != 0x143BFCu) { ctx->pc = 0x143BFCu; }
    }
    if (ctx->pc != 0x143BFCu) { return; }
    ctx->pc = 0x143BFCu;
    // 0x143bfc: 0x40902d
    ctx->pc = 0x143bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143c00:
    // 0x143c00: 0x118883
    ctx->pc = 0x143c00u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
    // 0x143c04: 0x12200023
    ctx->pc = 0x143C04u;
    {
        const bool branch_taken_0x143c04 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x143C08u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143c04) {
            ctx->pc = 0x143C94u;
            goto label_143c94;
        }
    }
    ctx->pc = 0x143C0Cu;
    // 0x143c0c: 0x8e700048
    ctx->pc = 0x143c0cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x143c10: 0x16000013
    ctx->pc = 0x143C10u;
    {
        const bool branch_taken_0x143c10 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x143C14u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x143c10) {
            ctx->pc = 0x143C60u;
            goto label_143c60;
        }
    }
    ctx->pc = 0x143C18u;
    // 0x143c18: 0x260202d
    ctx->pc = 0x143c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c1c: 0xc050e52
    ctx->pc = 0x143C1Cu;
    SET_GPR_U32(ctx, 31, 0x143C24u);
    ctx->pc = 0x143C20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 625));
    ctx->pc = 0x143948u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x143948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C24u; }
        else if (ctx->pc != 0x143C24u) { ctx->pc = 0x143C24u; }
    }
    if (ctx->pc != 0x143C24u) { return; }
    ctx->pc = 0x143C24u;
    // 0x143c24: 0x40802d
    ctx->pc = 0x143c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c28: 0xae620048
    ctx->pc = 0x143c28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
    // 0x143c2c: 0x1000000b
    ctx->pc = 0x143C2Cu;
    {
        const bool branch_taken_0x143c2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x143C30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x143c2c) {
            ctx->pc = 0x143C5Cu;
            goto label_143c5c;
        }
    }
    ctx->pc = 0x143C34u;
    // 0x143c34: 0x0
    ctx->pc = 0x143c34u;
    // NOP
label_143c38:
    // 0x143c38: 0x54400008
    ctx->pc = 0x143C38u;
    {
        const bool branch_taken_0x143c38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x143c38) {
            ctx->pc = 0x143C3Cu;
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x143C5Cu;
            goto label_143c5c;
        }
    }
    ctx->pc = 0x143C40u;
    // 0x143c40: 0x260202d
    ctx->pc = 0x143c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c44: 0x200282d
    ctx->pc = 0x143c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c48: 0xc050e60
    ctx->pc = 0x143C48u;
    SET_GPR_U32(ctx, 31, 0x143C50u);
    ctx->pc = 0x143C4Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143980u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x143980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C50u; }
        else if (ctx->pc != 0x143C50u) { ctx->pc = 0x143C50u; }
    }
    if (ctx->pc != 0x143C50u) { return; }
    ctx->pc = 0x143C50u;
    // 0x143c50: 0xae020000
    ctx->pc = 0x143c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x143c54: 0xac400000
    ctx->pc = 0x143c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x143c58: 0x40802d
    ctx->pc = 0x143c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143c5c:
    // 0x143c5c: 0x32220001
    ctx->pc = 0x143c5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
label_143c60:
    // 0x143c60: 0x10400008
    ctx->pc = 0x143C60u;
    {
        const bool branch_taken_0x143c60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x143C64u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x143c60) {
            ctx->pc = 0x143C84u;
            goto label_143c84;
        }
    }
    ctx->pc = 0x143C68u;
    // 0x143c68: 0x260202d
    ctx->pc = 0x143c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c6c: 0xc050e60
    ctx->pc = 0x143C6Cu;
    SET_GPR_U32(ctx, 31, 0x143C74u);
    ctx->pc = 0x143C70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143980u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x143980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C74u; }
        else if (ctx->pc != 0x143C74u) { ctx->pc = 0x143C74u; }
    }
    if (ctx->pc != 0x143C74u) { return; }
    ctx->pc = 0x143C74u;
    // 0x143c74: 0x240282d
    ctx->pc = 0x143c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c78: 0x260202d
    ctx->pc = 0x143c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c7c: 0xc050d5c
    ctx->pc = 0x143C7Cu;
    SET_GPR_U32(ctx, 31, 0x143C84u);
    ctx->pc = 0x143C80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143570u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x143570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C84u; }
        else if (ctx->pc != 0x143C84u) { ctx->pc = 0x143C84u; }
    }
    if (ctx->pc != 0x143C84u) { return; }
    ctx->pc = 0x143C84u;
label_143c84:
    // 0x143c84: 0x118843
    ctx->pc = 0x143c84u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x143c88: 0x5620ffeb
    ctx->pc = 0x143C88u;
    {
        const bool branch_taken_0x143c88 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x143c88) {
            ctx->pc = 0x143C8Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x143C38u;
            goto label_143c38;
        }
    }
    ctx->pc = 0x143C90u;
    // 0x143c90: 0x240102d
    ctx->pc = 0x143c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143c94:
    // 0x143c94: 0xdfbf0040
    ctx->pc = 0x143c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143c98: 0xdfb30030
    ctx->pc = 0x143c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143c9c: 0xdfb20020
    ctx->pc = 0x143c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143ca0: 0xdfb10010
    ctx->pc = 0x143ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143ca4: 0xdfb00000
    ctx->pc = 0x143ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143ca8: 0x3e00008
    ctx->pc = 0x143CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143CACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143C00u: goto label_143c00;
            case 0x143C38u: goto label_143c38;
            case 0x143C5Cu: goto label_143c5c;
            case 0x143C60u: goto label_143c60;
            case 0x143C84u: goto label_143c84;
            case 0x143C94u: goto label_143c94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143CB0u;
}
