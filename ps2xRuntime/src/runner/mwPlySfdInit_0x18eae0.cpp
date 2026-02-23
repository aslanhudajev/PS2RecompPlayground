#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySfdInit
// Address: 0x18eae0 - 0x18eb6c
void mwPlySfdInit_0x18eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySfdInit");
    ctx->pc = 0x18eae0u;

    // 0x18eae0: 0x27bdffe0
    ctx->pc = 0x18eae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18eae4: 0x80182d
    ctx->pc = 0x18eae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eae8: 0xffbf0010
    ctx->pc = 0x18eae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18eaec: 0x3c02002c
    ctx->pc = 0x18eaecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x18eaf0: 0x2447d080
    ctx->pc = 0x18eaf0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294955136));
    // 0x18eaf4: 0x68e40007
    ctx->pc = 0x18eaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18eaf8: 0x6ce40000
    ctx->pc = 0x18eaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18eafc: 0x68e5000f
    ctx->pc = 0x18eafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data << shift) & mask)); }
    // 0x18eb00: 0x6ce50008
    ctx->pc = 0x18eb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & ~mask) | ((aligned_data >> shift) & mask)); }
    // 0x18eb04: 0xb3a40007
    ctx->pc = 0x18eb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eb08: 0xb7a40000
    ctx->pc = 0x18eb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 4) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eb0c: 0xb3a5000f
    ctx->pc = 0x18eb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eb10: 0xb7a50008
    ctx->pc = 0x18eb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 5) << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x18eb14: 0x3a0202d
    ctx->pc = 0x18eb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb18: 0xc064e04
    ctx->pc = 0x18EB18u;
    SET_GPR_U32(ctx, 31, 0x18EB20u);
    ctx->pc = 0x18EB1Cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x193810u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_Init_0x193810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB20u; }
        else if (ctx->pc != 0x18EB20u) { ctx->pc = 0x18EB20u; }
    }
    if (ctx->pc != 0x18EB20u) { return; }
    ctx->pc = 0x18EB20u;
    // 0x18eb20: 0x10400005
    ctx->pc = 0x18EB20u;
    {
        const bool branch_taken_0x18eb20 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EB24u;
        SET_GPR_U32(ctx, 5, ((uint32_t)25 << 16));
        if (branch_taken_0x18eb20) {
            ctx->pc = 0x18EB38u;
            goto label_18eb38;
        }
    }
    ctx->pc = 0x18EB28u;
    // 0x18eb28: 0xc0633b4
    ctx->pc = 0x18EB28u;
    SET_GPR_U32(ctx, 31, 0x18EB30u);
    ctx->pc = 0x18EB2Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966995));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB30u; }
        else if (ctx->pc != 0x18EB30u) { ctx->pc = 0x18EB30u; }
    }
    if (ctx->pc != 0x18EB30u) { return; }
    ctx->pc = 0x18EB30u;
    // 0x18eb30: 0x1000000c
    ctx->pc = 0x18EB30u;
    {
        const bool branch_taken_0x18eb30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EB34u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x18eb30) {
            ctx->pc = 0x18EB64u;
            goto label_18eb64;
        }
    }
    ctx->pc = 0x18EB38u;
label_18eb38:
    // 0x18eb38: 0x202d
    ctx->pc = 0x18eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eb3c: 0x24a5f388
    ctx->pc = 0x18eb3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294964104));
    // 0x18eb40: 0xc064eca
    ctx->pc = 0x18EB40u;
    SET_GPR_U32(ctx, 31, 0x18EB48u);
    ctx->pc = 0x18EB44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_SetErrFn_0x193b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB48u; }
        else if (ctx->pc != 0x18EB48u) { ctx->pc = 0x18EB48u; }
    }
    if (ctx->pc != 0x18EB48u) { return; }
    ctx->pc = 0x18EB48u;
    // 0x18eb48: 0x10400005
    ctx->pc = 0x18EB48u;
    {
        const bool branch_taken_0x18eb48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EB4Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18eb48) {
            ctx->pc = 0x18EB60u;
            goto label_18eb60;
        }
    }
    ctx->pc = 0x18EB50u;
    // 0x18eb50: 0xc0633b4
    ctx->pc = 0x18EB50u;
    SET_GPR_U32(ctx, 31, 0x18EB58u);
    ctx->pc = 0x18EB54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294966993));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EB58u; }
        else if (ctx->pc != 0x18EB58u) { ctx->pc = 0x18EB58u; }
    }
    if (ctx->pc != 0x18EB58u) { return; }
    ctx->pc = 0x18EB58u;
    // 0x18eb58: 0x10000002
    ctx->pc = 0x18EB58u;
    {
        const bool branch_taken_0x18eb58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18EB5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x18eb58) {
            ctx->pc = 0x18EB64u;
            goto label_18eb64;
        }
    }
    ctx->pc = 0x18EB60u;
label_18eb60:
    // 0x18eb60: 0xdfbf0010
    ctx->pc = 0x18eb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18eb64:
    // 0x18eb64: 0x3e00008
    ctx->pc = 0x18EB64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EB68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EB38u: goto label_18eb38;
            case 0x18EB60u: goto label_18eb60;
            case 0x18EB64u: goto label_18eb64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18EB6Cu;
}
