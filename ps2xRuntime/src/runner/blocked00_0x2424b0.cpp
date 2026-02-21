#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: blocked00
// Address: 0x2424b0 - 0x242564
void blocked00_0x2424b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2424b0u;

    // 0x2424b0: 0x27bdffe0
    ctx->pc = 0x2424b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2424b4: 0xffbf0010
    ctx->pc = 0x2424b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2424b8: 0xffb00000
    ctx->pc = 0x2424b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2424bc: 0x240303b0
    ctx->pc = 0x2424bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x2424c0: 0x831818
    ctx->pc = 0x2424c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2424c4: 0x3c020033
    ctx->pc = 0x2424c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x2424c8: 0x2442dfd0
    ctx->pc = 0x2424c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x2424cc: 0x628021
    ctx->pc = 0x2424ccu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2424d0: 0x8e020368
    ctx->pc = 0x2424d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x2424d4: 0x4420001
    ctx->pc = 0x2424D4u;
    {
        const bool branch_taken_0x2424d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2424d4) {
            ctx->pc = 0x2424D8u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x2424DCu;
            goto label_2424dc;
        }
    }
    ctx->pc = 0x2424DCu;
label_2424dc:
    // 0x2424dc: 0x28420003
    ctx->pc = 0x2424dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x2424e0: 0x10400007
    ctx->pc = 0x2424E0u;
    {
        const bool branch_taken_0x2424e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2424E4u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x2424e0) {
            ctx->pc = 0x242500u;
            goto label_242500;
        }
    }
    ctx->pc = 0x2424E8u;
    // 0x2424e8: 0x24420001
    ctx->pc = 0x2424e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2424ec: 0xa6020378
    ctx->pc = 0x2424ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 2));
    // 0x2424f0: 0xc08efc2
    ctx->pc = 0x2424F0u;
    SET_GPR_U32(ctx, 31, 0x2424F8u);
    ctx->pc = 0x2424F4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424F8u; }
    }
    if (ctx->pc != 0x2424F8u) { return; }
    ctx->pc = 0x2424F8u;
    // 0x2424f8: 0x10000006
    ctx->pc = 0x2424F8u;
    {
        const bool branch_taken_0x2424f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2424FCu;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x2424f8) {
            ctx->pc = 0x242514u;
            goto label_242514;
        }
    }
    ctx->pc = 0x242500u;
label_242500:
    // 0x242500: 0x24420001
    ctx->pc = 0x242500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x242504: 0xa6020378
    ctx->pc = 0x242504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 2));
    // 0x242508: 0xc08efc2
    ctx->pc = 0x242508u;
    SET_GPR_U32(ctx, 31, 0x242510u);
    ctx->pc = 0x24250Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242510u; }
    }
    if (ctx->pc != 0x242510u) { return; }
    ctx->pc = 0x242510u;
    // 0x242510: 0x86020378
    ctx->pc = 0x242510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
label_242514:
    // 0x242514: 0x28420009
    ctx->pc = 0x242514u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 9));
    // 0x242518: 0x1440000f
    ctx->pc = 0x242518u;
    {
        const bool branch_taken_0x242518 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24251Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x242518) {
            ctx->pc = 0x242558u;
            goto label_242558;
        }
    }
    ctx->pc = 0x242520u;
    // 0x242520: 0x8e020368
    ctx->pc = 0x242520u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x242524: 0x21023
    ctx->pc = 0x242524u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x242528: 0x21040
    ctx->pc = 0x242528u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x24252c: 0xae020368
    ctx->pc = 0x24252cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x242530: 0x4420001
    ctx->pc = 0x242530u;
    {
        const bool branch_taken_0x242530 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x242530) {
            ctx->pc = 0x242534u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x242538u;
            goto label_242538;
        }
    }
    ctx->pc = 0x242538u;
label_242538:
    // 0x242538: 0x28420003
    ctx->pc = 0x242538u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x24253c: 0x14400006
    ctx->pc = 0x24253Cu;
    {
        const bool branch_taken_0x24253c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x242540u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x24253c) {
            ctx->pc = 0x242558u;
            goto label_242558;
        }
    }
    ctx->pc = 0x242544u;
    // 0x242544: 0x3c02003c
    ctx->pc = 0x242544u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x242548: 0xc4401c6c
    ctx->pc = 0x242548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24254c: 0xe6000260
    ctx->pc = 0x24254cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x242550: 0xe6000258
    ctx->pc = 0x242550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x242554: 0xdfbf0010
    ctx->pc = 0x242554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242558:
    // 0x242558: 0xdfb00000
    ctx->pc = 0x242558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24255c: 0x3e00008
    ctx->pc = 0x24255Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2424DCu: goto label_2424dc;
            case 0x242500u: goto label_242500;
            case 0x242514u: goto label_242514;
            case 0x242538u: goto label_242538;
            case 0x242558u: goto label_242558;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242564u;
}
