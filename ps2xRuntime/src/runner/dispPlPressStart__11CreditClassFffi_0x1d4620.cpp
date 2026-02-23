#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispPlPressStart__11CreditClassFffi
// Address: 0x1d4620 - 0x1d47e8
void dispPlPressStart__11CreditClassFffi_0x1d4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispPlPressStart__11CreditClassFffi");


    ctx->pc = 0x1d4620u;

    // 0x1d4620: 0x27bdffb0
    ctx->pc = 0x1d4620u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d4624: 0x7fbf0040
    ctx->pc = 0x1d4624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1d4628: 0x7fb20030
    ctx->pc = 0x1d4628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d462c: 0x7fb10020
    ctx->pc = 0x1d462cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d4630: 0x7fb00010
    ctx->pc = 0x1d4630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4634: 0xe7b50004
    ctx->pc = 0x1d4634u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d4638: 0x3c02002c
    ctx->pc = 0x1d4638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1d463c: 0x2450e640
    ctx->pc = 0x1d463cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x1d4640: 0xe7b40000
    ctx->pc = 0x1d4640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d4644: 0x70809628
    ctx->pc = 0x1d4644u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d4648: 0x3c020050
    ctx->pc = 0x1d4648u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d464c: 0x46006546
    ctx->pc = 0x1d464cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1d4650: 0x46006d06
    ctx->pc = 0x1d4650u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1d4654: 0x70a08e28
    ctx->pc = 0x1d4654u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d4658: 0xc0750bc
    ctx->pc = 0x1D4658u;
    SET_GPR_U32(ctx, 31, 0x1D4660u);
    ctx->pc = 0x1D465Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D42F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsFreePlay__11CreditClassFv_0x1d42f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4660u; }
        else if (ctx->pc != 0x1D4660u) { ctx->pc = 0x1D4660u; }
    }
    if (ctx->pc != 0x1D4660u) { return; }
    ctx->pc = 0x1D4660u;
    // 0x1d4660: 0x10400004
    ctx->pc = 0x1D4660u;
    {
        const bool branch_taken_0x1d4660 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4664u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x1d4660) {
            ctx->pc = 0x1D4674u;
            goto label_1d4674;
        }
    }
    ctx->pc = 0x1D4668u;
    // 0x1d4668: 0x1000001f
    ctx->pc = 0x1D4668u;
    {
        const bool branch_taken_0x1d4668 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D466Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1d4668) {
            ctx->pc = 0x1D46E8u;
            goto label_1d46e8;
        }
    }
    ctx->pc = 0x1D4670u;
    // 0x1d4670: 0x111900
    ctx->pc = 0x1d4670u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 4));
label_1d4674:
    // 0x1d4674: 0x712023
    ctx->pc = 0x1d4674u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d4678: 0x418c0
    ctx->pc = 0x1d4678u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d467c: 0x641823
    ctx->pc = 0x1d467cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4680: 0x320c0
    ctx->pc = 0x1d4680u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d4684: 0x3c030050
    ctx->pc = 0x1d4684u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1d4688: 0x2463dd24
    ctx->pc = 0x1d4688u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958372));
    // 0x1d468c: 0x641821
    ctx->pc = 0x1d468cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d4690: 0x8c640000
    ctx->pc = 0x1d4690u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4694: 0x24030004
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d4698: 0x1083000b
    ctx->pc = 0x1D4698u;
    {
        const bool branch_taken_0x1d4698 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d4698) {
            ctx->pc = 0x1D46C8u;
            goto label_1d46c8;
        }
    }
    ctx->pc = 0x1D46A0u;
    // 0x1d46a0: 0x8e440010
    ctx->pc = 0x1d46a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d46a4: 0x8e43003c
    ctx->pc = 0x1d46a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x1d46a8: 0x83182b
    ctx->pc = 0x1d46a8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d46ac: 0x14600004
    ctx->pc = 0x1D46ACu;
    {
        const bool branch_taken_0x1d46ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D46B0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d46ac) {
            ctx->pc = 0x1D46C0u;
            goto label_1d46c0;
        }
    }
    ctx->pc = 0x1D46B4u;
    // 0x1d46b4: 0x1000000c
    ctx->pc = 0x1D46B4u;
    {
        const bool branch_taken_0x1d46b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D46B8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1d46b4) {
            ctx->pc = 0x1D46E8u;
            goto label_1d46e8;
        }
    }
    ctx->pc = 0x1D46BCu;
    // 0x1d46bc: 0x70002628
    ctx->pc = 0x1d46bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d46c0:
    // 0x1d46c0: 0x1000000a
    ctx->pc = 0x1D46C0u;
    {
        const bool branch_taken_0x1d46c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D46C4u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        if (branch_taken_0x1d46c0) {
            ctx->pc = 0x1D46ECu;
            goto label_1d46ec;
        }
    }
    ctx->pc = 0x1D46C8u;
label_1d46c8:
    // 0x1d46c8: 0x8e440010
    ctx->pc = 0x1d46c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d46cc: 0x8e430040
    ctx->pc = 0x1d46ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1d46d0: 0x83182b
    ctx->pc = 0x1d46d0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d46d4: 0x14600004
    ctx->pc = 0x1D46D4u;
    {
        const bool branch_taken_0x1d46d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D46D8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d46d4) {
            ctx->pc = 0x1D46E8u;
            goto label_1d46e8;
        }
    }
    ctx->pc = 0x1D46DCu;
    // 0x1d46dc: 0x10000002
    ctx->pc = 0x1D46DCu;
    {
        const bool branch_taken_0x1d46dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D46E0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1d46dc) {
            ctx->pc = 0x1D46E8u;
            goto label_1d46e8;
        }
    }
    ctx->pc = 0x1D46E4u;
    // 0x1d46e4: 0x70002628
    ctx->pc = 0x1d46e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d46e8:
    // 0x1d46e8: 0xe6550054
    ctx->pc = 0x1d46e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_1d46ec:
    // 0x1d46ec: 0xe6540058
    ctx->pc = 0x1d46ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x1d46f0: 0x3c033f80
    ctx->pc = 0x1d46f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1d46f4: 0xae430060
    ctx->pc = 0x1d46f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x1d46f8: 0xae430064
    ctx->pc = 0x1d46f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x1d46fc: 0x24030002
    ctx->pc = 0x1d46fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d4700: 0x10830008
    ctx->pc = 0x1D4700u;
    {
        const bool branch_taken_0x1d4700 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d4700) {
            ctx->pc = 0x1D4724u;
            goto label_1d4724;
        }
    }
    ctx->pc = 0x1D4708u;
    // 0x1d4708: 0x24030001
    ctx->pc = 0x1d4708u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d470c: 0x1083001e
    ctx->pc = 0x1D470Cu;
    {
        const bool branch_taken_0x1d470c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1D4710u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
        if (branch_taken_0x1d470c) {
            ctx->pc = 0x1D4788u;
            goto label_1d4788;
        }
    }
    ctx->pc = 0x1D4714u;
    // 0x1d4714: 0x1080001b
    ctx->pc = 0x1D4714u;
    {
        const bool branch_taken_0x1d4714 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4714) {
            ctx->pc = 0x1D4784u;
            goto label_1d4784;
        }
    }
    ctx->pc = 0x1D471Cu;
    // 0x1d471c: 0x10000019
    ctx->pc = 0x1D471Cu;
    {
        const bool branch_taken_0x1d471c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d471c) {
            ctx->pc = 0x1D4784u;
            goto label_1d4784;
        }
    }
    ctx->pc = 0x1D4724u;
label_1d4724:
    // 0x1d4724: 0xc6010060
    ctx->pc = 0x1d4724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4728: 0xc6400054
    ctx->pc = 0x1d4728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d472c: 0x3c02002c
    ctx->pc = 0x1d472cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1d4730: 0x2443e550
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1d4734: 0x3c010050
    ctx->pc = 0x1d4734u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d4738: 0x111080
    ctx->pc = 0x1d4738u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d473c: 0x26440048
    ctx->pc = 0x1d473cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 72));
    // 0x1d4740: 0x46010000
    ctx->pc = 0x1d4740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4744: 0xe6400054
    ctx->pc = 0x1d4744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x1d4748: 0xc6010064
    ctx->pc = 0x1d4748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d474c: 0xc6400058
    ctx->pc = 0x1d474cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4750: 0x46010000
    ctx->pc = 0x1d4750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4754: 0xe6400058
    ctx->pc = 0x1d4754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x1d4758: 0xc6000068
    ctx->pc = 0x1d4758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d475c: 0xe6400060
    ctx->pc = 0x1d475cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x1d4760: 0xc6000068
    ctx->pc = 0x1d4760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4764: 0xe6400064
    ctx->pc = 0x1d4764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d4768: 0x8025fec5
    ctx->pc = 0x1d4768u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1d476c: 0x528c0
    ctx->pc = 0x1d476cu;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x1d4770: 0x651821
    ctx->pc = 0x1d4770u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d4774: 0x431021
    ctx->pc = 0x1d4774u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4778: 0x8c420000
    ctx->pc = 0x1d4778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d477c: 0xc085bd8
    ctx->pc = 0x1D477Cu;
    SET_GPR_U32(ctx, 31, 0x1D4784u);
    ctx->pc = 0x1D4780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4784u; }
        else if (ctx->pc != 0x1D4784u) { ctx->pc = 0x1D4784u; }
    }
    if (ctx->pc != 0x1D4784u) { return; }
    ctx->pc = 0x1D4784u;
label_1d4784:
    // 0x1d4784: 0x3c033f80
    ctx->pc = 0x1d4784u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_1d4788:
    // 0x1d4788: 0xae430060
    ctx->pc = 0x1d4788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x1d478c: 0xae430064
    ctx->pc = 0x1d478cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x1d4790: 0x3c010050
    ctx->pc = 0x1d4790u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d4794: 0x8424e504
    ctx->pc = 0x1d4794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1d4798: 0x2403000a
    ctx->pc = 0x1d4798u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d479c: 0x14830006
    ctx->pc = 0x1D479Cu;
    {
        const bool branch_taken_0x1d479c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D47A0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d479c) {
            ctx->pc = 0x1D47B8u;
            goto label_1d47b8;
        }
    }
    ctx->pc = 0x1D47A4u;
    // 0x1d47a4: 0x83848ba8
    ctx->pc = 0x1d47a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1d47a8: 0x24030007
    ctx->pc = 0x1d47a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d47ac: 0x10830006
    ctx->pc = 0x1D47ACu;
    {
        const bool branch_taken_0x1d47ac = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d47ac) {
            ctx->pc = 0x1D47C8u;
            goto label_1d47c8;
        }
    }
    ctx->pc = 0x1D47B4u;
    // 0x1d47b4: 0x72402628
    ctx->pc = 0x1d47b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1d47b8:
    // 0x1d47b8: 0x4600ab06
    ctx->pc = 0x1d47b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d47bc: 0x4600a346
    ctx->pc = 0x1d47bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1d47c0: 0xc0751fc
    ctx->pc = 0x1D47C0u;
    SET_GPR_U32(ctx, 31, 0x1D47C8u);
    ctx->pc = 0x1D47C4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D47F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispPlCredit__11CreditClassFffi_0x1d47f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D47C8u; }
        else if (ctx->pc != 0x1D47C8u) { ctx->pc = 0x1D47C8u; }
    }
    if (ctx->pc != 0x1D47C8u) { return; }
    ctx->pc = 0x1D47C8u;
label_1d47c8:
    // 0x1d47c8: 0x7bbf0040
    ctx->pc = 0x1d47c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d47cc: 0x7bb20030
    ctx->pc = 0x1d47ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d47d0: 0x7bb10020
    ctx->pc = 0x1d47d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d47d4: 0x7bb00010
    ctx->pc = 0x1d47d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d47d8: 0xc7b50004
    ctx->pc = 0x1d47d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d47dc: 0xc7b40000
    ctx->pc = 0x1d47dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d47e0: 0x3e00008
    ctx->pc = 0x1D47E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4674u: goto label_1d4674;
            case 0x1D46C0u: goto label_1d46c0;
            case 0x1D46C8u: goto label_1d46c8;
            case 0x1D46E8u: goto label_1d46e8;
            case 0x1D46ECu: goto label_1d46ec;
            case 0x1D4724u: goto label_1d4724;
            case 0x1D4784u: goto label_1d4784;
            case 0x1D4788u: goto label_1d4788;
            case 0x1D47B8u: goto label_1d47b8;
            case 0x1D47C8u: goto label_1d47c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D47E8u;
}
