#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: find_neighbor_milestone
// Address: 0x23c850 - 0x23ca54
void find_neighbor_milestone_0x23c850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c850u;

    // 0x23c850: 0x27bdff90
    ctx->pc = 0x23c850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x23c854: 0xffbf0050
    ctx->pc = 0x23c854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23c858: 0xffb20040
    ctx->pc = 0x23c858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x23c85c: 0xffb10030
    ctx->pc = 0x23c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x23c860: 0xffb00020
    ctx->pc = 0x23c860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x23c864: 0xe7b40060
    ctx->pc = 0x23c864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x23c868: 0xa0882d
    ctx->pc = 0x23c868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c86c: 0x3c02003c
    ctx->pc = 0x23c86cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23c870: 0x8c421e70
    ctx->pc = 0x23c870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7792)));
    // 0x23c874: 0x18400016
    ctx->pc = 0x23C874u;
    {
        const bool branch_taken_0x23c874 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x23C878u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23c874) {
            ctx->pc = 0x23C8D0u;
            goto label_23c8d0;
        }
    }
    ctx->pc = 0x23C87Cu;
    // 0x23c87c: 0x3c02003c
    ctx->pc = 0x23c87cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23c880: 0x8c421c70
    ctx->pc = 0x23c880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7280)));
    // 0x23c884: 0x1044000d
    ctx->pc = 0x23C884u;
    {
        const bool branch_taken_0x23c884 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x23C888u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x23c884) {
            ctx->pc = 0x23C8BCu;
            goto label_23c8bc;
        }
    }
    ctx->pc = 0x23C88Cu;
    // 0x23c88c: 0x8c431e70
    ctx->pc = 0x23c88cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 7792)));
    // 0x23c890: 0x3c02003c
    ctx->pc = 0x23c890u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23c894: 0x24451c70
    ctx->pc = 0x23c894u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7280));
    // 0x23c898: 0x26100001
    ctx->pc = 0x23c898u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x23c89c: 0x0
    ctx->pc = 0x23c89cu;
    // NOP
label_23c8a0:
    // 0x23c8a0: 0x203102a
    ctx->pc = 0x23c8a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x23c8a4: 0x1040000a
    ctx->pc = 0x23C8A4u;
    {
        const bool branch_taken_0x23c8a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C8A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x23c8a4) {
            ctx->pc = 0x23C8D0u;
            goto label_23c8d0;
        }
    }
    ctx->pc = 0x23C8ACu;
    // 0x23c8ac: 0x451021
    ctx->pc = 0x23c8acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23c8b0: 0x8c420000
    ctx->pc = 0x23c8b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c8b4: 0x5444fffa
    ctx->pc = 0x23C8B4u;
    {
        const bool branch_taken_0x23c8b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x23c8b4) {
            ctx->pc = 0x23C8B8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x23C8A0u;
            goto label_23c8a0;
        }
    }
    ctx->pc = 0x23C8BCu;
label_23c8bc:
    // 0x23c8bc: 0x3c02003c
    ctx->pc = 0x23c8bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23c8c0: 0x8c421e70
    ctx->pc = 0x23c8c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7792)));
    // 0x23c8c4: 0x202102a
    ctx->pc = 0x23c8c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x23c8c8: 0x14400003
    ctx->pc = 0x23C8C8u;
    {
        const bool branch_taken_0x23c8c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23C8CCu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        if (branch_taken_0x23c8c8) {
            ctx->pc = 0x23C8D8u;
            goto label_23c8d8;
        }
    }
    ctx->pc = 0x23C8D0u;
label_23c8d0:
    // 0x23c8d0: 0x10000059
    ctx->pc = 0x23C8D0u;
    {
        const bool branch_taken_0x23c8d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C8D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x23c8d0) {
            ctx->pc = 0x23CA38u;
            goto label_23ca38;
        }
    }
    ctx->pc = 0x23C8D8u;
label_23c8d8:
    // 0x23c8d8: 0x4410005
    ctx->pc = 0x23C8D8u;
    {
        const bool branch_taken_0x23c8d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23C8DCu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        if (branch_taken_0x23c8d8) {
            ctx->pc = 0x23C8F0u;
            goto label_23c8f0;
        }
    }
    ctx->pc = 0x23C8E0u;
    // 0x23c8e0: 0x3c03003c
    ctx->pc = 0x23c8e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x23c8e4: 0x24631c70
    ctx->pc = 0x23c8e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7280));
    // 0x23c8e8: 0x10000009
    ctx->pc = 0x23C8E8u;
    {
        const bool branch_taken_0x23c8e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C8ECu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        if (branch_taken_0x23c8e8) {
            ctx->pc = 0x23C910u;
            goto label_23c910;
        }
    }
    ctx->pc = 0x23C8F0u;
label_23c8f0:
    // 0x23c8f0: 0x3c02003c
    ctx->pc = 0x23c8f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x23c8f4: 0x8c421e70
    ctx->pc = 0x23c8f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7792)));
    // 0x23c8f8: 0x2442ffff
    ctx->pc = 0x23c8f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23c8fc: 0x43102a
    ctx->pc = 0x23c8fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x23c900: 0x10400007
    ctx->pc = 0x23C900u;
    {
        const bool branch_taken_0x23c900 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C904u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x23c900) {
            ctx->pc = 0x23C920u;
            goto label_23c920;
        }
    }
    ctx->pc = 0x23C908u;
    // 0x23c908: 0x24631c70
    ctx->pc = 0x23c908u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7280));
    // 0x23c90c: 0x2111023
    ctx->pc = 0x23c90cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_23c910:
    // 0x23c910: 0x21080
    ctx->pc = 0x23c910u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c914: 0x431021
    ctx->pc = 0x23c914u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c918: 0x10000047
    ctx->pc = 0x23C918u;
    {
        const bool branch_taken_0x23c918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23C91Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x23c918) {
            ctx->pc = 0x23CA38u;
            goto label_23ca38;
        }
    }
    ctx->pc = 0x23C920u;
label_23c920:
    // 0x23c920: 0x24631c70
    ctx->pc = 0x23c920u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7280));
    // 0x23c924: 0x2111023
    ctx->pc = 0x23c924u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23c928: 0x21080
    ctx->pc = 0x23c928u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c92c: 0x431021
    ctx->pc = 0x23c92cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c930: 0x8c520000
    ctx->pc = 0x23c930u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c934: 0x3c030034
    ctx->pc = 0x23c934u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x23c938: 0x24638b80
    ctx->pc = 0x23c938u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937472));
    // 0x23c93c: 0x24020070
    ctx->pc = 0x23c93cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
    // 0x23c940: 0x2421018
    ctx->pc = 0x23c940u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23c944: 0x431021
    ctx->pc = 0x23c944u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c948: 0xc44c0030
    ctx->pc = 0x23c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c94c: 0xe7ac0000
    ctx->pc = 0x23c94cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23c950: 0xc4410034
    ctx->pc = 0x23c950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c954: 0xe7a10004
    ctx->pc = 0x23c954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23c958: 0xc4420038
    ctx->pc = 0x23c958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23c95c: 0xe7a20008
    ctx->pc = 0x23c95cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23c960: 0x460c6002
    ctx->pc = 0x23c960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23c964: 0x46010842
    ctx->pc = 0x23c964u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x23c968: 0x46010000
    ctx->pc = 0x23c968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23c96c: 0x46021082
    ctx->pc = 0x23c96cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x23c970: 0x46020000
    ctx->pc = 0x23c970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23c974: 0x0
    ctx->pc = 0x23c974u;
    // NOP
    // 0x23c978: 0x0
    ctx->pc = 0x23c978u;
    // NOP
    // 0x23c97c: 0x46000004
    ctx->pc = 0x23c97cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x23c980: 0x46000032
    ctx->pc = 0x23c980u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23c984: 0x0
    ctx->pc = 0x23c984u;
    // NOP
    // 0x23c988: 0x45010006
    ctx->pc = 0x23C988u;
    {
        const bool branch_taken_0x23c988 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23C98Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x23c988) {
            ctx->pc = 0x23C9A4u;
            goto label_23c9a4;
        }
    }
    ctx->pc = 0x23C990u;
    // 0x23c990: 0x460c6302
    ctx->pc = 0x23c990u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23c994: 0x46016300
    ctx->pc = 0x23c994u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x23c998: 0xc0ba284
    ctx->pc = 0x23C998u;
    SET_GPR_U32(ctx, 31, 0x23C9A0u);
    ctx->pc = 0x23C99Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C9A0u; }
    }
    if (ctx->pc != 0x23C9A0u) { return; }
    ctx->pc = 0x23C9A0u;
    // 0x23c9a0: 0x46000506
    ctx->pc = 0x23c9a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_23c9a4:
    // 0x23c9a4: 0x3c03003c
    ctx->pc = 0x23c9a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x23c9a8: 0x24631c70
    ctx->pc = 0x23c9a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7280));
    // 0x23c9ac: 0x2111021
    ctx->pc = 0x23c9acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x23c9b0: 0x21080
    ctx->pc = 0x23c9b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x23c9b4: 0x431021
    ctx->pc = 0x23c9b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c9b8: 0x8c500000
    ctx->pc = 0x23c9b8u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23c9bc: 0x3c030034
    ctx->pc = 0x23c9bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x23c9c0: 0x24638b80
    ctx->pc = 0x23c9c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294937472));
    // 0x23c9c4: 0x24020070
    ctx->pc = 0x23c9c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 112));
    // 0x23c9c8: 0x2021018
    ctx->pc = 0x23c9c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23c9cc: 0x431021
    ctx->pc = 0x23c9ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23c9d0: 0xc44c0030
    ctx->pc = 0x23c9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23c9d4: 0xe7ac0010
    ctx->pc = 0x23c9d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x23c9d8: 0xc4410034
    ctx->pc = 0x23c9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23c9dc: 0xe7a10014
    ctx->pc = 0x23c9dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23c9e0: 0xc4420038
    ctx->pc = 0x23c9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23c9e4: 0xe7a20018
    ctx->pc = 0x23c9e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x23c9e8: 0x460c6002
    ctx->pc = 0x23c9e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23c9ec: 0x46010842
    ctx->pc = 0x23c9ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x23c9f0: 0x46010000
    ctx->pc = 0x23c9f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23c9f4: 0x46021082
    ctx->pc = 0x23c9f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x23c9f8: 0x46020000
    ctx->pc = 0x23c9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x23c9fc: 0x0
    ctx->pc = 0x23c9fcu;
    // NOP
    // 0x23ca00: 0x0
    ctx->pc = 0x23ca00u;
    // NOP
    // 0x23ca04: 0x46000004
    ctx->pc = 0x23ca04u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x23ca08: 0x46000032
    ctx->pc = 0x23ca08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ca0c: 0x45010005
    ctx->pc = 0x23CA0Cu;
    {
        const bool branch_taken_0x23ca0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ca0c) {
            ctx->pc = 0x23CA24u;
            goto label_23ca24;
        }
    }
    ctx->pc = 0x23CA14u;
    // 0x23ca14: 0x460c6302
    ctx->pc = 0x23ca14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x23ca18: 0x46016300
    ctx->pc = 0x23ca18u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x23ca1c: 0xc0ba284
    ctx->pc = 0x23CA1Cu;
    SET_GPR_U32(ctx, 31, 0x23CA24u);
    ctx->pc = 0x23CA20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA24u; }
    }
    if (ctx->pc != 0x23CA24u) { return; }
    ctx->pc = 0x23CA24u;
label_23ca24:
    // 0x23ca24: 0x4600a034
    ctx->pc = 0x23ca24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23ca28: 0x0
    ctx->pc = 0x23ca28u;
    // NOP
    // 0x23ca2c: 0x45000002
    ctx->pc = 0x23CA2Cu;
    {
        const bool branch_taken_0x23ca2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CA30u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23ca2c) {
            ctx->pc = 0x23CA38u;
            goto label_23ca38;
        }
    }
    ctx->pc = 0x23CA34u;
    // 0x23ca34: 0x240102d
    ctx->pc = 0x23ca34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ca38:
    // 0x23ca38: 0xdfbf0050
    ctx->pc = 0x23ca38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23ca3c: 0xdfb20040
    ctx->pc = 0x23ca3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23ca40: 0xdfb10030
    ctx->pc = 0x23ca40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23ca44: 0xdfb00020
    ctx->pc = 0x23ca44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23ca48: 0xc7b40060
    ctx->pc = 0x23ca48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23ca4c: 0x3e00008
    ctx->pc = 0x23CA4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CA50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23C8A0u: goto label_23c8a0;
            case 0x23C8BCu: goto label_23c8bc;
            case 0x23C8D0u: goto label_23c8d0;
            case 0x23C8D8u: goto label_23c8d8;
            case 0x23C8F0u: goto label_23c8f0;
            case 0x23C910u: goto label_23c910;
            case 0x23C920u: goto label_23c920;
            case 0x23C9A4u: goto label_23c9a4;
            case 0x23CA24u: goto label_23ca24;
            case 0x23CA38u: goto label_23ca38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CA54u;
}
