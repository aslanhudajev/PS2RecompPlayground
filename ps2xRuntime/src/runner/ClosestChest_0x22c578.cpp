#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClosestChest
// Address: 0x22c578 - 0x22c6ec
void ClosestChest_0x22c578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22c578u;

    // 0x22c578: 0x27bdff80
    ctx->pc = 0x22c578u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x22c57c: 0xffbf0060
    ctx->pc = 0x22c57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22c580: 0xffb40050
    ctx->pc = 0x22c580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22c584: 0xffb30040
    ctx->pc = 0x22c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22c588: 0xffb20030
    ctx->pc = 0x22c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22c58c: 0xffb10020
    ctx->pc = 0x22c58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22c590: 0xffb00010
    ctx->pc = 0x22c590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22c594: 0xe7b40070
    ctx->pc = 0x22c594u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x22c598: 0x80882d
    ctx->pc = 0x22c598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c59c: 0x2412ffff
    ctx->pc = 0x22c59cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22c5a0: 0x3c014120
    ctx->pc = 0x22c5a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x22c5a4: 0x4481a000
    ctx->pc = 0x22c5a4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x22c5a8: 0x26240050
    ctx->pc = 0x22c5a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
    // 0x22c5ac: 0xc0a0120
    ctx->pc = 0x22C5ACu;
    SET_GPR_U32(ctx, 31, 0x22C5B4u);
    ctx->pc = 0x22C5B0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x280480u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartItemGrid_0x280480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C5B4u; }
    }
    if (ctx->pc != 0x22C5B4u) { return; }
    ctx->pc = 0x22C5B4u;
    // 0x22c5b4: 0x3c140034
    ctx->pc = 0x22c5b4u;
    SET_GPR_U32(ctx, 20, ((uint32_t)52 << 16));
    // 0x22c5b8: 0x3c020032
    ctx->pc = 0x22c5b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22c5bc: 0x1000003c
    ctx->pc = 0x22C5BCu;
    {
        const bool branch_taken_0x22c5bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x22C5C0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294965752));
        if (branch_taken_0x22c5bc) {
            ctx->pc = 0x22C6B0u;
            goto label_22c6b0;
        }
    }
    ctx->pc = 0x22C5C4u;
    // 0x22c5c4: 0x0
    ctx->pc = 0x22c5c4u;
    // NOP
label_22c5c8:
    // 0x22c5c8: 0x2021018
    ctx->pc = 0x22c5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22c5cc: 0x8e83cd94
    ctx->pc = 0x22c5ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4294954388)));
    // 0x22c5d0: 0x432021
    ctx->pc = 0x22c5d0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22c5d4: 0x848200d8
    ctx->pc = 0x22c5d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x22c5d8: 0x2405ffff
    ctx->pc = 0x22c5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22c5dc: 0x10450034
    ctx->pc = 0x22C5DCu;
    {
        const bool branch_taken_0x22c5dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x22C5E0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x22c5dc) {
            ctx->pc = 0x22C6B0u;
            goto label_22c6b0;
        }
    }
    ctx->pc = 0x22C5E4u;
    // 0x22c5e4: 0x8c630000
    ctx->pc = 0x22c5e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c5e8: 0x24020002
    ctx->pc = 0x22c5e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22c5ec: 0x14620030
    ctx->pc = 0x22C5ECu;
    {
        const bool branch_taken_0x22c5ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22c5ec) {
            ctx->pc = 0x22C6B0u;
            goto label_22c6b0;
        }
    }
    ctx->pc = 0x22C5F4u;
    // 0x22c5f4: 0x808200e1
    ctx->pc = 0x22c5f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 225)));
    // 0x22c5f8: 0x1440002d
    ctx->pc = 0x22C5F8u;
    {
        const bool branch_taken_0x22c5f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22c5f8) {
            ctx->pc = 0x22C6B0u;
            goto label_22c6b0;
        }
    }
    ctx->pc = 0x22C600u;
    // 0x22c600: 0x808200dc
    ctx->pc = 0x22c600u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x22c604: 0x1440002a
    ctx->pc = 0x22C604u;
    {
        const bool branch_taken_0x22c604 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22C608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 80));
        if (branch_taken_0x22c604) {
            ctx->pc = 0x22C6B0u;
            goto label_22c6b0;
        }
    }
    ctx->pc = 0x22C60Cu;
    // 0x22c60c: 0x848300f0
    ctx->pc = 0x22c60cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x22c610: 0x621818
    ctx->pc = 0x22c610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22c614: 0x8e620068
    ctx->pc = 0x22c614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x22c618: 0x621821
    ctx->pc = 0x22c618u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22c61c: 0x8c630000
    ctx->pc = 0x22c61cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22c620: 0x10650005
    ctx->pc = 0x22C620u;
    {
        const bool branch_taken_0x22c620 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        ctx->pc = 0x22C624u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x22c620) {
            ctx->pc = 0x22C638u;
            goto label_22c638;
        }
    }
    ctx->pc = 0x22C628u;
    // 0x22c628: 0x10620003
    ctx->pc = 0x22C628u;
    {
        const bool branch_taken_0x22c628 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x22C62Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x22c628) {
            ctx->pc = 0x22C638u;
            goto label_22c638;
        }
    }
    ctx->pc = 0x22C630u;
    // 0x22c630: 0x1462001f
    ctx->pc = 0x22C630u;
    {
        const bool branch_taken_0x22c630 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x22c630) {
            ctx->pc = 0x22C6B0u;
            goto label_22c6b0;
        }
    }
    ctx->pc = 0x22C638u;
label_22c638:
    // 0x22c638: 0xc4830040
    ctx->pc = 0x22c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22c63c: 0xc6200050
    ctx->pc = 0x22c63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c640: 0x460018c1
    ctx->pc = 0x22c640u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x22c644: 0xe7a30000
    ctx->pc = 0x22c644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x22c648: 0xc4820044
    ctx->pc = 0x22c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22c64c: 0xc6200054
    ctx->pc = 0x22c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c650: 0x46001081
    ctx->pc = 0x22c650u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x22c654: 0xe7a20004
    ctx->pc = 0x22c654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x22c658: 0xc4800048
    ctx->pc = 0x22c658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22c65c: 0xc6210058
    ctx->pc = 0x22c65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22c660: 0x46010001
    ctx->pc = 0x22c660u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22c664: 0xe7a00008
    ctx->pc = 0x22c664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x22c668: 0x460318c2
    ctx->pc = 0x22c668u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x22c66c: 0x46021082
    ctx->pc = 0x22c66cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x22c670: 0x460218c0
    ctx->pc = 0x22c670u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x22c674: 0x46000002
    ctx->pc = 0x22c674u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x22c678: 0x46001b00
    ctx->pc = 0x22c678u;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x22c67c: 0x0
    ctx->pc = 0x22c67cu;
    // NOP
    // 0x22c680: 0x0
    ctx->pc = 0x22c680u;
    // NOP
    // 0x22c684: 0x460c0004
    ctx->pc = 0x22c684u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x22c688: 0x46000032
    ctx->pc = 0x22c688u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c68c: 0x45010003
    ctx->pc = 0x22C68Cu;
    {
        const bool branch_taken_0x22c68c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c68c) {
            ctx->pc = 0x22C69Cu;
            goto label_22c69c;
        }
    }
    ctx->pc = 0x22C694u;
    // 0x22c694: 0xc0ba284
    ctx->pc = 0x22C694u;
    SET_GPR_U32(ctx, 31, 0x22C69Cu);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C69Cu; }
    }
    if (ctx->pc != 0x22C69Cu) { return; }
    ctx->pc = 0x22C69Cu;
label_22c69c:
    // 0x22c69c: 0x46140034
    ctx->pc = 0x22c69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22c6a0: 0x45000003
    ctx->pc = 0x22C6A0u;
    {
        const bool branch_taken_0x22c6a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22c6a0) {
            ctx->pc = 0x22C6B0u;
            goto label_22c6b0;
        }
    }
    ctx->pc = 0x22C6A8u;
    // 0x22c6a8: 0x46000506
    ctx->pc = 0x22c6a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22c6ac: 0x200902d
    ctx->pc = 0x22c6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22c6b0:
    // 0x22c6b0: 0xc0a015a
    ctx->pc = 0x22C6B0u;
    SET_GPR_U32(ctx, 31, 0x22C6B8u);
    ctx->pc = 0x280568u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridItem_0x280568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C6B8u; }
    }
    if (ctx->pc != 0x22C6B8u) { return; }
    ctx->pc = 0x22C6B8u;
    // 0x22c6b8: 0x40802d
    ctx->pc = 0x22c6b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6bc: 0x601ffc2
    ctx->pc = 0x22C6BCu;
    {
        const bool branch_taken_0x22c6bc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x22C6C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
        if (branch_taken_0x22c6bc) {
            ctx->pc = 0x22C5C8u;
            goto label_22c5c8;
        }
    }
    ctx->pc = 0x22C6C4u;
    // 0x22c6c4: 0x240102d
    ctx->pc = 0x22c6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c6c8: 0xdfbf0060
    ctx->pc = 0x22c6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c6cc: 0xdfb40050
    ctx->pc = 0x22c6ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c6d0: 0xdfb30040
    ctx->pc = 0x22c6d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c6d4: 0xdfb20030
    ctx->pc = 0x22c6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c6d8: 0xdfb10020
    ctx->pc = 0x22c6d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c6dc: 0xdfb00010
    ctx->pc = 0x22c6dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c6e0: 0xc7b40070
    ctx->pc = 0x22c6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22c6e4: 0x3e00008
    ctx->pc = 0x22C6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C6E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C5C8u: goto label_22c5c8;
            case 0x22C638u: goto label_22c638;
            case 0x22C69Cu: goto label_22c69c;
            case 0x22C6B0u: goto label_22c6b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C6ECu;
}
