#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NewWorldObject
// Address: 0x21bd40 - 0x21be80
void NewWorldObject_0x21bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21bd40u;

label_21bd40:
    // 0x21bd40: 0x27bdff90
    ctx->pc = 0x21bd40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21bd44: 0xffbf0060
    ctx->pc = 0x21bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21bd48: 0xffb50050
    ctx->pc = 0x21bd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21bd4c: 0xffb40040
    ctx->pc = 0x21bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21bd50: 0xffb30030
    ctx->pc = 0x21bd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21bd54: 0xffb20020
    ctx->pc = 0x21bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21bd58: 0xffb10010
    ctx->pc = 0x21bd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21bd5c: 0xffb00000
    ctx->pc = 0x21bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21bd60: 0x80982d
    ctx->pc = 0x21bd60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd64: 0xa0802d
    ctx->pc = 0x21bd64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd68: 0xc0902d
    ctx->pc = 0x21bd68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd6c: 0x3c158000
    ctx->pc = 0x21bd6cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)32768 << 16));
    // 0x21bd70: 0x2414003c
    ctx->pc = 0x21bd70u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 60));
    // 0x21bd74: 0x0
    ctx->pc = 0x21bd74u;
    // NOP
label_21bd78:
    // 0x21bd78: 0x8e020010
    ctx->pc = 0x21bd78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bd7c: 0x30420800
    ctx->pc = 0x21bd7cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2048));
    // 0x21bd80: 0x1040000e
    ctx->pc = 0x21BD80u;
    {
        const bool branch_taken_0x21bd80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BD84u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21bd80) {
            ctx->pc = 0x21BDBCu;
            goto label_21bdbc;
        }
    }
    ctx->pc = 0x21BD88u;
    // 0x21bd88: 0x200202d
    ctx->pc = 0x21bd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bd8c: 0xc086e76
    ctx->pc = 0x21BD8Cu;
    SET_GPR_U32(ctx, 31, 0x21BD94u);
    ctx->pc = 0x21BD90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21B9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateWorldNode_0x21b9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BD94u; }
    }
    if (ctx->pc != 0x21BD94u) { return; }
    ctx->pc = 0x21BD94u;
    // 0x21bd94: 0xae020028
    ctx->pc = 0x21bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x21bd98: 0x8e020010
    ctx->pc = 0x21bd98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bd9c: 0x3c031000
    ctx->pc = 0x21bd9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x21bda0: 0x431024
    ctx->pc = 0x21bda0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21bda4: 0x1440001b
    ctx->pc = 0x21BDA4u;
    {
        const bool branch_taken_0x21bda4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21BDA8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21bda4) {
            ctx->pc = 0x21BE14u;
            goto label_21be14;
        }
    }
    ctx->pc = 0x21BDACu;
    // 0x21bdac: 0xc086eee
    ctx->pc = 0x21BDACu;
    SET_GPR_U32(ctx, 31, 0x21BDB4u);
    ctx->pc = 0x21BDB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BBB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldPsysActivate_0x21bbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BDB4u; }
    }
    if (ctx->pc != 0x21BDB4u) { return; }
    ctx->pc = 0x21BDB4u;
    // 0x21bdb4: 0x10000018
    ctx->pc = 0x21BDB4u;
    {
        const bool branch_taken_0x21bdb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BDB8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
        if (branch_taken_0x21bdb4) {
            ctx->pc = 0x21BE18u;
            goto label_21be18;
        }
    }
    ctx->pc = 0x21BDBCu;
label_21bdbc:
    // 0x21bdbc: 0x8e030028
    ctx->pc = 0x21bdbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x21bdc0: 0x24020001
    ctx->pc = 0x21bdc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21bdc4: 0x10620005
    ctx->pc = 0x21BDC4u;
    {
        const bool branch_taken_0x21bdc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x21BDC8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21bdc4) {
            ctx->pc = 0x21BDDCu;
            goto label_21bddc;
        }
    }
    ctx->pc = 0x21BDCCu;
    // 0x21bdcc: 0x8e020010
    ctx->pc = 0x21bdccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bdd0: 0x551024
    ctx->pc = 0x21bdd0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21bdd4: 0x1040000b
    ctx->pc = 0x21BDD4u;
    {
        const bool branch_taken_0x21bdd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21bdd4) {
            ctx->pc = 0x21BE04u;
            goto label_21be04;
        }
    }
    ctx->pc = 0x21BDDCu;
label_21bddc:
    // 0x21bddc: 0xc086e76
    ctx->pc = 0x21BDDCu;
    SET_GPR_U32(ctx, 31, 0x21BDE4u);
    ctx->pc = 0x21BDE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21B9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateWorldNode_0x21b9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BDE4u; }
    }
    if (ctx->pc != 0x21BDE4u) { return; }
    ctx->pc = 0x21BDE4u;
    // 0x21bde4: 0xae020028
    ctx->pc = 0x21bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x21bde8: 0x40202d
    ctx->pc = 0x21bde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21bdec: 0xc0b1af4
    ctx->pc = 0x21BDECu;
    SET_GPR_U32(ctx, 31, 0x21BDF4u);
    ctx->pc = 0x21BDF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_SetObject_0x2c6bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BDF4u; }
    }
    if (ctx->pc != 0x21BDF4u) { return; }
    ctx->pc = 0x21BDF4u;
    // 0x21bdf4: 0x8e020010
    ctx->pc = 0x21bdf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21bdf8: 0x551025
    ctx->pc = 0x21bdf8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21bdfc: 0x10000004
    ctx->pc = 0x21BDFCu;
    {
        const bool branch_taken_0x21bdfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BE00u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x21bdfc) {
            ctx->pc = 0x21BE10u;
            goto label_21be10;
        }
    }
    ctx->pc = 0x21BE04u;
label_21be04:
    // 0x21be04: 0xc086e76
    ctx->pc = 0x21BE04u;
    SET_GPR_U32(ctx, 31, 0x21BE0Cu);
    ctx->pc = 0x21BE08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21B9D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateWorldNode_0x21b9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21BE0Cu; }
    }
    if (ctx->pc != 0x21BE0Cu) { return; }
    ctx->pc = 0x21BE0Cu;
    // 0x21be0c: 0xae020028
    ctx->pc = 0x21be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_21be10:
    // 0x21be10: 0x200882d
    ctx->pc = 0x21be10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21be14:
    // 0x21be14: 0x8e030010
    ctx->pc = 0x21be14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21be18:
    // 0x21be18: 0x30620100
    ctx->pc = 0x21be18u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
    // 0x21be1c: 0x10400003
    ctx->pc = 0x21BE1Cu;
    {
        const bool branch_taken_0x21be1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BE20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967237));
        if (branch_taken_0x21be1c) {
            ctx->pc = 0x21BE2Cu;
            goto label_21be2c;
        }
    }
    ctx->pc = 0x21BE24u;
    // 0x21be24: 0x621024
    ctx->pc = 0x21be24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21be28: 0xae020010
    ctx->pc = 0x21be28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_21be2c:
    // 0x21be2c: 0x8602002e
    ctx->pc = 0x21be2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x21be30: 0x4400005
    ctx->pc = 0x21BE30u;
    {
        const bool branch_taken_0x21be30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21BE34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21be30) {
            ctx->pc = 0x21BE48u;
            goto label_21be48;
        }
    }
    ctx->pc = 0x21BE38u;
    // 0x21be38: 0x541818
    ctx->pc = 0x21be38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21be3c: 0x732821
    ctx->pc = 0x21be3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x21be40: 0xc086f50
    ctx->pc = 0x21BE40u;
    SET_GPR_U32(ctx, 31, 0x21BE48u);
    ctx->pc = 0x21BE44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21BD40u;
    goto label_21bd40;
    ctx->pc = 0x21BE48u;
label_21be48:
    // 0x21be48: 0x8604002c
    ctx->pc = 0x21be48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x21be4c: 0x4800003
    ctx->pc = 0x21BE4Cu;
    {
        const bool branch_taken_0x21be4c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x21BE50u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x21be4c) {
            ctx->pc = 0x21BE5Cu;
            goto label_21be5c;
        }
    }
    ctx->pc = 0x21BE54u;
    // 0x21be54: 0x1000ffc8
    ctx->pc = 0x21BE54u;
    {
        const bool branch_taken_0x21be54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21BE58u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        if (branch_taken_0x21be54) {
            ctx->pc = 0x21BD78u;
            goto label_21bd78;
        }
    }
    ctx->pc = 0x21BE5Cu;
label_21be5c:
    // 0x21be5c: 0xdfbf0060
    ctx->pc = 0x21be5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21be60: 0xdfb50050
    ctx->pc = 0x21be60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21be64: 0xdfb40040
    ctx->pc = 0x21be64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21be68: 0xdfb30030
    ctx->pc = 0x21be68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21be6c: 0xdfb20020
    ctx->pc = 0x21be6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21be70: 0xdfb10010
    ctx->pc = 0x21be70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21be74: 0xdfb00000
    ctx->pc = 0x21be74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21be78: 0x3e00008
    ctx->pc = 0x21BE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BE7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21BD40u: goto label_21bd40;
            case 0x21BD78u: goto label_21bd78;
            case 0x21BDBCu: goto label_21bdbc;
            case 0x21BDDCu: goto label_21bddc;
            case 0x21BE04u: goto label_21be04;
            case 0x21BE10u: goto label_21be10;
            case 0x21BE14u: goto label_21be14;
            case 0x21BE18u: goto label_21be18;
            case 0x21BE2Cu: goto label_21be2c;
            case 0x21BE48u: goto label_21be48;
            case 0x21BE5Cu: goto label_21be5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21BE80u;
}
