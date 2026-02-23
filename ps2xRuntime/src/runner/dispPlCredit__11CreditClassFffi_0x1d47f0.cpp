#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispPlCredit__11CreditClassFffi
// Address: 0x1d47f0 - 0x1d49dc
void dispPlCredit__11CreditClassFffi_0x1d47f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispPlCredit__11CreditClassFffi");


    ctx->pc = 0x1d47f0u;

    // 0x1d47f0: 0x27bdffc0
    ctx->pc = 0x1d47f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d47f4: 0x7fbf0030
    ctx->pc = 0x1d47f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d47f8: 0x7fb20020
    ctx->pc = 0x1d47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d47fc: 0x7fb10010
    ctx->pc = 0x1d47fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4800: 0x7fb00000
    ctx->pc = 0x1d4800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4804: 0x8c910010
    ctx->pc = 0x1d4804u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d4808: 0x3c02002c
    ctx->pc = 0x1d4808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x1d480c: 0x70809628
    ctx->pc = 0x1d480cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d4810: 0x2e21000f
    ctx->pc = 0x1d4810u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 17), 15));
    // 0x1d4814: 0x10200003
    ctx->pc = 0x1D4814u;
    {
        const bool branch_taken_0x1d4814 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4818u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294960624));
        if (branch_taken_0x1d4814) {
            ctx->pc = 0x1D4824u;
            goto label_1d4824;
        }
    }
    ctx->pc = 0x1D481Cu;
    // 0x1d481c: 0x10000003
    ctx->pc = 0x1D481Cu;
    {
        const bool branch_taken_0x1d481c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4820u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
        if (branch_taken_0x1d481c) {
            ctx->pc = 0x1D482Cu;
            goto label_1d482c;
        }
    }
    ctx->pc = 0x1D4824u;
label_1d4824:
    // 0x1d4824: 0x2411000e
    ctx->pc = 0x1d4824u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d4828: 0xe64c0054
    ctx->pc = 0x1d4828u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
label_1d482c:
    // 0x1d482c: 0x3c020050
    ctx->pc = 0x1d482cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d4830: 0xe64d0058
    ctx->pc = 0x1d4830u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x1d4834: 0xc0750bc
    ctx->pc = 0x1D4834u;
    SET_GPR_U32(ctx, 31, 0x1D483Cu);
    ctx->pc = 0x1D4838u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D42F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsFreePlay__11CreditClassFv_0x1d42f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D483Cu; }
        else if (ctx->pc != 0x1D483Cu) { ctx->pc = 0x1D483Cu; }
    }
    if (ctx->pc != 0x1D483Cu) { return; }
    ctx->pc = 0x1D483Cu;
    // 0x1d483c: 0x1040001b
    ctx->pc = 0x1D483Cu;
    {
        const bool branch_taken_0x1d483c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d483c) {
            ctx->pc = 0x1D48ACu;
            goto label_1d48ac;
        }
    }
    ctx->pc = 0x1D4844u;
    // 0x1d4844: 0xc6000018
    ctx->pc = 0x1d4844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4848: 0xe6400060
    ctx->pc = 0x1d4848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x1d484c: 0xc6000018
    ctx->pc = 0x1d484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4850: 0xe6400064
    ctx->pc = 0x1d4850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d4854: 0xc6010010
    ctx->pc = 0x1d4854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4858: 0xc6400054
    ctx->pc = 0x1d4858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d485c: 0x46010000
    ctx->pc = 0x1d485cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4860: 0xe6400054
    ctx->pc = 0x1d4860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x1d4864: 0xc6010014
    ctx->pc = 0x1d4864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4868: 0xc6400058
    ctx->pc = 0x1d4868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d486c: 0x46010000
    ctx->pc = 0x1d486cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4870: 0xe6400058
    ctx->pc = 0x1d4870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x1d4874: 0x8e03001c
    ctx->pc = 0x1d4874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d4878: 0x10600007
    ctx->pc = 0x1D4878u;
    {
        const bool branch_taken_0x1d4878 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D487Cu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1d4878) {
            ctx->pc = 0x1D4898u;
            goto label_1d4898;
        }
    }
    ctx->pc = 0x1D4880u;
    // 0x1d4880: 0x8022fec5
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1d4884: 0x21080
    ctx->pc = 0x1d4884u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d4888: 0x621021
    ctx->pc = 0x1d4888u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d488c: 0x8c420000
    ctx->pc = 0x1d488cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4890: 0x10000002
    ctx->pc = 0x1D4890u;
    {
        const bool branch_taken_0x1d4890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4894u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        if (branch_taken_0x1d4890) {
            ctx->pc = 0x1D489Cu;
            goto label_1d489c;
        }
    }
    ctx->pc = 0x1D4898u;
label_1d4898:
    // 0x1d4898: 0xae400090
    ctx->pc = 0x1d4898u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_1d489c:
    // 0x1d489c: 0xc085bd8
    ctx->pc = 0x1D489Cu;
    SET_GPR_U32(ctx, 31, 0x1D48A4u);
    ctx->pc = 0x1D48A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 72));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48A4u; }
        else if (ctx->pc != 0x1D48A4u) { ctx->pc = 0x1D48A4u; }
    }
    if (ctx->pc != 0x1D48A4u) { return; }
    ctx->pc = 0x1D48A4u;
    // 0x1d48a4: 0x10000045
    ctx->pc = 0x1D48A4u;
    {
        const bool branch_taken_0x1d48a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D48A8u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
        if (branch_taken_0x1d48a4) {
            ctx->pc = 0x1D49BCu;
            goto label_1d49bc;
        }
    }
    ctx->pc = 0x1D48ACu;
label_1d48ac:
    // 0x1d48ac: 0xc6000008
    ctx->pc = 0x1d48acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d48b0: 0xe6400060
    ctx->pc = 0x1d48b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x1d48b4: 0xc6000008
    ctx->pc = 0x1d48b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d48b8: 0xe6400064
    ctx->pc = 0x1d48b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d48bc: 0xc6410054
    ctx->pc = 0x1d48bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d48c0: 0xc6000000
    ctx->pc = 0x1d48c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d48c4: 0x46000800
    ctx->pc = 0x1d48c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d48c8: 0xe6400054
    ctx->pc = 0x1d48c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x1d48cc: 0xc6010004
    ctx->pc = 0x1d48ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d48d0: 0xc6400058
    ctx->pc = 0x1d48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d48d4: 0x46010000
    ctx->pc = 0x1d48d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d48d8: 0xe6400058
    ctx->pc = 0x1d48d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x1d48dc: 0x8e03000c
    ctx->pc = 0x1d48dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d48e0: 0x10600007
    ctx->pc = 0x1D48E0u;
    {
        const bool branch_taken_0x1d48e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D48E4u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1d48e0) {
            ctx->pc = 0x1D4900u;
            goto label_1d4900;
        }
    }
    ctx->pc = 0x1D48E8u;
    // 0x1d48e8: 0x8022fec5
    ctx->pc = 0x1d48e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1d48ec: 0x21080
    ctx->pc = 0x1d48ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d48f0: 0x621021
    ctx->pc = 0x1d48f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d48f4: 0x8c420000
    ctx->pc = 0x1d48f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d48f8: 0x10000002
    ctx->pc = 0x1D48F8u;
    {
        const bool branch_taken_0x1d48f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D48FCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
        if (branch_taken_0x1d48f8) {
            ctx->pc = 0x1D4904u;
            goto label_1d4904;
        }
    }
    ctx->pc = 0x1D4900u;
label_1d4900:
    // 0x1d4900: 0xae400090
    ctx->pc = 0x1d4900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
label_1d4904:
    // 0x1d4904: 0xc085bd8
    ctx->pc = 0x1D4904u;
    SET_GPR_U32(ctx, 31, 0x1D490Cu);
    ctx->pc = 0x1D4908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 72));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D490Cu; }
        else if (ctx->pc != 0x1D490Cu) { ctx->pc = 0x1D490Cu; }
    }
    if (ctx->pc != 0x1D490Cu) { return; }
    ctx->pc = 0x1D490Cu;
    // 0x1d490c: 0xc6000028
    ctx->pc = 0x1d490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4910: 0x3c026666
    ctx->pc = 0x1d4910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26214 << 16));
    // 0x1d4914: 0x34426667
    ctx->pc = 0x1d4914u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26215));
    // 0x1d4918: 0x510018
    ctx->pc = 0x1d4918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x1d491c: 0x111fc2
    ctx->pc = 0x1d491cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 17), 31));
    // 0x1d4920: 0xe6400060
    ctx->pc = 0x1d4920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x1d4924: 0xc6000028
    ctx->pc = 0x1d4924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4928: 0x1010
    ctx->pc = 0x1d4928u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1d492c: 0x21083
    ctx->pc = 0x1d492cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1d4930: 0x431021
    ctx->pc = 0x1d4930u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4934: 0xe6400064
    ctx->pc = 0x1d4934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d4938: 0xc6010020
    ctx->pc = 0x1d4938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d493c: 0xc6400054
    ctx->pc = 0x1d493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4940: 0x46010000
    ctx->pc = 0x1d4940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4944: 0xe6400054
    ctx->pc = 0x1d4944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x1d4948: 0xc6010024
    ctx->pc = 0x1d4948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d494c: 0xc6400058
    ctx->pc = 0x1d494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4950: 0x46010000
    ctx->pc = 0x1d4950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4954: 0x18400005
    ctx->pc = 0x1D4954u;
    {
        const bool branch_taken_0x1d4954 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D4958u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
        if (branch_taken_0x1d4954) {
            ctx->pc = 0x1D496Cu;
            goto label_1d496c;
        }
    }
    ctx->pc = 0x1D495Cu;
    // 0x1d495c: 0x24421111
    ctx->pc = 0x1d495cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4369));
    // 0x1d4960: 0xae420090
    ctx->pc = 0x1d4960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    // 0x1d4964: 0xc085bd8
    ctx->pc = 0x1D4964u;
    SET_GPR_U32(ctx, 31, 0x1D496Cu);
    ctx->pc = 0x1D4968u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 72));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D496Cu; }
        else if (ctx->pc != 0x1D496Cu) { ctx->pc = 0x1D496Cu; }
    }
    if (ctx->pc != 0x1D496Cu) { return; }
    ctx->pc = 0x1D496Cu;
label_1d496c:
    // 0x1d496c: 0x2402000a
    ctx->pc = 0x1d496cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d4970: 0x222001a
    ctx->pc = 0x1d4970u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1d4974: 0xc6000038
    ctx->pc = 0x1d4974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4978: 0x26440048
    ctx->pc = 0x1d4978u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 72));
    // 0x1d497c: 0xe6400060
    ctx->pc = 0x1d497cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x1d4980: 0xc6000038
    ctx->pc = 0x1d4980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4984: 0xe6400064
    ctx->pc = 0x1d4984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x1d4988: 0xc6010030
    ctx->pc = 0x1d4988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d498c: 0xc6400054
    ctx->pc = 0x1d498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4990: 0x46010000
    ctx->pc = 0x1d4990u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d4994: 0xe6400054
    ctx->pc = 0x1d4994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x1d4998: 0xc6010034
    ctx->pc = 0x1d4998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d499c: 0xc6400058
    ctx->pc = 0x1d499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d49a0: 0x46010000
    ctx->pc = 0x1d49a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d49a4: 0x1010
    ctx->pc = 0x1d49a4u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x1d49a8: 0xe6400058
    ctx->pc = 0x1d49a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x1d49ac: 0x24421111
    ctx->pc = 0x1d49acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4369));
    // 0x1d49b0: 0xc085bd8
    ctx->pc = 0x1D49B0u;
    SET_GPR_U32(ctx, 31, 0x1D49B8u);
    ctx->pc = 0x1D49B4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 2));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D49B8u; }
        else if (ctx->pc != 0x1D49B8u) { ctx->pc = 0x1D49B8u; }
    }
    if (ctx->pc != 0x1D49B8u) { return; }
    ctx->pc = 0x1D49B8u;
    // 0x1d49b8: 0x3c033f80
    ctx->pc = 0x1d49b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
label_1d49bc:
    // 0x1d49bc: 0xae430060
    ctx->pc = 0x1d49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x1d49c0: 0xae430064
    ctx->pc = 0x1d49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x1d49c4: 0x7bbf0030
    ctx->pc = 0x1d49c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d49c8: 0x7bb20020
    ctx->pc = 0x1d49c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d49cc: 0x7bb10010
    ctx->pc = 0x1d49ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d49d0: 0x7bb00000
    ctx->pc = 0x1d49d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d49d4: 0x3e00008
    ctx->pc = 0x1D49D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D49D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4824u: goto label_1d4824;
            case 0x1D482Cu: goto label_1d482c;
            case 0x1D4898u: goto label_1d4898;
            case 0x1D489Cu: goto label_1d489c;
            case 0x1D48ACu: goto label_1d48ac;
            case 0x1D4900u: goto label_1d4900;
            case 0x1D4904u: goto label_1d4904;
            case 0x1D496Cu: goto label_1d496c;
            case 0x1D49BCu: goto label_1d49bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D49DCu;
}
