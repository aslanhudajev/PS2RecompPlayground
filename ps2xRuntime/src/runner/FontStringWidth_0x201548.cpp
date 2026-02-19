#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FontStringWidth
// Address: 0x201548 - 0x2015bc
void FontStringWidth_0x201548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201548u;

    // 0x201548: 0x27bdffb0
    ctx->pc = 0x201548u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20154c: 0xffbf0030
    ctx->pc = 0x20154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x201550: 0xffb20020
    ctx->pc = 0x201550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x201554: 0xffb10010
    ctx->pc = 0x201554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x201558: 0xffb00000
    ctx->pc = 0x201558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20155c: 0xe7b40040
    ctx->pc = 0x20155cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x201560: 0x80802d
    ctx->pc = 0x201560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201564: 0x46006506
    ctx->pc = 0x201564u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x201568: 0x30b100ff
    ctx->pc = 0x201568u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x20156c: 0xc0b145e
    ctx->pc = 0x20156Cu;
    SET_GPR_U32(ctx, 31, 0x201574u);
    ctx->pc = 0x201570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5178u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFont_0x2c5178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201574u; }
    }
    if (ctx->pc != 0x201574u) { return; }
    ctx->pc = 0x201574u;
    // 0x201574: 0x40902d
    ctx->pc = 0x201574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201578: 0x44806800
    ctx->pc = 0x201578u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x20157c: 0xc0b1414
    ctx->pc = 0x20157Cu;
    SET_GPR_U32(ctx, 31, 0x201584u);
    ctx->pc = 0x201580u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2C5050u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFontScale_0x2c5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201584u; }
    }
    if (ctx->pc != 0x201584u) { return; }
    ctx->pc = 0x201584u;
    // 0x201584: 0xc0b1636
    ctx->pc = 0x201584u;
    SET_GPR_U32(ctx, 31, 0x20158Cu);
    ctx->pc = 0x201588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C58D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBFontStringWidth_0x2c58d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20158Cu; }
    }
    if (ctx->pc != 0x20158Cu) { return; }
    ctx->pc = 0x20158Cu;
    // 0x20158c: 0x12510003
    ctx->pc = 0x20158Cu;
    {
        const bool branch_taken_0x20158c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 17));
        ctx->pc = 0x201590u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x20158c) {
            ctx->pc = 0x20159Cu;
            goto label_20159c;
        }
    }
    ctx->pc = 0x201594u;
    // 0x201594: 0xc0b145e
    ctx->pc = 0x201594u;
    SET_GPR_U32(ctx, 31, 0x20159Cu);
    ctx->pc = 0x201598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C5178u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetFont_0x2c5178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20159Cu; }
    }
    if (ctx->pc != 0x20159Cu) { return; }
    ctx->pc = 0x20159Cu;
label_20159c:
    // 0x20159c: 0x200102d
    ctx->pc = 0x20159cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015a0: 0xdfbf0030
    ctx->pc = 0x2015a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2015a4: 0xdfb20020
    ctx->pc = 0x2015a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2015a8: 0xdfb10010
    ctx->pc = 0x2015a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2015ac: 0xdfb00000
    ctx->pc = 0x2015acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2015b0: 0xc7b40040
    ctx->pc = 0x2015b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2015b4: 0x3e00008
    ctx->pc = 0x2015B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2015B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20159Cu: goto label_20159c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2015BCu;
}
