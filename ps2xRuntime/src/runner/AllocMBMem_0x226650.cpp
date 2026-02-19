#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AllocMBMem
// Address: 0x226650 - 0x22674c
void AllocMBMem_0x226650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226650u;

    // 0x226650: 0x27bdfff0
    ctx->pc = 0x226650u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x226654: 0xffbf0000
    ctx->pc = 0x226654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226658: 0x3c020031
    ctx->pc = 0x226658u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x22665c: 0x8c430018
    ctx->pc = 0x22665cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x226660: 0x34028002
    ctx->pc = 0x226660u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32770));
    // 0x226664: 0x10620010
    ctx->pc = 0x226664u;
    {
        const bool branch_taken_0x226664 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x226668u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x226664) {
            ctx->pc = 0x2266A8u;
            goto label_2266a8;
        }
    }
    ctx->pc = 0x22666Cu;
    // 0x22666c: 0x14400008
    ctx->pc = 0x22666Cu;
    {
        const bool branch_taken_0x22666c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x226670u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32772));
        if (branch_taken_0x22666c) {
            ctx->pc = 0x226690u;
            goto label_226690;
        }
    }
    ctx->pc = 0x226674u;
    // 0x226674: 0x2402400f
    ctx->pc = 0x226674u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
    // 0x226678: 0x1062000b
    ctx->pc = 0x226678u;
    {
        const bool branch_taken_0x226678 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22667Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        if (branch_taken_0x226678) {
            ctx->pc = 0x2266A8u;
            goto label_2266a8;
        }
    }
    ctx->pc = 0x226680u;
    // 0x226680: 0x10620012
    ctx->pc = 0x226680u;
    {
        const bool branch_taken_0x226680 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x226684u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x226680) {
            ctx->pc = 0x2266CCu;
            goto label_2266cc;
        }
    }
    ctx->pc = 0x226688u;
    // 0x226688: 0x10000027
    ctx->pc = 0x226688u;
    {
        const bool branch_taken_0x226688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x226688) {
            ctx->pc = 0x226728u;
            goto label_226728;
        }
    }
    ctx->pc = 0x226690u;
label_226690:
    // 0x226690: 0x10620005
    ctx->pc = 0x226690u;
    {
        const bool branch_taken_0x226690 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x226694u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32777));
        if (branch_taken_0x226690) {
            ctx->pc = 0x2266A8u;
            goto label_2266a8;
        }
    }
    ctx->pc = 0x226698u;
    // 0x226698: 0x1062000c
    ctx->pc = 0x226698u;
    {
        const bool branch_taken_0x226698 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22669Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x226698) {
            ctx->pc = 0x2266CCu;
            goto label_2266cc;
        }
    }
    ctx->pc = 0x2266A0u;
    // 0x2266a0: 0x10000021
    ctx->pc = 0x2266A0u;
    {
        const bool branch_taken_0x2266a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2266a0) {
            ctx->pc = 0x226728u;
            goto label_226728;
        }
    }
    ctx->pc = 0x2266A8u;
label_2266a8:
    // 0x2266a8: 0xc0b0112
    ctx->pc = 0x2266A8u;
    SET_GPR_U32(ctx, 31, 0x2266B0u);
    ctx->pc = 0x2266ACu;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    ctx->pc = 0x2C0448u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTextureDmaAlloc_0x2c0448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2266B0u; }
    }
    if (ctx->pc != 0x2266B0u) { return; }
    ctx->pc = 0x2266B0u;
    // 0x2266b0: 0xc0b0176
    ctx->pc = 0x2266B0u;
    SET_GPR_U32(ctx, 31, 0x2266B8u);
    ctx->pc = 0x2266B4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)1 << 16));
    ctx->pc = 0x2C05D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectDmaAlloc_0x2c05d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2266B8u; }
    }
    if (ctx->pc != 0x2266B8u) { return; }
    ctx->pc = 0x2266B8u;
    // 0x2266b8: 0x24040040
    ctx->pc = 0x2266b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2266bc: 0x24050040
    ctx->pc = 0x2266bcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2266c0: 0xdfbf0000
    ctx->pc = 0x2266c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266c4: 0x8084b4c
    ctx->pc = 0x2266C4u;
    ctx->pc = 0x2266C8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x212D30u;
    AtreeAlloc_0x212d30(rdram, ctx, runtime); return;
    ctx->pc = 0x2266CCu;
label_2266cc:
    // 0x2266cc: 0x8c42f184
    ctx->pc = 0x2266ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x2266d0: 0x1040000c
    ctx->pc = 0x2266D0u;
    {
        const bool branch_taken_0x2266d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2266d0) {
            ctx->pc = 0x226704u;
            goto label_226704;
        }
    }
    ctx->pc = 0x2266D8u;
    // 0x2266d8: 0x3c040003
    ctx->pc = 0x2266d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)3 << 16));
    // 0x2266dc: 0xc0b0112
    ctx->pc = 0x2266DCu;
    SET_GPR_U32(ctx, 31, 0x2266E4u);
    ctx->pc = 0x2266E0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8192));
    ctx->pc = 0x2C0448u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTextureDmaAlloc_0x2c0448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2266E4u; }
    }
    if (ctx->pc != 0x2266E4u) { return; }
    ctx->pc = 0x2266E4u;
    // 0x2266e4: 0x3c040005
    ctx->pc = 0x2266e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)5 << 16));
    // 0x2266e8: 0xc0b0176
    ctx->pc = 0x2266E8u;
    SET_GPR_U32(ctx, 31, 0x2266F0u);
    ctx->pc = 0x2266ECu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 30720));
    ctx->pc = 0x2C05D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectDmaAlloc_0x2c05d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2266F0u; }
    }
    if (ctx->pc != 0x2266F0u) { return; }
    ctx->pc = 0x2266F0u;
    // 0x2266f0: 0x24040800
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2266f4: 0x24050800
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2266f8: 0xdfbf0000
    ctx->pc = 0x2266f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266fc: 0x8084b4c
    ctx->pc = 0x2266FCu;
    ctx->pc = 0x226700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x212D30u;
    AtreeAlloc_0x212d30(rdram, ctx, runtime); return;
    ctx->pc = 0x226704u;
label_226704:
    // 0x226704: 0xc0b0112
    ctx->pc = 0x226704u;
    SET_GPR_U32(ctx, 31, 0x22670Cu);
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C0448u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTextureDmaAlloc_0x2c0448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22670Cu; }
    }
    if (ctx->pc != 0x22670Cu) { return; }
    ctx->pc = 0x22670Cu;
    // 0x22670c: 0xc0b0176
    ctx->pc = 0x22670Cu;
    SET_GPR_U32(ctx, 31, 0x226714u);
    ctx->pc = 0x226710u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C05D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectDmaAlloc_0x2c05d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226714u; }
    }
    if (ctx->pc != 0x226714u) { return; }
    ctx->pc = 0x226714u;
    // 0x226714: 0x24041000
    ctx->pc = 0x226714u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4096));
    // 0x226718: 0x24050c00
    ctx->pc = 0x226718u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3072));
    // 0x22671c: 0xdfbf0000
    ctx->pc = 0x22671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226720: 0x8084b4c
    ctx->pc = 0x226720u;
    ctx->pc = 0x226724u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x212D30u;
    AtreeAlloc_0x212d30(rdram, ctx, runtime); return;
    ctx->pc = 0x226728u;
label_226728:
    // 0x226728: 0xc0b0112
    ctx->pc = 0x226728u;
    SET_GPR_U32(ctx, 31, 0x226730u);
    ctx->pc = 0x22672Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C0448u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTextureDmaAlloc_0x2c0448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226730u; }
    }
    if (ctx->pc != 0x226730u) { return; }
    ctx->pc = 0x226730u;
    // 0x226730: 0xc0b0176
    ctx->pc = 0x226730u;
    SET_GPR_U32(ctx, 31, 0x226738u);
    ctx->pc = 0x226734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2C05D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectDmaAlloc_0x2c05d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226738u; }
    }
    if (ctx->pc != 0x226738u) { return; }
    ctx->pc = 0x226738u;
    // 0x226738: 0x2404ffff
    ctx->pc = 0x226738u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22673c: 0x2405ffff
    ctx->pc = 0x22673cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x226740: 0xdfbf0000
    ctx->pc = 0x226740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226744: 0x8084b4c
    ctx->pc = 0x226744u;
    ctx->pc = 0x226748u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x212D30u;
    AtreeAlloc_0x212d30(rdram, ctx, runtime); return;
    ctx->pc = 0x22674Cu;
}
