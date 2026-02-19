#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddEnemyHitCol
// Address: 0x27d978 - 0x27db48
void AddEnemyHitCol_0x27d978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27d978u;

    // 0x27d978: 0x27bdffb0
    ctx->pc = 0x27d978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27d97c: 0xffbf0030
    ctx->pc = 0x27d97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27d980: 0xffb20020
    ctx->pc = 0x27d980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27d984: 0xffb10010
    ctx->pc = 0x27d984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d988: 0xffb00000
    ctx->pc = 0x27d988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d98c: 0xe7b40040
    ctx->pc = 0x27d98cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27d990: 0x80482d
    ctx->pc = 0x27d990u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d994: 0xa0802d
    ctx->pc = 0x27d994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d998: 0x2402000b
    ctx->pc = 0x27d998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x27d99c: 0x11020004
    ctx->pc = 0x27D99Cu;
    {
        const bool branch_taken_0x27d99c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x27D9A0u;
        SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 6), 15));
        if (branch_taken_0x27d99c) {
            ctx->pc = 0x27D9B0u;
            goto label_27d9b0;
        }
    }
    ctx->pc = 0x27D9A4u;
    // 0x27d9a4: 0x24020015
    ctx->pc = 0x27d9a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 21));
    // 0x27d9a8: 0x15020008
    ctx->pc = 0x27D9A8u;
    {
        const bool branch_taken_0x27d9a8 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        ctx->pc = 0x27D9ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x27d9a8) {
            ctx->pc = 0x27D9CCu;
            goto label_27d9cc;
        }
    }
    ctx->pc = 0x27D9B0u;
label_27d9b0:
    // 0x27d9b0: 0x50e00004
    ctx->pc = 0x27D9B0u;
    {
        const bool branch_taken_0x27d9b0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x27d9b0) {
            ctx->pc = 0x27D9B4u;
            SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
            ctx->pc = 0x27D9C4u;
            goto label_27d9c4;
        }
    }
    ctx->pc = 0x27D9B8u;
    // 0x27d9b8: 0x3c030034
    ctx->pc = 0x27d9b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27d9bc: 0x1000001c
    ctx->pc = 0x27D9BCu;
    {
        const bool branch_taken_0x27d9bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D9C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3576));
        if (branch_taken_0x27d9bc) {
            ctx->pc = 0x27DA30u;
            goto label_27da30;
        }
    }
    ctx->pc = 0x27D9C4u;
label_27d9c4:
    // 0x27d9c4: 0x1000001a
    ctx->pc = 0x27D9C4u;
    {
        const bool branch_taken_0x27d9c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D9C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3552));
        if (branch_taken_0x27d9c4) {
            ctx->pc = 0x27DA30u;
            goto label_27da30;
        }
    }
    ctx->pc = 0x27D9CCu;
label_27d9cc:
    // 0x27d9cc: 0x11020006
    ctx->pc = 0x27D9CCu;
    {
        const bool branch_taken_0x27d9cc = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x27D9D0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x27d9cc) {
            ctx->pc = 0x27D9E8u;
            goto label_27d9e8;
        }
    }
    ctx->pc = 0x27D9D4u;
    // 0x27d9d4: 0x11020004
    ctx->pc = 0x27D9D4u;
    {
        const bool branch_taken_0x27d9d4 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x27D9D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x27d9d4) {
            ctx->pc = 0x27D9E8u;
            goto label_27d9e8;
        }
    }
    ctx->pc = 0x27D9DCu;
    // 0x27d9dc: 0x8c420818
    ctx->pc = 0x27d9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2072)));
    // 0x27d9e0: 0x1040000d
    ctx->pc = 0x27D9E0u;
    {
        const bool branch_taken_0x27d9e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x27d9e0) {
            ctx->pc = 0x27DA18u;
            goto label_27da18;
        }
    }
    ctx->pc = 0x27D9E8u;
label_27d9e8:
    // 0x27d9e8: 0x10e00003
    ctx->pc = 0x27D9E8u;
    {
        const bool branch_taken_0x27d9e8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D9ECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27d9e8) {
            ctx->pc = 0x27D9F8u;
            goto label_27d9f8;
        }
    }
    ctx->pc = 0x27D9F0u;
    // 0x27d9f0: 0x10000003
    ctx->pc = 0x27D9F0u;
    {
        const bool branch_taken_0x27d9f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27D9F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3480));
        if (branch_taken_0x27d9f0) {
            ctx->pc = 0x27DA00u;
            goto label_27da00;
        }
    }
    ctx->pc = 0x27D9F8u;
label_27d9f8:
    // 0x27d9f8: 0x3c030034
    ctx->pc = 0x27d9f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27d9fc: 0x24630d80
    ctx->pc = 0x27d9fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3456));
label_27da00:
    // 0x27da00: 0x121080
    ctx->pc = 0x27da00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x27da04: 0x431021
    ctx->pc = 0x27da04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27da08: 0x3c013f80
    ctx->pc = 0x27da08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x27da0c: 0x4481a000
    ctx->pc = 0x27da0cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x27da10: 0x1000000d
    ctx->pc = 0x27DA10u;
    {
        const bool branch_taken_0x27da10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DA14u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x27da10) {
            ctx->pc = 0x27DA48u;
            goto label_27da48;
        }
    }
    ctx->pc = 0x27DA18u;
label_27da18:
    // 0x27da18: 0x10e00003
    ctx->pc = 0x27DA18u;
    {
        const bool branch_taken_0x27da18 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DA1Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x27da18) {
            ctx->pc = 0x27DA28u;
            goto label_27da28;
        }
    }
    ctx->pc = 0x27DA20u;
    // 0x27da20: 0x10000003
    ctx->pc = 0x27DA20u;
    {
        const bool branch_taken_0x27da20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DA24u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3528));
        if (branch_taken_0x27da20) {
            ctx->pc = 0x27DA30u;
            goto label_27da30;
        }
    }
    ctx->pc = 0x27DA28u;
label_27da28:
    // 0x27da28: 0x3c030034
    ctx->pc = 0x27da28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27da2c: 0x24630db0
    ctx->pc = 0x27da2cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3504));
label_27da30:
    // 0x27da30: 0x121080
    ctx->pc = 0x27da30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
    // 0x27da34: 0x431021
    ctx->pc = 0x27da34u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27da38: 0x8c440000
    ctx->pc = 0x27da38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27da3c: 0x3c013f00
    ctx->pc = 0x27da3cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27da40: 0x44810000
    ctx->pc = 0x27da40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27da44: 0x46006502
    ctx->pc = 0x27da44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_27da48:
    // 0x27da48: 0x24020004
    ctx->pc = 0x27da48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x27da4c: 0x14820008
    ctx->pc = 0x27DA4Cu;
    {
        const bool branch_taken_0x27da4c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x27DA50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x27da4c) {
            ctx->pc = 0x27DA70u;
            goto label_27da70;
        }
    }
    ctx->pc = 0x27DA54u;
    // 0x27da54: 0x3c030034
    ctx->pc = 0x27da54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27da58: 0x8c620e84
    ctx->pc = 0x27da58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3716)));
    // 0x27da5c: 0x30440001
    ctx->pc = 0x27da5cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
    // 0x27da60: 0x24840006
    ctx->pc = 0x27da60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6));
    // 0x27da64: 0x24420001
    ctx->pc = 0x27da64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27da68: 0xac620e84
    ctx->pc = 0x27da68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3716), GPR_U32(ctx, 2));
    // 0x27da6c: 0x24020005
    ctx->pc = 0x27da6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_27da70:
    // 0x27da70: 0x14820007
    ctx->pc = 0x27DA70u;
    {
        const bool branch_taken_0x27da70 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x27DA74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27da70) {
            ctx->pc = 0x27DA90u;
            goto label_27da90;
        }
    }
    ctx->pc = 0x27DA78u;
    // 0x27da78: 0x3c030034
    ctx->pc = 0x27da78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27da7c: 0x8c620e84
    ctx->pc = 0x27da7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 3716)));
    // 0x27da80: 0x30440001
    ctx->pc = 0x27da80u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 2), 1));
    // 0x27da84: 0x24840008
    ctx->pc = 0x27da84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 8));
    // 0x27da88: 0x24420001
    ctx->pc = 0x27da88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x27da8c: 0xac620e84
    ctx->pc = 0x27da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3716), GPR_U32(ctx, 2));
label_27da90:
    // 0x27da90: 0x44806000
    ctx->pc = 0x27da90u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x27da94: 0x302d
    ctx->pc = 0x27da94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da98: 0xc09f5fa
    ctx->pc = 0x27DA98u;
    SET_GPR_U32(ctx, 31, 0x27DAA0u);
    ctx->pc = 0x27DA9Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAA0u; }
    }
    if (ctx->pc != 0x27DAA0u) { return; }
    ctx->pc = 0x27DAA0u;
    // 0x27daa0: 0x40882d
    ctx->pc = 0x27daa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27daa4: 0x6200022
    ctx->pc = 0x27DAA4u;
    {
        const bool branch_taken_0x27daa4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x27DAA8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x27daa4) {
            ctx->pc = 0x27DB30u;
            goto label_27db30;
        }
    }
    ctx->pc = 0x27DAACu;
    // 0x27daac: 0x12000004
    ctx->pc = 0x27DAACu;
    {
        const bool branch_taken_0x27daac = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DAB0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27daac) {
            ctx->pc = 0x27DAC0u;
            goto label_27dac0;
        }
    }
    ctx->pc = 0x27DAB4u;
    // 0x27dab4: 0x200282d
    ctx->pc = 0x27dab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dab8: 0xc09f748
    ctx->pc = 0x27DAB8u;
    SET_GPR_U32(ctx, 31, 0x27DAC0u);
    ctx->pc = 0x27DABCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMat_0x27dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAC0u; }
    }
    if (ctx->pc != 0x27DAC0u) { return; }
    ctx->pc = 0x27DAC0u;
label_27dac0:
    // 0x27dac0: 0x241000f0
    ctx->pc = 0x27dac0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27dac4: 0x2308018
    ctx->pc = 0x27dac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27dac8: 0x3c020034
    ctx->pc = 0x27dac8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27dacc: 0x24420eb0
    ctx->pc = 0x27daccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27dad0: 0x2028021
    ctx->pc = 0x27dad0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27dad4: 0x220202d
    ctx->pc = 0x27dad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dad8: 0x4600a306
    ctx->pc = 0x27dad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27dadc: 0x4600a346
    ctx->pc = 0x27dadcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x27dae0: 0xc09f63e
    ctx->pc = 0x27DAE0u;
    SET_GPR_U32(ctx, 31, 0x27DAE8u);
    ctx->pc = 0x27DAE4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DAE8u; }
    }
    if (ctx->pc != 0x27DAE8u) { return; }
    ctx->pc = 0x27DAE8u;
    // 0x27dae8: 0x3c030034
    ctx->pc = 0x27dae8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x27daec: 0x24634ab8
    ctx->pc = 0x27daecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19128));
    // 0x27daf0: 0x2402000c
    ctx->pc = 0x27daf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x27daf4: 0x2421018
    ctx->pc = 0x27daf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27daf8: 0x621821
    ctx->pc = 0x27daf8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27dafc: 0xc4600004
    ctx->pc = 0x27dafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27db00: 0x46800020
    ctx->pc = 0x27db00u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x27db04: 0x46140002
    ctx->pc = 0x27db04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x27db08: 0x3c013f00
    ctx->pc = 0x27db08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27db0c: 0x44810800
    ctx->pc = 0x27db0cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x27db10: 0x46010000
    ctx->pc = 0x27db10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27db14: 0x8e040014
    ctx->pc = 0x27db14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27db18: 0x46000064
    ctx->pc = 0x27db18u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x27db1c: 0x44050800
    ctx->pc = 0x27db1cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x27db20: 0xc0b4096
    ctx->pc = 0x27DB20u;
    SET_GPR_U32(ctx, 31, 0x27DB28u);
    ctx->pc = 0x27DB24u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0258u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetZMod_0x2d0258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB28u; }
    }
    if (ctx->pc != 0x27DB28u) { return; }
    ctx->pc = 0x27DB28u;
    // 0x27db28: 0x220102d
    ctx->pc = 0x27db28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db2c: 0xdfbf0030
    ctx->pc = 0x27db2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27db30:
    // 0x27db30: 0xdfb20020
    ctx->pc = 0x27db30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27db34: 0xdfb10010
    ctx->pc = 0x27db34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27db38: 0xdfb00000
    ctx->pc = 0x27db38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27db3c: 0xc7b40040
    ctx->pc = 0x27db3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27db40: 0x3e00008
    ctx->pc = 0x27DB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DB44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D9B0u: goto label_27d9b0;
            case 0x27D9C4u: goto label_27d9c4;
            case 0x27D9CCu: goto label_27d9cc;
            case 0x27D9E8u: goto label_27d9e8;
            case 0x27D9F8u: goto label_27d9f8;
            case 0x27DA00u: goto label_27da00;
            case 0x27DA18u: goto label_27da18;
            case 0x27DA28u: goto label_27da28;
            case 0x27DA30u: goto label_27da30;
            case 0x27DA48u: goto label_27da48;
            case 0x27DA70u: goto label_27da70;
            case 0x27DA90u: goto label_27da90;
            case 0x27DAC0u: goto label_27dac0;
            case 0x27DB30u: goto label_27db30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DB48u;
}
