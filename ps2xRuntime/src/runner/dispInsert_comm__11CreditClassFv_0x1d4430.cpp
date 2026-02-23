#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispInsert_comm__11CreditClassFv
// Address: 0x1d4430 - 0x1d4578
void dispInsert_comm__11CreditClassFv_0x1d4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispInsert_comm__11CreditClassFv");


    ctx->pc = 0x1d4430u;

    // 0x1d4430: 0x27bdffb0
    ctx->pc = 0x1d4430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d4434: 0x7fbf0040
    ctx->pc = 0x1d4434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1d4438: 0x7fb30030
    ctx->pc = 0x1d4438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d443c: 0x7fb20020
    ctx->pc = 0x1d443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4440: 0x7fb10010
    ctx->pc = 0x1d4440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4444: 0x7fb00000
    ctx->pc = 0x1d4444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4448: 0x8c910084
    ctx->pc = 0x1d4448u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1d444c: 0x2403fcff
    ctx->pc = 0x1d444cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966527));
    // 0x1d4450: 0x2231824
    ctx->pc = 0x1d4450u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d4454: 0xac830084
    ctx->pc = 0x1d4454u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x1d4458: 0x8c830084
    ctx->pc = 0x1d4458u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1d445c: 0x34630100
    ctx->pc = 0x1d445cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 256));
    // 0x1d4460: 0xac830084
    ctx->pc = 0x1d4460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x1d4464: 0x8c830098
    ctx->pc = 0x1d4464u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x1d4468: 0x30630020
    ctx->pc = 0x1d4468u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 32));
    // 0x1d446c: 0x1460003a
    ctx->pc = 0x1D446Cu;
    {
        const bool branch_taken_0x1d446c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D4470u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d446c) {
            ctx->pc = 0x1D4558u;
            goto label_1d4558;
        }
    }
    ctx->pc = 0x1D4474u;
    // 0x1d4474: 0x3c010050
    ctx->pc = 0x1d4474u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d4478: 0x8426e504
    ctx->pc = 0x1d4478u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1d447c: 0x3c030026
    ctx->pc = 0x1d447cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1d4480: 0x24655530
    ctx->pc = 0x1d4480u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 21808));
    // 0x1d4484: 0x3c030026
    ctx->pc = 0x1d4484u;
    SET_GPR_U32(ctx, 3, ((uint32_t)38 << 16));
    // 0x1d4488: 0x24645534
    ctx->pc = 0x1d4488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 21812));
    // 0x1d448c: 0x3c03002c
    ctx->pc = 0x1d448cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1d4490: 0x630c0
    ctx->pc = 0x1d4490u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d4494: 0xa62821
    ctx->pc = 0x1d4494u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d4498: 0xc4a00000
    ctx->pc = 0x1d4498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d449c: 0x2472e490
    ctx->pc = 0x1d449cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4294960272));
    // 0x1d44a0: 0x3c010050
    ctx->pc = 0x1d44a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d44a4: 0x70008628
    ctx->pc = 0x1d44a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d44a8: 0xe6600054
    ctx->pc = 0x1d44a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x1d44ac: 0x8423e504
    ctx->pc = 0x1d44acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1d44b0: 0x318c0
    ctx->pc = 0x1d44b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d44b4: 0x831821
    ctx->pc = 0x1d44b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d44b8: 0xc4600000
    ctx->pc = 0x1d44b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d44bc: 0x3c01002c
    ctx->pc = 0x1d44bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1d44c0: 0xe6600058
    ctx->pc = 0x1d44c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x1d44c4: 0xc420e504
    ctx->pc = 0x1d44c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d44c8: 0xe6600060
    ctx->pc = 0x1d44c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 96), bits); }
    // 0x1d44cc: 0x3c01002c
    ctx->pc = 0x1d44ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1d44d0: 0xc420e504
    ctx->pc = 0x1d44d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d44d4: 0xe6600064
    ctx->pc = 0x1d44d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
    // 0x1d44d8: 0x3c01002c
    ctx->pc = 0x1d44d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1d44dc: 0xc420e4fc
    ctx->pc = 0x1d44dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d44e0: 0xc6610054
    ctx->pc = 0x1d44e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d44e4: 0x3c01002c
    ctx->pc = 0x1d44e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)44 << 16));
    // 0x1d44e8: 0x46000800
    ctx->pc = 0x1d44e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d44ec: 0xe6600054
    ctx->pc = 0x1d44ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x1d44f0: 0xc6610058
    ctx->pc = 0x1d44f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d44f4: 0xc420e500
    ctx->pc = 0x1d44f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d44f8: 0x46000800
    ctx->pc = 0x1d44f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d44fc: 0xe6600058
    ctx->pc = 0x1d44fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
label_1d4500:
    // 0x1d4500: 0xc641007c
    ctx->pc = 0x1d4500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4504: 0xc6600054
    ctx->pc = 0x1d4504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4508: 0x3c03002c
    ctx->pc = 0x1d4508u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1d450c: 0x2464e590
    ctx->pc = 0x1d450cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294960528));
    // 0x1d4510: 0x3c010050
    ctx->pc = 0x1d4510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d4514: 0x2403ffff
    ctx->pc = 0x1d4514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d4518: 0x46010000
    ctx->pc = 0x1d4518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d451c: 0xe6600054
    ctx->pc = 0x1d451cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x1d4520: 0x8025fec5
    ctx->pc = 0x1d4520u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966981)));
    // 0x1d4524: 0x52880
    ctx->pc = 0x1d4524u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d4528: 0x852021
    ctx->pc = 0x1d4528u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d452c: 0x8c840000
    ctx->pc = 0x1d452cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4530: 0xae640090
    ctx->pc = 0x1d4530u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 4));
    // 0x1d4534: 0x8e640090
    ctx->pc = 0x1d4534u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1d4538: 0x50830004
    ctx->pc = 0x1D4538u;
    {
        const bool branch_taken_0x1d4538 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d4538) {
            ctx->pc = 0x1D453Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1D454Cu;
            goto label_1d454c;
        }
    }
    ctx->pc = 0x1D4540u;
    // 0x1d4540: 0xc085bd8
    ctx->pc = 0x1D4540u;
    SET_GPR_U32(ctx, 31, 0x1D4548u);
    ctx->pc = 0x1D4544u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 72));
    ctx->pc = 0x216F60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SprPut__FP7SPR_ARG_0x216f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4548u; }
        else if (ctx->pc != 0x1D4548u) { ctx->pc = 0x1D4548u; }
    }
    if (ctx->pc != 0x1D4548u) { return; }
    ctx->pc = 0x1D4548u;
    // 0x1d4548: 0x26100001
    ctx->pc = 0x1d4548u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1d454c:
    // 0x1d454c: 0x2a030003
    ctx->pc = 0x1d454cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1d4550: 0x1460ffeb
    ctx->pc = 0x1D4550u;
    {
        const bool branch_taken_0x1d4550 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D4554u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 8));
        if (branch_taken_0x1d4550) {
            ctx->pc = 0x1D4500u;
            goto label_1d4500;
        }
    }
    ctx->pc = 0x1D4558u;
label_1d4558:
    // 0x1d4558: 0xae710084
    ctx->pc = 0x1d4558u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 17));
    // 0x1d455c: 0x7bbf0040
    ctx->pc = 0x1d455cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4560: 0x7bb30030
    ctx->pc = 0x1d4560u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4564: 0x7bb20020
    ctx->pc = 0x1d4564u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4568: 0x7bb10010
    ctx->pc = 0x1d4568u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d456c: 0x7bb00000
    ctx->pc = 0x1d456cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4570: 0x3e00008
    ctx->pc = 0x1D4570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4574u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4500u: goto label_1d4500;
            case 0x1D454Cu: goto label_1d454c;
            case 0x1D4558u: goto label_1d4558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4578u;
}
