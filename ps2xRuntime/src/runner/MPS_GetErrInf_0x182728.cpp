#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_GetErrInf
// Address: 0x182728 - 0x1827bc
void MPS_GetErrInf_0x182728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_GetErrInf");


    ctx->pc = 0x182728u;

    // 0x182728: 0x27bdffd0
    ctx->pc = 0x182728u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18272c: 0xffb10010
    ctx->pc = 0x18272cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x182730: 0xffb00000
    ctx->pc = 0x182730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182734: 0xa0882d
    ctx->pc = 0x182734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182738: 0x80802d
    ctx->pc = 0x182738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18273c: 0x1600000a
    ctx->pc = 0x18273Cu;
    {
        const bool branch_taken_0x18273c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x182740u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x18273c) {
            ctx->pc = 0x182768u;
            goto label_182768;
        }
    }
    ctx->pc = 0x182744u;
    // 0x182744: 0x3c020024
    ctx->pc = 0x182744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x182748: 0x8c431538
    ctx->pc = 0x182748u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 5432)));
    // 0x18274c: 0x68620007
    ctx->pc = 0x18274cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x182750: 0x6c620000
    ctx->pc = 0x182750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x182754: 0x8c640008
    ctx->pc = 0x182754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x182758: 0xb2220007
    ctx->pc = 0x182758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18275c: 0xb6220000
    ctx->pc = 0x18275cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x182760: 0x10000010
    ctx->pc = 0x182760u;
    {
        const bool branch_taken_0x182760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182764u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x182760) {
            ctx->pc = 0x1827A4u;
            goto label_1827a4;
        }
    }
    ctx->pc = 0x182768u;
label_182768:
    // 0x182768: 0xc0609f0
    ctx->pc = 0x182768u;
    SET_GPR_U32(ctx, 31, 0x182770u);
    ctx->pc = 0x18276Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1827C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_CheckHn_0x1827c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182770u; }
        else if (ctx->pc != 0x182770u) { ctx->pc = 0x182770u; }
    }
    if (ctx->pc != 0x182770u) { return; }
    ctx->pc = 0x182770u;
    // 0x182770: 0x10400006
    ctx->pc = 0x182770u;
    {
        const bool branch_taken_0x182770 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x182774u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182770) {
            ctx->pc = 0x18278Cu;
            goto label_18278c;
        }
    }
    ctx->pc = 0x182778u;
    // 0x182778: 0x3c05ff02
    ctx->pc = 0x182778u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x18277c: 0xc060986
    ctx->pc = 0x18277Cu;
    SET_GPR_U32(ctx, 31, 0x182784u);
    ctx->pc = 0x182780u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 258));
    ctx->pc = 0x182618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_SetErr_0x182618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182784u; }
        else if (ctx->pc != 0x182784u) { ctx->pc = 0x182784u; }
    }
    if (ctx->pc != 0x182784u) { return; }
    ctx->pc = 0x182784u;
    // 0x182784: 0x10000009
    ctx->pc = 0x182784u;
    {
        const bool branch_taken_0x182784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182788u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x182784) {
            ctx->pc = 0x1827ACu;
            goto label_1827ac;
        }
    }
    ctx->pc = 0x18278Cu;
label_18278c:
    // 0x18278c: 0x6a02000b
    ctx->pc = 0x18278cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x182790: 0x6e020004
    ctx->pc = 0x182790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x182794: 0x8e03000c
    ctx->pc = 0x182794u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x182798: 0xb2220007
    ctx->pc = 0x182798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18279c: 0xb6220000
    ctx->pc = 0x18279cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1827a0: 0xae230008
    ctx->pc = 0x1827a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_1827a4:
    // 0x1827a4: 0x102d
    ctx->pc = 0x1827a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1827a8: 0xdfbf0020
    ctx->pc = 0x1827a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1827ac:
    // 0x1827ac: 0xdfb10010
    ctx->pc = 0x1827acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1827b0: 0xdfb00000
    ctx->pc = 0x1827b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1827b4: 0x3e00008
    ctx->pc = 0x1827B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1827B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182768u: goto label_182768;
            case 0x18278Cu: goto label_18278c;
            case 0x1827A4u: goto label_1827a4;
            case 0x1827ACu: goto label_1827ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1827BCu;
}
